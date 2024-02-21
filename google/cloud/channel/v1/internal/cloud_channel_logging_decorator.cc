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
// source: google/cloud/channel/v1/service.proto

#include "google/cloud/channel/v1/internal/cloud_channel_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/channel/v1/service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace channel_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudChannelServiceLogging::CloudChannelServiceLogging(
    std::shared_ptr<CloudChannelServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::cloud::channel::v1::ListCustomersResponse>
CloudChannelServiceLogging::ListCustomers(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListCustomersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::ListCustomersRequest const& request) {
        return child_->ListCustomers(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceLogging::GetCustomer(
    grpc::ClientContext& context,
    google::cloud::channel::v1::GetCustomerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::GetCustomerRequest const& request) {
        return child_->GetCustomer(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::CheckCloudIdentityAccountsExistResponse>
CloudChannelServiceLogging::CheckCloudIdentityAccountsExist(
    grpc::ClientContext& context,
    google::cloud::channel::v1::CheckCloudIdentityAccountsExistRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::
                 CheckCloudIdentityAccountsExistRequest const& request) {
        return child_->CheckCloudIdentityAccountsExist(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceLogging::CreateCustomer(
    grpc::ClientContext& context,
    google::cloud::channel::v1::CreateCustomerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::CreateCustomerRequest const& request) {
        return child_->CreateCustomer(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceLogging::UpdateCustomer(
    grpc::ClientContext& context,
    google::cloud::channel::v1::UpdateCustomerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::UpdateCustomerRequest const& request) {
        return child_->UpdateCustomer(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status CloudChannelServiceLogging::DeleteCustomer(
    grpc::ClientContext& context,
    google::cloud::channel::v1::DeleteCustomerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::DeleteCustomerRequest const& request) {
        return child_->DeleteCustomer(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceLogging::ImportCustomer(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ImportCustomerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::ImportCustomerRequest const& request) {
        return child_->ImportCustomer(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceLogging::AsyncProvisionCloudIdentity(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::channel::v1::ProvisionCloudIdentityRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::channel::v1::ProvisionCloudIdentityRequest const&
                 request) {
        return child_->AsyncProvisionCloudIdentity(cq, std::move(context),
                                                   options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::ListEntitlementsResponse>
CloudChannelServiceLogging::ListEntitlements(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListEntitlementsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::channel::v1::ListEntitlementsRequest const& request) {
        return child_->ListEntitlements(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::ListTransferableSkusResponse>
CloudChannelServiceLogging::ListTransferableSkus(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListTransferableSkusRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::ListTransferableSkusRequest const&
                 request) {
        return child_->ListTransferableSkus(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::ListTransferableOffersResponse>
CloudChannelServiceLogging::ListTransferableOffers(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListTransferableOffersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::ListTransferableOffersRequest const&
                 request) {
        return child_->ListTransferableOffers(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::Entitlement>
CloudChannelServiceLogging::GetEntitlement(
    grpc::ClientContext& context,
    google::cloud::channel::v1::GetEntitlementRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::GetEntitlementRequest const& request) {
        return child_->GetEntitlement(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceLogging::AsyncCreateEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::channel::v1::CreateEntitlementRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::channel::v1::CreateEntitlementRequest const& request) {
        return child_->AsyncCreateEntitlement(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceLogging::AsyncChangeParameters(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::channel::v1::ChangeParametersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::channel::v1::ChangeParametersRequest const& request) {
        return child_->AsyncChangeParameters(cq, std::move(context), options,
                                             request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceLogging::AsyncChangeRenewalSettings(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::channel::v1::ChangeRenewalSettingsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::channel::v1::ChangeRenewalSettingsRequest const&
                 request) {
        return child_->AsyncChangeRenewalSettings(cq, std::move(context),
                                                  options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceLogging::AsyncChangeOffer(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::channel::v1::ChangeOfferRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::channel::v1::ChangeOfferRequest const& request) {
        return child_->AsyncChangeOffer(cq, std::move(context), options,
                                        request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceLogging::AsyncStartPaidService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::channel::v1::StartPaidServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::channel::v1::StartPaidServiceRequest const& request) {
        return child_->AsyncStartPaidService(cq, std::move(context), options,
                                             request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceLogging::AsyncSuspendEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::channel::v1::SuspendEntitlementRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::channel::v1::SuspendEntitlementRequest const&
                 request) {
        return child_->AsyncSuspendEntitlement(cq, std::move(context), options,
                                               request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceLogging::AsyncCancelEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::channel::v1::CancelEntitlementRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::channel::v1::CancelEntitlementRequest const& request) {
        return child_->AsyncCancelEntitlement(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceLogging::AsyncActivateEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::channel::v1::ActivateEntitlementRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::channel::v1::ActivateEntitlementRequest const&
                 request) {
        return child_->AsyncActivateEntitlement(cq, std::move(context), options,
                                                request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceLogging::AsyncTransferEntitlements(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::channel::v1::TransferEntitlementsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::channel::v1::TransferEntitlementsRequest const&
                 request) {
        return child_->AsyncTransferEntitlements(cq, std::move(context),
                                                 options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceLogging::AsyncTransferEntitlementsToGoogle(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::channel::v1::TransferEntitlementsToGoogleRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::channel::v1::TransferEntitlementsToGoogleRequest const&
              request) {
        return child_->AsyncTransferEntitlementsToGoogle(cq, std::move(context),
                                                         options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::ListChannelPartnerLinksResponse>
CloudChannelServiceLogging::ListChannelPartnerLinks(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListChannelPartnerLinksRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::ListChannelPartnerLinksRequest const&
                 request) {
        return child_->ListChannelPartnerLinks(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceLogging::GetChannelPartnerLink(
    grpc::ClientContext& context,
    google::cloud::channel::v1::GetChannelPartnerLinkRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::GetChannelPartnerLinkRequest const&
                 request) {
        return child_->GetChannelPartnerLink(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceLogging::CreateChannelPartnerLink(
    grpc::ClientContext& context,
    google::cloud::channel::v1::CreateChannelPartnerLinkRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::CreateChannelPartnerLinkRequest const&
                 request) {
        return child_->CreateChannelPartnerLink(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceLogging::UpdateChannelPartnerLink(
    grpc::ClientContext& context,
    google::cloud::channel::v1::UpdateChannelPartnerLinkRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::UpdateChannelPartnerLinkRequest const&
                 request) {
        return child_->UpdateChannelPartnerLink(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
CloudChannelServiceLogging::GetCustomerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::GetCustomerRepricingConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::channel::v1::GetCustomerRepricingConfigRequest const&
              request) {
        return child_->GetCustomerRepricingConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::ListCustomerRepricingConfigsResponse>
CloudChannelServiceLogging::ListCustomerRepricingConfigs(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListCustomerRepricingConfigsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::channel::v1::ListCustomerRepricingConfigsRequest const&
              request) {
        return child_->ListCustomerRepricingConfigs(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
CloudChannelServiceLogging::CreateCustomerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::CreateCustomerRepricingConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::
                 CreateCustomerRepricingConfigRequest const& request) {
        return child_->CreateCustomerRepricingConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
CloudChannelServiceLogging::UpdateCustomerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::UpdateCustomerRepricingConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::
                 UpdateCustomerRepricingConfigRequest const& request) {
        return child_->UpdateCustomerRepricingConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status CloudChannelServiceLogging::DeleteCustomerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::DeleteCustomerRepricingConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::
                 DeleteCustomerRepricingConfigRequest const& request) {
        return child_->DeleteCustomerRepricingConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
CloudChannelServiceLogging::GetChannelPartnerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::GetChannelPartnerRepricingConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::
                 GetChannelPartnerRepricingConfigRequest const& request) {
        return child_->GetChannelPartnerRepricingConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::ListChannelPartnerRepricingConfigsResponse>
CloudChannelServiceLogging::ListChannelPartnerRepricingConfigs(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListChannelPartnerRepricingConfigsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::
                 ListChannelPartnerRepricingConfigsRequest const& request) {
        return child_->ListChannelPartnerRepricingConfigs(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
CloudChannelServiceLogging::CreateChannelPartnerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::
        CreateChannelPartnerRepricingConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::
                 CreateChannelPartnerRepricingConfigRequest const& request) {
        return child_->CreateChannelPartnerRepricingConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
CloudChannelServiceLogging::UpdateChannelPartnerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::
        UpdateChannelPartnerRepricingConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::
                 UpdateChannelPartnerRepricingConfigRequest const& request) {
        return child_->UpdateChannelPartnerRepricingConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status CloudChannelServiceLogging::DeleteChannelPartnerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::
        DeleteChannelPartnerRepricingConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::
                 DeleteChannelPartnerRepricingConfigRequest const& request) {
        return child_->DeleteChannelPartnerRepricingConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::ListSkuGroupsResponse>
CloudChannelServiceLogging::ListSkuGroups(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListSkuGroupsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::ListSkuGroupsRequest const& request) {
        return child_->ListSkuGroups(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::ListSkuGroupBillableSkusResponse>
CloudChannelServiceLogging::ListSkuGroupBillableSkus(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListSkuGroupBillableSkusRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::ListSkuGroupBillableSkusRequest const&
                 request) {
        return child_->ListSkuGroupBillableSkus(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::Offer>
CloudChannelServiceLogging::LookupOffer(
    grpc::ClientContext& context,
    google::cloud::channel::v1::LookupOfferRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::LookupOfferRequest const& request) {
        return child_->LookupOffer(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::ListProductsResponse>
CloudChannelServiceLogging::ListProducts(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListProductsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::ListProductsRequest const& request) {
        return child_->ListProducts(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::ListSkusResponse>
CloudChannelServiceLogging::ListSkus(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListSkusRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::ListSkusRequest const& request) {
        return child_->ListSkus(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::ListOffersResponse>
CloudChannelServiceLogging::ListOffers(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListOffersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::ListOffersRequest const& request) {
        return child_->ListOffers(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::ListPurchasableSkusResponse>
CloudChannelServiceLogging::ListPurchasableSkus(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListPurchasableSkusRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::ListPurchasableSkusRequest const&
                 request) {
        return child_->ListPurchasableSkus(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::ListPurchasableOffersResponse>
CloudChannelServiceLogging::ListPurchasableOffers(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListPurchasableOffersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::ListPurchasableOffersRequest const&
                 request) {
        return child_->ListPurchasableOffers(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::QueryEligibleBillingAccountsResponse>
CloudChannelServiceLogging::QueryEligibleBillingAccounts(
    grpc::ClientContext& context,
    google::cloud::channel::v1::QueryEligibleBillingAccountsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::channel::v1::QueryEligibleBillingAccountsRequest const&
              request) {
        return child_->QueryEligibleBillingAccounts(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::RegisterSubscriberResponse>
CloudChannelServiceLogging::RegisterSubscriber(
    grpc::ClientContext& context,
    google::cloud::channel::v1::RegisterSubscriberRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::RegisterSubscriberRequest const&
                 request) {
        return child_->RegisterSubscriber(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::UnregisterSubscriberResponse>
CloudChannelServiceLogging::UnregisterSubscriber(
    grpc::ClientContext& context,
    google::cloud::channel::v1::UnregisterSubscriberRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::UnregisterSubscriberRequest const&
                 request) {
        return child_->UnregisterSubscriber(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::ListSubscribersResponse>
CloudChannelServiceLogging::ListSubscribers(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListSubscribersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::channel::v1::ListSubscribersRequest const& request) {
        return child_->ListSubscribers(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::channel::v1::ListEntitlementChangesResponse>
CloudChannelServiceLogging::ListEntitlementChanges(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListEntitlementChangesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::channel::v1::ListEntitlementChangesRequest const&
                 request) {
        return child_->ListEntitlementChanges(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<Status> CloudChannelServiceLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace channel_v1_internal
}  // namespace cloud
}  // namespace google
