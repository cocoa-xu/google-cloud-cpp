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
// source: google/cloud/compute/region_operations/v1/region_operations.proto

#include "google/cloud/compute/region_operations/v1/internal/region_operations_rest_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_region_operations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionOperationsRestMetadata::RegionOperationsRestMetadata(
    std::shared_ptr<RegionOperationsRestStub> child,
    std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

Status RegionOperationsRestMetadata::DeleteOperation(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_operations::v1::
        DeleteOperationRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->DeleteOperation(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionOperationsRestMetadata::GetOperation(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_operations::v1::
        GetOperationRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->GetOperation(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::OperationList>
RegionOperationsRestMetadata::ListRegionOperations(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_operations::v1::
        ListRegionOperationsRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->ListRegionOperations(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionOperationsRestMetadata::Wait(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_operations::v1::WaitRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->Wait(rest_context, options, request);
}

void RegionOperationsRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context, Options const& options,
    std::vector<std::string> const& params) {
  rest_context.AddHeader("x-goog-api-client", api_client_header_);
  if (!params.empty()) {
    rest_context.AddHeader("x-goog-request-params", absl::StrJoin(params, "&"));
  }
  if (options.has<UserProjectOption>()) {
    rest_context.AddHeader("x-goog-user-project",
                           options.get<UserProjectOption>());
  }
  if (options.has<QuotaUserOption>()) {
    rest_context.AddHeader("x-goog-quota-user", options.get<QuotaUserOption>());
  }
  if (options.has<ServerTimeoutOption>()) {
    auto ms_rep = absl::StrCat(
        absl::Dec(options.get<ServerTimeoutOption>().count(), absl::kZeroPad4));
    rest_context.AddHeader("x-server-timeout",
                           ms_rep.insert(ms_rep.size() - 3, "."));
  }
  for (auto const& h : options.get<CustomHeadersOption>()) {
    rest_context.AddHeader(h.first, h.second);
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_operations_v1_internal
}  // namespace cloud
}  // namespace google
