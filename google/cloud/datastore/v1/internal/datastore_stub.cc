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
// source: google/datastore/v1/datastore.proto

#include "google/cloud/datastore/v1/internal/datastore_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/datastore/v1/datastore.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace datastore_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatastoreStub::~DatastoreStub() = default;

StatusOr<google::datastore::v1::LookupResponse> DefaultDatastoreStub::Lookup(
    grpc::ClientContext& context,
    google::datastore::v1::LookupRequest const& request) {
  google::datastore::v1::LookupResponse response;
  auto status = grpc_stub_->Lookup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::datastore::v1::RunQueryResponse>
DefaultDatastoreStub::RunQuery(
    grpc::ClientContext& context,
    google::datastore::v1::RunQueryRequest const& request) {
  google::datastore::v1::RunQueryResponse response;
  auto status = grpc_stub_->RunQuery(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::datastore::v1::RunAggregationQueryResponse>
DefaultDatastoreStub::RunAggregationQuery(
    grpc::ClientContext& context,
    google::datastore::v1::RunAggregationQueryRequest const& request) {
  google::datastore::v1::RunAggregationQueryResponse response;
  auto status = grpc_stub_->RunAggregationQuery(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::datastore::v1::BeginTransactionResponse>
DefaultDatastoreStub::BeginTransaction(
    grpc::ClientContext& context,
    google::datastore::v1::BeginTransactionRequest const& request) {
  google::datastore::v1::BeginTransactionResponse response;
  auto status = grpc_stub_->BeginTransaction(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::datastore::v1::CommitResponse> DefaultDatastoreStub::Commit(
    grpc::ClientContext& context,
    google::datastore::v1::CommitRequest const& request) {
  google::datastore::v1::CommitResponse response;
  auto status = grpc_stub_->Commit(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::datastore::v1::RollbackResponse>
DefaultDatastoreStub::Rollback(
    grpc::ClientContext& context,
    google::datastore::v1::RollbackRequest const& request) {
  google::datastore::v1::RollbackResponse response;
  auto status = grpc_stub_->Rollback(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::datastore::v1::AllocateIdsResponse>
DefaultDatastoreStub::AllocateIds(
    grpc::ClientContext& context,
    google::datastore::v1::AllocateIdsRequest const& request) {
  google::datastore::v1::AllocateIdsResponse response;
  auto status = grpc_stub_->AllocateIds(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::datastore::v1::ReserveIdsResponse>
DefaultDatastoreStub::ReserveIds(
    grpc::ClientContext& context,
    google::datastore::v1::ReserveIdsRequest const& request) {
  google::datastore::v1::ReserveIdsResponse response;
  auto status = grpc_stub_->ReserveIds(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datastore_v1_internal
}  // namespace cloud
}  // namespace google
