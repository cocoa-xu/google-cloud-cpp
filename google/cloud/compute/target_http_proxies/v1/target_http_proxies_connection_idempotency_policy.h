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
// source: google/cloud/compute/target_http_proxies/v1/target_http_proxies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTP_PROXIES_V1_TARGET_HTTP_PROXIES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTP_PROXIES_V1_TARGET_HTTP_PROXIES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/target_http_proxies/v1/target_http_proxies.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_http_proxies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TargetHttpProxiesConnectionIdempotencyPolicy {
 public:
  virtual ~TargetHttpProxiesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<TargetHttpProxiesConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency AggregatedListTargetHttpProxies(
      google::cloud::cpp::compute::target_http_proxies::v1::
          AggregatedListTargetHttpProxiesRequest request);

  virtual google::cloud::Idempotency DeleteTargetHttpProxy(
      google::cloud::cpp::compute::target_http_proxies::v1::
          DeleteTargetHttpProxyRequest const& request);

  virtual google::cloud::Idempotency GetTargetHttpProxy(
      google::cloud::cpp::compute::target_http_proxies::v1::
          GetTargetHttpProxyRequest const& request);

  virtual google::cloud::Idempotency InsertTargetHttpProxy(
      google::cloud::cpp::compute::target_http_proxies::v1::
          InsertTargetHttpProxyRequest const& request);

  virtual google::cloud::Idempotency ListTargetHttpProxies(
      google::cloud::cpp::compute::target_http_proxies::v1::
          ListTargetHttpProxiesRequest request);

  virtual google::cloud::Idempotency PatchTargetHttpProxy(
      google::cloud::cpp::compute::target_http_proxies::v1::
          PatchTargetHttpProxyRequest const& request);

  virtual google::cloud::Idempotency SetUrlMap(
      google::cloud::cpp::compute::target_http_proxies::v1::
          SetUrlMapRequest const& request);
};

std::unique_ptr<TargetHttpProxiesConnectionIdempotencyPolicy>
MakeDefaultTargetHttpProxiesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_http_proxies_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_HTTP_PROXIES_V1_TARGET_HTTP_PROXIES_CONNECTION_IDEMPOTENCY_POLICY_H
