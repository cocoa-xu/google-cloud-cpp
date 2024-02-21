// Copyright 2021 Google LLC
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
// source: google/cloud/bigquery/storage/v1/storage.proto

#include "google/cloud/bigquery/storage/v1/internal/bigquery_read_auth_decorator.h"
#include <google/cloud/bigquery/storage/v1/storage.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigquery_storage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BigQueryReadAuth::BigQueryReadAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<BigQueryReadStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::bigquery::storage::v1::ReadSession>
BigQueryReadAuth::CreateReadSession(
    grpc::ClientContext& context,
    google::cloud::bigquery::storage::v1::CreateReadSessionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateReadSession(context, request);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::cloud::bigquery::storage::v1::ReadRowsResponse>>
BigQueryReadAuth::ReadRows(
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::bigquery::storage::v1::ReadRowsRequest const& request) {
  using ErrorStream = ::google::cloud::internal::StreamingReadRpcError<
      google::cloud::bigquery::storage::v1::ReadRowsResponse>;
  auto status = auth_->ConfigureContext(*context);
  if (!status.ok()) return std::make_unique<ErrorStream>(std::move(status));
  return child_->ReadRows(std::move(context), options, request);
}

StatusOr<google::cloud::bigquery::storage::v1::SplitReadStreamResponse>
BigQueryReadAuth::SplitReadStream(
    grpc::ClientContext& context,
    google::cloud::bigquery::storage::v1::SplitReadStreamRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SplitReadStream(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_storage_v1_internal
}  // namespace cloud
}  // namespace google
