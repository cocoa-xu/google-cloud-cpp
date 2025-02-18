// Copyright 2024 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/opentelemetry/monitoring_exporter.h"
#include "google/cloud/monitoring/v3/mocks/mock_metric_connection.h"
#include "google/cloud/internal/make_status.h"
#include "google/cloud/testing_util/scoped_log.h"
#include "google/cloud/version.h"
#include <gmock/gmock.h>
#include <opentelemetry/sdk/metrics/export/metric_producer.h>
#include <opentelemetry/sdk/resource/resource.h>

namespace google {
namespace cloud {
namespace otel {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

using ::testing::AllOf;
using ::testing::HasSubstr;
using ::testing::SizeIs;

/**
 * Returns a `ResourceMetrics` composed of N TimeSeries.
 *
 * Note that `ToRequest(...)` is tested extensively in time_series_test.cc. The
 * type of TimeSeries used here doesn't matter. The count should give us
 * sufficient confidence that we are calling `ToRequest(...)`
 */
opentelemetry::sdk::metrics::ResourceMetrics MakeResourceMetrics(
    int expected_time_series_count) {
  opentelemetry::sdk::metrics::PointDataAttributes pda;
  pda.point_data = opentelemetry::sdk::metrics::SumPointData{};

  opentelemetry::sdk::metrics::MetricData md;
  md.point_data_attr_.push_back(pda);
  md.instrument_descriptor.type_ = {};
  md.instrument_descriptor.value_type_ = {};

  opentelemetry::sdk::metrics::ScopeMetrics sm;
  for (auto i = 0; i != expected_time_series_count; ++i) {
    sm.metric_data_.push_back(md);
  }

  opentelemetry::sdk::metrics::ResourceMetrics rm;
  rm.resource_ = nullptr;
  rm.scope_metric_data_.push_back(std::move(sm));

  return rm;
}

TEST(MonitoringExporter, ExportSuccess) {
  auto mock =
      std::make_shared<monitoring_v3_mocks::MockMetricServiceConnection>();
  EXPECT_CALL(*mock, CreateTimeSeries)
      .WillOnce(
          [](google::monitoring::v3::CreateTimeSeriesRequest const& request) {
            EXPECT_THAT(request.name(), "projects/test-project");
            EXPECT_THAT(request.time_series(), SizeIs(2));
            return Status();
          });

  auto exporter = otel_internal::MakeMonitoringExporter(Project("test-project"),
                                                        std::move(mock));
  auto data = MakeResourceMetrics(/*expected_time_series_count=*/2);
  auto result = exporter->Export(data);
  EXPECT_EQ(result, opentelemetry::sdk::common::ExportResult::kSuccess);
}

TEST(MonitoringExporter, ExportSkippedIfNoTimeSeries) {
  testing_util::ScopedLog log;

  auto mock =
      std::make_shared<monitoring_v3_mocks::MockMetricServiceConnection>();
  EXPECT_CALL(*mock, CreateTimeSeries).Times(0);

  auto exporter = otel_internal::MakeMonitoringExporter(Project("test-project"),
                                                        std::move(mock));
  auto data = MakeResourceMetrics(/*expected_time_series_count=*/0);
  auto result = exporter->Export(data);
  EXPECT_EQ(result, opentelemetry::sdk::common::ExportResult::kSuccess);

  EXPECT_THAT(log.ExtractLines(),
              Contains(AllOf(HasSubstr("Cloud Monitoring Export skipped"),
                             HasSubstr("No TimeSeries"))));
}

TEST(MonitoringExporter, ExportFailure) {
  testing_util::ScopedLog log;

  auto mock =
      std::make_shared<monitoring_v3_mocks::MockMetricServiceConnection>();
  EXPECT_CALL(*mock, CreateTimeSeries)
      .WillOnce(
          [](google::monitoring::v3::CreateTimeSeriesRequest const& request) {
            EXPECT_THAT(request.name(), "projects/test-project");
            EXPECT_THAT(request.time_series(), SizeIs(2));
            return internal::PermissionDeniedError("nope");
          });

  auto exporter = otel_internal::MakeMonitoringExporter(Project("test-project"),
                                                        std::move(mock));
  auto data = MakeResourceMetrics(/*expected_time_series_count=*/2);
  auto result = exporter->Export(data);
  EXPECT_EQ(result, opentelemetry::sdk::common::ExportResult::kFailure);

  EXPECT_THAT(
      log.ExtractLines(),
      Contains(AllOf(HasSubstr("Cloud Monitoring Export failed"),
                     HasSubstr("PERMISSION_DENIED"), HasSubstr("nope"))));
}

TEST(MonitoringExporter, ExportFailureWithInvalidArgument) {
  testing_util::ScopedLog log;

  auto mock =
      std::make_shared<monitoring_v3_mocks::MockMetricServiceConnection>();
  EXPECT_CALL(*mock, CreateTimeSeries)
      .WillOnce(
          [](google::monitoring::v3::CreateTimeSeriesRequest const& request) {
            EXPECT_THAT(request.name(), "projects/test-project");
            EXPECT_THAT(request.time_series(), SizeIs(2));
            return internal::InvalidArgumentError("nope");
          });

  auto exporter = otel_internal::MakeMonitoringExporter(Project("test-project"),
                                                        std::move(mock));
  auto data = MakeResourceMetrics(/*expected_time_series_count=*/2);
  auto result = exporter->Export(data);
  EXPECT_EQ(result,
            opentelemetry::sdk::common::ExportResult::kFailureInvalidArgument);

  EXPECT_THAT(
      log.ExtractLines(),
      Contains(AllOf(HasSubstr("Cloud Monitoring Export failed"),
                     HasSubstr("INVALID_ARGUMENT"), HasSubstr("nope"))));
}

}  // namespace
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace otel
}  // namespace cloud
}  // namespace google
