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
// source: google/cloud/securitycenter/v1/securitycenter_service.proto

#include "google/cloud/securitycenter/v1/internal/security_center_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/securitycenter/v1/securitycenter_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace securitycenter_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecurityCenterMetadata::SecurityCenterMetadata(
    std::shared_ptr<SecurityCenterStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::longrunning::Operation>>
SecurityCenterMetadata::AsyncBulkMuteFindings(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::securitycenter::v1::BulkMuteFindingsRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncBulkMuteFindings(cq, std::move(context),
                                       std::move(options), request);
}

StatusOr<google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
SecurityCenterMetadata::CreateSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::
        CreateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateSecurityHealthAnalyticsCustomModule(context, options,
                                                           request);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterMetadata::CreateSource(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::CreateSourceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateSource(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterMetadata::CreateFinding(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::CreateFindingRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateFinding(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterMetadata::CreateMuteConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::CreateMuteConfigRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateMuteConfig(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterMetadata::CreateNotificationConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::CreateNotificationConfigRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateNotificationConfig(context, options, request);
}

Status SecurityCenterMetadata::DeleteMuteConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::DeleteMuteConfigRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteMuteConfig(context, options, request);
}

Status SecurityCenterMetadata::DeleteNotificationConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::DeleteNotificationConfigRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteNotificationConfig(context, options, request);
}

Status SecurityCenterMetadata::DeleteSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::
        DeleteSecurityHealthAnalyticsCustomModuleRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteSecurityHealthAnalyticsCustomModule(context, options,
                                                           request);
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterMetadata::GetBigQueryExport(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::GetBigQueryExportRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetBigQueryExport(context, options, request);
}

StatusOr<google::iam::v1::Policy> SecurityCenterMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterMetadata::GetMuteConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::GetMuteConfigRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetMuteConfig(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterMetadata::GetNotificationConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::GetNotificationConfigRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetNotificationConfig(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
SecurityCenterMetadata::GetOrganizationSettings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::GetOrganizationSettingsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOrganizationSettings(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::
             EffectiveSecurityHealthAnalyticsCustomModule>
SecurityCenterMetadata::GetEffectiveSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::
        GetEffectiveSecurityHealthAnalyticsCustomModuleRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEffectiveSecurityHealthAnalyticsCustomModule(
      context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
SecurityCenterMetadata::GetSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::
        GetSecurityHealthAnalyticsCustomModuleRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetSecurityHealthAnalyticsCustomModule(context, options,
                                                        request);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterMetadata::GetSource(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::GetSourceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetSource(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::GroupAssetsResponse>
SecurityCenterMetadata::GroupAssets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::GroupAssetsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->GroupAssets(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::GroupFindingsResponse>
SecurityCenterMetadata::GroupFindings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::GroupFindingsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->GroupFindings(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::ListAssetsResponse>
SecurityCenterMetadata::ListAssets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::ListAssetsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListAssets(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::
             ListDescendantSecurityHealthAnalyticsCustomModulesResponse>
SecurityCenterMetadata::ListDescendantSecurityHealthAnalyticsCustomModules(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::
        ListDescendantSecurityHealthAnalyticsCustomModulesRequest const&
            request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDescendantSecurityHealthAnalyticsCustomModules(
      context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::ListFindingsResponse>
SecurityCenterMetadata::ListFindings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::ListFindingsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListFindings(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::ListMuteConfigsResponse>
SecurityCenterMetadata::ListMuteConfigs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::ListMuteConfigsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListMuteConfigs(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::ListNotificationConfigsResponse>
SecurityCenterMetadata::ListNotificationConfigs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::ListNotificationConfigsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListNotificationConfigs(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::
             ListEffectiveSecurityHealthAnalyticsCustomModulesResponse>
SecurityCenterMetadata::ListEffectiveSecurityHealthAnalyticsCustomModules(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::
        ListEffectiveSecurityHealthAnalyticsCustomModulesRequest const&
            request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListEffectiveSecurityHealthAnalyticsCustomModules(
      context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::
             ListSecurityHealthAnalyticsCustomModulesResponse>
SecurityCenterMetadata::ListSecurityHealthAnalyticsCustomModules(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::
        ListSecurityHealthAnalyticsCustomModulesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListSecurityHealthAnalyticsCustomModules(context, options,
                                                          request);
}

StatusOr<google::cloud::securitycenter::v1::ListSourcesResponse>
SecurityCenterMetadata::ListSources(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::ListSourcesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListSources(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
SecurityCenterMetadata::AsyncRunAssetDiscovery(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::securitycenter::v1::RunAssetDiscoveryRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncRunAssetDiscovery(cq, std::move(context),
                                        std::move(options), request);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterMetadata::SetFindingState(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::SetFindingStateRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->SetFindingState(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterMetadata::SetMute(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::SetMuteRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->SetMute(context, options, request);
}

StatusOr<google::iam::v1::Policy> SecurityCenterMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecurityCenterMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::
             SimulateSecurityHealthAnalyticsCustomModuleResponse>
SecurityCenterMetadata::SimulateSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::
        SimulateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->SimulateSecurityHealthAnalyticsCustomModule(context, options,
                                                             request);
}

StatusOr<google::cloud::securitycenter::v1::ExternalSystem>
SecurityCenterMetadata::UpdateExternalSystem(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::UpdateExternalSystemRequest const&
        request) {
  SetMetadata(
      context, options,
      absl::StrCat("external_system.name=",
                   internal::UrlEncode(request.external_system().name())));
  return child_->UpdateExternalSystem(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterMetadata::UpdateFinding(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::UpdateFindingRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("finding.name=",
                           internal::UrlEncode(request.finding().name())));
  return child_->UpdateFinding(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterMetadata::UpdateMuteConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::UpdateMuteConfigRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("mute_config.name=",
                           internal::UrlEncode(request.mute_config().name())));
  return child_->UpdateMuteConfig(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterMetadata::UpdateNotificationConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::UpdateNotificationConfigRequest const&
        request) {
  SetMetadata(
      context, options,
      absl::StrCat("notification_config.name=",
                   internal::UrlEncode(request.notification_config().name())));
  return child_->UpdateNotificationConfig(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
SecurityCenterMetadata::UpdateOrganizationSettings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::UpdateOrganizationSettingsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat(
                  "organization_settings.name=",
                  internal::UrlEncode(request.organization_settings().name())));
  return child_->UpdateOrganizationSettings(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
SecurityCenterMetadata::UpdateSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::
        UpdateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat(
          "security_health_analytics_custom_module.name=",
          internal::UrlEncode(
              request.security_health_analytics_custom_module().name())));
  return child_->UpdateSecurityHealthAnalyticsCustomModule(context, options,
                                                           request);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterMetadata::UpdateSource(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::UpdateSourceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("source.name=",
                           internal::UrlEncode(request.source().name())));
  return child_->UpdateSource(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::SecurityMarks>
SecurityCenterMetadata::UpdateSecurityMarks(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::UpdateSecurityMarksRequest const&
        request) {
  SetMetadata(
      context, options,
      absl::StrCat("security_marks.name=",
                   internal::UrlEncode(request.security_marks().name())));
  return child_->UpdateSecurityMarks(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterMetadata::CreateBigQueryExport(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::CreateBigQueryExportRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateBigQueryExport(context, options, request);
}

Status SecurityCenterMetadata::DeleteBigQueryExport(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::DeleteBigQueryExportRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteBigQueryExport(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterMetadata::UpdateBigQueryExport(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::UpdateBigQueryExportRequest const&
        request) {
  SetMetadata(
      context, options,
      absl::StrCat("big_query_export.name=",
                   internal::UrlEncode(request.big_query_export().name())));
  return child_->UpdateBigQueryExport(context, options, request);
}

StatusOr<google::cloud::securitycenter::v1::ListBigQueryExportsResponse>
SecurityCenterMetadata::ListBigQueryExports(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::ListBigQueryExportsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListBigQueryExports(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
SecurityCenterMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> SecurityCenterMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void SecurityCenterMetadata::SetMetadata(grpc::ClientContext& context,
                                         Options const& options,
                                         std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void SecurityCenterMetadata::SetMetadata(grpc::ClientContext& context,
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
}  // namespace securitycenter_v1_internal
}  // namespace cloud
}  // namespace google
