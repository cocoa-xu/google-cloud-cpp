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
// source: google/cloud/compute/target_grpc_proxies/v1/target_grpc_proxies.proto

#include "google/cloud/compute/target_grpc_proxies/v1/internal/target_grpc_proxies_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_target_grpc_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TargetGrpcProxiesTracingConnection::TargetGrpcProxiesTracingConnection(
    std::shared_ptr<compute_target_grpc_proxies_v1::TargetGrpcProxiesConnection>
        child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetGrpcProxiesTracingConnection::DeleteTargetGrpcProxy(
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        DeleteTargetGrpcProxyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_grpc_proxies_v1::TargetGrpcProxiesConnection::"
      "DeleteTargetGrpcProxy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteTargetGrpcProxy(request));
}

StatusOr<google::cloud::cpp::compute::v1::TargetGrpcProxy>
TargetGrpcProxiesTracingConnection::GetTargetGrpcProxy(
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        GetTargetGrpcProxyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_grpc_proxies_v1::TargetGrpcProxiesConnection::"
      "GetTargetGrpcProxy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTargetGrpcProxy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetGrpcProxiesTracingConnection::InsertTargetGrpcProxy(
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        InsertTargetGrpcProxyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_grpc_proxies_v1::TargetGrpcProxiesConnection::"
      "InsertTargetGrpcProxy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertTargetGrpcProxy(request));
}

StreamRange<google::cloud::cpp::compute::v1::TargetGrpcProxy>
TargetGrpcProxiesTracingConnection::ListTargetGrpcProxies(
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        ListTargetGrpcProxiesRequest request) {
  auto span = internal::MakeSpan(
      "compute_target_grpc_proxies_v1::TargetGrpcProxiesConnection::"
      "ListTargetGrpcProxies");
  internal::OTelScope scope(span);
  auto sr = child_->ListTargetGrpcProxies(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::TargetGrpcProxy>(std::move(span),
                                                        std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetGrpcProxiesTracingConnection::PatchTargetGrpcProxy(
    google::cloud::cpp::compute::target_grpc_proxies::v1::
        PatchTargetGrpcProxyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_target_grpc_proxies_v1::TargetGrpcProxiesConnection::"
      "PatchTargetGrpcProxy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchTargetGrpcProxy(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_target_grpc_proxies_v1::TargetGrpcProxiesConnection>
MakeTargetGrpcProxiesTracingConnection(
    std::shared_ptr<compute_target_grpc_proxies_v1::TargetGrpcProxiesConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<TargetGrpcProxiesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_grpc_proxies_v1_internal
}  // namespace cloud
}  // namespace google
