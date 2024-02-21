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
// source: google/cloud/baremetalsolution/v2/baremetalsolution.proto

#include "google/cloud/baremetalsolution/v2/internal/bare_metal_solution_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/baremetalsolution/v2/baremetalsolution.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace baremetalsolution_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BareMetalSolutionLogging::BareMetalSolutionLogging(
    std::shared_ptr<BareMetalSolutionStub> child,
    TracingOptions tracing_options, std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::cloud::baremetalsolution::v2::ListInstancesResponse>
BareMetalSolutionLogging::ListInstances(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::ListInstancesRequest const&
                 request) { return child_->ListInstances(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::Instance>
BareMetalSolutionLogging::GetInstance(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::GetInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::GetInstanceRequest const&
                 request) { return child_->GetInstance(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionLogging::AsyncUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::baremetalsolution::v2::UpdateInstanceRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::baremetalsolution::v2::UpdateInstanceRequest const&
                 request) {
        return child_->AsyncUpdateInstance(cq, std::move(context), options,
                                           request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::Instance>
BareMetalSolutionLogging::RenameInstance(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::RenameInstanceRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::RenameInstanceRequest const&
                 request) { return child_->RenameInstance(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionLogging::AsyncResetInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::baremetalsolution::v2::ResetInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::baremetalsolution::v2::ResetInstanceRequest const&
                 request) {
        return child_->AsyncResetInstance(cq, std::move(context), options,
                                          request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionLogging::AsyncStartInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::baremetalsolution::v2::StartInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::baremetalsolution::v2::StartInstanceRequest const&
                 request) {
        return child_->AsyncStartInstance(cq, std::move(context), options,
                                          request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionLogging::AsyncStopInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::baremetalsolution::v2::StopInstanceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::baremetalsolution::v2::StopInstanceRequest const&
                 request) {
        return child_->AsyncStopInstance(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionLogging::AsyncEnableInteractiveSerialConsole(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::baremetalsolution::v2::
        EnableInteractiveSerialConsoleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::baremetalsolution::v2::
                 EnableInteractiveSerialConsoleRequest const& request) {
        return child_->AsyncEnableInteractiveSerialConsole(
            cq, std::move(context), options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionLogging::AsyncDisableInteractiveSerialConsole(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::baremetalsolution::v2::
        DisableInteractiveSerialConsoleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::baremetalsolution::v2::
                 DisableInteractiveSerialConsoleRequest const& request) {
        return child_->AsyncDisableInteractiveSerialConsole(
            cq, std::move(context), options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionLogging::AsyncDetachLun(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::baremetalsolution::v2::DetachLunRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::baremetalsolution::v2::DetachLunRequest const&
                 request) {
        return child_->AsyncDetachLun(cq, std::move(context), options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::ListSSHKeysResponse>
BareMetalSolutionLogging::ListSSHKeys(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListSSHKeysRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::ListSSHKeysRequest const&
                 request) { return child_->ListSSHKeys(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::SSHKey>
BareMetalSolutionLogging::CreateSSHKey(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::CreateSSHKeyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::CreateSSHKeyRequest const&
                 request) { return child_->CreateSSHKey(context, request); },
      context, request, __func__, tracing_options_);
}

Status BareMetalSolutionLogging::DeleteSSHKey(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::DeleteSSHKeyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::DeleteSSHKeyRequest const&
                 request) { return child_->DeleteSSHKey(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::ListVolumesResponse>
BareMetalSolutionLogging::ListVolumes(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListVolumesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::ListVolumesRequest const&
                 request) { return child_->ListVolumes(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::Volume>
BareMetalSolutionLogging::GetVolume(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::GetVolumeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::GetVolumeRequest const&
                 request) { return child_->GetVolume(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionLogging::AsyncUpdateVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::baremetalsolution::v2::UpdateVolumeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::baremetalsolution::v2::UpdateVolumeRequest const&
                 request) {
        return child_->AsyncUpdateVolume(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::Volume>
BareMetalSolutionLogging::RenameVolume(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::RenameVolumeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::RenameVolumeRequest const&
                 request) { return child_->RenameVolume(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionLogging::AsyncEvictVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::baremetalsolution::v2::EvictVolumeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::baremetalsolution::v2::EvictVolumeRequest const&
                 request) {
        return child_->AsyncEvictVolume(cq, std::move(context), options,
                                        request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionLogging::AsyncResizeVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::baremetalsolution::v2::ResizeVolumeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::baremetalsolution::v2::ResizeVolumeRequest const&
                 request) {
        return child_->AsyncResizeVolume(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::ListNetworksResponse>
BareMetalSolutionLogging::ListNetworks(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListNetworksRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::ListNetworksRequest const&
                 request) { return child_->ListNetworks(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::ListNetworkUsageResponse>
BareMetalSolutionLogging::ListNetworkUsage(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListNetworkUsageRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::baremetalsolution::v2::ListNetworkUsageRequest const&
              request) { return child_->ListNetworkUsage(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::Network>
BareMetalSolutionLogging::GetNetwork(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::GetNetworkRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::GetNetworkRequest const&
                 request) { return child_->GetNetwork(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionLogging::AsyncUpdateNetwork(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::baremetalsolution::v2::UpdateNetworkRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::baremetalsolution::v2::UpdateNetworkRequest const&
                 request) {
        return child_->AsyncUpdateNetwork(cq, std::move(context), options,
                                          request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>
BareMetalSolutionLogging::CreateVolumeSnapshot(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::CreateVolumeSnapshotRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::
                 CreateVolumeSnapshotRequest const& request) {
        return child_->CreateVolumeSnapshot(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionLogging::AsyncRestoreVolumeSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::baremetalsolution::v2::RestoreVolumeSnapshotRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::baremetalsolution::v2::
                 RestoreVolumeSnapshotRequest const& request) {
        return child_->AsyncRestoreVolumeSnapshot(cq, std::move(context),
                                                  options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

Status BareMetalSolutionLogging::DeleteVolumeSnapshot(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::DeleteVolumeSnapshotRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::
                 DeleteVolumeSnapshotRequest const& request) {
        return child_->DeleteVolumeSnapshot(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>
BareMetalSolutionLogging::GetVolumeSnapshot(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::GetVolumeSnapshotRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::baremetalsolution::v2::GetVolumeSnapshotRequest const&
              request) { return child_->GetVolumeSnapshot(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::ListVolumeSnapshotsResponse>
BareMetalSolutionLogging::ListVolumeSnapshots(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListVolumeSnapshotsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::
                 ListVolumeSnapshotsRequest const& request) {
        return child_->ListVolumeSnapshots(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::Lun>
BareMetalSolutionLogging::GetLun(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::GetLunRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::baremetalsolution::v2::GetLunRequest const& request) {
        return child_->GetLun(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::ListLunsResponse>
BareMetalSolutionLogging::ListLuns(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListLunsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::ListLunsRequest const&
                 request) { return child_->ListLuns(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionLogging::AsyncEvictLun(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::baremetalsolution::v2::EvictLunRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::baremetalsolution::v2::EvictLunRequest const&
                 request) {
        return child_->AsyncEvictLun(cq, std::move(context), options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::NfsShare>
BareMetalSolutionLogging::GetNfsShare(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::GetNfsShareRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::GetNfsShareRequest const&
                 request) { return child_->GetNfsShare(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::ListNfsSharesResponse>
BareMetalSolutionLogging::ListNfsShares(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListNfsSharesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::ListNfsSharesRequest const&
                 request) { return child_->ListNfsShares(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionLogging::AsyncUpdateNfsShare(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::baremetalsolution::v2::UpdateNfsShareRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::baremetalsolution::v2::UpdateNfsShareRequest const&
                 request) {
        return child_->AsyncUpdateNfsShare(cq, std::move(context), options,
                                           request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionLogging::AsyncCreateNfsShare(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::baremetalsolution::v2::CreateNfsShareRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::baremetalsolution::v2::CreateNfsShareRequest const&
                 request) {
        return child_->AsyncCreateNfsShare(cq, std::move(context), options,
                                           request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::NfsShare>
BareMetalSolutionLogging::RenameNfsShare(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::RenameNfsShareRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::RenameNfsShareRequest const&
                 request) { return child_->RenameNfsShare(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionLogging::AsyncDeleteNfsShare(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::baremetalsolution::v2::DeleteNfsShareRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::baremetalsolution::v2::DeleteNfsShareRequest const&
                 request) {
        return child_->AsyncDeleteNfsShare(cq, std::move(context), options,
                                           request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::ListProvisioningQuotasResponse>
BareMetalSolutionLogging::ListProvisioningQuotas(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListProvisioningQuotasRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::
                 ListProvisioningQuotasRequest const& request) {
        return child_->ListProvisioningQuotas(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::SubmitProvisioningConfigResponse>
BareMetalSolutionLogging::SubmitProvisioningConfig(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::SubmitProvisioningConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::
                 SubmitProvisioningConfigRequest const& request) {
        return child_->SubmitProvisioningConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>
BareMetalSolutionLogging::GetProvisioningConfig(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::GetProvisioningConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::
                 GetProvisioningConfigRequest const& request) {
        return child_->GetProvisioningConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>
BareMetalSolutionLogging::CreateProvisioningConfig(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::CreateProvisioningConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::
                 CreateProvisioningConfigRequest const& request) {
        return child_->CreateProvisioningConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>
BareMetalSolutionLogging::UpdateProvisioningConfig(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::UpdateProvisioningConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::
                 UpdateProvisioningConfigRequest const& request) {
        return child_->UpdateProvisioningConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::Network>
BareMetalSolutionLogging::RenameNetwork(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::RenameNetworkRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::RenameNetworkRequest const&
                 request) { return child_->RenameNetwork(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::baremetalsolution::v2::ListOSImagesResponse>
BareMetalSolutionLogging::ListOSImages(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListOSImagesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::baremetalsolution::v2::ListOSImagesRequest const&
                 request) { return child_->ListOSImages(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionLogging::AsyncGetOperation(
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

future<Status> BareMetalSolutionLogging::AsyncCancelOperation(
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
}  // namespace baremetalsolution_v2_internal
}  // namespace cloud
}  // namespace google
