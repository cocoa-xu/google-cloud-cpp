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
// source: google/cloud/orchestration/airflow/service/v1/image_versions.proto

#include "google/cloud/composer/v1/internal/image_versions_option_defaults.h"
#include "google/cloud/composer/v1/image_versions_connection.h"
#include "google/cloud/composer/v1/image_versions_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace composer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options ImageVersionsDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_IMAGE_VERSIONS_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_IMAGE_VERSIONS_AUTHORITY", "composer.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<composer_v1::ImageVersionsRetryPolicyOption>()) {
    options.set<composer_v1::ImageVersionsRetryPolicyOption>(
        composer_v1::ImageVersionsLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<composer_v1::ImageVersionsBackoffPolicyOption>()) {
    options.set<composer_v1::ImageVersionsBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<
          composer_v1::ImageVersionsConnectionIdempotencyPolicyOption>()) {
    options.set<composer_v1::ImageVersionsConnectionIdempotencyPolicyOption>(
        composer_v1::MakeDefaultImageVersionsConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace composer_v1_internal
}  // namespace cloud
}  // namespace google
