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

#include "google/cloud/compute/url_maps/v1/url_maps_connection.h"
#include "google/cloud/compute/url_maps/v1/internal/url_maps_option_defaults.h"
#include "google/cloud/compute/url_maps/v1/internal/url_maps_tracing_connection.h"
#include "google/cloud/compute/url_maps/v1/url_maps_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_url_maps_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

UrlMapsConnection::~UrlMapsConnection() = default;

StreamRange<
    std::pair<std::string, google::cloud::cpp::compute::v1::UrlMapsScopedList>>
UrlMapsConnection::AggregatedListUrlMaps(
    google::cloud::cpp::compute::url_maps::v1::
        AggregatedListUrlMapsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<std::pair<
          std::string, google::cloud::cpp::compute::v1::UrlMapsScopedList>>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
UrlMapsConnection::DeleteUrlMap(
    google::cloud::cpp::compute::url_maps::v1::DeleteUrlMapRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::UrlMap> UrlMapsConnection::GetUrlMap(
    google::cloud::cpp::compute::url_maps::v1::GetUrlMapRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
UrlMapsConnection::InsertUrlMap(
    google::cloud::cpp::compute::url_maps::v1::InsertUrlMapRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
UrlMapsConnection::InvalidateCache(
    google::cloud::cpp::compute::url_maps::v1::InvalidateCacheRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::UrlMap>
UrlMapsConnection::ListUrlMaps(
    google::cloud::cpp::compute::url_maps::v1::
        ListUrlMapsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::UrlMap>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
UrlMapsConnection::PatchUrlMap(
    google::cloud::cpp::compute::url_maps::v1::PatchUrlMapRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
UrlMapsConnection::UpdateUrlMap(
    google::cloud::cpp::compute::url_maps::v1::UpdateUrlMapRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::UrlMapsValidateResponse>
UrlMapsConnection::Validate(
    google::cloud::cpp::compute::url_maps::v1::ValidateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_url_maps_v1
}  // namespace cloud
}  // namespace google
