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
// source: google/cloud/bigquery/datatransfer/v1/datatransfer.proto

#include "google/cloud/bigquery/datatransfer/v1/internal/data_transfer_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace bigquery_datatransfer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DataTransferServiceTracingStub::DataTransferServiceTracingStub(
    std::shared_ptr<DataTransferServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::bigquery::datatransfer::v1::DataSource>
DataTransferServiceTracingStub::GetDataSource(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::GetDataSourceRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.datatransfer.v1.DataTransferService",
      "GetDataSource");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetDataSource(context, request));
}

StatusOr<google::cloud::bigquery::datatransfer::v1::ListDataSourcesResponse>
DataTransferServiceTracingStub::ListDataSources(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::ListDataSourcesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.datatransfer.v1.DataTransferService",
      "ListDataSources");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListDataSources(context, request));
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceTracingStub::CreateTransferConfig(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::
        CreateTransferConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.datatransfer.v1.DataTransferService",
      "CreateTransferConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateTransferConfig(context, request));
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceTracingStub::UpdateTransferConfig(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::
        UpdateTransferConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.datatransfer.v1.DataTransferService",
      "UpdateTransferConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateTransferConfig(context, request));
}

Status DataTransferServiceTracingStub::DeleteTransferConfig(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::
        DeleteTransferConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.datatransfer.v1.DataTransferService",
      "DeleteTransferConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteTransferConfig(context, request));
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
DataTransferServiceTracingStub::GetTransferConfig(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::GetTransferConfigRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.datatransfer.v1.DataTransferService",
      "GetTransferConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetTransferConfig(context, request));
}

StatusOr<google::cloud::bigquery::datatransfer::v1::ListTransferConfigsResponse>
DataTransferServiceTracingStub::ListTransferConfigs(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::ListTransferConfigsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.datatransfer.v1.DataTransferService",
      "ListTransferConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListTransferConfigs(context, request));
}

StatusOr<
    google::cloud::bigquery::datatransfer::v1::ScheduleTransferRunsResponse>
DataTransferServiceTracingStub::ScheduleTransferRuns(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::
        ScheduleTransferRunsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.datatransfer.v1.DataTransferService",
      "ScheduleTransferRuns");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ScheduleTransferRuns(context, request));
}

StatusOr<
    google::cloud::bigquery::datatransfer::v1::StartManualTransferRunsResponse>
DataTransferServiceTracingStub::StartManualTransferRuns(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::
        StartManualTransferRunsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.datatransfer.v1.DataTransferService",
      "StartManualTransferRuns");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->StartManualTransferRuns(context, request));
}

StatusOr<google::cloud::bigquery::datatransfer::v1::TransferRun>
DataTransferServiceTracingStub::GetTransferRun(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::GetTransferRunRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.datatransfer.v1.DataTransferService",
      "GetTransferRun");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetTransferRun(context, request));
}

Status DataTransferServiceTracingStub::DeleteTransferRun(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::DeleteTransferRunRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.datatransfer.v1.DataTransferService",
      "DeleteTransferRun");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteTransferRun(context, request));
}

StatusOr<google::cloud::bigquery::datatransfer::v1::ListTransferRunsResponse>
DataTransferServiceTracingStub::ListTransferRuns(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::ListTransferRunsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.datatransfer.v1.DataTransferService",
      "ListTransferRuns");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListTransferRuns(context, request));
}

StatusOr<google::cloud::bigquery::datatransfer::v1::ListTransferLogsResponse>
DataTransferServiceTracingStub::ListTransferLogs(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::ListTransferLogsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.datatransfer.v1.DataTransferService",
      "ListTransferLogs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListTransferLogs(context, request));
}

StatusOr<google::cloud::bigquery::datatransfer::v1::CheckValidCredsResponse>
DataTransferServiceTracingStub::CheckValidCreds(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::CheckValidCredsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.datatransfer.v1.DataTransferService",
      "CheckValidCreds");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CheckValidCreds(context, request));
}

Status DataTransferServiceTracingStub::EnrollDataSources(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::EnrollDataSourcesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.datatransfer.v1.DataTransferService",
      "EnrollDataSources");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->EnrollDataSources(context, request));
}

Status DataTransferServiceTracingStub::UnenrollDataSources(
    grpc::ClientContext& context,
    google::cloud::bigquery::datatransfer::v1::UnenrollDataSourcesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.datatransfer.v1.DataTransferService",
      "UnenrollDataSources");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UnenrollDataSources(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<DataTransferServiceStub> MakeDataTransferServiceTracingStub(
    std::shared_ptr<DataTransferServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<DataTransferServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_datatransfer_v1_internal
}  // namespace cloud
}  // namespace google
