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
// source: google/cloud/pubsublite/v1/subscriber.proto

#include "google/cloud/pubsublite/internal/partition_assignment_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/internal/async_read_write_stream_impl.h"
#include "google/cloud/status_or.h"
#include <google/cloud/pubsublite/v1/subscriber.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PartitionAssignmentServiceStub::~PartitionAssignmentServiceStub() = default;

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::pubsublite::v1::PartitionAssignmentRequest,
    google::cloud::pubsublite::v1::PartitionAssignment>>
DefaultPartitionAssignmentServiceStub::AsyncAssignPartitions(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  return google::cloud::internal::MakeStreamingReadWriteRpc<
      google::cloud::pubsublite::v1::PartitionAssignmentRequest,
      google::cloud::pubsublite::v1::PartitionAssignment>(
      cq, std::move(context),
      [this](grpc::ClientContext* context, grpc::CompletionQueue* cq) {
        return grpc_stub_->PrepareAsyncAssignPartitions(context, cq);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google
