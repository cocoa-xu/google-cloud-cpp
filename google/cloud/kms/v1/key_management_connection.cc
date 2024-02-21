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
// source: google/cloud/kms/v1/service.proto

#include "google/cloud/kms/v1/key_management_connection.h"
#include "google/cloud/kms/v1/internal/key_management_connection_impl.h"
#include "google/cloud/kms/v1/internal/key_management_option_defaults.h"
#include "google/cloud/kms/v1/internal/key_management_stub_factory.h"
#include "google/cloud/kms/v1/internal/key_management_tracing_connection.h"
#include "google/cloud/kms/v1/key_management_options.h"
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
namespace kms_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

KeyManagementServiceConnection::~KeyManagementServiceConnection() = default;

StreamRange<google::cloud::kms::v1::KeyRing>
KeyManagementServiceConnection::ListKeyRings(
    google::cloud::kms::v1::
        ListKeyRingsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::kms::v1::KeyRing>>();
}

StreamRange<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceConnection::ListCryptoKeys(
    google::cloud::kms::v1::
        ListCryptoKeysRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::kms::v1::CryptoKey>>();
}

StreamRange<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceConnection::ListCryptoKeyVersions(
    google::cloud::kms::v1::
        ListCryptoKeyVersionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::kms::v1::CryptoKeyVersion>>();
}

StreamRange<google::cloud::kms::v1::ImportJob>
KeyManagementServiceConnection::ListImportJobs(
    google::cloud::kms::v1::
        ListImportJobsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::kms::v1::ImportJob>>();
}

StatusOr<google::cloud::kms::v1::KeyRing>
KeyManagementServiceConnection::GetKeyRing(
    google::cloud::kms::v1::GetKeyRingRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceConnection::GetCryptoKey(
    google::cloud::kms::v1::GetCryptoKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceConnection::GetCryptoKeyVersion(
    google::cloud::kms::v1::GetCryptoKeyVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::PublicKey>
KeyManagementServiceConnection::GetPublicKey(
    google::cloud::kms::v1::GetPublicKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::ImportJob>
KeyManagementServiceConnection::GetImportJob(
    google::cloud::kms::v1::GetImportJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::KeyRing>
KeyManagementServiceConnection::CreateKeyRing(
    google::cloud::kms::v1::CreateKeyRingRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceConnection::CreateCryptoKey(
    google::cloud::kms::v1::CreateCryptoKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceConnection::CreateCryptoKeyVersion(
    google::cloud::kms::v1::CreateCryptoKeyVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceConnection::ImportCryptoKeyVersion(
    google::cloud::kms::v1::ImportCryptoKeyVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::ImportJob>
KeyManagementServiceConnection::CreateImportJob(
    google::cloud::kms::v1::CreateImportJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceConnection::UpdateCryptoKey(
    google::cloud::kms::v1::UpdateCryptoKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceConnection::UpdateCryptoKeyVersion(
    google::cloud::kms::v1::UpdateCryptoKeyVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceConnection::UpdateCryptoKeyPrimaryVersion(
    google::cloud::kms::v1::UpdateCryptoKeyPrimaryVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceConnection::DestroyCryptoKeyVersion(
    google::cloud::kms::v1::DestroyCryptoKeyVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceConnection::RestoreCryptoKeyVersion(
    google::cloud::kms::v1::RestoreCryptoKeyVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::EncryptResponse>
KeyManagementServiceConnection::Encrypt(
    google::cloud::kms::v1::EncryptRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::DecryptResponse>
KeyManagementServiceConnection::Decrypt(
    google::cloud::kms::v1::DecryptRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::RawEncryptResponse>
KeyManagementServiceConnection::RawEncrypt(
    google::cloud::kms::v1::RawEncryptRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::RawDecryptResponse>
KeyManagementServiceConnection::RawDecrypt(
    google::cloud::kms::v1::RawDecryptRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::AsymmetricSignResponse>
KeyManagementServiceConnection::AsymmetricSign(
    google::cloud::kms::v1::AsymmetricSignRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::AsymmetricDecryptResponse>
KeyManagementServiceConnection::AsymmetricDecrypt(
    google::cloud::kms::v1::AsymmetricDecryptRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::MacSignResponse>
KeyManagementServiceConnection::MacSign(
    google::cloud::kms::v1::MacSignRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::MacVerifyResponse>
KeyManagementServiceConnection::MacVerify(
    google::cloud::kms::v1::MacVerifyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::GenerateRandomBytesResponse>
KeyManagementServiceConnection::GenerateRandomBytes(
    google::cloud::kms::v1::GenerateRandomBytesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<KeyManagementServiceConnection>
MakeKeyManagementServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 KeyManagementServicePolicyOptionList>(
      options, __func__);
  options =
      kms_v1_internal::KeyManagementServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = kms_v1_internal::CreateDefaultKeyManagementServiceStub(
      std::move(auth), options);
  return kms_v1_internal::MakeKeyManagementServiceTracingConnection(
      std::make_shared<kms_v1_internal::KeyManagementServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_v1
}  // namespace cloud
}  // namespace google
