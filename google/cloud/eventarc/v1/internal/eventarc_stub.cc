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
// source: google/cloud/eventarc/v1/eventarc.proto

#include "google/cloud/eventarc/v1/internal/eventarc_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/eventarc/v1/eventarc.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace eventarc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EventarcStub::~EventarcStub() = default;

StatusOr<google::cloud::eventarc::v1::Trigger> DefaultEventarcStub::GetTrigger(
    grpc::ClientContext& context,
    google::cloud::eventarc::v1::GetTriggerRequest const& request) {
  google::cloud::eventarc::v1::Trigger response;
  auto status = grpc_stub_->GetTrigger(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::eventarc::v1::ListTriggersResponse>
DefaultEventarcStub::ListTriggers(
    grpc::ClientContext& context,
    google::cloud::eventarc::v1::ListTriggersRequest const& request) {
  google::cloud::eventarc::v1::ListTriggersResponse response;
  auto status = grpc_stub_->ListTriggers(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultEventarcStub::AsyncCreateTrigger(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::eventarc::v1::CreateTriggerRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::eventarc::v1::CreateTriggerRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::eventarc::v1::CreateTriggerRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateTrigger(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultEventarcStub::AsyncUpdateTrigger(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::eventarc::v1::UpdateTriggerRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::eventarc::v1::UpdateTriggerRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::eventarc::v1::UpdateTriggerRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateTrigger(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultEventarcStub::AsyncDeleteTrigger(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::eventarc::v1::DeleteTriggerRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::eventarc::v1::DeleteTriggerRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::eventarc::v1::DeleteTriggerRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteTrigger(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::eventarc::v1::Channel> DefaultEventarcStub::GetChannel(
    grpc::ClientContext& context,
    google::cloud::eventarc::v1::GetChannelRequest const& request) {
  google::cloud::eventarc::v1::Channel response;
  auto status = grpc_stub_->GetChannel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::eventarc::v1::ListChannelsResponse>
DefaultEventarcStub::ListChannels(
    grpc::ClientContext& context,
    google::cloud::eventarc::v1::ListChannelsRequest const& request) {
  google::cloud::eventarc::v1::ListChannelsResponse response;
  auto status = grpc_stub_->ListChannels(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultEventarcStub::AsyncCreateChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::eventarc::v1::CreateChannelRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::eventarc::v1::CreateChannelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::eventarc::v1::CreateChannelRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateChannel(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultEventarcStub::AsyncUpdateChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::eventarc::v1::UpdateChannelRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::eventarc::v1::UpdateChannelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::eventarc::v1::UpdateChannelRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateChannel(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultEventarcStub::AsyncDeleteChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::eventarc::v1::DeleteChannelRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::eventarc::v1::DeleteChannelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::eventarc::v1::DeleteChannelRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteChannel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::eventarc::v1::Provider>
DefaultEventarcStub::GetProvider(
    grpc::ClientContext& context,
    google::cloud::eventarc::v1::GetProviderRequest const& request) {
  google::cloud::eventarc::v1::Provider response;
  auto status = grpc_stub_->GetProvider(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::eventarc::v1::ListProvidersResponse>
DefaultEventarcStub::ListProviders(
    grpc::ClientContext& context,
    google::cloud::eventarc::v1::ListProvidersRequest const& request) {
  google::cloud::eventarc::v1::ListProvidersResponse response;
  auto status = grpc_stub_->ListProviders(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::eventarc::v1::ChannelConnection>
DefaultEventarcStub::GetChannelConnection(
    grpc::ClientContext& context,
    google::cloud::eventarc::v1::GetChannelConnectionRequest const& request) {
  google::cloud::eventarc::v1::ChannelConnection response;
  auto status = grpc_stub_->GetChannelConnection(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::eventarc::v1::ListChannelConnectionsResponse>
DefaultEventarcStub::ListChannelConnections(
    grpc::ClientContext& context,
    google::cloud::eventarc::v1::ListChannelConnectionsRequest const& request) {
  google::cloud::eventarc::v1::ListChannelConnectionsResponse response;
  auto status =
      grpc_stub_->ListChannelConnections(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultEventarcStub::AsyncCreateChannelConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::eventarc::v1::CreateChannelConnectionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::eventarc::v1::CreateChannelConnectionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::eventarc::v1::CreateChannelConnectionRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateChannelConnection(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultEventarcStub::AsyncDeleteChannelConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::eventarc::v1::DeleteChannelConnectionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteChannelConnection(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
DefaultEventarcStub::GetGoogleChannelConfig(
    grpc::ClientContext& context,
    google::cloud::eventarc::v1::GetGoogleChannelConfigRequest const& request) {
  google::cloud::eventarc::v1::GoogleChannelConfig response;
  auto status =
      grpc_stub_->GetGoogleChannelConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::eventarc::v1::GoogleChannelConfig>
DefaultEventarcStub::UpdateGoogleChannelConfig(
    grpc::ClientContext& context,
    google::cloud::eventarc::v1::UpdateGoogleChannelConfigRequest const&
        request) {
  google::cloud::eventarc::v1::GoogleChannelConfig response;
  auto status =
      grpc_stub_->UpdateGoogleChannelConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultEventarcStub::AsyncGetOperation(
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

future<Status> DefaultEventarcStub::AsyncCancelOperation(
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
}  // namespace eventarc_v1_internal
}  // namespace cloud
}  // namespace google
