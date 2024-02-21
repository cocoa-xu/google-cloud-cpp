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

#include "google/cloud/compute/node_templates/v1/internal/node_templates_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/cloud/compute/node_templates/v1/node_templates.pb.h>
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_node_templates_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultNodeTemplatesRestStub::DefaultNodeTemplatesRestStub(Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      operations_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultNodeTemplatesRestStub::DefaultNodeTemplatesRestStub(
    std::shared_ptr<rest_internal::RestClient> service,
    std::shared_ptr<rest_internal::RestClient> operations, Options options)
    : service_(std::move(service)),
      operations_(std::move(operations)),
      options_(std::move(options)) {}

StatusOr<google::cloud::cpp::compute::v1::NodeTemplateAggregatedList>
DefaultNodeTemplatesRestStub::AggregatedListNodeTemplates(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::node_templates::v1::
        AggregatedListNodeTemplatesRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::NodeTemplateAggregatedList>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "aggregated", "/",
                   "nodeTemplates"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("filter", request.filter()),
           std::make_pair("include_all_scopes",
                          request.include_all_scopes() ? "1" : "0"),
           std::make_pair("max_results", std::to_string(request.max_results())),
           std::make_pair("order_by", request.order_by()),
           std::make_pair("page_token", request.page_token()),
           std::make_pair("return_partial_success",
                          request.return_partial_success() ? "1" : "0"),
           std::make_pair("service_project_number",
                          request.service_project_number())}));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultNodeTemplatesRestStub::AsyncDeleteNodeTemplate(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::node_templates::v1::
        DeleteNodeTemplateRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(
            rest_internal::Delete<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request, false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", options),
                             "/", "projects", "/", request.project(), "/",
                             "regions", "/", request.region(), "/",
                             "nodeTemplates", "/", request.node_template()),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("request_id", request.request_id())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      options};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::NodeTemplate>
DefaultNodeTemplatesRestStub::GetNodeTemplate(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::node_templates::v1::
        GetNodeTemplateRequest const& request) {
  return rest_internal::Get<google::cloud::cpp::compute::v1::NodeTemplate>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "nodeTemplates", "/",
                   request.node_template()));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
DefaultNodeTemplatesRestStub::GetIamPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::node_templates::v1::GetIamPolicyRequest const&
        request) {
  return rest_internal::Get<google::cloud::cpp::compute::v1::Policy>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "nodeTemplates", "/",
                   request.resource(), "/", "getIamPolicy"),
      rest_internal::TrimEmptyQueryParameters({std::make_pair(
          "options_requested_policy_version",
          std::to_string(request.options_requested_policy_version()))}));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultNodeTemplatesRestStub::AsyncInsertNodeTemplate(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::node_templates::v1::
        InsertNodeTemplateRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request.node_template_resource(),
                false,
                absl::StrCat("/", "compute", "/",
                             rest_internal::DetermineApiVersion("v1", options),
                             "/", "projects", "/", request.project(), "/",
                             "regions", "/", request.region(), "/",
                             "nodeTemplates"),
                rest_internal::TrimEmptyQueryParameters(
                    {std::make_pair("request_id", request.request_id())})));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      options};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::NodeTemplateList>
DefaultNodeTemplatesRestStub::ListNodeTemplates(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::node_templates::v1::
        ListNodeTemplatesRequest const& request) {
  return rest_internal::Get<google::cloud::cpp::compute::v1::NodeTemplateList>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "nodeTemplates"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("filter", request.filter()),
           std::make_pair("max_results", std::to_string(request.max_results())),
           std::make_pair("order_by", request.order_by()),
           std::make_pair("page_token", request.page_token()),
           std::make_pair("return_partial_success",
                          request.return_partial_success() ? "1" : "0")}));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
DefaultNodeTemplatesRestStub::SetIamPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::node_templates::v1::SetIamPolicyRequest const&
        request) {
  return rest_internal::Post<google::cloud::cpp::compute::v1::Policy>(
      *service_, rest_context, request.region_set_policy_request_resource(),
      false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "nodeTemplates", "/",
                   request.resource(), "/", "setIamPolicy"));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
DefaultNodeTemplatesRestStub::TestIamPermissions(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::node_templates::v1::
        TestIamPermissionsRequest const& request) {
  return rest_internal::Post<
      google::cloud::cpp::compute::v1::TestPermissionsResponse>(
      *service_, rest_context, request.test_permissions_request_resource(),
      false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "regions", "/",
                   request.region(), "/", "nodeTemplates", "/",
                   request.resource(), "/", "testIamPermissions"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultNodeTemplatesRestStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_operations::v1::
        GetOperationRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context,
         auto options) {
        p.set_value(
            rest_internal::Get<google::cloud::cpp::compute::v1::Operation>(
                *operations, *rest_context, request, false,
                absl::StrCat("/compute/",
                             rest_internal::DetermineApiVersion("v1", options),
                             "/projects/", request.project(), "/regions/",
                             request.region(), "/operations/",
                             request.operation())));
      },
      std::move(p),
      operations_,
      request,
      std::move(rest_context),
      options};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<Status> DefaultNodeTemplatesRestStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_operations::v1::
        DeleteOperationRequest const& request) {
  promise<StatusOr<google::protobuf::Empty>> p;
  future<StatusOr<google::protobuf::Empty>> f = p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context,
         auto options) {
        p.set_value(rest_internal::Post<google::protobuf::Empty>(
            *operations, *rest_context, request, false,
            absl::StrCat(
                "/compute/", rest_internal::DetermineApiVersion("v1", options),
                "/projects/", request.project(), "/regions/", request.region(),
                "/operations/", request.operation())));
      },
      std::move(p),
      operations_,
      request,
      std::move(rest_context),
      options};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get().status();
  });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_templates_v1_internal
}  // namespace cloud
}  // namespace google
