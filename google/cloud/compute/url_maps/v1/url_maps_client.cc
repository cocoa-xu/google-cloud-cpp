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
// source: google/cloud/compute/url_maps/v1/url_maps.proto

#include "google/cloud/compute/url_maps/v1/url_maps_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_url_maps_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

UrlMapsClient::UrlMapsClient(ExperimentalTag,
                             std::shared_ptr<UrlMapsConnection> connection,
                             Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
UrlMapsClient::~UrlMapsClient() = default;

StreamRange<
    std::pair<std::string, google::cloud::cpp::compute::v1::UrlMapsScopedList>>
UrlMapsClient::AggregatedListUrlMaps(std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::url_maps::v1::AggregatedListUrlMapsRequest
      request;
  request.set_project(project);
  return connection_->AggregatedListUrlMaps(request);
}

StreamRange<
    std::pair<std::string, google::cloud::cpp::compute::v1::UrlMapsScopedList>>
UrlMapsClient::AggregatedListUrlMaps(
    google::cloud::cpp::compute::url_maps::v1::AggregatedListUrlMapsRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AggregatedListUrlMaps(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
UrlMapsClient::DeleteUrlMap(std::string const& project,
                            std::string const& url_map, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::url_maps::v1::DeleteUrlMapRequest request;
  request.set_project(project);
  request.set_url_map(url_map);
  return connection_->DeleteUrlMap(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
UrlMapsClient::DeleteUrlMap(
    google::cloud::cpp::compute::url_maps::v1::DeleteUrlMapRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteUrlMap(request);
}

StatusOr<google::cloud::cpp::compute::v1::UrlMap> UrlMapsClient::GetUrlMap(
    std::string const& project, std::string const& url_map, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::url_maps::v1::GetUrlMapRequest request;
  request.set_project(project);
  request.set_url_map(url_map);
  return connection_->GetUrlMap(request);
}

StatusOr<google::cloud::cpp::compute::v1::UrlMap> UrlMapsClient::GetUrlMap(
    google::cloud::cpp::compute::url_maps::v1::GetUrlMapRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetUrlMap(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
UrlMapsClient::InsertUrlMap(
    std::string const& project,
    google::cloud::cpp::compute::v1::UrlMap const& url_map_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::url_maps::v1::InsertUrlMapRequest request;
  request.set_project(project);
  *request.mutable_url_map_resource() = url_map_resource;
  return connection_->InsertUrlMap(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
UrlMapsClient::InsertUrlMap(
    google::cloud::cpp::compute::url_maps::v1::InsertUrlMapRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertUrlMap(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
UrlMapsClient::InvalidateCache(
    std::string const& project, std::string const& url_map,
    google::cloud::cpp::compute::v1::CacheInvalidationRule const&
        cache_invalidation_rule_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::url_maps::v1::InvalidateCacheRequest request;
  request.set_project(project);
  request.set_url_map(url_map);
  *request.mutable_cache_invalidation_rule_resource() =
      cache_invalidation_rule_resource;
  return connection_->InvalidateCache(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
UrlMapsClient::InvalidateCache(
    google::cloud::cpp::compute::url_maps::v1::InvalidateCacheRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InvalidateCache(request);
}

StreamRange<google::cloud::cpp::compute::v1::UrlMap> UrlMapsClient::ListUrlMaps(
    std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::url_maps::v1::ListUrlMapsRequest request;
  request.set_project(project);
  return connection_->ListUrlMaps(request);
}

StreamRange<google::cloud::cpp::compute::v1::UrlMap> UrlMapsClient::ListUrlMaps(
    google::cloud::cpp::compute::url_maps::v1::ListUrlMapsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListUrlMaps(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
UrlMapsClient::PatchUrlMap(
    std::string const& project, std::string const& url_map,
    google::cloud::cpp::compute::v1::UrlMap const& url_map_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::url_maps::v1::PatchUrlMapRequest request;
  request.set_project(project);
  request.set_url_map(url_map);
  *request.mutable_url_map_resource() = url_map_resource;
  return connection_->PatchUrlMap(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
UrlMapsClient::PatchUrlMap(
    google::cloud::cpp::compute::url_maps::v1::PatchUrlMapRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchUrlMap(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
UrlMapsClient::UpdateUrlMap(
    std::string const& project, std::string const& url_map,
    google::cloud::cpp::compute::v1::UrlMap const& url_map_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::url_maps::v1::UpdateUrlMapRequest request;
  request.set_project(project);
  request.set_url_map(url_map);
  *request.mutable_url_map_resource() = url_map_resource;
  return connection_->UpdateUrlMap(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
UrlMapsClient::UpdateUrlMap(
    google::cloud::cpp::compute::url_maps::v1::UpdateUrlMapRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateUrlMap(request);
}

StatusOr<google::cloud::cpp::compute::v1::UrlMapsValidateResponse>
UrlMapsClient::Validate(
    std::string const& project, std::string const& url_map,
    google::cloud::cpp::compute::v1::UrlMapsValidateRequest const&
        url_maps_validate_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::url_maps::v1::ValidateRequest request;
  request.set_project(project);
  request.set_url_map(url_map);
  *request.mutable_url_maps_validate_request_resource() =
      url_maps_validate_request_resource;
  return connection_->Validate(request);
}

StatusOr<google::cloud::cpp::compute::v1::UrlMapsValidateResponse>
UrlMapsClient::Validate(
    google::cloud::cpp::compute::url_maps::v1::ValidateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Validate(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_url_maps_v1
}  // namespace cloud
}  // namespace google
