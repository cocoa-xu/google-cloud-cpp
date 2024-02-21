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
// source: google/cloud/compute/region_ssl_policies/v1/region_ssl_policies.proto

#include "google/cloud/compute/region_ssl_policies/v1/region_ssl_policies_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_region_ssl_policies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionSslPoliciesClient::RegionSslPoliciesClient(
    std::shared_ptr<RegionSslPoliciesConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
RegionSslPoliciesClient::~RegionSslPoliciesClient() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSslPoliciesClient::DeleteSslPolicy(std::string const& project,
                                         std::string const& region,
                                         std::string const& ssl_policy,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_ssl_policies::v1::DeleteSslPolicyRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_ssl_policy(ssl_policy);
  return connection_->DeleteSslPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSslPoliciesClient::DeleteSslPolicy(
    google::cloud::cpp::compute::region_ssl_policies::v1::
        DeleteSslPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSslPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::SslPolicy>
RegionSslPoliciesClient::GetSslPolicy(std::string const& project,
                                      std::string const& region,
                                      std::string const& ssl_policy,
                                      Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_ssl_policies::v1::GetSslPolicyRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_ssl_policy(ssl_policy);
  return connection_->GetSslPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::SslPolicy>
RegionSslPoliciesClient::GetSslPolicy(
    google::cloud::cpp::compute::region_ssl_policies::v1::
        GetSslPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetSslPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSslPoliciesClient::InsertSslPolicy(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::SslPolicy const& ssl_policy_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_ssl_policies::v1::InsertSslPolicyRequest
      request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_ssl_policy_resource() = ssl_policy_resource;
  return connection_->InsertSslPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSslPoliciesClient::InsertSslPolicy(
    google::cloud::cpp::compute::region_ssl_policies::v1::
        InsertSslPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertSslPolicy(request);
}

StreamRange<google::cloud::cpp::compute::v1::SslPolicy>
RegionSslPoliciesClient::ListRegionSslPolicies(std::string const& project,
                                               std::string const& region,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_ssl_policies::v1::
      ListRegionSslPoliciesRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListRegionSslPolicies(request);
}

StreamRange<google::cloud::cpp::compute::v1::SslPolicy>
RegionSslPoliciesClient::ListRegionSslPolicies(
    google::cloud::cpp::compute::region_ssl_policies::v1::
        ListRegionSslPoliciesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRegionSslPolicies(std::move(request));
}

StatusOr<
    google::cloud::cpp::compute::v1::SslPoliciesListAvailableFeaturesResponse>
RegionSslPoliciesClient::ListAvailableFeatures(std::string const& project,
                                               std::string const& region,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_ssl_policies::v1::
      ListAvailableFeaturesRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListAvailableFeatures(request);
}

StatusOr<
    google::cloud::cpp::compute::v1::SslPoliciesListAvailableFeaturesResponse>
RegionSslPoliciesClient::ListAvailableFeatures(
    google::cloud::cpp::compute::region_ssl_policies::v1::
        ListAvailableFeaturesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAvailableFeatures(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSslPoliciesClient::PatchSslPolicy(
    std::string const& project, std::string const& region,
    std::string const& ssl_policy,
    google::cloud::cpp::compute::v1::SslPolicy const& ssl_policy_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::region_ssl_policies::v1::PatchSslPolicyRequest
      request;
  request.set_project(project);
  request.set_region(region);
  request.set_ssl_policy(ssl_policy);
  *request.mutable_ssl_policy_resource() = ssl_policy_resource;
  return connection_->PatchSslPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSslPoliciesClient::PatchSslPolicy(
    google::cloud::cpp::compute::region_ssl_policies::v1::
        PatchSslPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchSslPolicy(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_ssl_policies_v1
}  // namespace cloud
}  // namespace google
