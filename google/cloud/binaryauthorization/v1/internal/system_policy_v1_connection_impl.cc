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
// source: google/cloud/binaryauthorization/v1/service.proto

#include "google/cloud/binaryauthorization/v1/internal/system_policy_v1_connection_impl.h"
#include "google/cloud/binaryauthorization/v1/internal/system_policy_v1_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace binaryauthorization_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<binaryauthorization_v1::SystemPolicyV1RetryPolicy> retry_policy(
    Options const& options) {
  return options.get<binaryauthorization_v1::SystemPolicyV1RetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<binaryauthorization_v1::SystemPolicyV1BackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    binaryauthorization_v1::SystemPolicyV1ConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<binaryauthorization_v1::
               SystemPolicyV1ConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

SystemPolicyV1ConnectionImpl::SystemPolicyV1ConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<binaryauthorization_v1_internal::SystemPolicyV1Stub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      SystemPolicyV1Connection::options())) {}

StatusOr<google::cloud::binaryauthorization::v1::Policy>
SystemPolicyV1ConnectionImpl::GetSystemPolicy(
    google::cloud::binaryauthorization::v1::GetSystemPolicyRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetSystemPolicy(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::binaryauthorization::v1::GetSystemPolicyRequest const&
              request) { return stub_->GetSystemPolicy(context, request); },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace binaryauthorization_v1_internal
}  // namespace cloud
}  // namespace google
