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
// source: google/cloud/retail/v2/serving_config_service.proto

#include "google/cloud/retail/v2/internal/serving_config_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/retail/v2/serving_config_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServingConfigServiceStub::~ServingConfigServiceStub() = default;

StatusOr<google::cloud::retail::v2::ServingConfig>
DefaultServingConfigServiceStub::CreateServingConfig(
    grpc::ClientContext& context,
    google::cloud::retail::v2::CreateServingConfigRequest const& request) {
  google::cloud::retail::v2::ServingConfig response;
  auto status = grpc_stub_->CreateServingConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultServingConfigServiceStub::DeleteServingConfig(
    grpc::ClientContext& context,
    google::cloud::retail::v2::DeleteServingConfigRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteServingConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::retail::v2::ServingConfig>
DefaultServingConfigServiceStub::UpdateServingConfig(
    grpc::ClientContext& context,
    google::cloud::retail::v2::UpdateServingConfigRequest const& request) {
  google::cloud::retail::v2::ServingConfig response;
  auto status = grpc_stub_->UpdateServingConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::retail::v2::ServingConfig>
DefaultServingConfigServiceStub::GetServingConfig(
    grpc::ClientContext& context,
    google::cloud::retail::v2::GetServingConfigRequest const& request) {
  google::cloud::retail::v2::ServingConfig response;
  auto status = grpc_stub_->GetServingConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::retail::v2::ListServingConfigsResponse>
DefaultServingConfigServiceStub::ListServingConfigs(
    grpc::ClientContext& context,
    google::cloud::retail::v2::ListServingConfigsRequest const& request) {
  google::cloud::retail::v2::ListServingConfigsResponse response;
  auto status = grpc_stub_->ListServingConfigs(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::retail::v2::ServingConfig>
DefaultServingConfigServiceStub::AddControl(
    grpc::ClientContext& context,
    google::cloud::retail::v2::AddControlRequest const& request) {
  google::cloud::retail::v2::ServingConfig response;
  auto status = grpc_stub_->AddControl(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::retail::v2::ServingConfig>
DefaultServingConfigServiceStub::RemoveControl(
    grpc::ClientContext& context,
    google::cloud::retail::v2::RemoveControlRequest const& request) {
  google::cloud::retail::v2::ServingConfig response;
  auto status = grpc_stub_->RemoveControl(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google
