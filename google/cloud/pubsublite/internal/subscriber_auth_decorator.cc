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

#include "google/cloud/pubsublite/internal/subscriber_auth_decorator.h"
#include "google/cloud/internal/async_read_write_stream_auth.h"
#include <google/cloud/pubsublite/v1/subscriber.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SubscriberServiceAuth::SubscriberServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<SubscriberServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::pubsublite::v1::SubscribeRequest,
    google::cloud::pubsublite::v1::SubscribeResponse>>
SubscriberServiceAuth::AsyncSubscribe(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  using StreamAuth = google::cloud::internal::AsyncStreamingReadWriteRpcAuth<
      google::cloud::pubsublite::v1::SubscribeRequest,
      google::cloud::pubsublite::v1::SubscribeResponse>;

  auto& child = child_;
  auto call = [child, cq](std::shared_ptr<grpc::ClientContext> ctx) {
    return child->AsyncSubscribe(cq, std::move(ctx));
  };
  return std::make_unique<StreamAuth>(
      std::move(context), auth_, StreamAuth::StreamFactory(std::move(call)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google
