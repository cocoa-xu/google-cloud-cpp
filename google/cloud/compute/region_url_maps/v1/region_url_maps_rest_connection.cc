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
// source: google/cloud/compute/region_url_maps/v1/region_url_maps.proto

#include "google/cloud/compute/region_url_maps/v1/region_url_maps_rest_connection.h"
#include "google/cloud/compute/region_url_maps/v1/internal/region_url_maps_option_defaults.h"
#include "google/cloud/compute/region_url_maps/v1/internal/region_url_maps_rest_connection_impl.h"
#include "google/cloud/compute/region_url_maps/v1/internal/region_url_maps_rest_stub_factory.h"
#include "google/cloud/compute/region_url_maps/v1/internal/region_url_maps_tracing_connection.h"
#include "google/cloud/compute/region_url_maps/v1/region_url_maps_options.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/rest_background_threads_impl.h"
#include "google/cloud/internal/rest_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_region_url_maps_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<RegionUrlMapsConnection> MakeRegionUrlMapsConnectionRest(
    Options options) {
  internal::CheckExpectedOptions<
      CommonOptionList, RestOptionList, UnifiedCredentialsOptionList,
      rest_internal::TargetApiVersionOption, RegionUrlMapsPolicyOptionList>(
      options, __func__);
  options = compute_region_url_maps_v1_internal::RegionUrlMapsDefaultOptions(
      std::move(options));
  auto background = std::make_unique<
      rest_internal::AutomaticallyCreatedRestBackgroundThreads>();
  auto stub =
      compute_region_url_maps_v1_internal::CreateDefaultRegionUrlMapsRestStub(
          options);
  return compute_region_url_maps_v1_internal::
      MakeRegionUrlMapsTracingConnection(
          std::make_shared<compute_region_url_maps_v1_internal::
                               RegionUrlMapsRestConnectionImpl>(
              std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_url_maps_v1
}  // namespace cloud
}  // namespace google
