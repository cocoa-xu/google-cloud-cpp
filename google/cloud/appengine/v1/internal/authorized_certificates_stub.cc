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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/v1/internal/authorized_certificates_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/appengine/v1/appengine.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace appengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AuthorizedCertificatesStub::~AuthorizedCertificatesStub() = default;

StatusOr<google::appengine::v1::ListAuthorizedCertificatesResponse>
DefaultAuthorizedCertificatesStub::ListAuthorizedCertificates(
    grpc::ClientContext& context,
    google::appengine::v1::ListAuthorizedCertificatesRequest const& request) {
  google::appengine::v1::ListAuthorizedCertificatesResponse response;
  auto status =
      grpc_stub_->ListAuthorizedCertificates(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::appengine::v1::AuthorizedCertificate>
DefaultAuthorizedCertificatesStub::GetAuthorizedCertificate(
    grpc::ClientContext& context,
    google::appengine::v1::GetAuthorizedCertificateRequest const& request) {
  google::appengine::v1::AuthorizedCertificate response;
  auto status =
      grpc_stub_->GetAuthorizedCertificate(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::appengine::v1::AuthorizedCertificate>
DefaultAuthorizedCertificatesStub::CreateAuthorizedCertificate(
    grpc::ClientContext& context,
    google::appengine::v1::CreateAuthorizedCertificateRequest const& request) {
  google::appengine::v1::AuthorizedCertificate response;
  auto status =
      grpc_stub_->CreateAuthorizedCertificate(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::appengine::v1::AuthorizedCertificate>
DefaultAuthorizedCertificatesStub::UpdateAuthorizedCertificate(
    grpc::ClientContext& context,
    google::appengine::v1::UpdateAuthorizedCertificateRequest const& request) {
  google::appengine::v1::AuthorizedCertificate response;
  auto status =
      grpc_stub_->UpdateAuthorizedCertificate(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultAuthorizedCertificatesStub::DeleteAuthorizedCertificate(
    grpc::ClientContext& context,
    google::appengine::v1::DeleteAuthorizedCertificateRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteAuthorizedCertificate(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1_internal
}  // namespace cloud
}  // namespace google
