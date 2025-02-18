// Copyright 2024 Google LLC
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
// source: google/cloud/dataplex/v1/datascans.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_DATA_SCAN_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_DATA_SCAN_AUTH_DECORATOR_H

#include "google/cloud/dataplex/v1/internal/data_scan_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace dataplex_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DataScanServiceAuth : public DataScanServiceStub {
 public:
  ~DataScanServiceAuth() override = default;
  DataScanServiceAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<DataScanServiceStub> child);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateDataScan(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::CreateDataScanRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateDataScan(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::UpdateDataScanRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteDataScan(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataplex::v1::DeleteDataScanRequest const& request)
      override;

  StatusOr<google::cloud::dataplex::v1::DataScan> GetDataScan(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::GetDataScanRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::ListDataScansResponse> ListDataScans(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::ListDataScansRequest const& request)
      override;

  StatusOr<google::cloud::dataplex::v1::RunDataScanResponse> RunDataScan(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::RunDataScanRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::DataScanJob> GetDataScanJob(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::GetDataScanJobRequest const& request)
      override;

  StatusOr<google::cloud::dataplex::v1::ListDataScanJobsResponse>
  ListDataScanJobs(grpc::ClientContext& context, Options const& options,
                   google::cloud::dataplex::v1::ListDataScanJobsRequest const&
                       request) override;

  StatusOr<google::cloud::dataplex::v1::GenerateDataQualityRulesResponse>
  GenerateDataQualityRules(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataplex::v1::GenerateDataQualityRulesRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<DataScanServiceStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_DATA_SCAN_AUTH_DECORATOR_H
