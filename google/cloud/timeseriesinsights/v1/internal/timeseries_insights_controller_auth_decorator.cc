// Copyright 2023 Google LLC
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

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/timeseriesinsights/v1/timeseries_insights.proto

#include "google/cloud/timeseriesinsights/v1/internal/timeseries_insights_controller_auth_decorator.h"
#include <google/cloud/timeseriesinsights/v1/timeseries_insights.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace timeseriesinsights_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TimeseriesInsightsControllerAuth::TimeseriesInsightsControllerAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<TimeseriesInsightsControllerStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::timeseriesinsights::v1::ListDataSetsResponse>
TimeseriesInsightsControllerAuth::ListDataSets(
    grpc::ClientContext& context,
    google::cloud::timeseriesinsights::v1::ListDataSetsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListDataSets(context, request);
}

StatusOr<google::cloud::timeseriesinsights::v1::DataSet>
TimeseriesInsightsControllerAuth::CreateDataSet(
    grpc::ClientContext& context,
    google::cloud::timeseriesinsights::v1::CreateDataSetRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateDataSet(context, request);
}

Status TimeseriesInsightsControllerAuth::DeleteDataSet(
    grpc::ClientContext& context,
    google::cloud::timeseriesinsights::v1::DeleteDataSetRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteDataSet(context, request);
}

StatusOr<google::cloud::timeseriesinsights::v1::AppendEventsResponse>
TimeseriesInsightsControllerAuth::AppendEvents(
    grpc::ClientContext& context,
    google::cloud::timeseriesinsights::v1::AppendEventsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->AppendEvents(context, request);
}

StatusOr<google::cloud::timeseriesinsights::v1::QueryDataSetResponse>
TimeseriesInsightsControllerAuth::QueryDataSet(
    grpc::ClientContext& context,
    google::cloud::timeseriesinsights::v1::QueryDataSetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->QueryDataSet(context, request);
}

StatusOr<google::cloud::timeseriesinsights::v1::EvaluatedSlice>
TimeseriesInsightsControllerAuth::EvaluateSlice(
    grpc::ClientContext& context,
    google::cloud::timeseriesinsights::v1::EvaluateSliceRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->EvaluateSlice(context, request);
}

StatusOr<google::cloud::timeseriesinsights::v1::EvaluatedSlice>
TimeseriesInsightsControllerAuth::EvaluateTimeseries(
    grpc::ClientContext& context,
    google::cloud::timeseriesinsights::v1::EvaluateTimeseriesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->EvaluateTimeseries(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace timeseriesinsights_v1_internal
}  // namespace cloud
}  // namespace google
