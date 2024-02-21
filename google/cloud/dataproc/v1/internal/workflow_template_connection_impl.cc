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

#include "google/cloud/dataproc/v1/internal/workflow_template_connection_impl.h"
#include "google/cloud/dataproc/v1/internal/workflow_template_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<dataproc_v1::WorkflowTemplateServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<dataproc_v1::WorkflowTemplateServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<dataproc_v1::WorkflowTemplateServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<dataproc_v1::WorkflowTemplateServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<dataproc_v1::
               WorkflowTemplateServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<dataproc_v1::WorkflowTemplateServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

WorkflowTemplateServiceConnectionImpl::WorkflowTemplateServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<dataproc_v1_internal::WorkflowTemplateServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), WorkflowTemplateServiceConnection::options())) {}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceConnectionImpl::CreateWorkflowTemplate(
    google::cloud::dataproc::v1::CreateWorkflowTemplateRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateWorkflowTemplate(request),
      [this](grpc::ClientContext& context,
             google::cloud::dataproc::v1::CreateWorkflowTemplateRequest const&
                 request) {
        return stub_->CreateWorkflowTemplate(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceConnectionImpl::GetWorkflowTemplate(
    google::cloud::dataproc::v1::GetWorkflowTemplateRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetWorkflowTemplate(request),
      [this](grpc::ClientContext& context,
             google::cloud::dataproc::v1::GetWorkflowTemplateRequest const&
                 request) {
        return stub_->GetWorkflowTemplate(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
WorkflowTemplateServiceConnectionImpl::InstantiateWorkflowTemplate(
    google::cloud::dataproc::v1::InstantiateWorkflowTemplateRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->InstantiateWorkflowTemplate(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dataproc::v1::WorkflowMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::dataproc::v1::InstantiateWorkflowTemplateRequest const&
              request) {
        return stub->AsyncInstantiateWorkflowTemplate(cq, std::move(context),
                                                      options, request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::dataproc::v1::WorkflowMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
WorkflowTemplateServiceConnectionImpl::InstantiateInlineWorkflowTemplate(
    google::cloud::dataproc::v1::InstantiateInlineWorkflowTemplateRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->InstantiateInlineWorkflowTemplate(
          request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dataproc::v1::WorkflowMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::dataproc::v1::
              InstantiateInlineWorkflowTemplateRequest const& request) {
        return stub->AsyncInstantiateInlineWorkflowTemplate(
            cq, std::move(context), options, request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::dataproc::v1::WorkflowMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceConnectionImpl::UpdateWorkflowTemplate(
    google::cloud::dataproc::v1::UpdateWorkflowTemplateRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateWorkflowTemplate(request),
      [this](grpc::ClientContext& context,
             google::cloud::dataproc::v1::UpdateWorkflowTemplateRequest const&
                 request) {
        return stub_->UpdateWorkflowTemplate(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceConnectionImpl::ListWorkflowTemplates(
    google::cloud::dataproc::v1::ListWorkflowTemplatesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListWorkflowTemplates(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::dataproc::v1::WorkflowTemplate>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<dataproc_v1::WorkflowTemplateServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::dataproc::v1::ListWorkflowTemplatesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::dataproc::v1::ListWorkflowTemplatesRequest const&
                    request) {
              return stub->ListWorkflowTemplates(context, request);
            },
            r, function_name);
      },
      [](google::cloud::dataproc::v1::ListWorkflowTemplatesResponse r) {
        std::vector<google::cloud::dataproc::v1::WorkflowTemplate> result(
            r.templates().size());
        auto& messages = *r.mutable_templates();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

Status WorkflowTemplateServiceConnectionImpl::DeleteWorkflowTemplate(
    google::cloud::dataproc::v1::DeleteWorkflowTemplateRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteWorkflowTemplate(request),
      [this](grpc::ClientContext& context,
             google::cloud::dataproc::v1::DeleteWorkflowTemplateRequest const&
                 request) {
        return stub_->DeleteWorkflowTemplate(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google
