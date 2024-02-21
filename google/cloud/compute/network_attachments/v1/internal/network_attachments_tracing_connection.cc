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
// source: google/cloud/compute/network_attachments/v1/network_attachments.proto

#include "google/cloud/compute/network_attachments/v1/internal/network_attachments_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_network_attachments_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

NetworkAttachmentsTracingConnection::NetworkAttachmentsTracingConnection(
    std::shared_ptr<
        compute_network_attachments_v1::NetworkAttachmentsConnection>
        child)
    : child_(std::move(child)) {}

StreamRange<std::pair<
    std::string, google::cloud::cpp::compute::v1::NetworkAttachmentsScopedList>>
NetworkAttachmentsTracingConnection::AggregatedListNetworkAttachments(
    google::cloud::cpp::compute::network_attachments::v1::
        AggregatedListNetworkAttachmentsRequest request) {
  auto span = internal::MakeSpan(
      "compute_network_attachments_v1::NetworkAttachmentsConnection::"
      "AggregatedListNetworkAttachments");
  internal::OTelScope scope(span);
  auto sr = child_->AggregatedListNetworkAttachments(std::move(request));
  return internal::MakeTracedStreamRange<
      std::pair<std::string,
                google::cloud::cpp::compute::v1::NetworkAttachmentsScopedList>>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkAttachmentsTracingConnection::DeleteNetworkAttachment(
    google::cloud::cpp::compute::network_attachments::v1::
        DeleteNetworkAttachmentRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_attachments_v1::NetworkAttachmentsConnection::"
      "DeleteNetworkAttachment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteNetworkAttachment(request));
}

StatusOr<google::cloud::cpp::compute::v1::NetworkAttachment>
NetworkAttachmentsTracingConnection::GetNetworkAttachment(
    google::cloud::cpp::compute::network_attachments::v1::
        GetNetworkAttachmentRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_attachments_v1::NetworkAttachmentsConnection::"
      "GetNetworkAttachment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetNetworkAttachment(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NetworkAttachmentsTracingConnection::GetIamPolicy(
    google::cloud::cpp::compute::network_attachments::v1::
        GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_attachments_v1::NetworkAttachmentsConnection::"
      "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkAttachmentsTracingConnection::InsertNetworkAttachment(
    google::cloud::cpp::compute::network_attachments::v1::
        InsertNetworkAttachmentRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_attachments_v1::NetworkAttachmentsConnection::"
      "InsertNetworkAttachment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertNetworkAttachment(request));
}

StreamRange<google::cloud::cpp::compute::v1::NetworkAttachment>
NetworkAttachmentsTracingConnection::ListNetworkAttachments(
    google::cloud::cpp::compute::network_attachments::v1::
        ListNetworkAttachmentsRequest request) {
  auto span = internal::MakeSpan(
      "compute_network_attachments_v1::NetworkAttachmentsConnection::"
      "ListNetworkAttachments");
  internal::OTelScope scope(span);
  auto sr = child_->ListNetworkAttachments(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::NetworkAttachment>(std::move(span),
                                                          std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkAttachmentsTracingConnection::PatchNetworkAttachment(
    google::cloud::cpp::compute::network_attachments::v1::
        PatchNetworkAttachmentRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_attachments_v1::NetworkAttachmentsConnection::"
      "PatchNetworkAttachment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchNetworkAttachment(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NetworkAttachmentsTracingConnection::SetIamPolicy(
    google::cloud::cpp::compute::network_attachments::v1::
        SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_attachments_v1::NetworkAttachmentsConnection::"
      "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
NetworkAttachmentsTracingConnection::TestIamPermissions(
    google::cloud::cpp::compute::network_attachments::v1::
        TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_network_attachments_v1::NetworkAttachmentsConnection::"
      "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_network_attachments_v1::NetworkAttachmentsConnection>
MakeNetworkAttachmentsTracingConnection(
    std::shared_ptr<
        compute_network_attachments_v1::NetworkAttachmentsConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<NetworkAttachmentsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_attachments_v1_internal
}  // namespace cloud
}  // namespace google
