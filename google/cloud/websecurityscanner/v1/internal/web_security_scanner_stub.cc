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
// source: google/cloud/websecurityscanner/v1/web_security_scanner.proto

#include "google/cloud/websecurityscanner/v1/internal/web_security_scanner_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/websecurityscanner/v1/web_security_scanner.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace websecurityscanner_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

WebSecurityScannerStub::~WebSecurityScannerStub() = default;

StatusOr<google::cloud::websecurityscanner::v1::ScanConfig>
DefaultWebSecurityScannerStub::CreateScanConfig(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::CreateScanConfigRequest const&
        request) {
  google::cloud::websecurityscanner::v1::ScanConfig response;
  auto status = grpc_stub_->CreateScanConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultWebSecurityScannerStub::DeleteScanConfig(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::DeleteScanConfigRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteScanConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::websecurityscanner::v1::ScanConfig>
DefaultWebSecurityScannerStub::GetScanConfig(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::GetScanConfigRequest const&
        request) {
  google::cloud::websecurityscanner::v1::ScanConfig response;
  auto status = grpc_stub_->GetScanConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::websecurityscanner::v1::ListScanConfigsResponse>
DefaultWebSecurityScannerStub::ListScanConfigs(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::ListScanConfigsRequest const&
        request) {
  google::cloud::websecurityscanner::v1::ListScanConfigsResponse response;
  auto status = grpc_stub_->ListScanConfigs(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::websecurityscanner::v1::ScanConfig>
DefaultWebSecurityScannerStub::UpdateScanConfig(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::UpdateScanConfigRequest const&
        request) {
  google::cloud::websecurityscanner::v1::ScanConfig response;
  auto status = grpc_stub_->UpdateScanConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::websecurityscanner::v1::ScanRun>
DefaultWebSecurityScannerStub::StartScanRun(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::StartScanRunRequest const& request) {
  google::cloud::websecurityscanner::v1::ScanRun response;
  auto status = grpc_stub_->StartScanRun(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::websecurityscanner::v1::ScanRun>
DefaultWebSecurityScannerStub::GetScanRun(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::GetScanRunRequest const& request) {
  google::cloud::websecurityscanner::v1::ScanRun response;
  auto status = grpc_stub_->GetScanRun(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::websecurityscanner::v1::ListScanRunsResponse>
DefaultWebSecurityScannerStub::ListScanRuns(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::ListScanRunsRequest const& request) {
  google::cloud::websecurityscanner::v1::ListScanRunsResponse response;
  auto status = grpc_stub_->ListScanRuns(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::websecurityscanner::v1::ScanRun>
DefaultWebSecurityScannerStub::StopScanRun(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::StopScanRunRequest const& request) {
  google::cloud::websecurityscanner::v1::ScanRun response;
  auto status = grpc_stub_->StopScanRun(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::websecurityscanner::v1::ListCrawledUrlsResponse>
DefaultWebSecurityScannerStub::ListCrawledUrls(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::ListCrawledUrlsRequest const&
        request) {
  google::cloud::websecurityscanner::v1::ListCrawledUrlsResponse response;
  auto status = grpc_stub_->ListCrawledUrls(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::websecurityscanner::v1::Finding>
DefaultWebSecurityScannerStub::GetFinding(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::GetFindingRequest const& request) {
  google::cloud::websecurityscanner::v1::Finding response;
  auto status = grpc_stub_->GetFinding(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::websecurityscanner::v1::ListFindingsResponse>
DefaultWebSecurityScannerStub::ListFindings(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::ListFindingsRequest const& request) {
  google::cloud::websecurityscanner::v1::ListFindingsResponse response;
  auto status = grpc_stub_->ListFindings(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::websecurityscanner::v1::ListFindingTypeStatsResponse>
DefaultWebSecurityScannerStub::ListFindingTypeStats(
    grpc::ClientContext& context,
    google::cloud::websecurityscanner::v1::ListFindingTypeStatsRequest const&
        request) {
  google::cloud::websecurityscanner::v1::ListFindingTypeStatsResponse response;
  auto status = grpc_stub_->ListFindingTypeStats(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace websecurityscanner_v1_internal
}  // namespace cloud
}  // namespace google
