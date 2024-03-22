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

#include "google/cloud/cloudbuild/v2/internal/repository_manager_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/devtools/cloudbuild/v2/repositories.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace cloudbuild_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RepositoryManagerMetadata::RepositoryManagerMetadata(
    std::shared_ptr<RepositoryManagerStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::longrunning::Operation>>
RepositoryManagerMetadata::AsyncCreateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v2::CreateConnectionRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateConnection(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::devtools::cloudbuild::v2::Connection>
RepositoryManagerMetadata::GetConnection(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v2::GetConnectionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetConnection(context, options, request);
}

StatusOr<google::devtools::cloudbuild::v2::ListConnectionsResponse>
RepositoryManagerMetadata::ListConnections(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v2::ListConnectionsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListConnections(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
RepositoryManagerMetadata::AsyncUpdateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v2::UpdateConnectionRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("connection.name=",
                           internal::UrlEncode(request.connection().name())));
  return child_->AsyncUpdateConnection(cq, std::move(context),
                                       std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
RepositoryManagerMetadata::AsyncDeleteConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v2::DeleteConnectionRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteConnection(cq, std::move(context),
                                       std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
RepositoryManagerMetadata::AsyncCreateRepository(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v2::CreateRepositoryRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateRepository(cq, std::move(context),
                                       std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
RepositoryManagerMetadata::AsyncBatchCreateRepositories(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v2::BatchCreateRepositoriesRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncBatchCreateRepositories(cq, std::move(context),
                                              std::move(options), request);
}

StatusOr<google::devtools::cloudbuild::v2::Repository>
RepositoryManagerMetadata::GetRepository(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v2::GetRepositoryRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetRepository(context, options, request);
}

StatusOr<google::devtools::cloudbuild::v2::ListRepositoriesResponse>
RepositoryManagerMetadata::ListRepositories(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v2::ListRepositoriesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListRepositories(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
RepositoryManagerMetadata::AsyncDeleteRepository(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v2::DeleteRepositoryRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteRepository(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::devtools::cloudbuild::v2::FetchReadWriteTokenResponse>
RepositoryManagerMetadata::FetchReadWriteToken(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v2::FetchReadWriteTokenRequest const&
        request) {
  SetMetadata(
      context, options,
      absl::StrCat("repository=", internal::UrlEncode(request.repository())));
  return child_->FetchReadWriteToken(context, options, request);
}

StatusOr<google::devtools::cloudbuild::v2::FetchReadTokenResponse>
RepositoryManagerMetadata::FetchReadToken(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v2::FetchReadTokenRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("repository=", internal::UrlEncode(request.repository())));
  return child_->FetchReadToken(context, options, request);
}

StatusOr<google::devtools::cloudbuild::v2::FetchLinkableRepositoriesResponse>
RepositoryManagerMetadata::FetchLinkableRepositories(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v2::FetchLinkableRepositoriesRequest const&
        request) {
  SetMetadata(
      context, options,
      absl::StrCat("connection=", internal::UrlEncode(request.connection())));
  return child_->FetchLinkableRepositories(context, options, request);
}

StatusOr<google::devtools::cloudbuild::v2::FetchGitRefsResponse>
RepositoryManagerMetadata::FetchGitRefs(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v2::FetchGitRefsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("repository=", internal::UrlEncode(request.repository())));
  return child_->FetchGitRefs(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
RepositoryManagerMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> RepositoryManagerMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void RepositoryManagerMetadata::SetMetadata(grpc::ClientContext& context,
                                            Options const& options,
                                            std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void RepositoryManagerMetadata::SetMetadata(grpc::ClientContext& context,
                                            Options const& options) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
  for (auto const& h : options.get<CustomHeadersOption>()) {
    context.AddMetadata(h.first, h.second);
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_v2_internal
}  // namespace cloud
}  // namespace google
