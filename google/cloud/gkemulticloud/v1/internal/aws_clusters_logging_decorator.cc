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
// source: google/cloud/gkemulticloud/v1/aws_service.proto

#include "google/cloud/gkemulticloud/v1/internal/aws_clusters_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/gkemulticloud/v1/aws_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AwsClustersLogging::AwsClustersLogging(std::shared_ptr<AwsClustersStub> child,
                                       TracingOptions tracing_options,
                                       std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

future<StatusOr<google::longrunning::Operation>>
AwsClustersLogging::AsyncCreateAwsCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::gkemulticloud::v1::CreateAwsClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::gkemulticloud::v1::CreateAwsClusterRequest const&
                 request) {
        return child_->AsyncCreateAwsCluster(cq, std::move(context), options,
                                             request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AwsClustersLogging::AsyncUpdateAwsCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::gkemulticloud::v1::UpdateAwsClusterRequest const&
                 request) {
        return child_->AsyncUpdateAwsCluster(cq, std::move(context), options,
                                             request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkemulticloud::v1::AwsCluster>
AwsClustersLogging::GetAwsCluster(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GetAwsClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::GetAwsClusterRequest const&
                 request) { return child_->GetAwsCluster(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkemulticloud::v1::ListAwsClustersResponse>
AwsClustersLogging::ListAwsClusters(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::ListAwsClustersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::ListAwsClustersRequest const&
                 request) { return child_->ListAwsClusters(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AwsClustersLogging::AsyncDeleteAwsCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::gkemulticloud::v1::DeleteAwsClusterRequest const&
                 request) {
        return child_->AsyncDeleteAwsCluster(cq, std::move(context), options,
                                             request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkemulticloud::v1::GenerateAwsClusterAgentTokenResponse>
AwsClustersLogging::GenerateAwsClusterAgentToken(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GenerateAwsClusterAgentTokenRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::
                 GenerateAwsClusterAgentTokenRequest const& request) {
        return child_->GenerateAwsClusterAgentToken(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenResponse>
AwsClustersLogging::GenerateAwsAccessToken(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::gkemulticloud::v1::GenerateAwsAccessTokenRequest const&
              request) {
        return child_->GenerateAwsAccessToken(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AwsClustersLogging::AsyncCreateAwsNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::gkemulticloud::v1::CreateAwsNodePoolRequest const&
                 request) {
        return child_->AsyncCreateAwsNodePool(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AwsClustersLogging::AsyncUpdateAwsNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::gkemulticloud::v1::UpdateAwsNodePoolRequest const&
                 request) {
        return child_->AsyncUpdateAwsNodePool(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AwsClustersLogging::AsyncRollbackAwsNodePoolUpdate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::gkemulticloud::v1::RollbackAwsNodePoolUpdateRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::gkemulticloud::v1::
                 RollbackAwsNodePoolUpdateRequest const& request) {
        return child_->AsyncRollbackAwsNodePoolUpdate(cq, std::move(context),
                                                      options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkemulticloud::v1::AwsNodePool>
AwsClustersLogging::GetAwsNodePool(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GetAwsNodePoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::GetAwsNodePoolRequest const&
                 request) { return child_->GetAwsNodePool(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkemulticloud::v1::ListAwsNodePoolsResponse>
AwsClustersLogging::ListAwsNodePools(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::ListAwsNodePoolsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::ListAwsNodePoolsRequest const&
                 request) {
        return child_->ListAwsNodePools(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AwsClustersLogging::AsyncDeleteAwsNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::gkemulticloud::v1::DeleteAwsNodePoolRequest const&
                 request) {
        return child_->AsyncDeleteAwsNodePool(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkemulticloud::v1::AwsOpenIdConfig>
AwsClustersLogging::GetAwsOpenIdConfig(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GetAwsOpenIdConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::GetAwsOpenIdConfigRequest const&
                 request) {
        return child_->GetAwsOpenIdConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkemulticloud::v1::AwsJsonWebKeys>
AwsClustersLogging::GetAwsJsonWebKeys(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GetAwsJsonWebKeysRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::GetAwsJsonWebKeysRequest const&
                 request) {
        return child_->GetAwsJsonWebKeys(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkemulticloud::v1::AwsServerConfig>
AwsClustersLogging::GetAwsServerConfig(
    grpc::ClientContext& context,
    google::cloud::gkemulticloud::v1::GetAwsServerConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gkemulticloud::v1::GetAwsServerConfigRequest const&
                 request) {
        return child_->GetAwsServerConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AwsClustersLogging::AsyncGetOperation(
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

future<Status> AwsClustersLogging::AsyncCancelOperation(
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
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google
