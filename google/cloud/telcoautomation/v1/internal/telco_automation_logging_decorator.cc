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
// source: google/cloud/telcoautomation/v1/telcoautomation.proto

#include "google/cloud/telcoautomation/v1/internal/telco_automation_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/telcoautomation/v1/telcoautomation.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace telcoautomation_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TelcoAutomationLogging::TelcoAutomationLogging(
    std::shared_ptr<TelcoAutomationStub> child, TracingOptions tracing_options,
    std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::cloud::telcoautomation::v1::ListOrchestrationClustersResponse>
TelcoAutomationLogging::ListOrchestrationClusters(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::ListOrchestrationClustersRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::
                 ListOrchestrationClustersRequest const& request) {
        return child_->ListOrchestrationClusters(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::OrchestrationCluster>
TelcoAutomationLogging::GetOrchestrationCluster(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::GetOrchestrationClusterRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::
                 GetOrchestrationClusterRequest const& request) {
        return child_->GetOrchestrationCluster(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TelcoAutomationLogging::AsyncCreateOrchestrationCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::telcoautomation::v1::CreateOrchestrationClusterRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::telcoautomation::v1::
                 CreateOrchestrationClusterRequest const& request) {
        return child_->AsyncCreateOrchestrationCluster(cq, std::move(context),
                                                       options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TelcoAutomationLogging::AsyncDeleteOrchestrationCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::telcoautomation::v1::DeleteOrchestrationClusterRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::telcoautomation::v1::
                 DeleteOrchestrationClusterRequest const& request) {
        return child_->AsyncDeleteOrchestrationCluster(cq, std::move(context),
                                                       options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::ListEdgeSlmsResponse>
TelcoAutomationLogging::ListEdgeSlms(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::ListEdgeSlmsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::ListEdgeSlmsRequest const&
                 request) { return child_->ListEdgeSlms(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::EdgeSlm>
TelcoAutomationLogging::GetEdgeSlm(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::GetEdgeSlmRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::GetEdgeSlmRequest const&
                 request) { return child_->GetEdgeSlm(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TelcoAutomationLogging::AsyncCreateEdgeSlm(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::telcoautomation::v1::CreateEdgeSlmRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::telcoautomation::v1::CreateEdgeSlmRequest const&
                 request) {
        return child_->AsyncCreateEdgeSlm(cq, std::move(context), options,
                                          request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TelcoAutomationLogging::AsyncDeleteEdgeSlm(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::telcoautomation::v1::DeleteEdgeSlmRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::telcoautomation::v1::DeleteEdgeSlmRequest const&
                 request) {
        return child_->AsyncDeleteEdgeSlm(cq, std::move(context), options,
                                          request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationLogging::CreateBlueprint(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::CreateBlueprintRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::CreateBlueprintRequest const&
                 request) { return child_->CreateBlueprint(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationLogging::UpdateBlueprint(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::UpdateBlueprintRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::UpdateBlueprintRequest const&
                 request) { return child_->UpdateBlueprint(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationLogging::GetBlueprint(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::GetBlueprintRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::GetBlueprintRequest const&
                 request) { return child_->GetBlueprint(context, request); },
      context, request, __func__, tracing_options_);
}

Status TelcoAutomationLogging::DeleteBlueprint(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::DeleteBlueprintRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::DeleteBlueprintRequest const&
                 request) { return child_->DeleteBlueprint(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::ListBlueprintsResponse>
TelcoAutomationLogging::ListBlueprints(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::ListBlueprintsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::ListBlueprintsRequest const&
                 request) { return child_->ListBlueprints(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationLogging::ApproveBlueprint(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::ApproveBlueprintRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::ApproveBlueprintRequest const&
                 request) {
        return child_->ApproveBlueprint(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationLogging::ProposeBlueprint(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::ProposeBlueprintRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::ProposeBlueprintRequest const&
                 request) {
        return child_->ProposeBlueprint(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationLogging::RejectBlueprint(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::RejectBlueprintRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::RejectBlueprintRequest const&
                 request) { return child_->RejectBlueprint(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::ListBlueprintRevisionsResponse>
TelcoAutomationLogging::ListBlueprintRevisions(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::ListBlueprintRevisionsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::
                 ListBlueprintRevisionsRequest const& request) {
        return child_->ListBlueprintRevisions(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::SearchBlueprintRevisionsResponse>
TelcoAutomationLogging::SearchBlueprintRevisions(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::SearchBlueprintRevisionsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::
                 SearchBlueprintRevisionsRequest const& request) {
        return child_->SearchBlueprintRevisions(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::SearchDeploymentRevisionsResponse>
TelcoAutomationLogging::SearchDeploymentRevisions(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::SearchDeploymentRevisionsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::
                 SearchDeploymentRevisionsRequest const& request) {
        return child_->SearchDeploymentRevisions(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::DiscardBlueprintChangesResponse>
TelcoAutomationLogging::DiscardBlueprintChanges(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::DiscardBlueprintChangesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::
                 DiscardBlueprintChangesRequest const& request) {
        return child_->DiscardBlueprintChanges(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::ListPublicBlueprintsResponse>
TelcoAutomationLogging::ListPublicBlueprints(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::ListPublicBlueprintsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::telcoautomation::v1::ListPublicBlueprintsRequest const&
              request) {
        return child_->ListPublicBlueprints(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::PublicBlueprint>
TelcoAutomationLogging::GetPublicBlueprint(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::GetPublicBlueprintRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::telcoautomation::v1::GetPublicBlueprintRequest const&
              request) { return child_->GetPublicBlueprint(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationLogging::CreateDeployment(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::CreateDeploymentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::CreateDeploymentRequest const&
                 request) {
        return child_->CreateDeployment(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationLogging::UpdateDeployment(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::UpdateDeploymentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::UpdateDeploymentRequest const&
                 request) {
        return child_->UpdateDeployment(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationLogging::GetDeployment(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::GetDeploymentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::GetDeploymentRequest const&
                 request) { return child_->GetDeployment(context, request); },
      context, request, __func__, tracing_options_);
}

Status TelcoAutomationLogging::RemoveDeployment(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::RemoveDeploymentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::RemoveDeploymentRequest const&
                 request) {
        return child_->RemoveDeployment(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::ListDeploymentsResponse>
TelcoAutomationLogging::ListDeployments(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::ListDeploymentsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::ListDeploymentsRequest const&
                 request) { return child_->ListDeployments(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::ListDeploymentRevisionsResponse>
TelcoAutomationLogging::ListDeploymentRevisions(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::ListDeploymentRevisionsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::
                 ListDeploymentRevisionsRequest const& request) {
        return child_->ListDeploymentRevisions(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::DiscardDeploymentChangesResponse>
TelcoAutomationLogging::DiscardDeploymentChanges(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::DiscardDeploymentChangesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::
                 DiscardDeploymentChangesRequest const& request) {
        return child_->DiscardDeploymentChanges(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationLogging::ApplyDeployment(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::ApplyDeploymentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::ApplyDeploymentRequest const&
                 request) { return child_->ApplyDeployment(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::ComputeDeploymentStatusResponse>
TelcoAutomationLogging::ComputeDeploymentStatus(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::ComputeDeploymentStatusRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::
                 ComputeDeploymentStatusRequest const& request) {
        return child_->ComputeDeploymentStatus(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationLogging::RollbackDeployment(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::RollbackDeploymentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::telcoautomation::v1::RollbackDeploymentRequest const&
              request) { return child_->RollbackDeployment(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationLogging::GetHydratedDeployment(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::GetHydratedDeploymentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::
                 GetHydratedDeploymentRequest const& request) {
        return child_->GetHydratedDeployment(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::ListHydratedDeploymentsResponse>
TelcoAutomationLogging::ListHydratedDeployments(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::ListHydratedDeploymentsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::
                 ListHydratedDeploymentsRequest const& request) {
        return child_->ListHydratedDeployments(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationLogging::UpdateHydratedDeployment(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::UpdateHydratedDeploymentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::
                 UpdateHydratedDeploymentRequest const& request) {
        return child_->UpdateHydratedDeployment(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationLogging::ApplyHydratedDeployment(
    grpc::ClientContext& context,
    google::cloud::telcoautomation::v1::ApplyHydratedDeploymentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::telcoautomation::v1::
                 ApplyHydratedDeploymentRequest const& request) {
        return child_->ApplyHydratedDeployment(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TelcoAutomationLogging::AsyncGetOperation(
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

future<Status> TelcoAutomationLogging::AsyncCancelOperation(
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
}  // namespace telcoautomation_v1_internal
}  // namespace cloud
}  // namespace google
