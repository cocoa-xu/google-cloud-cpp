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
// source: google/cloud/compute/autoscalers/v1/autoscalers.proto

#include "google/cloud/compute/autoscalers/v1/internal/autoscalers_option_defaults.h"
#include "google/cloud/compute/autoscalers/v1/autoscalers_connection.h"
#include "google/cloud/compute/autoscalers/v1/autoscalers_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_autoscalers_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options AutoscalersDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_AUTOSCALERS_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_AUTOSCALERS_AUTHORITY", "compute.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<compute_autoscalers_v1::AutoscalersRetryPolicyOption>()) {
    options.set<compute_autoscalers_v1::AutoscalersRetryPolicyOption>(
        compute_autoscalers_v1::AutoscalersLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<compute_autoscalers_v1::AutoscalersBackoffPolicyOption>()) {
    options.set<compute_autoscalers_v1::AutoscalersBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<compute_autoscalers_v1::AutoscalersPollingPolicyOption>()) {
    options.set<compute_autoscalers_v1::AutoscalersPollingPolicyOption>(
        GenericPollingPolicy<
            compute_autoscalers_v1::AutoscalersRetryPolicyOption::Type,
            compute_autoscalers_v1::AutoscalersBackoffPolicyOption::Type>(
            options.get<compute_autoscalers_v1::AutoscalersRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<compute_autoscalers_v1::
                       AutoscalersConnectionIdempotencyPolicyOption>()) {
    options.set<
        compute_autoscalers_v1::AutoscalersConnectionIdempotencyPolicyOption>(
        compute_autoscalers_v1::
            MakeDefaultAutoscalersConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_autoscalers_v1_internal
}  // namespace cloud
}  // namespace google
