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
// source: google/cloud/dataplex/v1/service.proto

#include "google/cloud/dataplex/v1/internal/dataplex_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace dataplex_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DataplexServiceTracingStub::DataplexServiceTracingStub(
    std::shared_ptr<DataplexServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceTracingStub::AsyncCreateLake(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::CreateLakeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "CreateLake");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateLake(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceTracingStub::AsyncUpdateLake(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::UpdateLakeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "UpdateLake");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateLake(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceTracingStub::AsyncDeleteLake(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::DeleteLakeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "DeleteLake");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteLake(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::dataplex::v1::ListLakesResponse>
DataplexServiceTracingStub::ListLakes(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListLakesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "ListLakes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->ListLakes(context, request));
}

StatusOr<google::cloud::dataplex::v1::Lake> DataplexServiceTracingStub::GetLake(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::GetLakeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "GetLake");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetLake(context, request));
}

StatusOr<google::cloud::dataplex::v1::ListActionsResponse>
DataplexServiceTracingStub::ListLakeActions(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListLakeActionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "ListLakeActions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListLakeActions(context, request));
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceTracingStub::AsyncCreateZone(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::CreateZoneRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "CreateZone");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateZone(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceTracingStub::AsyncUpdateZone(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::UpdateZoneRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "UpdateZone");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateZone(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceTracingStub::AsyncDeleteZone(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::DeleteZoneRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "DeleteZone");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteZone(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::dataplex::v1::ListZonesResponse>
DataplexServiceTracingStub::ListZones(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListZonesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "ListZones");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->ListZones(context, request));
}

StatusOr<google::cloud::dataplex::v1::Zone> DataplexServiceTracingStub::GetZone(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::GetZoneRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "GetZone");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetZone(context, request));
}

StatusOr<google::cloud::dataplex::v1::ListActionsResponse>
DataplexServiceTracingStub::ListZoneActions(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListZoneActionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "ListZoneActions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListZoneActions(context, request));
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceTracingStub::AsyncCreateAsset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::CreateAssetRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "CreateAsset");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateAsset(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceTracingStub::AsyncUpdateAsset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::UpdateAssetRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "UpdateAsset");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateAsset(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceTracingStub::AsyncDeleteAsset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::DeleteAssetRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "DeleteAsset");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteAsset(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::dataplex::v1::ListAssetsResponse>
DataplexServiceTracingStub::ListAssets(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListAssetsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "ListAssets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListAssets(context, request));
}

StatusOr<google::cloud::dataplex::v1::Asset>
DataplexServiceTracingStub::GetAsset(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::GetAssetRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "GetAsset");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetAsset(context, request));
}

StatusOr<google::cloud::dataplex::v1::ListActionsResponse>
DataplexServiceTracingStub::ListAssetActions(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListAssetActionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "ListAssetActions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListAssetActions(context, request));
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceTracingStub::AsyncCreateTask(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::CreateTaskRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "CreateTask");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateTask(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceTracingStub::AsyncUpdateTask(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::UpdateTaskRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "UpdateTask");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateTask(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceTracingStub::AsyncDeleteTask(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::DeleteTaskRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "DeleteTask");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteTask(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::dataplex::v1::ListTasksResponse>
DataplexServiceTracingStub::ListTasks(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListTasksRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "ListTasks");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->ListTasks(context, request));
}

StatusOr<google::cloud::dataplex::v1::Task> DataplexServiceTracingStub::GetTask(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::GetTaskRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "GetTask");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetTask(context, request));
}

StatusOr<google::cloud::dataplex::v1::ListJobsResponse>
DataplexServiceTracingStub::ListJobs(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListJobsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "ListJobs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->ListJobs(context, request));
}

StatusOr<google::cloud::dataplex::v1::RunTaskResponse>
DataplexServiceTracingStub::RunTask(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::RunTaskRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "RunTask");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->RunTask(context, request));
}

StatusOr<google::cloud::dataplex::v1::Job> DataplexServiceTracingStub::GetJob(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::GetJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "GetJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetJob(context, request));
}

Status DataplexServiceTracingStub::CancelJob(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::CancelJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "CancelJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->CancelJob(context, request));
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceTracingStub::AsyncCreateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::CreateEnvironmentRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "CreateEnvironment");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateEnvironment(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceTracingStub::AsyncUpdateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::UpdateEnvironmentRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "UpdateEnvironment");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateEnvironment(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceTracingStub::AsyncDeleteEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::DeleteEnvironmentRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "DeleteEnvironment");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteEnvironment(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::dataplex::v1::ListEnvironmentsResponse>
DataplexServiceTracingStub::ListEnvironments(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListEnvironmentsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "ListEnvironments");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListEnvironments(context, request));
}

StatusOr<google::cloud::dataplex::v1::Environment>
DataplexServiceTracingStub::GetEnvironment(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::GetEnvironmentRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "GetEnvironment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetEnvironment(context, request));
}

StatusOr<google::cloud::dataplex::v1::ListSessionsResponse>
DataplexServiceTracingStub::ListSessions(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListSessionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataplexService",
                                     "ListSessions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListSessions(context, request));
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceTracingStub::AsyncGetOperation(
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

future<Status> DataplexServiceTracingStub::AsyncCancelOperation(
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

std::shared_ptr<DataplexServiceStub> MakeDataplexServiceTracingStub(
    std::shared_ptr<DataplexServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<DataplexServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1_internal
}  // namespace cloud
}  // namespace google
