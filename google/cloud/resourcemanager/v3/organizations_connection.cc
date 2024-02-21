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
// source: google/cloud/resourcemanager/v3/organizations.proto

#include "google/cloud/resourcemanager/v3/organizations_connection.h"
#include "google/cloud/resourcemanager/v3/internal/organizations_connection_impl.h"
#include "google/cloud/resourcemanager/v3/internal/organizations_option_defaults.h"
#include "google/cloud/resourcemanager/v3/internal/organizations_stub_factory.h"
#include "google/cloud/resourcemanager/v3/internal/organizations_tracing_connection.h"
#include "google/cloud/resourcemanager/v3/organizations_options.h"
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
namespace resourcemanager_v3 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OrganizationsConnection::~OrganizationsConnection() = default;

StatusOr<google::cloud::resourcemanager::v3::Organization>
OrganizationsConnection::GetOrganization(
    google::cloud::resourcemanager::v3::GetOrganizationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::resourcemanager::v3::Organization>
OrganizationsConnection::SearchOrganizations(
    google::cloud::resourcemanager::v3::
        SearchOrganizationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::resourcemanager::v3::Organization>>();
}

StatusOr<google::iam::v1::Policy> OrganizationsConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> OrganizationsConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
OrganizationsConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<OrganizationsConnection> MakeOrganizationsConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 OrganizationsPolicyOptionList>(options,
                                                                __func__);
  options = resourcemanager_v3_internal::OrganizationsDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = resourcemanager_v3_internal::CreateDefaultOrganizationsStub(
      std::move(auth), options);
  return resourcemanager_v3_internal::MakeOrganizationsTracingConnection(
      std::make_shared<
          resourcemanager_v3_internal::OrganizationsConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3
}  // namespace cloud
}  // namespace google
