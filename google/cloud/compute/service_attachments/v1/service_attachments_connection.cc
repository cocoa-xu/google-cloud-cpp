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
// source: google/cloud/compute/service_attachments/v1/service_attachments.proto

#include "google/cloud/compute/service_attachments/v1/service_attachments_connection.h"
#include "google/cloud/compute/service_attachments/v1/internal/service_attachments_option_defaults.h"
#include "google/cloud/compute/service_attachments/v1/internal/service_attachments_tracing_connection.h"
#include "google/cloud/compute/service_attachments/v1/service_attachments_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_service_attachments_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServiceAttachmentsConnection::~ServiceAttachmentsConnection() = default;

StreamRange<std::pair<
    std::string, google::cloud::cpp::compute::v1::ServiceAttachmentsScopedList>>
ServiceAttachmentsConnection::AggregatedListServiceAttachments(
    google::cloud::cpp::compute::service_attachments::v1::
        AggregatedListServiceAttachmentsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<std::pair<std::string, google::cloud::cpp::compute::v1::
                                             ServiceAttachmentsScopedList>>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ServiceAttachmentsConnection::DeleteServiceAttachment(
    google::cloud::cpp::compute::service_attachments::v1::
        DeleteServiceAttachmentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::ServiceAttachment>
ServiceAttachmentsConnection::GetServiceAttachment(
    google::cloud::cpp::compute::service_attachments::v1::
        GetServiceAttachmentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ServiceAttachmentsConnection::GetIamPolicy(
    google::cloud::cpp::compute::service_attachments::v1::
        GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ServiceAttachmentsConnection::InsertServiceAttachment(
    google::cloud::cpp::compute::service_attachments::v1::
        InsertServiceAttachmentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::ServiceAttachment>
ServiceAttachmentsConnection::ListServiceAttachments(
    google::cloud::cpp::compute::service_attachments::v1::
        ListServiceAttachmentsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::ServiceAttachment>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ServiceAttachmentsConnection::PatchServiceAttachment(
    google::cloud::cpp::compute::service_attachments::v1::
        PatchServiceAttachmentRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ServiceAttachmentsConnection::SetIamPolicy(
    google::cloud::cpp::compute::service_attachments::v1::
        SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
ServiceAttachmentsConnection::TestIamPermissions(
    google::cloud::cpp::compute::service_attachments::v1::
        TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_service_attachments_v1
}  // namespace cloud
}  // namespace google
