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
// source: google/devtools/cloudbuild/v2/repositories.proto

#include "google/cloud/cloudbuild/v2/internal/repository_manager_connection_impl.h"
#include "google/cloud/cloudbuild/v2/internal/repository_manager_option_defaults.h"
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
namespace cloudbuild_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<cloudbuild_v2::RepositoryManagerRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<cloudbuild_v2::RepositoryManagerRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<cloudbuild_v2::RepositoryManagerBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<cloudbuild_v2::RepositoryManagerConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<cloudbuild_v2::RepositoryManagerConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<cloudbuild_v2::RepositoryManagerPollingPolicyOption>()
      ->clone();
}

}  // namespace

RepositoryManagerConnectionImpl::RepositoryManagerConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<cloudbuild_v2_internal::RepositoryManagerStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), RepositoryManagerConnection::options())) {}

future<StatusOr<google::devtools::cloudbuild::v2::Connection>>
RepositoryManagerConnectionImpl::CreateConnection(
    google::devtools::cloudbuild::v2::CreateConnectionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateConnection(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::devtools::cloudbuild::v2::Connection>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::devtools::cloudbuild::v2::CreateConnectionRequest const&
              request) {
        return stub->AsyncCreateConnection(cq, std::move(context), options,
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
          google::devtools::cloudbuild::v2::Connection>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::devtools::cloudbuild::v2::Connection>
RepositoryManagerConnectionImpl::GetConnection(
    google::devtools::cloudbuild::v2::GetConnectionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetConnection(request),
      [this](grpc::ClientContext& context,
             google::devtools::cloudbuild::v2::GetConnectionRequest const&
                 request) { return stub_->GetConnection(context, request); },
      request, __func__);
}

StreamRange<google::devtools::cloudbuild::v2::Connection>
RepositoryManagerConnectionImpl::ListConnections(
    google::devtools::cloudbuild::v2::ListConnectionsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListConnections(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::devtools::cloudbuild::v2::Connection>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<cloudbuild_v2::RepositoryManagerRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::devtools::cloudbuild::v2::ListConnectionsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::devtools::cloudbuild::v2::ListConnectionsRequest const&
                    request) {
              return stub->ListConnections(context, request);
            },
            r, function_name);
      },
      [](google::devtools::cloudbuild::v2::ListConnectionsResponse r) {
        std::vector<google::devtools::cloudbuild::v2::Connection> result(
            r.connections().size());
        auto& messages = *r.mutable_connections();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::devtools::cloudbuild::v2::Connection>>
RepositoryManagerConnectionImpl::UpdateConnection(
    google::devtools::cloudbuild::v2::UpdateConnectionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateConnection(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::devtools::cloudbuild::v2::Connection>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::devtools::cloudbuild::v2::UpdateConnectionRequest const&
              request) {
        return stub->AsyncUpdateConnection(cq, std::move(context), options,
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
          google::devtools::cloudbuild::v2::Connection>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::devtools::cloudbuild::v2::OperationMetadata>>
RepositoryManagerConnectionImpl::DeleteConnection(
    google::devtools::cloudbuild::v2::DeleteConnectionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteConnection(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::devtools::cloudbuild::v2::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::devtools::cloudbuild::v2::DeleteConnectionRequest const&
              request) {
        return stub->AsyncDeleteConnection(cq, std::move(context), options,
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
          google::devtools::cloudbuild::v2::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::devtools::cloudbuild::v2::Repository>>
RepositoryManagerConnectionImpl::CreateRepository(
    google::devtools::cloudbuild::v2::CreateRepositoryRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateRepository(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::devtools::cloudbuild::v2::Repository>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::devtools::cloudbuild::v2::CreateRepositoryRequest const&
              request) {
        return stub->AsyncCreateRepository(cq, std::move(context), options,
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
          google::devtools::cloudbuild::v2::Repository>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<
    StatusOr<google::devtools::cloudbuild::v2::BatchCreateRepositoriesResponse>>
RepositoryManagerConnectionImpl::BatchCreateRepositories(
    google::devtools::cloudbuild::v2::BatchCreateRepositoriesRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->BatchCreateRepositories(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::devtools::cloudbuild::v2::BatchCreateRepositoriesResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::devtools::cloudbuild::v2::
                         BatchCreateRepositoriesRequest const& request) {
        return stub->AsyncBatchCreateRepositories(cq, std::move(context),
                                                  options, request);
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
          google::devtools::cloudbuild::v2::BatchCreateRepositoriesResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::devtools::cloudbuild::v2::Repository>
RepositoryManagerConnectionImpl::GetRepository(
    google::devtools::cloudbuild::v2::GetRepositoryRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetRepository(request),
      [this](grpc::ClientContext& context,
             google::devtools::cloudbuild::v2::GetRepositoryRequest const&
                 request) { return stub_->GetRepository(context, request); },
      request, __func__);
}

StreamRange<google::devtools::cloudbuild::v2::Repository>
RepositoryManagerConnectionImpl::ListRepositories(
    google::devtools::cloudbuild::v2::ListRepositoriesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListRepositories(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::devtools::cloudbuild::v2::Repository>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<cloudbuild_v2::RepositoryManagerRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::devtools::cloudbuild::v2::ListRepositoriesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::devtools::cloudbuild::v2::ListRepositoriesRequest const&
                    request) {
              return stub->ListRepositories(context, request);
            },
            r, function_name);
      },
      [](google::devtools::cloudbuild::v2::ListRepositoriesResponse r) {
        std::vector<google::devtools::cloudbuild::v2::Repository> result(
            r.repositories().size());
        auto& messages = *r.mutable_repositories();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::devtools::cloudbuild::v2::OperationMetadata>>
RepositoryManagerConnectionImpl::DeleteRepository(
    google::devtools::cloudbuild::v2::DeleteRepositoryRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteRepository(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::devtools::cloudbuild::v2::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::devtools::cloudbuild::v2::DeleteRepositoryRequest const&
              request) {
        return stub->AsyncDeleteRepository(cq, std::move(context), options,
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
          google::devtools::cloudbuild::v2::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::devtools::cloudbuild::v2::FetchReadWriteTokenResponse>
RepositoryManagerConnectionImpl::FetchReadWriteToken(
    google::devtools::cloudbuild::v2::FetchReadWriteTokenRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->FetchReadWriteToken(request),
      [this](grpc::ClientContext& context,
             google::devtools::cloudbuild::v2::FetchReadWriteTokenRequest const&
                 request) {
        return stub_->FetchReadWriteToken(context, request);
      },
      request, __func__);
}

StatusOr<google::devtools::cloudbuild::v2::FetchReadTokenResponse>
RepositoryManagerConnectionImpl::FetchReadToken(
    google::devtools::cloudbuild::v2::FetchReadTokenRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->FetchReadToken(request),
      [this](grpc::ClientContext& context,
             google::devtools::cloudbuild::v2::FetchReadTokenRequest const&
                 request) { return stub_->FetchReadToken(context, request); },
      request, __func__);
}

StreamRange<google::devtools::cloudbuild::v2::Repository>
RepositoryManagerConnectionImpl::FetchLinkableRepositories(
    google::devtools::cloudbuild::v2::FetchLinkableRepositoriesRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->FetchLinkableRepositories(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::devtools::cloudbuild::v2::Repository>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<cloudbuild_v2::RepositoryManagerRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::devtools::cloudbuild::v2::
              FetchLinkableRepositoriesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::devtools::cloudbuild::v2::
                       FetchLinkableRepositoriesRequest const& request) {
              return stub->FetchLinkableRepositories(context, request);
            },
            r, function_name);
      },
      [](google::devtools::cloudbuild::v2::FetchLinkableRepositoriesResponse
             r) {
        std::vector<google::devtools::cloudbuild::v2::Repository> result(
            r.repositories().size());
        auto& messages = *r.mutable_repositories();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::devtools::cloudbuild::v2::FetchGitRefsResponse>
RepositoryManagerConnectionImpl::FetchGitRefs(
    google::devtools::cloudbuild::v2::FetchGitRefsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->FetchGitRefs(request),
      [this](grpc::ClientContext& context,
             google::devtools::cloudbuild::v2::FetchGitRefsRequest const&
                 request) { return stub_->FetchGitRefs(context, request); },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_v2_internal
}  // namespace cloud
}  // namespace google
