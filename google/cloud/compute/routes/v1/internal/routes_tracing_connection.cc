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
// source: google/cloud/compute/routes/v1/routes.proto

#include "google/cloud/compute/routes/v1/internal/routes_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_routes_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

RoutesTracingConnection::RoutesTracingConnection(
    std::shared_ptr<compute_routes_v1::RoutesConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutesTracingConnection::DeleteRoute(
    google::cloud::cpp::compute::routes::v1::DeleteRouteRequest const&
        request) {
  auto span =
      internal::MakeSpan("compute_routes_v1::RoutesConnection::DeleteRoute");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteRoute(request));
}

StatusOr<google::cloud::cpp::compute::v1::Route>
RoutesTracingConnection::GetRoute(
    google::cloud::cpp::compute::routes::v1::GetRouteRequest const& request) {
  auto span =
      internal::MakeSpan("compute_routes_v1::RoutesConnection::GetRoute");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRoute(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutesTracingConnection::InsertRoute(
    google::cloud::cpp::compute::routes::v1::InsertRouteRequest const&
        request) {
  auto span =
      internal::MakeSpan("compute_routes_v1::RoutesConnection::InsertRoute");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->InsertRoute(request));
}

StreamRange<google::cloud::cpp::compute::v1::Route>
RoutesTracingConnection::ListRoutes(
    google::cloud::cpp::compute::routes::v1::ListRoutesRequest request) {
  auto span =
      internal::MakeSpan("compute_routes_v1::RoutesConnection::ListRoutes");
  internal::OTelScope scope(span);
  auto sr = child_->ListRoutes(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::Route>(std::move(span), std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_routes_v1::RoutesConnection>
MakeRoutesTracingConnection(
    std::shared_ptr<compute_routes_v1::RoutesConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<RoutesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_routes_v1_internal
}  // namespace cloud
}  // namespace google
