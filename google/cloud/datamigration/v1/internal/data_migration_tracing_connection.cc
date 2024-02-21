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

#include "google/cloud/datamigration/v1/internal/data_migration_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace datamigration_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DataMigrationServiceTracingConnection::DataMigrationServiceTracingConnection(
    std::shared_ptr<datamigration_v1::DataMigrationServiceConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::clouddms::v1::MigrationJob>
DataMigrationServiceTracingConnection::ListMigrationJobs(
    google::cloud::clouddms::v1::ListMigrationJobsRequest request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::ListMigrationJobs");
  internal::OTelScope scope(span);
  auto sr = child_->ListMigrationJobs(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::clouddms::v1::MigrationJob>(std::move(span),
                                                 std::move(sr));
}

StatusOr<google::cloud::clouddms::v1::MigrationJob>
DataMigrationServiceTracingConnection::GetMigrationJob(
    google::cloud::clouddms::v1::GetMigrationJobRequest const& request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::GetMigrationJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetMigrationJob(request));
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceTracingConnection::CreateMigrationJob(
    google::cloud::clouddms::v1::CreateMigrationJobRequest const& request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::CreateMigrationJob");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateMigrationJob(request));
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceTracingConnection::UpdateMigrationJob(
    google::cloud::clouddms::v1::UpdateMigrationJobRequest const& request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::UpdateMigrationJob");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateMigrationJob(request));
}

future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
DataMigrationServiceTracingConnection::DeleteMigrationJob(
    google::cloud::clouddms::v1::DeleteMigrationJobRequest const& request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::DeleteMigrationJob");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteMigrationJob(request));
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceTracingConnection::StartMigrationJob(
    google::cloud::clouddms::v1::StartMigrationJobRequest const& request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::StartMigrationJob");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->StartMigrationJob(request));
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceTracingConnection::StopMigrationJob(
    google::cloud::clouddms::v1::StopMigrationJobRequest const& request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::StopMigrationJob");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->StopMigrationJob(request));
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceTracingConnection::ResumeMigrationJob(
    google::cloud::clouddms::v1::ResumeMigrationJobRequest const& request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::ResumeMigrationJob");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ResumeMigrationJob(request));
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceTracingConnection::PromoteMigrationJob(
    google::cloud::clouddms::v1::PromoteMigrationJobRequest const& request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::PromoteMigrationJob");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PromoteMigrationJob(request));
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceTracingConnection::VerifyMigrationJob(
    google::cloud::clouddms::v1::VerifyMigrationJobRequest const& request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::VerifyMigrationJob");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->VerifyMigrationJob(request));
}

future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
DataMigrationServiceTracingConnection::RestartMigrationJob(
    google::cloud::clouddms::v1::RestartMigrationJobRequest const& request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::RestartMigrationJob");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->RestartMigrationJob(request));
}

StatusOr<google::cloud::clouddms::v1::SshScript>
DataMigrationServiceTracingConnection::GenerateSshScript(
    google::cloud::clouddms::v1::GenerateSshScriptRequest const& request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::GenerateSshScript");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GenerateSshScript(request));
}

StatusOr<google::cloud::clouddms::v1::TcpProxyScript>
DataMigrationServiceTracingConnection::GenerateTcpProxyScript(
    google::cloud::clouddms::v1::GenerateTcpProxyScriptRequest const& request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::"
      "GenerateTcpProxyScript");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GenerateTcpProxyScript(request));
}

StreamRange<google::cloud::clouddms::v1::ConnectionProfile>
DataMigrationServiceTracingConnection::ListConnectionProfiles(
    google::cloud::clouddms::v1::ListConnectionProfilesRequest request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::"
      "ListConnectionProfiles");
  internal::OTelScope scope(span);
  auto sr = child_->ListConnectionProfiles(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::clouddms::v1::ConnectionProfile>(std::move(span),
                                                      std::move(sr));
}

StatusOr<google::cloud::clouddms::v1::ConnectionProfile>
DataMigrationServiceTracingConnection::GetConnectionProfile(
    google::cloud::clouddms::v1::GetConnectionProfileRequest const& request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::GetConnectionProfile");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetConnectionProfile(request));
}

future<StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>
DataMigrationServiceTracingConnection::CreateConnectionProfile(
    google::cloud::clouddms::v1::CreateConnectionProfileRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::"
      "CreateConnectionProfile");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateConnectionProfile(request));
}

future<StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>
DataMigrationServiceTracingConnection::UpdateConnectionProfile(
    google::cloud::clouddms::v1::UpdateConnectionProfileRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::"
      "UpdateConnectionProfile");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateConnectionProfile(request));
}

future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
DataMigrationServiceTracingConnection::DeleteConnectionProfile(
    google::cloud::clouddms::v1::DeleteConnectionProfileRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::"
      "DeleteConnectionProfile");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteConnectionProfile(request));
}

