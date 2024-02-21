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

#include "google/cloud/osconfig/v1/internal/os_config_zonal_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace osconfig_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

OsConfigZonalServiceTracingStub::OsConfigZonalServiceTracingStub(
    std::shared_ptr<OsConfigZonalServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
OsConfigZonalServiceTracingStub::AsyncCreateOSPolicyAssignment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::osconfig::v1::CreateOSPolicyAssignmentRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.osconfig.v1.OsConfigZonalService",
                             "CreateOSPolicyAssignment");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateOSPolicyAssignment(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
OsConfigZonalServiceTracingStub::AsyncUpdateOSPolicyAssignment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::osconfig::v1::UpdateOSPolicyAssignmentRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.osconfig.v1.OsConfigZonalService",
                             "UpdateOSPolicyAssignment");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateOSPolicyAssignment(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::osconfig::v1::OSPolicyAssignment>
OsConfigZonalServiceTracingStub::GetOSPolicyAssignment(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::GetOSPolicyAssignmentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.osconfig.v1.OsConfigZonalService", "GetOSPolicyAssignment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetOSPolicyAssignment(context, request));
}

StatusOr<google::cloud::osconfig::v1::ListOSPolicyAssignmentsResponse>
OsConfigZonalServiceTracingStub::ListOSPolicyAssignments(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::ListOSPolicyAssignmentsRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.osconfig.v1.OsConfigZonalService",
                             "ListOSPolicyAssignments");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListOSPolicyAssignments(context, request));
}

StatusOr<google::cloud::osconfig::v1::ListOSPolicyAssignmentRevisionsResponse>
OsConfigZonalServiceTracingStub::ListOSPolicyAssignmentRevisions(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::ListOSPolicyAssignmentRevisionsRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.osconfig.v1.OsConfigZonalService",
                             "ListOSPolicyAssignmentRevisions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListOSPolicyAssignmentRevisions(context, request));
}

future<StatusOr<google::longrunning::Operation>>
OsConfigZonalServiceTracingStub::AsyncDeleteOSPolicyAssignment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::osconfig::v1::DeleteOSPolicyAssignmentRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.osconfig.v1.OsConfigZonalService",
                             "DeleteOSPolicyAssignment");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteOSPolicyAssignment(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::osconfig::v1::OSPolicyAssignmentReport>
OsConfigZonalServiceTracingStub::GetOSPolicyAssignmentReport(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::GetOSPolicyAssignmentReportRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.osconfig.v1.OsConfigZonalService",
                             "GetOSPolicyAssignmentReport");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetOSPolicyAssignmentReport(context, request));
}

StatusOr<google::cloud::osconfig::v1::ListOSPolicyAssignmentReportsResponse>
OsConfigZonalServiceTracingStub::ListOSPolicyAssignmentReports(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::ListOSPolicyAssignmentReportsRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.osconfig.v1.OsConfigZonalService",
                             "ListOSPolicyAssignmentReports");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListOSPolicyAssignmentReports(context, request));
}

StatusOr<google::cloud::osconfig::v1::Inventory>
OsConfigZonalServiceTracingStub::GetInventory(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::GetInventoryRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.osconfig.v1.OsConfigZonalService", "GetInventory");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetInventory(context, request));
}

StatusOr<google::cloud::osconfig::v1::ListInventoriesResponse>
OsConfigZonalServiceTracingStub::ListInventories(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::ListInventoriesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.osconfig.v1.OsConfigZonalService", "ListInventories");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListInventories(context, request));
}

StatusOr<google::cloud::osconfig::v1::VulnerabilityReport>
OsConfigZonalServiceTracingStub::GetVulnerabilityReport(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::GetVulnerabilityReportRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.osconfig.v1.OsConfigZonalService",
                             "GetVulnerabilityReport");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetVulnerabilityReport(context, request));
}

StatusOr<google::cloud::osconfig::v1::ListVulnerabilityReportsResponse>
OsConfigZonalServiceTracingStub::ListVulnerabilityReports(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::ListVulnerabilityReportsRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.osconfig.v1.OsConfigZonalService",
                             "ListVulnerabilityReports");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListVulnerabilityReports(context, request));
}

future<StatusOr<google::longrunning::Operation>>
OsConfigZonalServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> OsConfigZonalServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCancelOperation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<OsConfigZonalServiceStub> MakeOsConfigZonalServiceTracingStub(
    std::shared_ptr<OsConfigZonalServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<OsConfigZonalServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig_v1_internal
}  // namespace cloud
}  // namespace google
