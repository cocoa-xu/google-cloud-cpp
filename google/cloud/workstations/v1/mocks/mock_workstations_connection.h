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
// source: google/cloud/workstations/v1/workstations.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKSTATIONS_V1_MOCKS_MOCK_WORKSTATIONS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKSTATIONS_V1_MOCKS_MOCK_WORKSTATIONS_CONNECTION_H

#include "google/cloud/workstations/v1/workstations_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace workstations_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `WorkstationsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `WorkstationsClient`. To do so,
 * construct an object of type `WorkstationsClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockWorkstationsConnection
    : public workstations_v1::WorkstationsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::workstations::v1::WorkstationCluster>,
      GetWorkstationCluster,
      (google::cloud::workstations::v1::GetWorkstationClusterRequest const&
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::workstations::v1::WorkstationCluster>),
      ListWorkstationClusters,
      (google::cloud::workstations::v1::ListWorkstationClustersRequest request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::workstations::v1::WorkstationCluster>>,
      CreateWorkstationCluster,
      (google::cloud::workstations::v1::CreateWorkstationClusterRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::workstations::v1::WorkstationCluster>>,
      UpdateWorkstationCluster,
      (google::cloud::workstations::v1::UpdateWorkstationClusterRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::workstations::v1::WorkstationCluster>>,
      DeleteWorkstationCluster,
      (google::cloud::workstations::v1::DeleteWorkstationClusterRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::workstations::v1::WorkstationConfig>,
      GetWorkstationConfig,
      (google::cloud::workstations::v1::GetWorkstationConfigRequest const&
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::workstations::v1::WorkstationConfig>),
      ListWorkstationConfigs,
      (google::cloud::workstations::v1::ListWorkstationConfigsRequest request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::workstations::v1::WorkstationConfig>),
      ListUsableWorkstationConfigs,
      (google::cloud::workstations::v1::ListUsableWorkstationConfigsRequest
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::workstations::v1::WorkstationConfig>>,
      CreateWorkstationConfig,
      (google::cloud::workstations::v1::CreateWorkstationConfigRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::workstations::v1::WorkstationConfig>>,
      UpdateWorkstationConfig,
      (google::cloud::workstations::v1::UpdateWorkstationConfigRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::workstations::v1::WorkstationConfig>>,
      DeleteWorkstationConfig,
      (google::cloud::workstations::v1::DeleteWorkstationConfigRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::workstations::v1::Workstation>, GetWorkstation,
      (google::cloud::workstations::v1::GetWorkstationRequest const& request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::workstations::v1::Workstation>),
      ListWorkstations,
      (google::cloud::workstations::v1::ListWorkstationsRequest request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::workstations::v1::Workstation>),
      ListUsableWorkstations,
      (google::cloud::workstations::v1::ListUsableWorkstationsRequest request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::workstations::v1::Workstation>>,
              CreateWorkstation,
              (google::cloud::workstations::v1::CreateWorkstationRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::workstations::v1::Workstation>>,
              UpdateWorkstation,
              (google::cloud::workstations::v1::UpdateWorkstationRequest const&
                   request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::workstations::v1::Workstation>>,
              DeleteWorkstation,
              (google::cloud::workstations::v1::DeleteWorkstationRequest const&
                   request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::workstations::v1::Workstation>>,
      StartWorkstation,
      (google::cloud::workstations::v1::StartWorkstationRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::workstations::v1::Workstation>>,
      StopWorkstation,
      (google::cloud::workstations::v1::StopWorkstationRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::workstations::v1::GenerateAccessTokenResponse>,
      GenerateAccessToken,
      (google::cloud::workstations::v1::GenerateAccessTokenRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workstations_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKSTATIONS_V1_MOCKS_MOCK_WORKSTATIONS_CONNECTION_H
