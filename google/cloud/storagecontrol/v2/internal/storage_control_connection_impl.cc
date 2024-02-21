// Copyright 2024 Google LLC
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
// source: google/storage/control/v2/storage_control.proto

#include "google/cloud/storagecontrol/v2/internal/storage_control_connection_impl.h"
#include "google/cloud/storagecontrol/v2/internal/storage_control_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace storagecontrol_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<storagecontrol_v2::StorageControlRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<storagecontrol_v2::StorageControlRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<storagecontrol_v2::StorageControlBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<storagecontrol_v2::StorageControlConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<storagecontrol_v2::StorageControlConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<storagecontrol_v2::StorageControlPollingPolicyOption>()
      ->clone();
}

}  // namespace

StorageControlConnectionImpl::StorageControlConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<storagecontrol_v2_internal::StorageControlStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      StorageControlConnection::options())) {}

StatusOr<google::storage::control::v2::Folder>
StorageControlConnectionImpl::CreateFolder(
    google::storage::control::v2::CreateFolderRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  if (request_copy.request_id().empty()) {
    request_copy.set_request_id(invocation_id_generator_->MakeInvocationId());
  }
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateFolder(request_copy),
      [this](grpc::ClientContext& context,
             google::storage::control::v2::CreateFolderRequest const& request) {
        return stub_->CreateFolder(context, request);
      },
      request_copy, __func__);
}

Status StorageControlConnectionImpl::DeleteFolder(
    google::storage::control::v2::DeleteFolderRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  if (request_copy.request_id().empty()) {
    request_copy.set_request_id(invocation_id_generator_->MakeInvocationId());
  }
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteFolder(request_copy),
      [this](grpc::ClientContext& context,
             google::storage::control::v2::DeleteFolderRequest const& request) {
        return stub_->DeleteFolder(context, request);
      },
      request_copy, __func__);
}

StatusOr<google::storage::control::v2::Folder>
StorageControlConnectionImpl::GetFolder(
    google::storage::control::v2::GetFolderRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  if (request_copy.request_id().empty()) {
    request_copy.set_request_id(invocation_id_generator_->MakeInvocationId());
  }
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetFolder(request_copy),
      [this](grpc::ClientContext& context,
             google::storage::control::v2::GetFolderRequest const& request) {
        return stub_->GetFolder(context, request);
      },
      request_copy, __func__);
}

StreamRange<google::storage::control::v2::Folder>
StorageControlConnectionImpl::ListFolders(
    google::storage::control::v2::ListFoldersRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListFolders(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::storage::control::v2::Folder>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<storagecontrol_v2::StorageControlRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::storage::control::v2::ListFoldersRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::storage::control::v2::ListFoldersRequest const&
                       request) { return stub->ListFolders(context, request); },
            r, function_name);
      },
      [](google::storage::control::v2::ListFoldersResponse r) {
        std::vector<google::storage::control::v2::Folder> result(
            r.folders().size());
        auto& messages = *r.mutable_folders();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::storage::control::v2::Folder>>
StorageControlConnectionImpl::RenameFolder(
    google::storage::control::v2::RenameFolderRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  if (request_copy.request_id().empty()) {
    request_copy.set_request_id(invocation_id_generator_->MakeInvocationId());
  }
  auto const idempotent =
      idempotency_policy(*current)->RenameFolder(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::storage::control::v2::Folder>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::storage::control::v2::RenameFolderRequest const& request) {
        return stub->AsyncRenameFolder(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::storage::control::v2::Folder>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::storage::control::v2::StorageLayout>
StorageControlConnectionImpl::GetStorageLayout(
    google::storage::control::v2::GetStorageLayoutRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  if (request_copy.request_id().empty()) {
    request_copy.set_request_id(invocation_id_generator_->MakeInvocationId());
  }
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetStorageLayout(request_copy),
      [this](grpc::ClientContext& context,
             google::storage::control::v2::GetStorageLayoutRequest const&
                 request) { return stub_->GetStorageLayout(context, request); },
      request_copy, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagecontrol_v2_internal
}  // namespace cloud
}  // namespace google
