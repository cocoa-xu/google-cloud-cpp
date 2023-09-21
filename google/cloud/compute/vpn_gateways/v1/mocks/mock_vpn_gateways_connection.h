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
// source: google/cloud/compute/vpn_gateways/v1/vpn_gateways.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_VPN_GATEWAYS_V1_MOCKS_MOCK_VPN_GATEWAYS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_VPN_GATEWAYS_V1_MOCKS_MOCK_VPN_GATEWAYS_CONNECTION_H

#include "google/cloud/compute/vpn_gateways/v1/vpn_gateways_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_vpn_gateways_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `VpnGatewaysConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `VpnGatewaysClient`. To do so,
 * construct an object of type `VpnGatewaysClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockVpnGatewaysConnection
    : public compute_vpn_gateways_v1::VpnGatewaysConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      (StreamRange<
          std::pair<std::string,
                    google::cloud::cpp::compute::v1::VpnGatewaysScopedList>>),
      AggregatedListVpnGateways,
      (google::cloud::cpp::compute::vpn_gateways::v1::
           AggregatedListVpnGatewaysRequest request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteVpnGateway,
              (google::cloud::cpp::compute::vpn_gateways::v1::
                   DeleteVpnGatewayRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::VpnGateway>,
              GetVpnGateway,
              (google::cloud::cpp::compute::vpn_gateways::v1::
                   GetVpnGatewayRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::VpnGatewaysGetStatusResponse>,
      GetStatus,
      (google::cloud::cpp::compute::vpn_gateways::v1::GetStatusRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertVpnGateway,
              (google::cloud::cpp::compute::vpn_gateways::v1::
                   InsertVpnGatewayRequest const& request),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::cpp::compute::v1::VpnGateway>),
      ListVpnGateways,
      (google::cloud::cpp::compute::vpn_gateways::v1::ListVpnGatewaysRequest
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, SetLabels,
      (google::cloud::cpp::compute::vpn_gateways::v1::SetLabelsRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>,
      TestIamPermissions,
      (google::cloud::cpp::compute::vpn_gateways::v1::
           TestIamPermissionsRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_vpn_gateways_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_VPN_GATEWAYS_V1_MOCKS_MOCK_VPN_GATEWAYS_CONNECTION_H
