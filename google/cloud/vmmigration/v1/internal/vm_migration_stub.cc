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
// source: google/cloud/vmmigration/v1/vmmigration.proto

#include "google/cloud/vmmigration/v1/internal/vm_migration_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/vmmigration/v1/vmmigration.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace vmmigration_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VmMigrationStub::~VmMigrationStub() = default;

StatusOr<google::cloud::vmmigration::v1::ListSourcesResponse>
DefaultVmMigrationStub::ListSources(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::ListSourcesRequest const& request) {
  google::cloud::vmmigration::v1::ListSourcesResponse response;
  auto status = grpc_stub_->ListSources(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vmmigration::v1::Source>
DefaultVmMigrationStub::GetSource(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::GetSourceRequest const& request) {
  google::cloud::vmmigration::v1::Source response;
  auto status = grpc_stub_->GetSource(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncCreateSource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::CreateSourceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::CreateSourceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vmmigration::v1::CreateSourceRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateSource(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncUpdateSource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::UpdateSourceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::UpdateSourceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vmmigration::v1::UpdateSourceRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateSource(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncDeleteSource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::DeleteSourceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::DeleteSourceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vmmigration::v1::DeleteSourceRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteSource(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::vmmigration::v1::FetchInventoryResponse>
DefaultVmMigrationStub::FetchInventory(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::FetchInventoryRequest const& request) {
  google::cloud::vmmigration::v1::FetchInventoryResponse response;
  auto status = grpc_stub_->FetchInventory(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vmmigration::v1::ListUtilizationReportsResponse>
DefaultVmMigrationStub::ListUtilizationReports(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::ListUtilizationReportsRequest const&
        request) {
  google::cloud::vmmigration::v1::ListUtilizationReportsResponse response;
  auto status =
      grpc_stub_->ListUtilizationReports(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vmmigration::v1::UtilizationReport>
DefaultVmMigrationStub::GetUtilizationReport(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::GetUtilizationReportRequest const&
        request) {
  google::cloud::vmmigration::v1::UtilizationReport response;
  auto status = grpc_stub_->GetUtilizationReport(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncCreateUtilizationReport(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::CreateUtilizationReportRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::CreateUtilizationReportRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::vmmigration::v1::CreateUtilizationReportRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateUtilizationReport(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncDeleteUtilizationReport(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::DeleteUtilizationReportRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::DeleteUtilizationReportRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::vmmigration::v1::DeleteUtilizationReportRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteUtilizationReport(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::vmmigration::v1::ListDatacenterConnectorsResponse>
DefaultVmMigrationStub::ListDatacenterConnectors(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::ListDatacenterConnectorsRequest const&
        request) {
  google::cloud::vmmigration::v1::ListDatacenterConnectorsResponse response;
  auto status =
      grpc_stub_->ListDatacenterConnectors(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vmmigration::v1::DatacenterConnector>
DefaultVmMigrationStub::GetDatacenterConnector(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::GetDatacenterConnectorRequest const&
        request) {
  google::cloud::vmmigration::v1::DatacenterConnector response;
  auto status =
      grpc_stub_->GetDatacenterConnector(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncCreateDatacenterConnector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::CreateDatacenterConnectorRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::CreateDatacenterConnectorRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vmmigration::v1::
                 CreateDatacenterConnectorRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateDatacenterConnector(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncDeleteDatacenterConnector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::DeleteDatacenterConnectorRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::DeleteDatacenterConnectorRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vmmigration::v1::
                 DeleteDatacenterConnectorRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteDatacenterConnector(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncUpgradeAppliance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::UpgradeApplianceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::UpgradeApplianceRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vmmigration::v1::UpgradeApplianceRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpgradeAppliance(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncCreateMigratingVm(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::CreateMigratingVmRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::CreateMigratingVmRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vmmigration::v1::CreateMigratingVmRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateMigratingVm(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::vmmigration::v1::ListMigratingVmsResponse>
DefaultVmMigrationStub::ListMigratingVms(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::ListMigratingVmsRequest const& request) {
  google::cloud::vmmigration::v1::ListMigratingVmsResponse response;
  auto status = grpc_stub_->ListMigratingVms(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vmmigration::v1::MigratingVm>
DefaultVmMigrationStub::GetMigratingVm(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::GetMigratingVmRequest const& request) {
  google::cloud::vmmigration::v1::MigratingVm response;
  auto status = grpc_stub_->GetMigratingVm(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncUpdateMigratingVm(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::UpdateMigratingVmRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::UpdateMigratingVmRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vmmigration::v1::UpdateMigratingVmRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateMigratingVm(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncDeleteMigratingVm(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::DeleteMigratingVmRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::DeleteMigratingVmRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vmmigration::v1::DeleteMigratingVmRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteMigratingVm(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncStartMigration(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::StartMigrationRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::StartMigrationRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::vmmigration::v1::StartMigrationRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncStartMigration(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncResumeMigration(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::ResumeMigrationRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::ResumeMigrationRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::vmmigration::v1::ResumeMigrationRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncResumeMigration(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncPauseMigration(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::PauseMigrationRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::PauseMigrationRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::vmmigration::v1::PauseMigrationRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncPauseMigration(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncFinalizeMigration(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::FinalizeMigrationRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::FinalizeMigrationRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vmmigration::v1::FinalizeMigrationRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncFinalizeMigration(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncCreateCloneJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::CreateCloneJobRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::CreateCloneJobRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::vmmigration::v1::CreateCloneJobRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateCloneJob(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncCancelCloneJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::CancelCloneJobRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::CancelCloneJobRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::vmmigration::v1::CancelCloneJobRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCancelCloneJob(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::vmmigration::v1::ListCloneJobsResponse>
DefaultVmMigrationStub::ListCloneJobs(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::ListCloneJobsRequest const& request) {
  google::cloud::vmmigration::v1::ListCloneJobsResponse response;
  auto status = grpc_stub_->ListCloneJobs(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vmmigration::v1::CloneJob>
DefaultVmMigrationStub::GetCloneJob(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::GetCloneJobRequest const& request) {
  google::cloud::vmmigration::v1::CloneJob response;
  auto status = grpc_stub_->GetCloneJob(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncCreateCutoverJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::CreateCutoverJobRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::CreateCutoverJobRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vmmigration::v1::CreateCutoverJobRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateCutoverJob(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncCancelCutoverJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::CancelCutoverJobRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::CancelCutoverJobRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vmmigration::v1::CancelCutoverJobRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCancelCutoverJob(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::vmmigration::v1::ListCutoverJobsResponse>
DefaultVmMigrationStub::ListCutoverJobs(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::ListCutoverJobsRequest const& request) {
  google::cloud::vmmigration::v1::ListCutoverJobsResponse response;
  auto status = grpc_stub_->ListCutoverJobs(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vmmigration::v1::CutoverJob>
DefaultVmMigrationStub::GetCutoverJob(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::GetCutoverJobRequest const& request) {
  google::cloud::vmmigration::v1::CutoverJob response;
  auto status = grpc_stub_->GetCutoverJob(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vmmigration::v1::ListGroupsResponse>
DefaultVmMigrationStub::ListGroups(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::ListGroupsRequest const& request) {
  google::cloud::vmmigration::v1::ListGroupsResponse response;
  auto status = grpc_stub_->ListGroups(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vmmigration::v1::Group>
DefaultVmMigrationStub::GetGroup(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::GetGroupRequest const& request) {
  google::cloud::vmmigration::v1::Group response;
  auto status = grpc_stub_->GetGroup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncCreateGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::CreateGroupRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::CreateGroupRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vmmigration::v1::CreateGroupRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateGroup(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncUpdateGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::UpdateGroupRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::UpdateGroupRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vmmigration::v1::UpdateGroupRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateGroup(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncDeleteGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::DeleteGroupRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::DeleteGroupRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vmmigration::v1::DeleteGroupRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteGroup(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncAddGroupMigration(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::AddGroupMigrationRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::AddGroupMigrationRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vmmigration::v1::AddGroupMigrationRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncAddGroupMigration(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncRemoveGroupMigration(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::RemoveGroupMigrationRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::RemoveGroupMigrationRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vmmigration::v1::RemoveGroupMigrationRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRemoveGroupMigration(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::vmmigration::v1::ListTargetProjectsResponse>
DefaultVmMigrationStub::ListTargetProjects(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::ListTargetProjectsRequest const& request) {
  google::cloud::vmmigration::v1::ListTargetProjectsResponse response;
  auto status = grpc_stub_->ListTargetProjects(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vmmigration::v1::TargetProject>
DefaultVmMigrationStub::GetTargetProject(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::GetTargetProjectRequest const& request) {
  google::cloud::vmmigration::v1::TargetProject response;
  auto status = grpc_stub_->GetTargetProject(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncCreateTargetProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::CreateTargetProjectRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::CreateTargetProjectRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vmmigration::v1::CreateTargetProjectRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateTargetProject(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncUpdateTargetProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::UpdateTargetProjectRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::UpdateTargetProjectRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vmmigration::v1::UpdateTargetProjectRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateTargetProject(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncDeleteTargetProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vmmigration::v1::DeleteTargetProjectRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vmmigration::v1::DeleteTargetProjectRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vmmigration::v1::DeleteTargetProjectRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteTargetProject(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::vmmigration::v1::ListReplicationCyclesResponse>
DefaultVmMigrationStub::ListReplicationCycles(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::ListReplicationCyclesRequest const&
        request) {
  google::cloud::vmmigration::v1::ListReplicationCyclesResponse response;
  auto status = grpc_stub_->ListReplicationCycles(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vmmigration::v1::ReplicationCycle>
DefaultVmMigrationStub::GetReplicationCycle(
    grpc::ClientContext& context,
    google::cloud::vmmigration::v1::GetReplicationCycleRequest const& request) {
  google::cloud::vmmigration::v1::ReplicationCycle response;
  auto status = grpc_stub_->GetReplicationCycle(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultVmMigrationStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultVmMigrationStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vmmigration_v1_internal
}  // namespace cloud
}  // namespace google
