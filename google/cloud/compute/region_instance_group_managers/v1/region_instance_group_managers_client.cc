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
// google/cloud/compute/region_instance_group_managers/v1/region_instance_group_managers.proto

#include "google/cloud/compute/region_instance_group_managers/v1/region_instance_group_managers_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_region_instance_group_managers_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionInstanceGroupManagersClient::RegionInstanceGroupManagersClient(
    std::shared_ptr<RegionInstanceGroupManagersConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
RegionInstanceGroupManagersClient::~RegionInstanceGroupManagersClient() =
    default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::AbandonInstances(
    std::string const& project, std::string const& region,
    std::string const& instance_group_manager,
    google::cloud::cpp::compute::v1::
        RegionInstanceGroupManagersAbandonInstancesRequest const&
            region_instance_group_managers_abandon_instances_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_instance_group_managers::v1::
      AbandonInstancesRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_instance_group_manager(instance_group_manager);
  *request
       .mutable_region_instance_group_managers_abandon_instances_request_resource() =
      region_instance_group_managers_abandon_instances_request_resource;
  return connection_->AbandonInstances(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::AbandonInstances(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        AbandonInstancesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AbandonInstances(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::ApplyUpdatesToInstances(
    std::string const& project, std::string const& region,
    std::string const& instance_group_manager,
    google::cloud::cpp::compute::v1::
        RegionInstanceGroupManagersApplyUpdatesRequest const&
            region_instance_group_managers_apply_updates_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_instance_group_managers::v1::
      ApplyUpdatesToInstancesRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_instance_group_manager(instance_group_manager);
  *request
       .mutable_region_instance_group_managers_apply_updates_request_resource() =
      region_instance_group_managers_apply_updates_request_resource;
  return connection_->ApplyUpdatesToInstances(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::ApplyUpdatesToInstances(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ApplyUpdatesToInstancesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ApplyUpdatesToInstances(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::CreateInstances(
    std::string const& project, std::string const& region,
    std::string const& instance_group_manager,
    google::cloud::cpp::compute::v1::
        RegionInstanceGroupManagersCreateInstancesRequest const&
            region_instance_group_managers_create_instances_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_instance_group_managers::v1::
      CreateInstancesRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_instance_group_manager(instance_group_manager);
  *request
       .mutable_region_instance_group_managers_create_instances_request_resource() =
      region_instance_group_managers_create_instances_request_resource;
  return connection_->CreateInstances(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::CreateInstances(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        CreateInstancesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInstances(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::DeleteInstanceGroupManager(
    std::string const& project, std::string const& region,
    std::string const& instance_group_manager, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_instance_group_managers::v1::
      DeleteInstanceGroupManagerRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_instance_group_manager(instance_group_manager);
  return connection_->DeleteInstanceGroupManager(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::DeleteInstanceGroupManager(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        DeleteInstanceGroupManagerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInstanceGroupManager(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::DeleteInstances(
    std::string const& project, std::string const& region,
    std::string const& instance_group_manager,
    google::cloud::cpp::compute::v1::
        RegionInstanceGroupManagersDeleteInstancesRequest const&
            region_instance_group_managers_delete_instances_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_instance_group_managers::v1::
      DeleteInstancesRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_instance_group_manager(instance_group_manager);
  *request
       .mutable_region_instance_group_managers_delete_instances_request_resource() =
      region_instance_group_managers_delete_instances_request_resource;
  return connection_->DeleteInstances(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::DeleteInstances(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        DeleteInstancesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInstances(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::DeletePerInstanceConfigs(
    std::string const& project, std::string const& region,
    std::string const& instance_group_manager,
    google::cloud::cpp::compute::v1::
        RegionInstanceGroupManagerDeleteInstanceConfigReq const&
            region_instance_group_manager_delete_instance_config_req_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_instance_group_managers::v1::
      DeletePerInstanceConfigsRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_instance_group_manager(instance_group_manager);
  *request
       .mutable_region_instance_group_manager_delete_instance_config_req_resource() =
      region_instance_group_manager_delete_instance_config_req_resource;
  return connection_->DeletePerInstanceConfigs(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::DeletePerInstanceConfigs(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        DeletePerInstanceConfigsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeletePerInstanceConfigs(request);
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManager>
RegionInstanceGroupManagersClient::GetInstanceGroupManager(
    std::string const& project, std::string const& region,
    std::string const& instance_group_manager, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_instance_group_managers::v1::
      GetInstanceGroupManagerRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_instance_group_manager(instance_group_manager);
  return connection_->GetInstanceGroupManager(request);
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManager>
RegionInstanceGroupManagersClient::GetInstanceGroupManager(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        GetInstanceGroupManagerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetInstanceGroupManager(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::InsertInstanceGroupManager(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::InstanceGroupManager const&
        instance_group_manager_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_instance_group_managers::v1::
      InsertInstanceGroupManagerRequest request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_instance_group_manager_resource() =
      instance_group_manager_resource;
  return connection_->InsertInstanceGroupManager(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::InsertInstanceGroupManager(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        InsertInstanceGroupManagerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertInstanceGroupManager(request);
}

StreamRange<google::cloud::cpp::compute::v1::InstanceGroupManager>
RegionInstanceGroupManagersClient::ListRegionInstanceGroupManagers(
    std::string const& project, std::string const& region, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_instance_group_managers::v1::
      ListRegionInstanceGroupManagersRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListRegionInstanceGroupManagers(request);
}

StreamRange<google::cloud::cpp::compute::v1::InstanceGroupManager>
RegionInstanceGroupManagersClient::ListRegionInstanceGroupManagers(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ListRegionInstanceGroupManagersRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRegionInstanceGroupManagers(std::move(request));
}

StreamRange<google::cloud::cpp::compute::v1::InstanceManagedByIgmError>
RegionInstanceGroupManagersClient::ListErrors(
    std::string const& project, std::string const& region,
    std::string const& instance_group_manager, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_instance_group_managers::v1::
      ListErrorsRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_instance_group_manager(instance_group_manager);
  return connection_->ListErrors(request);
}

StreamRange<google::cloud::cpp::compute::v1::InstanceManagedByIgmError>
RegionInstanceGroupManagersClient::ListErrors(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ListErrorsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListErrors(std::move(request));
}

StatusOr<google::cloud::cpp::compute::v1::
             RegionInstanceGroupManagersListInstancesResponse>
RegionInstanceGroupManagersClient::ListManagedInstances(
    std::string const& project, std::string const& region,
    std::string const& instance_group_manager, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_instance_group_managers::v1::
      ListManagedInstancesRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_instance_group_manager(instance_group_manager);
  return connection_->ListManagedInstances(request);
}

StatusOr<google::cloud::cpp::compute::v1::
             RegionInstanceGroupManagersListInstancesResponse>
RegionInstanceGroupManagersClient::ListManagedInstances(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ListManagedInstancesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListManagedInstances(request);
}

StreamRange<google::cloud::cpp::compute::v1::PerInstanceConfig>
RegionInstanceGroupManagersClient::ListPerInstanceConfigs(
    std::string const& project, std::string const& region,
    std::string const& instance_group_manager, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_instance_group_managers::v1::
      ListPerInstanceConfigsRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_instance_group_manager(instance_group_manager);
  return connection_->ListPerInstanceConfigs(request);
}

StreamRange<google::cloud::cpp::compute::v1::PerInstanceConfig>
RegionInstanceGroupManagersClient::ListPerInstanceConfigs(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ListPerInstanceConfigsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListPerInstanceConfigs(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::PatchInstanceGroupManager(
    std::string const& project, std::string const& region,
    std::string const& instance_group_manager,
    google::cloud::cpp::compute::v1::InstanceGroupManager const&
        instance_group_manager_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_instance_group_managers::v1::
      PatchInstanceGroupManagerRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_instance_group_manager(instance_group_manager);
  *request.mutable_instance_group_manager_resource() =
      instance_group_manager_resource;
  return connection_->PatchInstanceGroupManager(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::PatchInstanceGroupManager(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        PatchInstanceGroupManagerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchInstanceGroupManager(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::PatchPerInstanceConfigs(
    std::string const& project, std::string const& region,
    std::string const& instance_group_manager,
    google::cloud::cpp::compute::v1::
        RegionInstanceGroupManagerPatchInstanceConfigReq const&
            region_instance_group_manager_patch_instance_config_req_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_instance_group_managers::v1::
      PatchPerInstanceConfigsRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_instance_group_manager(instance_group_manager);
  *request
       .mutable_region_instance_group_manager_patch_instance_config_req_resource() =
      region_instance_group_manager_patch_instance_config_req_resource;
  return connection_->PatchPerInstanceConfigs(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::PatchPerInstanceConfigs(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        PatchPerInstanceConfigsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchPerInstanceConfigs(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::RecreateInstances(
    std::string const& project, std::string const& region,
    std::string const& instance_group_manager,
    google::cloud::cpp::compute::v1::
        RegionInstanceGroupManagersRecreateRequest const&
            region_instance_group_managers_recreate_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_instance_group_managers::v1::
      RecreateInstancesRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_instance_group_manager(instance_group_manager);
  *request.mutable_region_instance_group_managers_recreate_request_resource() =
      region_instance_group_managers_recreate_request_resource;
  return connection_->RecreateInstances(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::RecreateInstances(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        RecreateInstancesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RecreateInstances(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::Resize(
    std::string const& project, std::string const& region,
    std::string const& instance_group_manager, std::int32_t size,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_instance_group_managers::v1::ResizeRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_instance_group_manager(instance_group_manager);
  request.set_size(size);
  return connection_->Resize(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::Resize(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ResizeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Resize(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::SetInstanceTemplate(
    std::string const& project, std::string const& region,
    std::string const& instance_group_manager,
    google::cloud::cpp::compute::v1::
        RegionInstanceGroupManagersSetTemplateRequest const&
            region_instance_group_managers_set_template_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_instance_group_managers::v1::
      SetInstanceTemplateRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_instance_group_manager(instance_group_manager);
  *request
       .mutable_region_instance_group_managers_set_template_request_resource() =
      region_instance_group_managers_set_template_request_resource;
  return connection_->SetInstanceTemplate(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::SetInstanceTemplate(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        SetInstanceTemplateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetInstanceTemplate(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::SetTargetPools(
    std::string const& project, std::string const& region,
    std::string const& instance_group_manager,
    google::cloud::cpp::compute::v1::
        RegionInstanceGroupManagersSetTargetPoolsRequest const&
            region_instance_group_managers_set_target_pools_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_instance_group_managers::v1::
      SetTargetPoolsRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_instance_group_manager(instance_group_manager);
  *request
       .mutable_region_instance_group_managers_set_target_pools_request_resource() =
      region_instance_group_managers_set_target_pools_request_resource;
  return connection_->SetTargetPools(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::SetTargetPools(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        SetTargetPoolsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetTargetPools(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::UpdatePerInstanceConfigs(
    std::string const& project, std::string const& region,
    std::string const& instance_group_manager,
    google::cloud::cpp::compute::v1::
        RegionInstanceGroupManagerUpdateInstanceConfigReq const&
            region_instance_group_manager_update_instance_config_req_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_instance_group_managers::v1::
      UpdatePerInstanceConfigsRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_instance_group_manager(instance_group_manager);
  *request
       .mutable_region_instance_group_manager_update_instance_config_req_resource() =
      region_instance_group_manager_update_instance_config_req_resource;
  return connection_->UpdatePerInstanceConfigs(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersClient::UpdatePerInstanceConfigs(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        UpdatePerInstanceConfigsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdatePerInstanceConfigs(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_instance_group_managers_v1
}  // namespace cloud
}  // namespace google
