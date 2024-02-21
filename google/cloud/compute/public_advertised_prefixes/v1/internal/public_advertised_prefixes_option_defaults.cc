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
// google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.proto

#include "google/cloud/compute/public_advertised_prefixes/v1/internal/public_advertised_prefixes_option_defaults.h"
#include "google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes_connection.h"
#include "google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_public_advertised_prefixes_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options PublicAdvertisedPrefixesDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options),
      "GOOGLE_CLOUD_CPP_PUBLIC_ADVERTISED_PREFIXES_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_PUBLIC_ADVERTISED_PREFIXES_AUTHORITY",
      "compute.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<compute_public_advertised_prefixes_v1::
                       PublicAdvertisedPrefixesRetryPolicyOption>()) {
    options.set<compute_public_advertised_prefixes_v1::
                    PublicAdvertisedPrefixesRetryPolicyOption>(
        compute_public_advertised_prefixes_v1::
            PublicAdvertisedPrefixesLimitedTimeRetryPolicy(
                std::chrono::minutes(30))
                .clone());
  }
  if (!options.has<compute_public_advertised_prefixes_v1::
                       PublicAdvertisedPrefixesBackoffPolicyOption>()) {
    options.set<compute_public_advertised_prefixes_v1::
                    PublicAdvertisedPrefixesBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<compute_public_advertised_prefixes_v1::
                       PublicAdvertisedPrefixesPollingPolicyOption>()) {
    options.set<compute_public_advertised_prefixes_v1::
                    PublicAdvertisedPrefixesPollingPolicyOption>(
        GenericPollingPolicy<
            compute_public_advertised_prefixes_v1::
                PublicAdvertisedPrefixesRetryPolicyOption::Type,
            compute_public_advertised_prefixes_v1::
                PublicAdvertisedPrefixesBackoffPolicyOption::Type>(
            options
                .get<compute_public_advertised_prefixes_v1::
                         PublicAdvertisedPrefixesRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<
          compute_public_advertised_prefixes_v1::
              PublicAdvertisedPrefixesConnectionIdempotencyPolicyOption>()) {
    options.set<compute_public_advertised_prefixes_v1::
                    PublicAdvertisedPrefixesConnectionIdempotencyPolicyOption>(
        compute_public_advertised_prefixes_v1::
            MakeDefaultPublicAdvertisedPrefixesConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_public_advertised_prefixes_v1_internal
}  // namespace cloud
}  // namespace google
