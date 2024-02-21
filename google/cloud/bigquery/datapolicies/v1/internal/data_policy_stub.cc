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
// source: google/cloud/bigquery/datapolicies/v1/datapolicy.proto

#include "google/cloud/bigquery/datapolicies/v1/internal/data_policy_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/bigquery/datapolicies/v1/datapolicy.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigquery_datapolicies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataPolicyServiceStub::~DataPolicyServiceStub() = default;

StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
DefaultDataPolicyServiceStub::CreateDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::CreateDataPolicyRequest const&
        request) {
  google::cloud::bigquery::datapolicies::v1::DataPolicy response;
  auto status = grpc_stub_->CreateDataPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
DefaultDataPolicyServiceStub::UpdateDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::UpdateDataPolicyRequest const&
        request) {
  google::cloud::bigquery::datapolicies::v1::DataPolicy response;
  auto status = grpc_stub_->UpdateDataPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
DefaultDataPolicyServiceStub::RenameDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::RenameDataPolicyRequest const&
        request) {
  google::cloud::bigquery::datapolicies::v1::DataPolicy response;
  auto status = grpc_stub_->RenameDataPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultDataPolicyServiceStub::DeleteDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::DeleteDataPolicyRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteDataPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
DefaultDataPolicyServiceStub::GetDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::GetDataPolicyRequest const&
        request) {
  google::cloud::bigquery::datapolicies::v1::DataPolicy response;
  auto status = grpc_stub_->GetDataPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::datapolicies::v1::ListDataPoliciesResponse>
DefaultDataPolicyServiceStub::ListDataPolicies(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::ListDataPoliciesRequest const&
        request) {
  google::cloud::bigquery::datapolicies::v1::ListDataPoliciesResponse response;
  auto status = grpc_stub_->ListDataPolicies(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultDataPolicyServiceStub::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->GetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultDataPolicyServiceStub::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->SetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultDataPolicyServiceStub::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status = grpc_stub_->TestIamPermissions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_datapolicies_v1_internal
}  // namespace cloud
}  // namespace google
