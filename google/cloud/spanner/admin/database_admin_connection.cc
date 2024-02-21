// Copyright 2021 Google LLC
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
// source: google/spanner/admin/database/v1/spanner_database_admin.proto

#include "google/cloud/spanner/admin/database_admin_connection.h"
#include "google/cloud/spanner/admin/database_admin_options.h"
#include "google/cloud/spanner/admin/internal/database_admin_connection_impl.h"
#include "google/cloud/spanner/admin/internal/database_admin_option_defaults.h"
#include "google/cloud/spanner/admin/internal/database_admin_stub_factory.h"
#include "google/cloud/spanner/admin/internal/database_admin_tracing_connection.h"
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
namespace spanner_admin {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatabaseAdminConnection::~DatabaseAdminConnection() = default;

StreamRange<google::spanner::admin::database::v1::Database>
DatabaseAdminConnection::ListDatabases(
    google::spanner::admin::database::v1::
        ListDatabasesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::spanner::admin::database::v1::Database>>();
}

future<StatusOr<google::spanner::admin::database::v1::Database>>
DatabaseAdminConnection::CreateDatabase(
    google::spanner::admin::database::v1::CreateDatabaseRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::spanner::admin::database::v1::Database>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::spanner::admin::database::v1::Database>
DatabaseAdminConnection::GetDatabase(
    google::spanner::admin::database::v1::GetDatabaseRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::spanner::admin::database::v1::Database>>
DatabaseAdminConnection::UpdateDatabase(
    google::spanner::admin::database::v1::UpdateDatabaseRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::spanner::admin::database::v1::Database>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<
    StatusOr<google::spanner::admin::database::v1::UpdateDatabaseDdlMetadata>>
DatabaseAdminConnection::UpdateDatabaseDdl(
    google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&) {
  return google::cloud::make_ready_future<StatusOr<
      google::spanner::admin::database::v1::UpdateDatabaseDdlMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

Status DatabaseAdminConnection::DropDatabase(
    google::spanner::admin::database::v1::DropDatabaseRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::spanner::admin::database::v1::GetDatabaseDdlResponse>
DatabaseAdminConnection::GetDatabaseDdl(
    google::spanner::admin::database::v1::GetDatabaseDdlRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> DatabaseAdminConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> DatabaseAdminConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DatabaseAdminConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::spanner::admin::database::v1::Backup>>
DatabaseAdminConnection::CreateBackup(
    google::spanner::admin::database::v1::CreateBackupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::spanner::admin::database::v1::Backup>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::spanner::admin::database::v1::Backup>>
DatabaseAdminConnection::CopyBackup(
    google::spanner::admin::database::v1::CopyBackupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::spanner::admin::database::v1::Backup>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::spanner::admin::database::v1::Backup>
DatabaseAdminConnection::GetBackup(
    google::spanner::admin::database::v1::GetBackupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::spanner::admin::database::v1::Backup>
DatabaseAdminConnection::UpdateBackup(
    google::spanner::admin::database::v1::UpdateBackupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status DatabaseAdminConnection::DeleteBackup(
    google::spanner::admin::database::v1::DeleteBackupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::spanner::admin::database::v1::Backup>
DatabaseAdminConnection::ListBackups(
    google::spanner::admin::database::v1::
        ListBackupsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::spanner::admin::database::v1::Backup>>();
}

future<StatusOr<google::spanner::admin::database::v1::Database>>
DatabaseAdminConnection::RestoreDatabase(
    google::spanner::admin::database::v1::RestoreDatabaseRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::spanner::admin::database::v1::Database>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::longrunning::Operation>
DatabaseAdminConnection::ListDatabaseOperations(
    google::spanner::admin::database::v1::
        ListDatabaseOperationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::longrunning::Operation>>();
}

StreamRange<google::longrunning::Operation>
DatabaseAdminConnection::ListBackupOperations(
    google::spanner::admin::database::v1::
        ListBackupOperationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::longrunning::Operation>>();
}

StreamRange<google::spanner::admin::database::v1::DatabaseRole>
DatabaseAdminConnection::ListDatabaseRoles(
    google::spanner::admin::database::v1::
        ListDatabaseRolesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::spanner::admin::database::v1::DatabaseRole>>();
}

std::shared_ptr<DatabaseAdminConnection> MakeDatabaseAdminConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 DatabaseAdminPolicyOptionList>(options,
                                                                __func__);
  options =
      spanner_admin_internal::DatabaseAdminDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = spanner_admin_internal::CreateDefaultDatabaseAdminStub(
      std::move(auth), options);
  return spanner_admin_internal::MakeDatabaseAdminTracingConnection(
      std::make_shared<spanner_admin_internal::DatabaseAdminConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin
}  // namespace cloud
}  // namespace google
