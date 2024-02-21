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
// source: google/cloud/compute/node_types/v1/node_types.proto

#include "google/cloud/compute/node_types/v1/node_types_connection.h"
#include "google/cloud/compute/node_types/v1/internal/node_types_option_defaults.h"
#include "google/cloud/compute/node_types/v1/internal/node_types_tracing_connection.h"
#include "google/cloud/compute/node_types/v1/node_types_options.h"
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
namespace compute_node_types_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NodeTypesConnection::~NodeTypesConnection() = default;

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::NodeTypesScopedList>>
NodeTypesConnection::AggregatedListNodeTypes(
    google::cloud::cpp::compute::node_types::v1::
        AggregatedListNodeTypesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      std::pair<std::string,
                google::cloud::cpp::compute::v1::NodeTypesScopedList>>>();
}

StatusOr<google::cloud::cpp::compute::v1::NodeType>
NodeTypesConnection::GetNodeType(
    google::cloud::cpp::compute::node_types::v1::GetNodeTypeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::cpp::compute::v1::NodeType>
NodeTypesConnection::ListNodeTypes(
    google::cloud::cpp::compute::node_types::v1::
        ListNodeTypesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::NodeType>>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_types_v1
}  // namespace cloud
}  // namespace google
