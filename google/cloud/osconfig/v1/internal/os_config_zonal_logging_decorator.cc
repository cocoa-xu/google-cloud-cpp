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
// source: google/cloud/osconfig/v1/osconfig_zonal_service.proto

#include "google/cloud/osconfig/v1/internal/os_config_zonal_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/osconfig/v1/osconfig_zonal_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace osconfig_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OsConfigZonalServiceLogging::OsConfigZonalServiceLogging(
    std::shared_ptr<OsConfigZonalServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

future<StatusOr<google::longrunning::Operation>>
OsConfigZonalServiceLogging::AsyncCreateOSPolicyAssignment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::osconfig::v1::CreateOSPolicyAssignmentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::osconfig::v1::CreateOSPolicyAssignmentRequest const&
                 request) {
        return child_->AsyncCreateOSPolicyAssignment(cq, std::move(context),
                                                     options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
OsConfigZonalServiceLogging::AsyncUpdateOSPolicyAssignment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::osconfig::v1::UpdateOSPolicyAssignmentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::osconfig::v1::UpdateOSPolicyAssignmentRequest const&
                 request) {
        return child_->AsyncUpdateOSPolicyAssignment(cq, std::move(context),
                                                     options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::osconfig::v1::OSPolicyAssignment>
OsConfigZonalServiceLogging::GetOSPolicyAssignment(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::GetOSPolicyAssignmentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::osconfig::v1::GetOSPolicyAssignmentRequest const&
                 request) {
        return child_->GetOSPolicyAssignment(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::osconfig::v1::ListOSPolicyAssignmentsResponse>
OsConfigZonalServiceLogging::ListOSPolicyAssignments(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::ListOSPolicyAssignmentsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::osconfig::v1::ListOSPolicyAssignmentsRequest const&
                 request) {
        return child_->ListOSPolicyAssignments(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::osconfig::v1::ListOSPolicyAssignmentRevisionsResponse>
OsConfigZonalServiceLogging::ListOSPolicyAssignmentRevisions(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::ListOSPolicyAssignmentRevisionsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::osconfig::v1::
                 ListOSPolicyAssignmentRevisionsRequest const& request) {
        return child_->ListOSPolicyAssignmentRevisions(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
OsConfigZonalServiceLogging::AsyncDeleteOSPolicyAssignment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::osconfig::v1::DeleteOSPolicyAssignmentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::osconfig::v1::DeleteOSPolicyAssignmentRequest const&
                 request) {
        return child_->AsyncDeleteOSPolicyAssignment(cq, std::move(context),
                                                     options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::osconfig::v1::OSPolicyAssignmentReport>
OsConfigZonalServiceLogging::GetOSPolicyAssignmentReport(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::GetOSPolicyAssignmentReportRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::osconfig::v1::GetOSPolicyAssignmentReportRequest const&
              request) {
        return child_->GetOSPolicyAssignmentReport(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::osconfig::v1::ListOSPolicyAssignmentReportsResponse>
OsConfigZonalServiceLogging::ListOSPolicyAssignmentReports(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::ListOSPolicyAssignmentReportsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::osconfig::v1::
                 ListOSPolicyAssignmentReportsRequest const& request) {
        return child_->ListOSPolicyAssignmentReports(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::osconfig::v1::Inventory>
OsConfigZonalServiceLogging::GetInventory(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::GetInventoryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::osconfig::v1::GetInventoryRequest const& request) {
        return child_->GetInventory(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::osconfig::v1::ListInventoriesResponse>
OsConfigZonalServiceLogging::ListInventories(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::ListInventoriesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::osconfig::v1::ListInventoriesRequest const& request) {
        return child_->ListInventories(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::osconfig::v1::VulnerabilityReport>
OsConfigZonalServiceLogging::GetVulnerabilityReport(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::GetVulnerabilityReportRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::osconfig::v1::GetVulnerabilityReportRequest const&
                 request) {
        return child_->GetVulnerabilityReport(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::osconfig::v1::ListVulnerabilityReportsResponse>
OsConfigZonalServiceLogging::ListVulnerabilityReports(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::ListVulnerabilityReportsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::osconfig::v1::ListVulnerabilityReportsRequest const&
                 request) {
        return child_->ListVulnerabilityReports(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
OsConfigZonalServiceLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<Status> OsConfigZonalServiceLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig_v1_internal
}  // namespace cloud
}  // namespace google
