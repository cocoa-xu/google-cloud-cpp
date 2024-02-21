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
// source: google/storagetransfer/v1/transfer.proto

#include "google/cloud/storagetransfer/v1/internal/storage_transfer_connection_impl.h"
#include "google/cloud/storagetransfer/v1/internal/storage_transfer_option_defaults.h"
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
namespace storagetransfer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<storagetransfer_v1::StorageTransferServiceRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<storagetransfer_v1::StorageTransferServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<storagetransfer_v1::StorageTransferServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    storagetransfer_v1::StorageTransferServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<storagetransfer_v1::
               StorageTransferServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options
      .get<storagetransfer_v1::StorageTransferServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

StorageTransferServiceConnectionImpl::StorageTransferServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<storagetransfer_v1_internal::StorageTransferServiceStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), StorageTransferServiceConnection::options())) {}

StatusOr<google::storagetransfer::v1::GoogleServiceAccount>
StorageTransferServiceConnectionImpl::GetGoogleServiceAccount(
    google::storagetransfer::v1::GetGoogleServiceAccountRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetGoogleServiceAccount(request),
      [this](grpc::ClientContext& context,
             google::storagetransfer::v1::GetGoogleServiceAccountRequest const&
                 request) {
        return stub_->GetGoogleServiceAccount(context, request);
      },
      request, __func__);
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceConnectionImpl::CreateTransferJob(
    google::storagetransfer::v1::CreateTransferJobRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateTransferJob(request),
      [this](grpc::ClientContext& context,
             google::storagetransfer::v1::CreateTransferJobRequest const&
                 request) {
        return stub_->CreateTransferJob(context, request);
      },
      request, __func__);
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceConnectionImpl::UpdateTransferJob(
    google::storagetransfer::v1::UpdateTransferJobRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateTransferJob(request),
      [this](grpc::ClientContext& context,
             google::storagetransfer::v1::UpdateTransferJobRequest const&
                 request) {
        return stub_->UpdateTransferJob(context, request);
      },
      request, __func__);
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceConnectionImpl::GetTransferJob(
    google::storagetransfer::v1::GetTransferJobRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetTransferJob(request),
      [this](
          grpc::ClientContext& context,
          google::storagetransfer::v1::GetTransferJobRequest const& request) {
        return stub_->GetTransferJob(context, request);
      },
      request, __func__);
}

StreamRange<google::storagetransfer::v1::TransferJob>
StorageTransferServiceConnectionImpl::ListTransferJobs(
    google::storagetransfer::v1::ListTransferJobsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListTransferJobs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::storagetransfer::v1::TransferJob>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           storagetransfer_v1::StorageTransferServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::storagetransfer::v1::ListTransferJobsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::storagetransfer::v1::ListTransferJobsRequest const&
                       request) {
              return stub->ListTransferJobs(context, request);
            },
            r, function_name);
      },
      [](google::storagetransfer::v1::ListTransferJobsResponse r) {
        std::vector<google::storagetransfer::v1::TransferJob> result(
            r.transfer_jobs().size());
        auto& messages = *r.mutable_transfer_jobs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

Status StorageTransferServiceConnectionImpl::PauseTransferOperation(
    google::storagetransfer::v1::PauseTransferOperationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->PauseTransferOperation(request),
      [this](grpc::ClientContext& context,
             google::storagetransfer::v1::PauseTransferOperationRequest const&
                 request) {
        return stub_->PauseTransferOperation(context, request);
      },
      request, __func__);
}

Status StorageTransferServiceConnectionImpl::ResumeTransferOperation(
    google::storagetransfer::v1::ResumeTransferOperationRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ResumeTransferOperation(request),
      [this](grpc::ClientContext& context,
             google::storagetransfer::v1::ResumeTransferOperationRequest const&
                 request) {
        return stub_->ResumeTransferOperation(context, request);
      },
      request, __func__);
}

future<StatusOr<google::storagetransfer::v1::TransferOperation>>
StorageTransferServiceConnectionImpl::RunTransferJob(
    google::storagetransfer::v1::RunTransferJobRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->RunTransferJob(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::storagetransfer::v1::TransferOperation>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::storagetransfer::v1::RunTransferJobRequest const& request) {
        return stub->AsyncRunTransferJob(cq, std::move(context), options,
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
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::storagetransfer::v1::TransferOperation>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

Status StorageTransferServiceConnectionImpl::DeleteTransferJob(
    google::storagetransfer::v1::DeleteTransferJobRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteTransferJob(request),
      [this](grpc::ClientContext& context,
             google::storagetransfer::v1::DeleteTransferJobRequest const&
                 request) {
        return stub_->DeleteTransferJob(context, request);
      },
      request, __func__);
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceConnectionImpl::CreateAgentPool(
    google::storagetransfer::v1::CreateAgentPoolRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateAgentPool(request),
      [this](
          grpc::ClientContext& context,
          google::storagetransfer::v1::CreateAgentPoolRequest const& request) {
        return stub_->CreateAgentPool(context, request);
      },
      request, __func__);
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceConnectionImpl::UpdateAgentPool(
    google::storagetransfer::v1::UpdateAgentPoolRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateAgentPool(request),
      [this](
          grpc::ClientContext& context,
          google::storagetransfer::v1::UpdateAgentPoolRequest const& request) {
        return stub_->UpdateAgentPool(context, request);
      },
      request, __func__);
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceConnectionImpl::GetAgentPool(
    google::storagetransfer::v1::GetAgentPoolRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetAgentPool(request),
      [this](grpc::ClientContext& context,
             google::storagetransfer::v1::GetAgentPoolRequest const& request) {
        return stub_->GetAgentPool(context, request);
      },
      request, __func__);
}

StreamRange<google::storagetransfer::v1::AgentPool>
StorageTransferServiceConnectionImpl::ListAgentPools(
    google::storagetransfer::v1::ListAgentPoolsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListAgentPools(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::storagetransfer::v1::AgentPool>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           storagetransfer_v1::StorageTransferServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::storagetransfer::v1::ListAgentPoolsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::storagetransfer::v1::ListAgentPoolsRequest const&
                       request) {
              return stub->ListAgentPools(context, request);
            },
            r, function_name);
      },
      [](google::storagetransfer::v1::ListAgentPoolsResponse r) {
        std::vector<google::storagetransfer::v1::AgentPool> result(
            r.agent_pools().size());
        auto& messages = *r.mutable_agent_pools();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

Status StorageTransferServiceConnectionImpl::DeleteAgentPool(
    google::storagetransfer::v1::DeleteAgentPoolRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteAgentPool(request),
      [this](
          grpc::ClientContext& context,
          google::storagetransfer::v1::DeleteAgentPoolRequest const& request) {
        return stub_->DeleteAgentPool(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagetransfer_v1_internal
}  // namespace cloud
}  // namespace google
