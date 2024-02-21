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
// source: google/cloud/redis/cluster/v1/cloud_redis_cluster.proto

#include "google/cloud/redis/cluster/v1/internal/cloud_redis_cluster_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace redis_cluster_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CloudRedisClusterTracingConnection::CloudRedisClusterTracingConnection(
    std::shared_ptr<redis_cluster_v1::CloudRedisClusterConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::redis::cluster::v1::Cluster>
CloudRedisClusterTracingConnection::ListClusters(
    google::cloud::redis::cluster::v1::ListClustersRequest request) {
  auto span = internal::MakeSpan(
      "redis_cluster_v1::CloudRedisClusterConnection::ListClusters");
  internal::OTelScope scope(span);
  auto sr = child_->ListClusters(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::redis::cluster::v1::Cluster>(std::move(span),
                                                  std::move(sr));
}

StatusOr<google::cloud::redis::cluster::v1::Cluster>
CloudRedisClusterTracingConnection::GetCluster(
    google::cloud::redis::cluster::v1::GetClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "redis_cluster_v1::CloudRedisClusterConnection::GetCluster");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetCluster(request));
}

future<StatusOr<google::cloud::redis::cluster::v1::Cluster>>
CloudRedisClusterTracingConnection::UpdateCluster(
    google::cloud::redis::cluster::v1::UpdateClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "redis_cluster_v1::CloudRedisClusterConnection::UpdateCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateCluster(request));
}

future<StatusOr<google::protobuf::Any>>
CloudRedisClusterTracingConnection::DeleteCluster(
    google::cloud::redis::cluster::v1::DeleteClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "redis_cluster_v1::CloudRedisClusterConnection::DeleteCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteCluster(request));
}

future<StatusOr<google::cloud::redis::cluster::v1::Cluster>>
CloudRedisClusterTracingConnection::CreateCluster(
    google::cloud::redis::cluster::v1::CreateClusterRequest const& request) {
  auto span = internal::MakeSpan(
      "redis_cluster_v1::CloudRedisClusterConnection::CreateCluster");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateCluster(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<redis_cluster_v1::CloudRedisClusterConnection>
MakeCloudRedisClusterTracingConnection(
    std::shared_ptr<redis_cluster_v1::CloudRedisClusterConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<CloudRedisClusterTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace redis_cluster_v1_internal
}  // namespace cloud
}  // namespace google
