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

#include "google/cloud/securitycenter/v1/internal/security_center_auth_decorator.h"
#include <google/cloud/securitycenter/v1/securitycenter_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace securitycenter_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecurityCenterAuth::SecurityCenterAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<SecurityCenterStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
SecurityCenterAuth::AsyncBulkMuteFindings(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::securitycenter::v1::BulkMuteFindingsRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncBulkMuteFindings(cq, *std::move(context), options,
                                            request);
      });
}

StatusOr<google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
SecurityCenterAuth::CreateSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::
        CreateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateSecurityHealthAnalyticsCustomModule(context, request);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterAuth::CreateSource(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateSourceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateSource(context, request);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterAuth::CreateFinding(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateFindingRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateFinding(context, request);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterAuth::CreateMuteConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateMuteConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateMuteConfig(context, request);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterAuth::CreateNotificationConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateNotificationConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateNotificationConfig(context, request);
}

Status SecurityCenterAuth::DeleteMuteConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::DeleteMuteConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteMuteConfig(context, request);
}

Status SecurityCenterAuth::DeleteNotificationConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::DeleteNotificationConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteNotificationConfig(context, request);
}

Status SecurityCenterAuth::DeleteSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::
        DeleteSecurityHealthAnalyticsCustomModuleRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteSecurityHealthAnalyticsCustomModule(context, request);
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterAuth::GetBigQueryExport(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetBigQueryExportRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetBigQueryExport(context, request);
}

StatusOr<google::iam::v1::Policy> SecurityCenterAuth::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterAuth::GetMuteConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetMuteConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetMuteConfig(context, request);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterAuth::GetNotificationConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetNotificationConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetNotificationConfig(context, request);
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
SecurityCenterAuth::GetOrganizationSettings(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetOrganizationSettingsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOrganizationSettings(context, request);
}

StatusOr<google::cloud::securitycenter::v1::
             EffectiveSecurityHealthAnalyticsCustomModule>
SecurityCenterAuth::GetEffectiveSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::
        GetEffectiveSecurityHealthAnalyticsCustomModuleRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetEffectiveSecurityHealthAnalyticsCustomModule(context,
                                                                 request);
}

StatusOr<google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
SecurityCenterAuth::GetSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::
        GetSecurityHealthAnalyticsCustomModuleRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetSecurityHealthAnalyticsCustomModule(context, request);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterAuth::GetSource(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetSourceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetSource(context, request);
}

StatusOr<google::cloud::securitycenter::v1::GroupAssetsResponse>
SecurityCenterAuth::GroupAssets(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GroupAssetsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GroupAssets(context, request);
}

StatusOr<google::cloud::securitycenter::v1::GroupFindingsResponse>
SecurityCenterAuth::GroupFindings(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GroupFindingsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GroupFindings(context, request);
}

StatusOr<google::cloud::securitycenter::v1::ListAssetsResponse>
SecurityCenterAuth::ListAssets(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListAssetsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListAssets(context, request);
}

StatusOr<google::cloud::securitycenter::v1::
             ListDescendantSecurityHealthAnalyticsCustomModulesResponse>
SecurityCenterAuth::ListDescendantSecurityHealthAnalyticsCustomModules(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::
        ListDescendantSecurityHealthAnalyticsCustomModulesRequest const&
            request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListDescendantSecurityHealthAnalyticsCustomModules(context,
                                                                    request);
}

StatusOr<google::cloud::securitycenter::v1::ListFindingsResponse>
SecurityCenterAuth::ListFindings(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListFindingsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListFindings(context, request);
}

StatusOr<google::cloud::securitycenter::v1::ListMuteConfigsResponse>
SecurityCenterAuth::ListMuteConfigs(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListMuteConfigsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListMuteConfigs(context, request);
}

StatusOr<google::cloud::securitycenter::v1::ListNotificationConfigsResponse>
SecurityCenterAuth::ListNotificationConfigs(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListNotificationConfigsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListNotificationConfigs(context, request);
}

StatusOr<google::cloud::securitycenter::v1::
             ListEffectiveSecurityHealthAnalyticsCustomModulesResponse>
SecurityCenterAuth::ListEffectiveSecurityHealthAnalyticsCustomModules(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::
        ListEffectiveSecurityHealthAnalyticsCustomModulesRequest const&
            request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListEffectiveSecurityHealthAnalyticsCustomModules(context,
                                                                   request);
}

StatusOr<google::cloud::securitycenter::v1::
             ListSecurityHealthAnalyticsCustomModulesResponse>
SecurityCenterAuth::ListSecurityHealthAnalyticsCustomModules(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::
        ListSecurityHealthAnalyticsCustomModulesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListSecurityHealthAnalyticsCustomModules(context, request);
}

StatusOr<google::cloud::securitycenter::v1::ListSourcesResponse>
SecurityCenterAuth::ListSources(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListSourcesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListSources(context, request);
}

future<StatusOr<google::longrunning::Operation>>
SecurityCenterAuth::AsyncRunAssetDiscovery(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::securitycenter::v1::RunAssetDiscoveryRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncRunAssetDiscovery(cq, *std::move(context), options,
                                             request);
      });
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterAuth::SetFindingState(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::SetFindingStateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetFindingState(context, request);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterAuth::SetMute(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::SetMuteRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetMute(context, request);
}

StatusOr<google::iam::v1::Policy> SecurityCenterAuth::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecurityCenterAuth::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TestIamPermissions(context, request);
}

StatusOr<google::cloud::securitycenter::v1::
             SimulateSecurityHealthAnalyticsCustomModuleResponse>
SecurityCenterAuth::SimulateSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::
        SimulateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SimulateSecurityHealthAnalyticsCustomModule(context, request);
}

StatusOr<google::cloud::securitycenter::v1::ExternalSystem>
SecurityCenterAuth::UpdateExternalSystem(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateExternalSystemRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateExternalSystem(context, request);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterAuth::UpdateFinding(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateFindingRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateFinding(context, request);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterAuth::UpdateMuteConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateMuteConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateMuteConfig(context, request);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterAuth::UpdateNotificationConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateNotificationConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateNotificationConfig(context, request);
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
SecurityCenterAuth::UpdateOrganizationSettings(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateOrganizationSettingsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateOrganizationSettings(context, request);
}

StatusOr<google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
SecurityCenterAuth::UpdateSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::
        UpdateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateSecurityHealthAnalyticsCustomModule(context, request);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterAuth::UpdateSource(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateSourceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateSource(context, request);
}

StatusOr<google::cloud::securitycenter::v1::SecurityMarks>
SecurityCenterAuth::UpdateSecurityMarks(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateSecurityMarksRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateSecurityMarks(context, request);
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterAuth::CreateBigQueryExport(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateBigQueryExportRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateBigQueryExport(context, request);
}

Status SecurityCenterAuth::DeleteBigQueryExport(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::DeleteBigQueryExportRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteBigQueryExport(context, request);
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterAuth::UpdateBigQueryExport(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateBigQueryExportRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateBigQueryExport(context, request);
}

StatusOr<google::cloud::securitycenter::v1::ListBigQueryExportsResponse>
SecurityCenterAuth::ListBigQueryExports(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListBigQueryExportsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListBigQueryExports(context, request);
}

future<StatusOr<google::longrunning::Operation>>
SecurityCenterAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context), options,
                                        request);
      });
}

future<Status> SecurityCenterAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context), options,
                                           request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycenter_v1_internal
}  // namespace cloud
}  // namespace google
