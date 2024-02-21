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
// source: google/cloud/bigquery/connection/v1/connection.proto

#include "google/cloud/bigquery/connection/v1/internal/connection_auth_decorator.h"
#include <google/cloud/bigquery/connection/v1/connection.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigquery_connection_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConnectionServiceAuth::ConnectionServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<ConnectionServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::bigquery::connection::v1::Connection>
ConnectionServiceAuth::CreateConnection(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::CreateConnectionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateConnection(context, request);
}

StatusOr<google::cloud::bigquery::connection::v1::Connection>
ConnectionServiceAuth::GetConnection(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::GetConnectionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetConnection(context, request);
}

StatusOr<google::cloud::bigquery::connection::v1::ListConnectionsResponse>
ConnectionServiceAuth::ListConnections(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::ListConnectionsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListConnections(context, request);
}

StatusOr<google::cloud::bigquery::connection::v1::Connection>
ConnectionServiceAuth::UpdateConnection(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::UpdateConnectionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateConnection(context, request);
}

Status ConnectionServiceAuth::DeleteConnection(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::DeleteConnectionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteConnection(context, request);
}

StatusOr<google::iam::v1::Policy> ConnectionServiceAuth::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> ConnectionServiceAuth::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ConnectionServiceAuth::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TestIamPermissions(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_connection_v1_internal
}  // namespace cloud
}  // namespace google
