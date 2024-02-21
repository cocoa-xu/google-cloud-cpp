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
// source: google/cloud/vpcaccess/v1/vpc_access.proto

#include "google/cloud/vpcaccess/v1/internal/vpc_access_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace vpcaccess_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

VpcAccessServiceTracingConnection::VpcAccessServiceTracingConnection(
    std::shared_ptr<vpcaccess_v1::VpcAccessServiceConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::vpcaccess::v1::Connector>>
VpcAccessServiceTracingConnection::CreateConnector(
    google::cloud::vpcaccess::v1::CreateConnectorRequest const& request) {
  auto span = internal::MakeSpan(
      "vpcaccess_v1::VpcAccessServiceConnection::CreateConnector");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateConnector(request));
}

StatusOr<google::cloud::vpcaccess::v1::Connector>
VpcAccessServiceTracingConnection::GetConnector(
    google::cloud::vpcaccess::v1::GetConnectorRequest const& request) {
  auto span = internal::MakeSpan(
      "vpcaccess_v1::VpcAccessServiceConnection::GetConnector");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetConnector(request));
}

StreamRange<google::cloud::vpcaccess::v1::Connector>
VpcAccessServiceTracingConnection::ListConnectors(
    google::cloud::vpcaccess::v1::ListConnectorsRequest request) {
  auto span = internal::MakeSpan(
      "vpcaccess_v1::VpcAccessServiceConnection::ListConnectors");
  internal::OTelScope scope(span);
  auto sr = child_->ListConnectors(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::vpcaccess::v1::Connector>(std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::vpcaccess::v1::OperationMetadata>>
VpcAccessServiceTracingConnection::DeleteConnector(
    google::cloud::vpcaccess::v1::DeleteConnectorRequest const& request) {
  auto span = internal::MakeSpan(
      "vpcaccess_v1::VpcAccessServiceConnection::DeleteConnector");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteConnector(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<vpcaccess_v1::VpcAccessServiceConnection>
MakeVpcAccessServiceTracingConnection(
    std::shared_ptr<vpcaccess_v1::VpcAccessServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<VpcAccessServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vpcaccess_v1_internal
}  // namespace cloud
}  // namespace google
