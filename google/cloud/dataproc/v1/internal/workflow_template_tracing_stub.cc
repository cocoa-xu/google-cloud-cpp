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
// source: google/cloud/dataproc/v1/workflow_templates.proto

#include "google/cloud/dataproc/v1/internal/workflow_template_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

WorkflowTemplateServiceTracingStub::WorkflowTemplateServiceTracingStub(
    std::shared_ptr<WorkflowTemplateServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceTracingStub::CreateWorkflowTemplate(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::CreateWorkflowTemplateRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dataproc.v1.WorkflowTemplateService",
                             "CreateWorkflowTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateWorkflowTemplate(context, request));
}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceTracingStub::GetWorkflowTemplate(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::GetWorkflowTemplateRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dataproc.v1.WorkflowTemplateService",
                             "GetWorkflowTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetWorkflowTemplate(context, request));
}

future<StatusOr<google::longrunning::Operation>>
WorkflowTemplateServiceTracingStub::AsyncInstantiateWorkflowTemplate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataproc::v1::InstantiateWorkflowTemplateRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dataproc.v1.WorkflowTemplateService",
                             "InstantiateWorkflowTemplate");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncInstantiateWorkflowTemplate(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
WorkflowTemplateServiceTracingStub::AsyncInstantiateInlineWorkflowTemplate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataproc::v1::InstantiateInlineWorkflowTemplateRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dataproc.v1.WorkflowTemplateService",
                             "InstantiateInlineWorkflowTemplate");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncInstantiateInlineWorkflowTemplate(cq, context, options,
                                                          request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceTracingStub::UpdateWorkflowTemplate(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::UpdateWorkflowTemplateRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dataproc.v1.WorkflowTemplateService",
                             "UpdateWorkflowTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateWorkflowTemplate(context, request));
}

StatusOr<google::cloud::dataproc::v1::ListWorkflowTemplatesResponse>
WorkflowTemplateServiceTracingStub::ListWorkflowTemplates(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::ListWorkflowTemplatesRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dataproc.v1.WorkflowTemplateService",
                             "ListWorkflowTemplates");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListWorkflowTemplates(context, request));
}

Status WorkflowTemplateServiceTracingStub::DeleteWorkflowTemplate(
    grpc::ClientContext& context,
    google::cloud::dataproc::v1::DeleteWorkflowTemplateRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dataproc.v1.WorkflowTemplateService",
                             "DeleteWorkflowTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteWorkflowTemplate(context, request));
}

future<StatusOr<google::longrunning::Operation>>
WorkflowTemplateServiceTracingStub::AsyncGetOperation(
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

future<Status> WorkflowTemplateServiceTracingStub::AsyncCancelOperation(
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

std::shared_ptr<WorkflowTemplateServiceStub>
MakeWorkflowTemplateServiceTracingStub(
    std::shared_ptr<WorkflowTemplateServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<WorkflowTemplateServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google
