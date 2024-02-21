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
// source: google/cloud/compute/backend_buckets/v1/backend_buckets.proto

#include "google/cloud/compute/backend_buckets/v1/backend_buckets_connection.h"
#include "google/cloud/compute/backend_buckets/v1/backend_buckets_options.h"
#include "google/cloud/compute/backend_buckets/v1/internal/backend_buckets_option_defaults.h"
#include "google/cloud/compute/backend_buckets/v1/internal/backend_buckets_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_backend_buckets_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BackendBucketsConnection::~BackendBucketsConnection() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsConnection::AddSignedUrlKey(
    google::cloud::cpp::compute::backend_buckets::v1::
        AddSignedUrlKeyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsConnection::DeleteBackendBucket(
    google::cloud::cpp::compute::backend_buckets::v1::
        DeleteBackendBucketRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsConnection::DeleteSignedUrlKey(
    google::cloud::cpp::compute::backend_buckets::v1::
        DeleteSignedUrlKeyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::BackendBucket>
BackendBucketsConnection::GetBackendBucket(
    google::cloud::cpp::compute::backend_buckets::v1::
        GetBackendBucketRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
BackendBucketsConnection::GetIamPolicy(
    google::cloud::cpp::compute::backend_buckets::v1::
        GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsConnection::InsertBackendBucket(
    google::cloud::cpp::compute::backend_buckets::v1::
        InsertBackendBucketRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::BackendBucket>
BackendBucketsConnection::ListBackendBuckets(
    google::cloud::cpp::compute::backend_buckets::v1::
        ListBackendBucketsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::BackendBucket>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsConnection::PatchBackendBucket(
    google::cloud::cpp::compute::backend_buckets::v1::
        PatchBackendBucketRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsConnection::SetEdgeSecurityPolicy(
    google::cloud::cpp::compute::backend_buckets::v1::
        SetEdgeSecurityPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
BackendBucketsConnection::SetIamPolicy(
    google::cloud::cpp::compute::backend_buckets::v1::
        SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
BackendBucketsConnection::TestIamPermissions(
    google::cloud::cpp::compute::backend_buckets::v1::
        TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsConnection::UpdateBackendBucket(
    google::cloud::cpp::compute::backend_buckets::v1::
        UpdateBackendBucketRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_backend_buckets_v1
}  // namespace cloud
}  // namespace google
