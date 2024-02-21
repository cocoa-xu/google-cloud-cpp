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
// source: google/monitoring/v3/group_service.proto

#include "google/cloud/monitoring/v3/internal/group_connection_impl.h"
#include "google/cloud/monitoring/v3/internal/group_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<monitoring_v3::GroupServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<monitoring_v3::GroupServiceRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<monitoring_v3::GroupServiceBackoffPolicyOption>()->clone();
}

std::unique_ptr<monitoring_v3::GroupServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<monitoring_v3::GroupServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

GroupServiceConnectionImpl::GroupServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<monitoring_v3_internal::GroupServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      GroupServiceConnection::options())) {}

StreamRange<google::monitoring::v3::Group>
GroupServiceConnectionImpl::ListGroups(
    google::monitoring::v3::ListGroupsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListGroups(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::monitoring::v3::Group>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<monitoring_v3::GroupServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::monitoring::v3::ListGroupsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::monitoring::v3::ListGroupsRequest const& request) {
              return stub->ListGroups(context, request);
            },
            r, function_name);
      },
      [](google::monitoring::v3::ListGroupsResponse r) {
        std::vector<google::monitoring::v3::Group> result(r.group().size());
        auto& messages = *r.mutable_group();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::monitoring::v3::Group> GroupServiceConnectionImpl::GetGroup(
    google::monitoring::v3::GetGroupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetGroup(request),
      [this](grpc::ClientContext& context,
             google::monitoring::v3::GetGroupRequest const& request) {
        return stub_->GetGroup(context, request);
      },
      request, __func__);
}

StatusOr<google::monitoring::v3::Group> GroupServiceConnectionImpl::CreateGroup(
    google::monitoring::v3::CreateGroupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateGroup(request),
      [this](grpc::ClientContext& context,
             google::monitoring::v3::CreateGroupRequest const& request) {
        return stub_->CreateGroup(context, request);
      },
      request, __func__);
}

StatusOr<google::monitoring::v3::Group> GroupServiceConnectionImpl::UpdateGroup(
    google::monitoring::v3::UpdateGroupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateGroup(request),
      [this](grpc::ClientContext& context,
             google::monitoring::v3::UpdateGroupRequest const& request) {
        return stub_->UpdateGroup(context, request);
      },
      request, __func__);
}

Status GroupServiceConnectionImpl::DeleteGroup(
    google::monitoring::v3::DeleteGroupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteGroup(request),
      [this](grpc::ClientContext& context,
             google::monitoring::v3::DeleteGroupRequest const& request) {
        return stub_->DeleteGroup(context, request);
      },
      request, __func__);
}

StreamRange<google::api::MonitoredResource>
GroupServiceConnectionImpl::ListGroupMembers(
    google::monitoring::v3::ListGroupMembersRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListGroupMembers(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::api::MonitoredResource>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<monitoring_v3::GroupServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::monitoring::v3::ListGroupMembersRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::monitoring::v3::ListGroupMembersRequest const&
                       request) {
              return stub->ListGroupMembers(context, request);
            },
            r, function_name);
      },
      [](google::monitoring::v3::ListGroupMembersResponse r) {
        std::vector<google::api::MonitoredResource> result(r.members().size());
        auto& messages = *r.mutable_members();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google
