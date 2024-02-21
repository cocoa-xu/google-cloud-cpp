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
// source: google/cloud/aiplatform/v1/index_endpoint_service.proto

#include "google/cloud/aiplatform/v1/internal/index_endpoint_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

IndexEndpointServiceTracingConnection::IndexEndpointServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::IndexEndpointServiceConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::aiplatform::v1::IndexEndpoint>>
IndexEndpointServiceTracingConnection::CreateIndexEndpoint(
    google::cloud::aiplatform::v1::CreateIndexEndpointRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::IndexEndpointServiceConnection::CreateIndexEndpoint");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateIndexEndpoint(request));
}

StatusOr<google::cloud::aiplatform::v1::IndexEndpoint>
IndexEndpointServiceTracingConnection::GetIndexEndpoint(
    google::cloud::aiplatform::v1::GetIndexEndpointRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::IndexEndpointServiceConnection::GetIndexEndpoint");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIndexEndpoint(request));
}

StreamRange<google::cloud::aiplatform::v1::IndexEndpoint>
IndexEndpointServiceTracingConnection::ListIndexEndpoints(
    google::cloud::aiplatform::v1::ListIndexEndpointsRequest request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::IndexEndpointServiceConnection::ListIndexEndpoints");
  internal::OTelScope scope(span);
  auto sr = child_->ListIndexEndpoints(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::aiplatform::v1::IndexEndpoint>(std::move(span),
                                                    std::move(sr));
}

StatusOr<google::cloud::aiplatform::v1::IndexEndpoint>
IndexEndpointServiceTracingConnection::UpdateIndexEndpoint(
    google::cloud::aiplatform::v1::UpdateIndexEndpointRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::IndexEndpointServiceConnection::UpdateIndexEndpoint");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateIndexEndpoint(request));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
IndexEndpointServiceTracingConnection::DeleteIndexEndpoint(
    google::cloud::aiplatform::v1::DeleteIndexEndpointRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::IndexEndpointServiceConnection::DeleteIndexEndpoint");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteIndexEndpoint(request));
}

future<StatusOr<google::cloud::aiplatform::v1::DeployIndexResponse>>
IndexEndpointServiceTracingConnection::DeployIndex(
    google::cloud::aiplatform::v1::DeployIndexRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::IndexEndpointServiceConnection::DeployIndex");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeployIndex(request));
}

future<StatusOr<google::cloud::aiplatform::v1::UndeployIndexResponse>>
IndexEndpointServiceTracingConnection::UndeployIndex(
    google::cloud::aiplatform::v1::UndeployIndexRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::IndexEndpointServiceConnection::UndeployIndex");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UndeployIndex(request));
}

future<StatusOr<google::cloud::aiplatform::v1::MutateDeployedIndexResponse>>
IndexEndpointServiceTracingConnection::MutateDeployedIndex(
    google::cloud::aiplatform::v1::MutateDeployedIndexRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::IndexEndpointServiceConnection::MutateDeployedIndex");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->MutateDeployedIndex(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<aiplatform_v1::IndexEndpointServiceConnection>
MakeIndexEndpointServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::IndexEndpointServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<IndexEndpointServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
