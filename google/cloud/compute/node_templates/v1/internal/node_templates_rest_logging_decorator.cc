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
// source: google/cloud/compute/node_templates/v1/node_templates.proto

#include "google/cloud/compute/node_templates/v1/internal/node_templates_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_node_templates_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NodeTemplatesRestLogging::NodeTemplatesRestLogging(
    std::shared_ptr<NodeTemplatesRestStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::cpp::compute::v1::NodeTemplateAggregatedList>
NodeTemplatesRestLogging::AggregatedListNodeTemplates(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::node_templates::v1::
        AggregatedListNodeTemplatesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::node_templates::v1::
                 AggregatedListNodeTemplatesRequest const& request) {
        return child_->AggregatedListNodeTemplates(rest_context, options,
                                                   request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeTemplatesRestLogging::AsyncDeleteNodeTemplate(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::node_templates::v1::
        DeleteNodeTemplateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::node_templates::v1::
                 DeleteNodeTemplateRequest const& request) {
        return child_->AsyncDeleteNodeTemplate(cq, std::move(rest_context),
                                               options, request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::NodeTemplate>
NodeTemplatesRestLogging::GetNodeTemplate(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::node_templates::v1::
        GetNodeTemplateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::node_templates::v1::
                 GetNodeTemplateRequest const& request) {
        return child_->GetNodeTemplate(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NodeTemplatesRestLogging::GetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::node_templates::v1::GetIamPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::node_templates::v1::
                 GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeTemplatesRestLogging::AsyncInsertNodeTemplate(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::node_templates::v1::
        InsertNodeTemplateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::node_templates::v1::
                 InsertNodeTemplateRequest const& request) {
        return child_->AsyncInsertNodeTemplate(cq, std::move(rest_context),
                                               options, request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::NodeTemplateList>
NodeTemplatesRestLogging::ListNodeTemplates(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::node_templates::v1::
        ListNodeTemplatesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::node_templates::v1::
                 ListNodeTemplatesRequest const& request) {
        return child_->ListNodeTemplates(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NodeTemplatesRestLogging::SetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::node_templates::v1::SetIamPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::node_templates::v1::
                 SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
NodeTemplatesRestLogging::TestIamPermissions(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::node_templates::v1::
        TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::node_templates::v1::
                 TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeTemplatesRestLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_operations::v1::
        GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::region_operations::v1::
                 GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(rest_context), options,
                                         request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

future<Status> NodeTemplatesRestLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_operations::v1::
        DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::region_operations::v1::
                 DeleteOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                            options, request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_templates_v1_internal
}  // namespace cloud
}  // namespace google
