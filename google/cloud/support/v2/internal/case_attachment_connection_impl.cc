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
// source: google/cloud/support/v2/attachment_service.proto

#include "google/cloud/support/v2/internal/case_attachment_connection_impl.h"
#include "google/cloud/support/v2/internal/case_attachment_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace support_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<support_v2::CaseAttachmentServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<support_v2::CaseAttachmentServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<support_v2::CaseAttachmentServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<support_v2::CaseAttachmentServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<support_v2::CaseAttachmentServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

CaseAttachmentServiceConnectionImpl::CaseAttachmentServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<support_v2_internal::CaseAttachmentServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), CaseAttachmentServiceConnection::options())) {}

StreamRange<google::cloud::support::v2::Attachment>
CaseAttachmentServiceConnectionImpl::ListAttachments(
    google::cloud::support::v2::ListAttachmentsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListAttachments(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::support::v2::Attachment>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<support_v2::CaseAttachmentServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::support::v2::ListAttachmentsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::support::v2::ListAttachmentsRequest const&
                       request) {
              return stub->ListAttachments(context, request);
            },
            r, function_name);
      },
      [](google::cloud::support::v2::ListAttachmentsResponse r) {
        std::vector<google::cloud::support::v2::Attachment> result(
            r.attachments().size());
        auto& messages = *r.mutable_attachments();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace support_v2_internal
}  // namespace cloud
}  // namespace google
