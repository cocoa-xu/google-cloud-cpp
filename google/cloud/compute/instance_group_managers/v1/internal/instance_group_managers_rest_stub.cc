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
// source:
// google/cloud/compute/instance_group_managers/v1/instance_group_managers.proto

#include "google/cloud/compute/instance_group_managers/v1/internal/instance_group_managers_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/cloud/compute/instance_group_managers/v1/instance_group_managers.pb.h>
#include <google/longrunning/operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_instance_group_managers_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultInstanceGroupManagersRestStub::DefaultInstanceGroupManagersRestStub(
    Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      operations_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultInstanceGroupManagersRestStub::DefaultInstanceGroupManagersRestStub(
    std::shared_ptr<rest_internal::RestClient> service,
    std::shared_ptr<rest_internal::RestClient> operations, Options options)
    : service_(std::move(service)),
      operations_(std::move(operations)),
      options_(std::move(options)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultInstanceGroupManagersRestStub::AsyncAbandonInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        AbandonInstancesRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(rest_internal::Post<
                    google::cloud::cpp::compute::v1::Operation>(
            *service, *rest_context,
            request
                .instance_group_managers_abandon_instances_request_resource(),
            absl::StrCat("/compute/v1/projects/", request.project(), "/zones/",
                         request.zone(), "/instanceGroupManagers/",
                         request.instance_group_manager(),
                         "/abandonInstances")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManagerAggregatedList>
DefaultInstanceGroupManagersRestStub::AggregatedListInstanceGroupManagers(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        AggregatedListInstanceGroupManagersRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::InstanceGroupManagerAggregatedList>(
      *service_, rest_context, request,
      absl::StrCat("/compute/v1/projects/", request.project(),
                   "/aggregated/instanceGroupManagers"),
      {std::make_pair("filter", request.filter()),
       std::make_pair("include_all_scopes",
                      request.include_all_scopes() ? "1" : "0"),
       std::make_pair("max_results", std::to_string(request.max_results())),
       std::make_pair("order_by", request.order_by()),
       std::make_pair("page_token", request.page_token()),
       std::make_pair("return_partial_success",
                      request.return_partial_success() ? "1" : "0")});
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultInstanceGroupManagersRestStub::AsyncApplyUpdatesToInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        ApplyUpdatesToInstancesRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request
                    .instance_group_managers_apply_updates_request_resource(),
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/zones/", request.zone(),
                             "/instanceGroupManagers/",
                             request.instance_group_manager(),
                             "/applyUpdatesToInstances")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultInstanceGroupManagersRestStub::AsyncCreateInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        CreateInstancesRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(rest_internal::Post<
                    google::cloud::cpp::compute::v1::Operation>(
            *service, *rest_context,
            request.instance_group_managers_create_instances_request_resource(),
            absl::StrCat("/compute/v1/projects/", request.project(), "/zones/",
                         request.zone(), "/instanceGroupManagers/",
                         request.instance_group_manager(),
                         "/createInstances")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultInstanceGroupManagersRestStub::AsyncDeleteInstanceGroupManagers(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        DeleteInstanceGroupManagersRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Delete<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request,
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/zones/", request.zone(),
                             "/instanceGroupManagers/",
                             request.instance_group_manager(), "")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultInstanceGroupManagersRestStub::AsyncDeleteInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        DeleteInstancesRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(rest_internal::Post<
                    google::cloud::cpp::compute::v1::Operation>(
            *service, *rest_context,
            request.instance_group_managers_delete_instances_request_resource(),
            absl::StrCat("/compute/v1/projects/", request.project(), "/zones/",
                         request.zone(), "/instanceGroupManagers/",
                         request.instance_group_manager(),
                         "/deleteInstances")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultInstanceGroupManagersRestStub::AsyncDeletePerInstanceConfigs(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        DeletePerInstanceConfigsRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(rest_internal::Post<
                    google::cloud::cpp::compute::v1::Operation>(
            *service, *rest_context,
            request
                .instance_group_managers_delete_per_instance_configs_req_resource(),
            absl::StrCat("/compute/v1/projects/", request.project(), "/zones/",
                         request.zone(), "/instanceGroupManagers/",
                         request.instance_group_manager(),
                         "/deletePerInstanceConfigs")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManager>
DefaultInstanceGroupManagersRestStub::GetInstanceGroupManagers(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        GetInstanceGroupManagersRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::InstanceGroupManager>(
      *service_, rest_context, request,
      absl::StrCat("/compute/v1/projects/", request.project(), "/zones/",
                   request.zone(), "/instanceGroupManagers/",
                   request.instance_group_manager(), ""),
      {std::make_pair("project", request.project()),
       std::make_pair("zone", request.zone())});
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultInstanceGroupManagersRestStub::AsyncInsertInstanceGroupManagers(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        InsertInstanceGroupManagersRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.instance_group_manager_resource(),
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/zones/", request.zone(),
                             "/instanceGroupManagers")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManagerList>
DefaultInstanceGroupManagersRestStub::ListInstanceGroupManagers(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        ListInstanceGroupManagersRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::InstanceGroupManagerList>(
      *service_, rest_context, request,
      absl::StrCat("/compute/v1/projects/", request.project(), "/zones/",
                   request.zone(), "/instanceGroupManagers"),
      {std::make_pair("filter", request.filter()),
       std::make_pair("max_results", std::to_string(request.max_results())),
       std::make_pair("order_by", request.order_by()),
       std::make_pair("page_token", request.page_token()),
       std::make_pair("project", request.project()),
       std::make_pair("return_partial_success",
                      request.return_partial_success() ? "1" : "0")});
}

StatusOr<
    google::cloud::cpp::compute::v1::InstanceGroupManagersListErrorsResponse>
DefaultInstanceGroupManagersRestStub::ListErrors(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        ListErrorsRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::InstanceGroupManagersListErrorsResponse>(
      *service_, rest_context, request,
      absl::StrCat("/compute/v1/projects/", request.project(), "/zones/",
                   request.zone(), "/instanceGroupManagers/",
                   request.instance_group_manager(), "/listErrors"),
      {std::make_pair("filter", request.filter()),
       std::make_pair("max_results", std::to_string(request.max_results())),
       std::make_pair("order_by", request.order_by()),
       std::make_pair("page_token", request.page_token()),
       std::make_pair("project", request.project()),
       std::make_pair("return_partial_success",
                      request.return_partial_success() ? "1" : "0"),
       std::make_pair("zone", request.zone())});
}

StatusOr<google::cloud::cpp::compute::v1::
             InstanceGroupManagersListManagedInstancesResponse>
DefaultInstanceGroupManagersRestStub::ListManagedInstances(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        ListManagedInstancesRequest const& request) {
  return rest_internal::Post<
      google::cloud::cpp::compute::v1::
          InstanceGroupManagersListManagedInstancesResponse>(
      *service_, rest_context, request,
      absl::StrCat("/compute/v1/projects/", request.project(), "/zones/",
                   request.zone(), "/instanceGroupManagers/",
                   request.instance_group_manager(), "/listManagedInstances"));
}

StatusOr<google::cloud::cpp::compute::v1::
             InstanceGroupManagersListPerInstanceConfigsResp>
DefaultInstanceGroupManagersRestStub::ListPerInstanceConfigs(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        ListPerInstanceConfigsRequest const& request) {
  return rest_internal::Post<
      google::cloud::cpp::compute::v1::
          InstanceGroupManagersListPerInstanceConfigsResp>(
      *service_, rest_context, request,
      absl::StrCat("/compute/v1/projects/", request.project(), "/zones/",
                   request.zone(), "/instanceGroupManagers/",
                   request.instance_group_manager(),
                   "/listPerInstanceConfigs"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultInstanceGroupManagersRestStub::AsyncPatchInstanceGroupManagers(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        PatchInstanceGroupManagersRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Patch<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context,
                request.instance_group_manager_resource(),
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/zones/", request.zone(),
                             "/instanceGroupManagers/",
                             request.instance_group_manager(), "")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultInstanceGroupManagersRestStub::AsyncPatchPerInstanceConfigs(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        PatchPerInstanceConfigsRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(rest_internal::Post<
                    google::cloud::cpp::compute::v1::Operation>(
            *service, *rest_context,
            request
                .instance_group_managers_patch_per_instance_configs_req_resource(),
            absl::StrCat("/compute/v1/projects/", request.project(), "/zones/",
                         request.zone(), "/instanceGroupManagers/",
                         request.instance_group_manager(),
                         "/patchPerInstanceConfigs")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultInstanceGroupManagersRestStub::AsyncRecreateInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        RecreateInstancesRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(rest_internal::Post<
                    google::cloud::cpp::compute::v1::Operation>(
            *service, *rest_context,
            request
                .instance_group_managers_recreate_instances_request_resource(),
            absl::StrCat("/compute/v1/projects/", request.project(), "/zones/",
                         request.zone(), "/instanceGroupManagers/",
                         request.instance_group_manager(),
                         "/recreateInstances")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultInstanceGroupManagersRestStub::AsyncResize(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        ResizeRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Post<google::cloud::cpp::compute::v1::Operation>(
                *service, *rest_context, request,
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/zones/", request.zone(),
                             "/instanceGroupManagers/",
                             request.instance_group_manager(), "/resize")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultInstanceGroupManagersRestStub::AsyncSetInstanceTemplate(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        SetInstanceTemplateRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(rest_internal::Post<
                    google::cloud::cpp::compute::v1::Operation>(
            *service, *rest_context,
            request
                .instance_group_managers_set_instance_template_request_resource(),
            absl::StrCat("/compute/v1/projects/", request.project(), "/zones/",
                         request.zone(), "/instanceGroupManagers/",
                         request.instance_group_manager(),
                         "/setInstanceTemplate")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultInstanceGroupManagersRestStub::AsyncSetTargetPools(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        SetTargetPoolsRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(rest_internal::Post<
                    google::cloud::cpp::compute::v1::Operation>(
            *service, *rest_context,
            request.instance_group_managers_set_target_pools_request_resource(),
            absl::StrCat("/compute/v1/projects/", request.project(), "/zones/",
                         request.zone(), "/instanceGroupManagers/",
                         request.instance_group_manager(), "/setTargetPools")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultInstanceGroupManagersRestStub::AsyncUpdatePerInstanceConfigs(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::instance_group_managers::v1::
        UpdatePerInstanceConfigsRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context) {
        p.set_value(rest_internal::Post<
                    google::cloud::cpp::compute::v1::Operation>(
            *service, *rest_context,
            request
                .instance_group_managers_update_per_instance_configs_req_resource(),
            absl::StrCat("/compute/v1/projects/", request.project(), "/zones/",
                         request.zone(), "/instanceGroupManagers/",
                         request.instance_group_manager(),
                         "/updatePerInstanceConfigs")));
      },
      std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DefaultInstanceGroupManagersRestStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::zone_operations::v1::
        GetZoneOperationsRequest const& request) {
  promise<StatusOr<google::cloud::cpp::compute::v1::Operation>> p;
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> f =
      p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context) {
        p.set_value(
            rest_internal::Get<google::cloud::cpp::compute::v1::Operation>(
                *operations, *rest_context, request,
                absl::StrCat("/compute/v1/projects/", request.project(),
                             "/zones/", request.zone(), "/operations/",
                             request.operation())));
      },
      std::move(p), operations_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<Status> DefaultInstanceGroupManagersRestStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::zone_operations::v1::
        DeleteZoneOperationsRequest const& request) {
  promise<StatusOr<google::protobuf::Empty>> p;
  future<StatusOr<google::protobuf::Empty>> f = p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context) {
        p.set_value(rest_internal::Post<google::protobuf::Empty>(
            *operations, *rest_context, request,
            absl::StrCat("/compute/v1/projects/", request.project(), "/zones/",
                         request.zone(), "/operations/", request.operation())));
      },
      std::move(p), operations_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get().status();
  });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_group_managers_v1_internal
}  // namespace cloud
}  // namespace google
