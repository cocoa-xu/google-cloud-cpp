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
// source: google/cloud/compute/target_http_proxies/v1/target_http_proxies.proto

#include "google/cloud/compute/target_http_proxies/v1/internal/target_http_proxies_rest_connection_impl.h"
#include "google/cloud/compute/target_http_proxies/v1/internal/target_http_proxies_rest_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/async_rest_long_running_operation_custom.h"
#include "google/cloud/internal/extract_long_running_result.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_target_http_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TargetHttpProxiesRestConnectionImpl::TargetHttpProxiesRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<
        compute_target_http_proxies_v1_internal::TargetHttpProxiesRestStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), TargetHttpProxiesConnection::options())) {}

StreamRange<std::pair<
    std::string, google::cloud::cpp::compute::v1::TargetHttpProxiesScopedList>>
TargetHttpProxiesRestConnectionImpl::AggregatedListTargetHttpProxies(
    google::cloud::cpp::compute::target_http_proxies::v1::
        AggregatedListTargetHttpProxiesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->AggregatedListTargetHttpProxies(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<
      std::pair<std::string,
                google::cloud::cpp::compute::v1::TargetHttpProxiesScopedList>>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           compute_target_http_proxies_v1::TargetHttpProxiesRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::cpp::compute::target_http_proxies::v1::
              AggregatedListTargetHttpProxiesRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   Options const& options,
                   google::cloud::cpp::compute::target_http_proxies::v1::
                       AggregatedListTargetHttpProxiesRequest const& request) {
              return stub->AggregatedListTargetHttpProxies(rest_context,
                                                           options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::cpp::compute::v1::TargetHttpProxyAggregatedList r) {
        std::vector<std::pair<std::string, google::cloud::cpp::compute::v1::
                                               TargetHttpProxiesScopedList>>
            result(r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesRestConnectionImpl::DeleteTargetHttpProxy(
    google::cloud::cpp::compute::target_http_proxies::v1::
        DeleteTargetHttpProxyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), current, request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::cloud::cpp::compute::target_http_proxies::v1::
                         DeleteTargetHttpProxyRequest const& request) {
        return stub->AsyncDeleteTargetHttpProxy(cq, std::move(context), options,
                                                request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::cloud::cpp::compute::global_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::cloud::cpp::compute::global_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteTargetHttpProxy(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpProxy>
TargetHttpProxiesRestConnectionImpl::GetTargetHttpProxy(
    google::cloud::cpp::compute::target_http_proxies::v1::
        GetTargetHttpProxyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetTargetHttpProxy(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::target_http_proxies::v1::
                 GetTargetHttpProxyRequest const& request) {
        return stub_->GetTargetHttpProxy(rest_context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesRestConnectionImpl::InsertTargetHttpProxy(
    google::cloud::cpp::compute::target_http_proxies::v1::
        InsertTargetHttpProxyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), current, request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::cloud::cpp::compute::target_http_proxies::v1::
                         InsertTargetHttpProxyRequest const& request) {
        return stub->AsyncInsertTargetHttpProxy(cq, std::move(context), options,
                                                request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::cloud::cpp::compute::global_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::cloud::cpp::compute::global_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->InsertTargetHttpProxy(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

StreamRange<google::cloud::cpp::compute::v1::TargetHttpProxy>
TargetHttpProxiesRestConnectionImpl::ListTargetHttpProxies(
    google::cloud::cpp::compute::target_http_proxies::v1::
        ListTargetHttpProxiesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListTargetHttpProxies(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::TargetHttpProxy>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           compute_target_http_proxies_v1::TargetHttpProxiesRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::cpp::compute::target_http_proxies::v1::
              ListTargetHttpProxiesRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   Options const& options,
                   google::cloud::cpp::compute::target_http_proxies::v1::
                       ListTargetHttpProxiesRequest const& request) {
              return stub->ListTargetHttpProxies(rest_context, options,
                                                 request);
            },
            options, r, function_name);
      },
      [](google::cloud::cpp::compute::v1::TargetHttpProxyList r) {
        std::vector<google::cloud::cpp::compute::v1::TargetHttpProxy> result(
            r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesRestConnectionImpl::PatchTargetHttpProxy(
    google::cloud::cpp::compute::target_http_proxies::v1::
        PatchTargetHttpProxyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), current, request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::cloud::cpp::compute::target_http_proxies::v1::
                         PatchTargetHttpProxyRequest const& request) {
        return stub->AsyncPatchTargetHttpProxy(cq, std::move(context), options,
                                               request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::cloud::cpp::compute::global_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::cloud::cpp::compute::global_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->PatchTargetHttpProxy(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpProxiesRestConnectionImpl::SetUrlMap(
    google::cloud::cpp::compute::target_http_proxies::v1::
        SetUrlMapRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::global_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), current, request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::cloud::cpp::compute::target_http_proxies::v1::
                         SetUrlMapRequest const& request) {
        return stub->AsyncSetUrlMap(cq, std::move(context), options, request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::cloud::cpp::compute::global_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::cloud::cpp::compute::global_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SetUrlMap(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    GetOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::global_operations::v1::
                    DeleteOperationRequest& r) {
        r.set_project(request.project());
        r.set_operation(op);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_http_proxies_v1_internal
}  // namespace cloud
}  // namespace google
