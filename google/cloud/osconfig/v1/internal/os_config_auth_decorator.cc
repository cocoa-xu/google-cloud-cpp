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
// source: google/cloud/osconfig/v1/osconfig_service.proto

#include "google/cloud/osconfig/v1/internal/os_config_auth_decorator.h"
#include <google/cloud/osconfig/v1/osconfig_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace osconfig_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OsConfigServiceAuth::OsConfigServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<OsConfigServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::osconfig::v1::PatchJob>
OsConfigServiceAuth::ExecutePatchJob(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::ExecutePatchJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ExecutePatchJob(context, request);
}

StatusOr<google::cloud::osconfig::v1::PatchJob>
OsConfigServiceAuth::GetPatchJob(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::GetPatchJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetPatchJob(context, request);
}

StatusOr<google::cloud::osconfig::v1::PatchJob>
OsConfigServiceAuth::CancelPatchJob(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::CancelPatchJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelPatchJob(context, request);
}

StatusOr<google::cloud::osconfig::v1::ListPatchJobsResponse>
OsConfigServiceAuth::ListPatchJobs(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::ListPatchJobsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListPatchJobs(context, request);
}

StatusOr<google::cloud::osconfig::v1::ListPatchJobInstanceDetailsResponse>
OsConfigServiceAuth::ListPatchJobInstanceDetails(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::ListPatchJobInstanceDetailsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListPatchJobInstanceDetails(context, request);
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
OsConfigServiceAuth::CreatePatchDeployment(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::CreatePatchDeploymentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreatePatchDeployment(context, request);
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
OsConfigServiceAuth::GetPatchDeployment(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::GetPatchDeploymentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetPatchDeployment(context, request);
}

StatusOr<google::cloud::osconfig::v1::ListPatchDeploymentsResponse>
OsConfigServiceAuth::ListPatchDeployments(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::ListPatchDeploymentsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListPatchDeployments(context, request);
}

Status OsConfigServiceAuth::DeletePatchDeployment(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::DeletePatchDeploymentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeletePatchDeployment(context, request);
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
OsConfigServiceAuth::UpdatePatchDeployment(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::UpdatePatchDeploymentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdatePatchDeployment(context, request);
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
OsConfigServiceAuth::PausePatchDeployment(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::PausePatchDeploymentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->PausePatchDeployment(context, request);
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
OsConfigServiceAuth::ResumePatchDeployment(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::ResumePatchDeploymentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ResumePatchDeployment(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig_v1_internal
}  // namespace cloud
}  // namespace google
