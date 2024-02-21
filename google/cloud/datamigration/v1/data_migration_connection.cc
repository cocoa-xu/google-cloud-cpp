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
// source: google/cloud/clouddms/v1/clouddms.proto

#include "google/cloud/datamigration/v1/data_migration_connection.h"
#include "google/cloud/datamigration/v1/data_migration_options.h"
#include "google/cloud/datamigration/v1/internal/data_migration_connection_impl.h"
#include "google/cloud/datamigration/v1/internal/data_migration_option_defaults.h"
#include "google/cloud/datamigration/v1/internal/data_migration_stub_factory.h"
#include "google/cloud/datamigration/v1/internal/data_migration_tracing_connection.h"
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
namespace datamigration_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataMigrationServiceConnection::~DataMigrationServiceConnection() = default;

StreamRange<google::cloud::clouddms::v1::MigrationJob>
DataMigrationServiceConnection::ListMigrationJobs(
    google::cloud::clouddms::v1::
        ListMigrationJobsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::clouddms::v1::MigrationJob>>();
}

StatusOr<google::cloud::clouddms::v1::MigrationJob>
DataMigrationServiceConnection::GetMigrationJob(
    google::cloud::clouddms::v1::GetMigrationJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceConnection::CreateMigrationJob(
    google::cloud::clouddms::v1::CreateMigrationJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::MigrationJob>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceConnection::UpdateMigrationJob(
    google::cloud::clouddms::v1::UpdateMigrationJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::MigrationJob>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
DataMigrationServiceConnection::DeleteMigrationJob(
    google::cloud::clouddms::v1::DeleteMigrationJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceConnection::StartMigrationJob(
    google::cloud::clouddms::v1::StartMigrationJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::MigrationJob>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceConnection::StopMigrationJob(
    google::cloud::clouddms::v1::StopMigrationJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::MigrationJob>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceConnection::ResumeMigrationJob(
    google::cloud::clouddms::v1::ResumeMigrationJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::MigrationJob>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceConnection::PromoteMigrationJob(
    google::cloud::clouddms::v1::PromoteMigrationJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::MigrationJob>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceConnection::VerifyMigrationJob(
    google::cloud::clouddms::v1::VerifyMigrationJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::MigrationJob>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceConnection::RestartMigrationJob(
    google::cloud::clouddms::v1::RestartMigrationJobRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::MigrationJob>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::clouddms::v1::SshScript>
DataMigrationServiceConnection::GenerateSshScript(
    google::cloud::clouddms::v1::GenerateSshScriptRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::clouddms::v1::TcpProxyScript>
DataMigrationServiceConnection::GenerateTcpProxyScript(
    google::cloud::clouddms::v1::GenerateTcpProxyScriptRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::clouddms::v1::ConnectionProfile>
DataMigrationServiceConnection::ListConnectionProfiles(
    google::cloud::clouddms::v1::
        ListConnectionProfilesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::clouddms::v1::ConnectionProfile>>();
}

StatusOr<google::cloud::clouddms::v1::ConnectionProfile>
DataMigrationServiceConnection::GetConnectionProfile(
    google::cloud::clouddms::v1::GetConnectionProfileRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>
DataMigrationServiceConnection::CreateConnectionProfile(
    google::cloud::clouddms::v1::CreateConnectionProfileRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>
DataMigrationServiceConnection::UpdateConnectionProfile(
    google::cloud::clouddms::v1::UpdateConnectionProfileRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
DataMigrationServiceConnection::DeleteConnectionProfile(
    google::cloud::clouddms::v1::DeleteConnectionProfileRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::PrivateConnection>>
DataMigrationServiceConnection::CreatePrivateConnection(
    google::cloud::clouddms::v1::CreatePrivateConnectionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::PrivateConnection>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::clouddms::v1::PrivateConnection>
DataMigrationServiceConnection::GetPrivateConnection(
    google::cloud::clouddms::v1::GetPrivateConnectionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::clouddms::v1::PrivateConnection>
DataMigrationServiceConnection::ListPrivateConnections(
    google::cloud::clouddms::v1::
        ListPrivateConnectionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::clouddms::v1::PrivateConnection>>();
}

future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
DataMigrationServiceConnection::DeletePrivateConnection(
    google::cloud::clouddms::v1::DeletePrivateConnectionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>
DataMigrationServiceConnection::GetConversionWorkspace(
    google::cloud::clouddms::v1::GetConversionWorkspaceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::clouddms::v1::ConversionWorkspace>
DataMigrationServiceConnection::ListConversionWorkspaces(
    google::cloud::clouddms::v1::
        ListConversionWorkspacesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::clouddms::v1::ConversionWorkspace>>();
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceConnection::CreateConversionWorkspace(
    google::cloud::clouddms::v1::CreateConversionWorkspaceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceConnection::UpdateConversionWorkspace(
    google::cloud::clouddms::v1::UpdateConversionWorkspaceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
DataMigrationServiceConnection::DeleteConversionWorkspace(
    google::cloud::clouddms::v1::DeleteConversionWorkspaceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::clouddms::v1::MappingRule>
DataMigrationServiceConnection::CreateMappingRule(
    google::cloud::clouddms::v1::CreateMappingRuleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status DataMigrationServiceConnection::DeleteMappingRule(
    google::cloud::clouddms::v1::DeleteMappingRuleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::clouddms::v1::MappingRule>
DataMigrationServiceConnection::ListMappingRules(
    google::cloud::clouddms::v1::
        ListMappingRulesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::clouddms::v1::MappingRule>>();
}

StatusOr<google::cloud::clouddms::v1::MappingRule>
DataMigrationServiceConnection::GetMappingRule(
    google::cloud::clouddms::v1::GetMappingRuleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceConnection::SeedConversionWorkspace(
    google::cloud::clouddms::v1::SeedConversionWorkspaceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceConnection::ImportMappingRules(
    google::cloud::clouddms::v1::ImportMappingRulesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceConnection::ConvertConversionWorkspace(
    google::cloud::clouddms::v1::ConvertConversionWorkspaceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceConnection::CommitConversionWorkspace(
    google::cloud::clouddms::v1::CommitConversionWorkspaceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceConnection::RollbackConversionWorkspace(
    google::cloud::clouddms::v1::RollbackConversionWorkspaceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceConnection::ApplyConversionWorkspace(
    google::cloud::clouddms::v1::ApplyConversionWorkspaceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::clouddms::v1::DatabaseEntity>
DataMigrationServiceConnection::DescribeDatabaseEntities(
    google::cloud::clouddms::v1::
        DescribeDatabaseEntitiesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::clouddms::v1::DatabaseEntity>>();
}

StatusOr<google::cloud::clouddms::v1::SearchBackgroundJobsResponse>
DataMigrationServiceConnection::SearchBackgroundJobs(
    google::cloud::clouddms::v1::SearchBackgroundJobsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<
    google::cloud::clouddms::v1::DescribeConversionWorkspaceRevisionsResponse>
DataMigrationServiceConnection::DescribeConversionWorkspaceRevisions(
    google::cloud::clouddms::v1::
        DescribeConversionWorkspaceRevisionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<std::string> DataMigrationServiceConnection::FetchStaticIps(
    google::cloud::clouddms::v1::
        FetchStaticIpsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<std::string>>();
}

std::shared_ptr<DataMigrationServiceConnection>
MakeDataMigrationServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 DataMigrationServicePolicyOptionList>(
      options, __func__);
  options = datamigration_v1_internal::DataMigrationServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = datamigration_v1_internal::CreateDefaultDataMigrationServiceStub(
      std::move(auth), options);
  return datamigration_v1_internal::MakeDataMigrationServiceTracingConnection(
      std::make_shared<
          datamigration_v1_internal::DataMigrationServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datamigration_v1
}  // namespace cloud
}  // namespace google
