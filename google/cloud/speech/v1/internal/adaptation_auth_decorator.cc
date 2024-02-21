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
// source: google/cloud/speech/v1/cloud_speech_adaptation.proto

#include "google/cloud/speech/v1/internal/adaptation_auth_decorator.h"
#include <google/cloud/speech/v1/cloud_speech_adaptation.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace speech_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AdaptationAuth::AdaptationAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<AdaptationStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::speech::v1::PhraseSet> AdaptationAuth::CreatePhraseSet(
    grpc::ClientContext& context,
    google::cloud::speech::v1::CreatePhraseSetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreatePhraseSet(context, request);
}

StatusOr<google::cloud::speech::v1::PhraseSet> AdaptationAuth::GetPhraseSet(
    grpc::ClientContext& context,
    google::cloud::speech::v1::GetPhraseSetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetPhraseSet(context, request);
}

StatusOr<google::cloud::speech::v1::ListPhraseSetResponse>
AdaptationAuth::ListPhraseSet(
    grpc::ClientContext& context,
    google::cloud::speech::v1::ListPhraseSetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListPhraseSet(context, request);
}

StatusOr<google::cloud::speech::v1::PhraseSet> AdaptationAuth::UpdatePhraseSet(
    grpc::ClientContext& context,
    google::cloud::speech::v1::UpdatePhraseSetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdatePhraseSet(context, request);
}

Status AdaptationAuth::DeletePhraseSet(
    grpc::ClientContext& context,
    google::cloud::speech::v1::DeletePhraseSetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeletePhraseSet(context, request);
}

StatusOr<google::cloud::speech::v1::CustomClass>
AdaptationAuth::CreateCustomClass(
    grpc::ClientContext& context,
    google::cloud::speech::v1::CreateCustomClassRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateCustomClass(context, request);
}

StatusOr<google::cloud::speech::v1::CustomClass> AdaptationAuth::GetCustomClass(
    grpc::ClientContext& context,
    google::cloud::speech::v1::GetCustomClassRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetCustomClass(context, request);
}

StatusOr<google::cloud::speech::v1::ListCustomClassesResponse>
AdaptationAuth::ListCustomClasses(
    grpc::ClientContext& context,
    google::cloud::speech::v1::ListCustomClassesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListCustomClasses(context, request);
}

StatusOr<google::cloud::speech::v1::CustomClass>
AdaptationAuth::UpdateCustomClass(
    grpc::ClientContext& context,
    google::cloud::speech::v1::UpdateCustomClassRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateCustomClass(context, request);
}

Status AdaptationAuth::DeleteCustomClass(
    grpc::ClientContext& context,
    google::cloud::speech::v1::DeleteCustomClassRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteCustomClass(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech_v1_internal
}  // namespace cloud
}  // namespace google
