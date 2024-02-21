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
// source: google/cloud/netapp/v1/cloud_netapp_service.proto

#include "google/cloud/netapp/v1/net_app_connection.h"
#include "google/cloud/netapp/v1/internal/net_app_connection_impl.h"
#include "google/cloud/netapp/v1/internal/net_app_option_defaults.h"
#include "google/cloud/netapp/v1/internal/net_app_stub_factory.h"
#include "google/cloud/netapp/v1/internal/net_app_tracing_connection.h"
#include "google/cloud/netapp/v1/net_app_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace netapp_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NetAppConnection::~NetAppConnection() = default;

StreamRange<google::cloud::netapp::v1::StoragePool>
NetAppConnection::ListStoragePools(
    google::cloud::netapp::v1::
        ListStoragePoolsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::netapp::v1::StoragePool>>();
}

future<StatusOr<google::cloud::netapp::v1::StoragePool>>
NetAppConnection::CreateStoragePool(
    google::cloud::netapp::v1::CreateStoragePoolRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::StoragePool>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::netapp::v1::StoragePool>
NetAppConnection::GetStoragePool(
    google::cloud::netapp::v1::GetStoragePoolRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::netapp::v1::StoragePool>>
NetAppConnection::UpdateStoragePool(
    google::cloud::netapp::v1::UpdateStoragePoolRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::StoragePool>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
NetAppConnection::DeleteStoragePool(
    google::cloud::netapp::v1::DeleteStoragePoolRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::netapp::v1::Volume> NetAppConnection::ListVolumes(
    google::cloud::netapp::v1::
        ListVolumesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::netapp::v1::Volume>>();
}

StatusOr<google::cloud::netapp::v1::Volume> NetAppConnection::GetVolume(
    google::cloud::netapp::v1::GetVolumeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::netapp::v1::Volume>>
NetAppConnection::CreateVolume(
    google::cloud::netapp::v1::CreateVolumeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::Volume>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::netapp::v1::Volume>>
NetAppConnection::UpdateVolume(
    google::cloud::netapp::v1::UpdateVolumeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::Volume>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
NetAppConnection::DeleteVolume(
    google::cloud::netapp::v1::DeleteVolumeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::netapp::v1::Volume>>
NetAppConnection::RevertVolume(
    google::cloud::netapp::v1::RevertVolumeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::Volume>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::netapp::v1::Snapshot>
NetAppConnection::ListSnapshots(
    google::cloud::netapp::v1::
        ListSnapshotsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::netapp::v1::Snapshot>>();
}

StatusOr<google::cloud::netapp::v1::Snapshot> NetAppConnection::GetSnapshot(
    google::cloud::netapp::v1::GetSnapshotRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::netapp::v1::Snapshot>>
NetAppConnection::CreateSnapshot(
    google::cloud::netapp::v1::CreateSnapshotRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::Snapshot>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
NetAppConnection::DeleteSnapshot(
    google::cloud::netapp::v1::DeleteSnapshotRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::netapp::v1::Snapshot>>
NetAppConnection::UpdateSnapshot(
    google::cloud::netapp::v1::UpdateSnapshotRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::Snapshot>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::netapp::v1::ActiveDirectory>
NetAppConnection::ListActiveDirectories(
    google::cloud::netapp::v1::
        ListActiveDirectoriesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::netapp::v1::ActiveDirectory>>();
}

StatusOr<google::cloud::netapp::v1::ActiveDirectory>
NetAppConnection::GetActiveDirectory(
    google::cloud::netapp::v1::GetActiveDirectoryRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::netapp::v1::ActiveDirectory>>
NetAppConnection::CreateActiveDirectory(
    google::cloud::netapp::v1::CreateActiveDirectoryRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::ActiveDirectory>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::netapp::v1::ActiveDirectory>>
NetAppConnection::UpdateActiveDirectory(
    google::cloud::netapp::v1::UpdateActiveDirectoryRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::ActiveDirectory>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
NetAppConnection::DeleteActiveDirectory(
    google::cloud::netapp::v1::DeleteActiveDirectoryRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::netapp::v1::KmsConfig>
NetAppConnection::ListKmsConfigs(
    google::cloud::netapp::v1::
        ListKmsConfigsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::netapp::v1::KmsConfig>>();
}

future<StatusOr<google::cloud::netapp::v1::KmsConfig>>
NetAppConnection::CreateKmsConfig(
    google::cloud::netapp::v1::CreateKmsConfigRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::KmsConfig>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::netapp::v1::KmsConfig> NetAppConnection::GetKmsConfig(
    google::cloud::netapp::v1::GetKmsConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::netapp::v1::KmsConfig>>
NetAppConnection::UpdateKmsConfig(
    google::cloud::netapp::v1::UpdateKmsConfigRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::KmsConfig>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::netapp::v1::KmsConfig>>
NetAppConnection::EncryptVolumes(
    google::cloud::netapp::v1::EncryptVolumesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::KmsConfig>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::netapp::v1::VerifyKmsConfigResponse>
NetAppConnection::VerifyKmsConfig(
    google::cloud::netapp::v1::VerifyKmsConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
NetAppConnection::DeleteKmsConfig(
    google::cloud::netapp::v1::DeleteKmsConfigRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::netapp::v1::Replication>
NetAppConnection::ListReplications(
    google::cloud::netapp::v1::
        ListReplicationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::netapp::v1::Replication>>();
}

StatusOr<google::cloud::netapp::v1::Replication>
NetAppConnection::GetReplication(
    google::cloud::netapp::v1::GetReplicationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::netapp::v1::Replication>>
NetAppConnection::CreateReplication(
    google::cloud::netapp::v1::CreateReplicationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::Replication>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
NetAppConnection::DeleteReplication(
    google::cloud::netapp::v1::DeleteReplicationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::netapp::v1::Replication>>
NetAppConnection::UpdateReplication(
    google::cloud::netapp::v1::UpdateReplicationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::Replication>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::netapp::v1::Replication>>
NetAppConnection::StopReplication(
    google::cloud::netapp::v1::StopReplicationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::Replication>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::netapp::v1::Replication>>
NetAppConnection::ResumeReplication(
    google::cloud::netapp::v1::ResumeReplicationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::Replication>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::netapp::v1::Replication>>
NetAppConnection::ReverseReplicationDirection(
    google::cloud::netapp::v1::ReverseReplicationDirectionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::Replication>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::netapp::v1::BackupVault>>
NetAppConnection::CreateBackupVault(
    google::cloud::netapp::v1::CreateBackupVaultRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::BackupVault>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::netapp::v1::BackupVault>
NetAppConnection::GetBackupVault(
    google::cloud::netapp::v1::GetBackupVaultRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::netapp::v1::BackupVault>
NetAppConnection::ListBackupVaults(
    google::cloud::netapp::v1::
        ListBackupVaultsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::netapp::v1::BackupVault>>();
}

future<StatusOr<google::cloud::netapp::v1::BackupVault>>
NetAppConnection::UpdateBackupVault(
    google::cloud::netapp::v1::UpdateBackupVaultRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::BackupVault>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
NetAppConnection::DeleteBackupVault(
    google::cloud::netapp::v1::DeleteBackupVaultRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::netapp::v1::Backup>>
NetAppConnection::CreateBackup(
    google::cloud::netapp::v1::CreateBackupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::Backup>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::netapp::v1::Backup> NetAppConnection::GetBackup(
    google::cloud::netapp::v1::GetBackupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::netapp::v1::Backup> NetAppConnection::ListBackups(
    google::cloud::netapp::v1::
        ListBackupsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::netapp::v1::Backup>>();
}

future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
NetAppConnection::DeleteBackup(
    google::cloud::netapp::v1::DeleteBackupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::netapp::v1::Backup>>
NetAppConnection::UpdateBackup(
    google::cloud::netapp::v1::UpdateBackupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::Backup>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::netapp::v1::BackupPolicy>>
NetAppConnection::CreateBackupPolicy(
    google::cloud::netapp::v1::CreateBackupPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::BackupPolicy>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::netapp::v1::BackupPolicy>
NetAppConnection::GetBackupPolicy(
    google::cloud::netapp::v1::GetBackupPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::netapp::v1::BackupPolicy>
NetAppConnection::ListBackupPolicies(
    google::cloud::netapp::v1::
        ListBackupPoliciesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::netapp::v1::BackupPolicy>>();
}

future<StatusOr<google::cloud::netapp::v1::BackupPolicy>>
NetAppConnection::UpdateBackupPolicy(
    google::cloud::netapp::v1::UpdateBackupPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::BackupPolicy>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
NetAppConnection::DeleteBackupPolicy(
    google::cloud::netapp::v1::DeleteBackupPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::netapp::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<NetAppConnection> MakeNetAppConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 NetAppPolicyOptionList>(options, __func__);
  options = netapp_v1_internal::NetAppDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub =
      netapp_v1_internal::CreateDefaultNetAppStub(std::move(auth), options);
  return netapp_v1_internal::MakeNetAppTracingConnection(
      std::make_shared<netapp_v1_internal::NetAppConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace netapp_v1
}  // namespace cloud
}  // namespace google
