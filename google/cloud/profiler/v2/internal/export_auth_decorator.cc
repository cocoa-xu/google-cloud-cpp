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
// source: google/devtools/cloudprofiler/v2/profiler.proto

#include "google/cloud/profiler/v2/internal/export_auth_decorator.h"
#include <google/devtools/cloudprofiler/v2/profiler.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace profiler_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ExportServiceAuth::ExportServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<ExportServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::devtools::cloudprofiler::v2::ListProfilesResponse>
ExportServiceAuth::ListProfiles(
    grpc::ClientContext& context,
    google::devtools::cloudprofiler::v2::ListProfilesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListProfiles(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace profiler_v2_internal
}  // namespace cloud
}  // namespace google
