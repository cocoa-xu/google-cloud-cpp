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
// source: google/cloud/bigquery/analyticshub/v1/analyticshub.proto

#include "google/cloud/bigquery/analyticshub/v1/internal/analytics_hub_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/bigquery/analyticshub/v1/analyticshub.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigquery_analyticshub_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AnalyticsHubServiceStub::~AnalyticsHubServiceStub() = default;

StatusOr<google::cloud::bigquery::analyticshub::v1::ListDataExchangesResponse>
DefaultAnalyticsHubServiceStub::ListDataExchanges(
    grpc::ClientContext& context,
    google::cloud::bigquery::analyticshub::v1::ListDataExchangesRequest const&
        request) {
  google::cloud::bigquery::analyticshub::v1::ListDataExchangesResponse response;
  auto status = grpc_stub_->ListDataExchanges(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<
    google::cloud::bigquery::analyticshub::v1::ListOrgDataExchangesResponse>
DefaultAnalyticsHubServiceStub::ListOrgDataExchanges(
    grpc::ClientContext& context,
    google::cloud::bigquery::analyticshub::v1::
        ListOrgDataExchangesRequest const& request) {
  google::cloud::bigquery::analyticshub::v1::ListOrgDataExchangesResponse
      response;
  auto status = grpc_stub_->ListOrgDataExchanges(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
DefaultAnalyticsHubServiceStub::GetDataExchange(
    grpc::ClientContext& context,
    google::cloud::bigquery::analyticshub::v1::GetDataExchangeRequest const&
        request) {
  google::cloud::bigquery::analyticshub::v1::DataExchange response;
  auto status = grpc_stub_->GetDataExchange(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
DefaultAnalyticsHubServiceStub::CreateDataExchange(
    grpc::ClientContext& context,
    google::cloud::bigquery::analyticshub::v1::CreateDataExchangeRequest const&
        request) {
  google::cloud::bigquery::analyticshub::v1::DataExchange response;
  auto status = grpc_stub_->CreateDataExchange(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
DefaultAnalyticsHubServiceStub::UpdateDataExchange(
    grpc::ClientContext& context,
    google::cloud::bigquery::analyticshub::v1::UpdateDataExchangeRequest const&
        request) {
  google::cloud::bigquery::analyticshub::v1::DataExchange response;
  auto status = grpc_stub_->UpdateDataExchange(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultAnalyticsHubServiceStub::DeleteDataExchange(
    grpc::ClientContext& context,
    google::cloud::bigquery::analyticshub::v1::DeleteDataExchangeRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteDataExchange(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::bigquery::analyticshub::v1::ListListingsResponse>
DefaultAnalyticsHubServiceStub::ListListings(
    grpc::ClientContext& context,
    google::cloud::bigquery::analyticshub::v1::ListListingsRequest const&
        request) {
  google::cloud::bigquery::analyticshub::v1::ListListingsResponse response;
  auto status = grpc_stub_->ListListings(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::analyticshub::v1::Listing>
DefaultAnalyticsHubServiceStub::GetListing(
    grpc::ClientContext& context,
    google::cloud::bigquery::analyticshub::v1::GetListingRequest const&
        request) {
  google::cloud::bigquery::analyticshub::v1::Listing response;
  auto status = grpc_stub_->GetListing(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::analyticshub::v1::Listing>
DefaultAnalyticsHubServiceStub::CreateListing(
    grpc::ClientContext& context,
    google::cloud::bigquery::analyticshub::v1::CreateListingRequest const&
        request) {
  google::cloud::bigquery::analyticshub::v1::Listing response;
  auto status = grpc_stub_->CreateListing(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::analyticshub::v1::Listing>
DefaultAnalyticsHubServiceStub::UpdateListing(
    grpc::ClientContext& context,
    google::cloud::bigquery::analyticshub::v1::UpdateListingRequest const&
        request) {
  google::cloud::bigquery::analyticshub::v1::Listing response;
  auto status = grpc_stub_->UpdateListing(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultAnalyticsHubServiceStub::DeleteListing(
    grpc::ClientContext& context,
    google::cloud::bigquery::analyticshub::v1::DeleteListingRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteListing(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::bigquery::analyticshub::v1::SubscribeListingResponse>
DefaultAnalyticsHubServiceStub::SubscribeListing(
    grpc::ClientContext& context,
    google::cloud::bigquery::analyticshub::v1::SubscribeListingRequest const&
        request) {
  google::cloud::bigquery::analyticshub::v1::SubscribeListingResponse response;
  auto status = grpc_stub_->SubscribeListing(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAnalyticsHubServiceStub::AsyncSubscribeDataExchange(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::bigquery::analyticshub::v1::
        SubscribeDataExchangeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::bigquery::analyticshub::v1::SubscribeDataExchangeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::bigquery::analyticshub::v1::
                 SubscribeDataExchangeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncSubscribeDataExchange(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultAnalyticsHubServiceStub::AsyncRefreshSubscription(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::bigquery::analyticshub::v1::RefreshSubscriptionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::bigquery::analyticshub::v1::RefreshSubscriptionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::bigquery::analyticshub::v1::
                 RefreshSubscriptionRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRefreshSubscription(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::bigquery::analyticshub::v1::Subscription>
DefaultAnalyticsHubServiceStub::GetSubscription(
    grpc::ClientContext& context,
    google::cloud::bigquery::analyticshub::v1::GetSubscriptionRequest const&
        request) {
  google::cloud::bigquery::analyticshub::v1::Subscription response;
  auto status = grpc_stub_->GetSubscription(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::analyticshub::v1::ListSubscriptionsResponse>
DefaultAnalyticsHubServiceStub::ListSubscriptions(
    grpc::ClientContext& context,
    google::cloud::bigquery::analyticshub::v1::ListSubscriptionsRequest const&
        request) {
  google::cloud::bigquery::analyticshub::v1::ListSubscriptionsResponse response;
  auto status = grpc_stub_->ListSubscriptions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::analyticshub::v1::
             ListSharedResourceSubscriptionsResponse>
DefaultAnalyticsHubServiceStub::ListSharedResourceSubscriptions(
    grpc::ClientContext& context,
    google::cloud::bigquery::analyticshub::v1::
        ListSharedResourceSubscriptionsRequest const& request) {
  google::cloud::bigquery::analyticshub::v1::
      ListSharedResourceSubscriptionsResponse response;
  auto status =
      grpc_stub_->ListSharedResourceSubscriptions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::analyticshub::v1::RevokeSubscriptionResponse>
DefaultAnalyticsHubServiceStub::RevokeSubscription(
    grpc::ClientContext& context,
    google::cloud::bigquery::analyticshub::v1::RevokeSubscriptionRequest const&
        request) {
  google::cloud::bigquery::analyticshub::v1::RevokeSubscriptionResponse
      response;
  auto status = grpc_stub_->RevokeSubscription(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAnalyticsHubServiceStub::AsyncDeleteSubscription(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::bigquery::analyticshub::v1::DeleteSubscriptionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::bigquery::analyticshub::v1::DeleteSubscriptionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::bigquery::analyticshub::v1::
                 DeleteSubscriptionRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteSubscription(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::iam::v1::Policy> DefaultAnalyticsHubServiceStub::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->GetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultAnalyticsHubServiceStub::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->SetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultAnalyticsHubServiceStub::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status = grpc_stub_->TestIamPermissions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAnalyticsHubServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultAnalyticsHubServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_analyticshub_v1_internal
}  // namespace cloud
}  // namespace google
