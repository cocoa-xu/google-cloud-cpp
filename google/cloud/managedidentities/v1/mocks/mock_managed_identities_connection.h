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
// source: google/cloud/managedidentities/v1/managed_identities_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MANAGEDIDENTITIES_V1_MOCKS_MOCK_MANAGED_IDENTITIES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MANAGEDIDENTITIES_V1_MOCKS_MOCK_MANAGED_IDENTITIES_CONNECTION_H

#include "google/cloud/managedidentities/v1/managed_identities_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace managedidentities_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `ManagedIdentitiesServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `ManagedIdentitiesServiceClient`. To
 * do so, construct an object of type `ManagedIdentitiesServiceClient` with an
 * instance of this class. Then use the Google Test framework functions to
 * program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockManagedIdentitiesServiceConnection
    : public managedidentities_v1::ManagedIdentitiesServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(future<StatusOr<google::cloud::managedidentities::v1::Domain>>,
              CreateMicrosoftAdDomain,
              (google::cloud::managedidentities::v1::
                   CreateMicrosoftAdDomainRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<
          google::cloud::managedidentities::v1::ResetAdminPasswordResponse>,
      ResetAdminPassword,
      (google::cloud::managedidentities::v1::ResetAdminPasswordRequest const&
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::managedidentities::v1::Domain>), ListDomains,
      (google::cloud::managedidentities::v1::ListDomainsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::managedidentities::v1::Domain>, GetDomain,
      (google::cloud::managedidentities::v1::GetDomainRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::managedidentities::v1::Domain>>,
              UpdateDomain,
              (google::cloud::managedidentities::v1::UpdateDomainRequest const&
                   request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::managedidentities::v1::OpMetadata>>,
      DeleteDomain,
      (google::cloud::managedidentities::v1::DeleteDomainRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::managedidentities::v1::Domain>>,
      AttachTrust,
      (google::cloud::managedidentities::v1::AttachTrustRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::managedidentities::v1::Domain>>,
      ReconfigureTrust,
      (google::cloud::managedidentities::v1::ReconfigureTrustRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::managedidentities::v1::Domain>>,
      DetachTrust,
      (google::cloud::managedidentities::v1::DetachTrustRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::managedidentities::v1::Domain>>,
              ValidateTrust,
              (google::cloud::managedidentities::v1::ValidateTrustRequest const&
                   request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace managedidentities_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MANAGEDIDENTITIES_V1_MOCKS_MOCK_MANAGED_IDENTITIES_CONNECTION_H