future<StatusOr<google::cloud::clouddms::v1::PrivateConnection>>
DataMigrationServiceTracingConnection::CreatePrivateConnection(
    google::cloud::clouddms::v1::CreatePrivateConnectionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::"
      "CreatePrivateConnection");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreatePrivateConnection(request));
}

StatusOr<google::cloud::clouddms::v1::PrivateConnection>
DataMigrationServiceTracingConnection::GetPrivateConnection(
    google::cloud::clouddms::v1::GetPrivateConnectionRequest const& request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::GetPrivateConnection");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetPrivateConnection(request));
}

StreamRange<google::cloud::clouddms::v1::PrivateConnection>
DataMigrationServiceTracingConnection::ListPrivateConnections(
    google::cloud::clouddms::v1::ListPrivateConnectionsRequest request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::"
      "ListPrivateConnections");
  internal::OTelScope scope(span);
  auto sr = child_->ListPrivateConnections(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::clouddms::v1::PrivateConnection>(std::move(span),
                                                      std::move(sr));
}

future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
DataMigrationServiceTracingConnection::DeletePrivateConnection(
    google::cloud::clouddms::v1::DeletePrivateConnectionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::"
      "DeletePrivateConnection");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeletePrivateConnection(request));
}

StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>
DataMigrationServiceTracingConnection::GetConversionWorkspace(
    google::cloud::clouddms::v1::GetConversionWorkspaceRequest const& request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::"
      "GetConversionWorkspace");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetConversionWorkspace(request));
}

StreamRange<google::cloud::clouddms::v1::ConversionWorkspace>
DataMigrationServiceTracingConnection::ListConversionWorkspaces(
    google::cloud::clouddms::v1::ListConversionWorkspacesRequest request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::"
      "ListConversionWorkspaces");
  internal::OTelScope scope(span);
  auto sr = child_->ListConversionWorkspaces(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::clouddms::v1::ConversionWorkspace>(std::move(span),
                                                        std::move(sr));
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceTracingConnection::CreateConversionWorkspace(
    google::cloud::clouddms::v1::CreateConversionWorkspaceRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::"
      "CreateConversionWorkspace");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateConversionWorkspace(request));
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceTracingConnection::UpdateConversionWorkspace(
    google::cloud::clouddms::v1::UpdateConversionWorkspaceRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::"
      "UpdateConversionWorkspace");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateConversionWorkspace(request));
}

future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
DataMigrationServiceTracingConnection::DeleteConversionWorkspace(
    google::cloud::clouddms::v1::DeleteConversionWorkspaceRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::"
      "DeleteConversionWorkspace");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteConversionWorkspace(request));
}

StatusOr<google::cloud::clouddms::v1::MappingRule>
DataMigrationServiceTracingConnection::CreateMappingRule(
    google::cloud::clouddms::v1::CreateMappingRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::CreateMappingRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateMappingRule(request));
}

Status DataMigrationServiceTracingConnection::DeleteMappingRule(
    google::cloud::clouddms::v1::DeleteMappingRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::DeleteMappingRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteMappingRule(request));
}

