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

#include "google/cloud/cloudbuild/v2/internal/repository_manager_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/devtools/cloudbuild/v2/repositories.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace cloudbuild_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RepositoryManagerLogging::RepositoryManagerLogging(
    std::shared_ptr<RepositoryManagerStub> child,
    TracingOptions tracing_options, std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

future<StatusOr<google::longrunning::Operation>>
RepositoryManagerLogging::AsyncCreateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::devtools::cloudbuild::v2::CreateConnectionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::devtools::cloudbuild::v2::CreateConnectionRequest const&
                 request) {
        return child_->AsyncCreateConnection(cq, std::move(context), options,
                                             request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::devtools::cloudbuild::v2::Connection>
RepositoryManagerLogging::GetConnection(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v2::GetConnectionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::cloudbuild::v2::GetConnectionRequest const&
                 request) { return child_->GetConnection(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::cloudbuild::v2::ListConnectionsResponse>
RepositoryManagerLogging::ListConnections(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v2::ListConnectionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::cloudbuild::v2::ListConnectionsRequest const&
                 request) { return child_->ListConnections(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
RepositoryManagerLogging::AsyncUpdateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::devtools::cloudbuild::v2::UpdateConnectionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::devtools::cloudbuild::v2::UpdateConnectionRequest const&
                 request) {
        return child_->AsyncUpdateConnection(cq, std::move(context), options,
                                             request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
RepositoryManagerLogging::AsyncDeleteConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::devtools::cloudbuild::v2::DeleteConnectionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::devtools::cloudbuild::v2::DeleteConnectionRequest const&
                 request) {
        return child_->AsyncDeleteConnection(cq, std::move(context), options,
                                             request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
RepositoryManagerLogging::AsyncCreateRepository(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::devtools::cloudbuild::v2::CreateRepositoryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::devtools::cloudbuild::v2::CreateRepositoryRequest const&
                 request) {
        return child_->AsyncCreateRepository(cq, std::move(context), options,
                                             request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
RepositoryManagerLogging::AsyncBatchCreateRepositories(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::devtools::cloudbuild::v2::BatchCreateRepositoriesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::devtools::cloudbuild::v2::
                 BatchCreateRepositoriesRequest const& request) {
        return child_->AsyncBatchCreateRepositories(cq, std::move(context),
                                                    options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::devtools::cloudbuild::v2::Repository>
RepositoryManagerLogging::GetRepository(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v2::GetRepositoryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::cloudbuild::v2::GetRepositoryRequest const&
                 request) { return child_->GetRepository(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::cloudbuild::v2::ListRepositoriesResponse>
RepositoryManagerLogging::ListRepositories(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v2::ListRepositoriesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::cloudbuild::v2::ListRepositoriesRequest const&
                 request) {
        return child_->ListRepositories(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
RepositoryManagerLogging::AsyncDeleteRepository(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::devtools::cloudbuild::v2::DeleteRepositoryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::devtools::cloudbuild::v2::DeleteRepositoryRequest const&
                 request) {
        return child_->AsyncDeleteRepository(cq, std::move(context), options,
                                             request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::devtools::cloudbuild::v2::FetchReadWriteTokenResponse>
RepositoryManagerLogging::FetchReadWriteToken(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v2::FetchReadWriteTokenRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::cloudbuild::v2::FetchReadWriteTokenRequest const&
                 request) {
        return child_->FetchReadWriteToken(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::cloudbuild::v2::FetchReadTokenResponse>
RepositoryManagerLogging::FetchReadToken(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v2::FetchReadTokenRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::cloudbuild::v2::FetchReadTokenRequest const&
                 request) { return child_->FetchReadToken(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::cloudbuild::v2::FetchLinkableRepositoriesResponse>
RepositoryManagerLogging::FetchLinkableRepositories(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v2::FetchLinkableRepositoriesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::cloudbuild::v2::
                 FetchLinkableRepositoriesRequest const& request) {
        return child_->FetchLinkableRepositories(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::devtools::cloudbuild::v2::FetchGitRefsResponse>
RepositoryManagerLogging::FetchGitRefs(
    grpc::ClientContext& context,
    google::devtools::cloudbuild::v2::FetchGitRefsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::devtools::cloudbuild::v2::FetchGitRefsRequest const&
                 request) { return child_->FetchGitRefs(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
RepositoryManagerLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<Status> RepositoryManagerLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_v2_internal
}  // namespace cloud
}  // namespace google
