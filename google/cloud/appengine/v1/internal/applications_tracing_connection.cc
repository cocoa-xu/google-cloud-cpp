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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/v1/internal/applications_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace appengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ApplicationsTracingConnection::ApplicationsTracingConnection(
    std::shared_ptr<appengine_v1::ApplicationsConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::appengine::v1::Application>
ApplicationsTracingConnection::GetApplication(
    google::appengine::v1::GetApplicationRequest const& request) {
  auto span = internal::MakeSpan(
      "appengine_v1::ApplicationsConnection::GetApplication");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetApplication(request));
}

future<StatusOr<google::appengine::v1::Application>>
ApplicationsTracingConnection::CreateApplication(
    google::appengine::v1::CreateApplicationRequest const& request) {
  auto span = internal::MakeSpan(
      "appengine_v1::ApplicationsConnection::CreateApplication");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateApplication(request));
}

future<StatusOr<google::appengine::v1::Application>>
ApplicationsTracingConnection::UpdateApplication(
    google::appengine::v1::UpdateApplicationRequest const& request) {
  auto span = internal::MakeSpan(
      "appengine_v1::ApplicationsConnection::UpdateApplication");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateApplication(request));
}

future<StatusOr<google::appengine::v1::Application>>
ApplicationsTracingConnection::RepairApplication(
    google::appengine::v1::RepairApplicationRequest const& request) {
  auto span = internal::MakeSpan(
      "appengine_v1::ApplicationsConnection::RepairApplication");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->RepairApplication(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<appengine_v1::ApplicationsConnection>
MakeApplicationsTracingConnection(
    std::shared_ptr<appengine_v1::ApplicationsConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<ApplicationsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1_internal
}  // namespace cloud
}  // namespace google
