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
// source:
// google/cloud/compute/region_target_tcp_proxies/v1/region_target_tcp_proxies.proto

#include "google/cloud/compute/region_target_tcp_proxies/v1/internal/region_target_tcp_proxies_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_region_target_tcp_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionTargetTcpProxiesRestLogging::RegionTargetTcpProxiesRestLogging(
    std::shared_ptr<RegionTargetTcpProxiesRestStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetTcpProxiesRestLogging::AsyncDeleteTargetTcpProxy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_target_tcp_proxies::v1::
        DeleteTargetTcpProxyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::region_target_tcp_proxies::v1::
                 DeleteTargetTcpProxyRequest const& request) {
        return child_->AsyncDeleteTargetTcpProxy(cq, std::move(rest_context),
                                                 options, request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::TargetTcpProxy>
RegionTargetTcpProxiesRestLogging::GetTargetTcpProxy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_target_tcp_proxies::v1::
        GetTargetTcpProxyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::region_target_tcp_proxies::v1::
                 GetTargetTcpProxyRequest const& request) {
        return child_->GetTargetTcpProxy(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetTcpProxiesRestLogging::AsyncInsertTargetTcpProxy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_target_tcp_proxies::v1::
        InsertTargetTcpProxyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::region_target_tcp_proxies::v1::
                 InsertTargetTcpProxyRequest const& request) {
        return child_->AsyncInsertTargetTcpProxy(cq, std::move(rest_context),
                                                 options, request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::TargetTcpProxyList>
RegionTargetTcpProxiesRestLogging::ListRegionTargetTcpProxies(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_target_tcp_proxies::v1::
        ListRegionTargetTcpProxiesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::region_target_tcp_proxies::v1::
                 ListRegionTargetTcpProxiesRequest const& request) {
        return child_->ListRegionTargetTcpProxies(rest_context, options,
                                                  request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionTargetTcpProxiesRestLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_operations::v1::
        GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::region_operations::v1::
                 GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(rest_context), options,
                                         request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

future<Status> RegionTargetTcpProxiesRestLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::region_operations::v1::
        DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::region_operations::v1::
                 DeleteOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                            options, request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_target_tcp_proxies_v1_internal
}  // namespace cloud
}  // namespace google
