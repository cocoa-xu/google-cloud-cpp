// Copyright 2022 Google LLC
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
// source: google/monitoring/v3/uptime_service.proto

#include "google/cloud/monitoring/v3/internal/uptime_check_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

UptimeCheckServiceTracingConnection::UptimeCheckServiceTracingConnection(
    std::shared_ptr<monitoring_v3::UptimeCheckServiceConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::monitoring::v3::UptimeCheckConfig>
UptimeCheckServiceTracingConnection::ListUptimeCheckConfigs(
    google::monitoring::v3::ListUptimeCheckConfigsRequest request) {
  auto span = internal::MakeSpan(
      "monitoring_v3::UptimeCheckServiceConnection::ListUptimeCheckConfigs");
  internal::OTelScope scope(span);
  auto sr = child_->ListUptimeCheckConfigs(std::move(request));
  return internal::MakeTracedStreamRange<
      google::monitoring::v3::UptimeCheckConfig>(std::move(span),
                                                 std::move(sr));
}

StatusOr<google::monitoring::v3::UptimeCheckConfig>
UptimeCheckServiceTracingConnection::GetUptimeCheckConfig(
    google::monitoring::v3::GetUptimeCheckConfigRequest const& request) {
  auto span = internal::MakeSpan(
      "monitoring_v3::UptimeCheckServiceConnection::GetUptimeCheckConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetUptimeCheckConfig(request));
}

StatusOr<google::monitoring::v3::UptimeCheckConfig>
UptimeCheckServiceTracingConnection::CreateUptimeCheckConfig(
    google::monitoring::v3::CreateUptimeCheckConfigRequest const& request) {
  auto span = internal::MakeSpan(
      "monitoring_v3::UptimeCheckServiceConnection::CreateUptimeCheckConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateUptimeCheckConfig(request));
}

StatusOr<google::monitoring::v3::UptimeCheckConfig>
UptimeCheckServiceTracingConnection::UpdateUptimeCheckConfig(
    google::monitoring::v3::UpdateUptimeCheckConfigRequest const& request) {
  auto span = internal::MakeSpan(
      "monitoring_v3::UptimeCheckServiceConnection::UpdateUptimeCheckConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateUptimeCheckConfig(request));
}

Status UptimeCheckServiceTracingConnection::DeleteUptimeCheckConfig(
    google::monitoring::v3::DeleteUptimeCheckConfigRequest const& request) {
  auto span = internal::MakeSpan(
      "monitoring_v3::UptimeCheckServiceConnection::DeleteUptimeCheckConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteUptimeCheckConfig(request));
}

StreamRange<google::monitoring::v3::UptimeCheckIp>
UptimeCheckServiceTracingConnection::ListUptimeCheckIps(
    google::monitoring::v3::ListUptimeCheckIpsRequest request) {
  auto span = internal::MakeSpan(
      "monitoring_v3::UptimeCheckServiceConnection::ListUptimeCheckIps");
  internal::OTelScope scope(span);
  auto sr = child_->ListUptimeCheckIps(std::move(request));
  return internal::MakeTracedStreamRange<google::monitoring::v3::UptimeCheckIp>(
      std::move(span), std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<monitoring_v3::UptimeCheckServiceConnection>
MakeUptimeCheckServiceTracingConnection(
    std::shared_ptr<monitoring_v3::UptimeCheckServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<UptimeCheckServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google