StreamRange<google::cloud::clouddms::v1::MappingRule>
DataMigrationServiceTracingConnection::ListMappingRules(
    google::cloud::clouddms::v1::ListMappingRulesRequest request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::ListMappingRules");
  internal::OTelScope scope(span);
  auto sr = child_->ListMappingRules(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::clouddms::v1::MappingRule>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::clouddms::v1::MappingRule>
DataMigrationServiceTracingConnection::GetMappingRule(
    google::cloud::clouddms::v1::GetMappingRuleRequest const& request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::GetMappingRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetMappingRule(request));
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceTracingConnection::SeedConversionWorkspace(
    google::cloud::clouddms::v1::SeedConversionWorkspaceRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::"
      "SeedConversionWorkspace");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->SeedConversionWorkspace(request));
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceTracingConnection::ImportMappingRules(
    google::cloud::clouddms::v1::ImportMappingRulesRequest const& request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::ImportMappingRules");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ImportMappingRules(request));
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceTracingConnection::ConvertConversionWorkspace(
    google::cloud::clouddms::v1::ConvertConversionWorkspaceRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::"
      "ConvertConversionWorkspace");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ConvertConversionWorkspace(request));
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceTracingConnection::CommitConversionWorkspace(
    google::cloud::clouddms::v1::CommitConversionWorkspaceRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::"
      "CommitConversionWorkspace");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CommitConversionWorkspace(request));
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceTracingConnection::RollbackConversionWorkspace(
    google::cloud::clouddms::v1::RollbackConversionWorkspaceRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::"
      "RollbackConversionWorkspace");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->RollbackConversionWorkspace(request));
}

future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
DataMigrationServiceTracingConnection::ApplyConversionWorkspace(
    google::cloud::clouddms::v1::ApplyConversionWorkspaceRequest const&
        request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::"
      "ApplyConversionWorkspace");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ApplyConversionWorkspace(request));
}

StreamRange<google::cloud::clouddms::v1::DatabaseEntity>
DataMigrationServiceTracingConnection::DescribeDatabaseEntities(
    google::cloud::clouddms::v1::DescribeDatabaseEntitiesRequest request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::"
      "DescribeDatabaseEntities");
  internal::OTelScope scope(span);
  auto sr = child_->DescribeDatabaseEntities(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::clouddms::v1::DatabaseEntity>(std::move(span),
                                                   std::move(sr));
}

StatusOr<google::cloud::clouddms::v1::SearchBackgroundJobsResponse>
DataMigrationServiceTracingConnection::SearchBackgroundJobs(
    google::cloud::clouddms::v1::SearchBackgroundJobsRequest const& request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::SearchBackgroundJobs");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SearchBackgroundJobs(request));
}

StatusOr<
    google::cloud::clouddms::v1::DescribeConversionWorkspaceRevisionsResponse>
DataMigrationServiceTracingConnection::DescribeConversionWorkspaceRevisions(
    google::cloud::clouddms::v1::
        DescribeConversionWorkspaceRevisionsRequest const& request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::"
      "DescribeConversionWorkspaceRevisions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(
      *span, child_->DescribeConversionWorkspaceRevisions(request));
}

StreamRange<std::string> DataMigrationServiceTracingConnection::FetchStaticIps(
    google::cloud::clouddms::v1::FetchStaticIpsRequest request) {
  auto span = internal::MakeSpan(
      "datamigration_v1::DataMigrationServiceConnection::FetchStaticIps");
  internal::OTelScope scope(span);
  auto sr = child_->FetchStaticIps(std::move(request));
  return internal::MakeTracedStreamRange<std::string>(std::move(span),
                                                      std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<datamigration_v1::DataMigrationServiceConnection>
MakeDataMigrationServiceTracingConnection(
    std::shared_ptr<datamigration_v1::DataMigrationServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<DataMigrationServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datamigration_v1_internal
}  // namespace cloud
}  // namespace google
