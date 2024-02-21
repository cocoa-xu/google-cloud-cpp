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
// source: google/api/servicecontrol/v2/service_controller.proto

#include "google/cloud/servicecontrol/v2/internal/service_controller_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace servicecontrol_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ServiceControllerTracingConnection::ServiceControllerTracingConnection(
    std::shared_ptr<servicecontrol_v2::ServiceControllerConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::api::servicecontrol::v2::CheckResponse>
ServiceControllerTracingConnection::Check(
    google::api::servicecontrol::v2::CheckRequest const& request) {
  auto span = internal::MakeSpan(
      "servicecontrol_v2::ServiceControllerConnection::Check");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->Check(request));
}

StatusOr<google::api::servicecontrol::v2::ReportResponse>
ServiceControllerTracingConnection::Report(
    google::api::servicecontrol::v2::ReportRequest const& request) {
  auto span = internal::MakeSpan(
      "servicecontrol_v2::ServiceControllerConnection::Report");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->Report(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<servicecontrol_v2::ServiceControllerConnection>
MakeServiceControllerTracingConnection(
    std::shared_ptr<servicecontrol_v2::ServiceControllerConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<ServiceControllerTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicecontrol_v2_internal
}  // namespace cloud
}  // namespace google
