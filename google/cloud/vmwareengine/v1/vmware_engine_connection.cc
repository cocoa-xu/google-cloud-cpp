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
// source: google/cloud/vmwareengine/v1/vmwareengine.proto

#include "google/cloud/vmwareengine/v1/vmware_engine_connection.h"
#include "google/cloud/vmwareengine/v1/internal/vmware_engine_connection_impl.h"
#include "google/cloud/vmwareengine/v1/internal/vmware_engine_option_defaults.h"
#include "google/cloud/vmwareengine/v1/internal/vmware_engine_stub_factory.h"
#include "google/cloud/vmwareengine/v1/internal/vmware_engine_tracing_connection.h"
#include "google/cloud/vmwareengine/v1/vmware_engine_options.h"
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
namespace vmwareengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VmwareEngineConnection::~VmwareEngineConnection() = default;

StreamRange<google::cloud::vmwareengine::v1::PrivateCloud>
VmwareEngineConnection::ListPrivateClouds(
    google::cloud::vmwareengine::v1::
        ListPrivateCloudsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmwareengine::v1::PrivateCloud>>();
}

StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>
VmwareEngineConnection::GetPrivateCloud(
    google::cloud::vmwareengine::v1::GetPrivateCloudRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
VmwareEngineConnection::CreatePrivateCloud(
    google::cloud::vmwareengine::v1::CreatePrivateCloudRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
VmwareEngineConnection::UpdatePrivateCloud(
    google::cloud::vmwareengine::v1::UpdatePrivateCloudRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
VmwareEngineConnection::DeletePrivateCloud(
    google::cloud::vmwareengine::v1::DeletePrivateCloudRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
VmwareEngineConnection::UndeletePrivateCloud(
    google::cloud::vmwareengine::v1::UndeletePrivateCloudRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::vmwareengine::v1::Cluster>
VmwareEngineConnection::ListClusters(
    google::cloud::vmwareengine::v1::
        ListClustersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmwareengine::v1::Cluster>>();
}

StatusOr<google::cloud::vmwareengine::v1::Cluster>
VmwareEngineConnection::GetCluster(
    google::cloud::vmwareengine::v1::GetClusterRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::vmwareengine::v1::Cluster>>
VmwareEngineConnection::CreateCluster(
    google::cloud::vmwareengine::v1::CreateClusterRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::Cluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmwareengine::v1::Cluster>>
VmwareEngineConnection::UpdateCluster(
    google::cloud::vmwareengine::v1::UpdateClusterRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::Cluster>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
VmwareEngineConnection::DeleteCluster(
    google::cloud::vmwareengine::v1::DeleteClusterRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::vmwareengine::v1::Node>
VmwareEngineConnection::ListNodes(
    google::cloud::vmwareengine::v1::
        ListNodesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmwareengine::v1::Node>>();
}

StatusOr<google::cloud::vmwareengine::v1::Node> VmwareEngineConnection::GetNode(
    google::cloud::vmwareengine::v1::GetNodeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::vmwareengine::v1::ExternalAddress>
VmwareEngineConnection::ListExternalAddresses(
    google::cloud::vmwareengine::v1::
        ListExternalAddressesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmwareengine::v1::ExternalAddress>>();
}

StreamRange<google::cloud::vmwareengine::v1::ExternalAddress>
VmwareEngineConnection::FetchNetworkPolicyExternalAddresses(
    google::cloud::vmwareengine::v1::
        FetchNetworkPolicyExternalAddressesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmwareengine::v1::ExternalAddress>>();
}

StatusOr<google::cloud::vmwareengine::v1::ExternalAddress>
VmwareEngineConnection::GetExternalAddress(
    google::cloud::vmwareengine::v1::GetExternalAddressRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::vmwareengine::v1::ExternalAddress>>
VmwareEngineConnection::CreateExternalAddress(
    google::cloud::vmwareengine::v1::CreateExternalAddressRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::ExternalAddress>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmwareengine::v1::ExternalAddress>>
VmwareEngineConnection::UpdateExternalAddress(
    google::cloud::vmwareengine::v1::UpdateExternalAddressRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::ExternalAddress>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
VmwareEngineConnection::DeleteExternalAddress(
    google::cloud::vmwareengine::v1::DeleteExternalAddressRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::vmwareengine::v1::Subnet>
VmwareEngineConnection::ListSubnets(
    google::cloud::vmwareengine::v1::
        ListSubnetsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmwareengine::v1::Subnet>>();
}

StatusOr<google::cloud::vmwareengine::v1::Subnet>
VmwareEngineConnection::GetSubnet(
    google::cloud::vmwareengine::v1::GetSubnetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::vmwareengine::v1::Subnet>>
VmwareEngineConnection::UpdateSubnet(
    google::cloud::vmwareengine::v1::UpdateSubnetRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::Subnet>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::vmwareengine::v1::ExternalAccessRule>
VmwareEngineConnection::ListExternalAccessRules(
    google::cloud::vmwareengine::v1::
        ListExternalAccessRulesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmwareengine::v1::ExternalAccessRule>>();
}

StatusOr<google::cloud::vmwareengine::v1::ExternalAccessRule>
VmwareEngineConnection::GetExternalAccessRule(
    google::cloud::vmwareengine::v1::GetExternalAccessRuleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::vmwareengine::v1::ExternalAccessRule>>
VmwareEngineConnection::CreateExternalAccessRule(
    google::cloud::vmwareengine::v1::CreateExternalAccessRuleRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::ExternalAccessRule>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmwareengine::v1::ExternalAccessRule>>
VmwareEngineConnection::UpdateExternalAccessRule(
    google::cloud::vmwareengine::v1::UpdateExternalAccessRuleRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::ExternalAccessRule>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
VmwareEngineConnection::DeleteExternalAccessRule(
    google::cloud::vmwareengine::v1::DeleteExternalAccessRuleRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::vmwareengine::v1::LoggingServer>
VmwareEngineConnection::ListLoggingServers(
    google::cloud::vmwareengine::v1::
        ListLoggingServersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmwareengine::v1::LoggingServer>>();
}

StatusOr<google::cloud::vmwareengine::v1::LoggingServer>
VmwareEngineConnection::GetLoggingServer(
    google::cloud::vmwareengine::v1::GetLoggingServerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::vmwareengine::v1::LoggingServer>>
VmwareEngineConnection::CreateLoggingServer(
    google::cloud::vmwareengine::v1::CreateLoggingServerRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::LoggingServer>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmwareengine::v1::LoggingServer>>
VmwareEngineConnection::UpdateLoggingServer(
    google::cloud::vmwareengine::v1::UpdateLoggingServerRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::LoggingServer>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
VmwareEngineConnection::DeleteLoggingServer(
    google::cloud::vmwareengine::v1::DeleteLoggingServerRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::vmwareengine::v1::NodeType>
VmwareEngineConnection::ListNodeTypes(
    google::cloud::vmwareengine::v1::
        ListNodeTypesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmwareengine::v1::NodeType>>();
}

StatusOr<google::cloud::vmwareengine::v1::NodeType>
VmwareEngineConnection::GetNodeType(
    google::cloud::vmwareengine::v1::GetNodeTypeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::vmwareengine::v1::Credentials>
VmwareEngineConnection::ShowNsxCredentials(
    google::cloud::vmwareengine::v1::ShowNsxCredentialsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::vmwareengine::v1::Credentials>
VmwareEngineConnection::ShowVcenterCredentials(
    google::cloud::vmwareengine::v1::ShowVcenterCredentialsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
VmwareEngineConnection::ResetNsxCredentials(
    google::cloud::vmwareengine::v1::ResetNsxCredentialsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
VmwareEngineConnection::ResetVcenterCredentials(
    google::cloud::vmwareengine::v1::ResetVcenterCredentialsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::vmwareengine::v1::DnsForwarding>
VmwareEngineConnection::GetDnsForwarding(
    google::cloud::vmwareengine::v1::GetDnsForwardingRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::vmwareengine::v1::DnsForwarding>>
VmwareEngineConnection::UpdateDnsForwarding(
    google::cloud::vmwareengine::v1::UpdateDnsForwardingRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::DnsForwarding>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::vmwareengine::v1::NetworkPeering>
VmwareEngineConnection::GetNetworkPeering(
    google::cloud::vmwareengine::v1::GetNetworkPeeringRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::vmwareengine::v1::NetworkPeering>
VmwareEngineConnection::ListNetworkPeerings(
    google::cloud::vmwareengine::v1::
        ListNetworkPeeringsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmwareengine::v1::NetworkPeering>>();
}

future<StatusOr<google::cloud::vmwareengine::v1::NetworkPeering>>
VmwareEngineConnection::CreateNetworkPeering(
    google::cloud::vmwareengine::v1::CreateNetworkPeeringRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::NetworkPeering>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
VmwareEngineConnection::DeleteNetworkPeering(
    google::cloud::vmwareengine::v1::DeleteNetworkPeeringRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmwareengine::v1::NetworkPeering>>
VmwareEngineConnection::UpdateNetworkPeering(
    google::cloud::vmwareengine::v1::UpdateNetworkPeeringRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::NetworkPeering>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::vmwareengine::v1::PeeringRoute>
VmwareEngineConnection::ListPeeringRoutes(
    google::cloud::vmwareengine::v1::
        ListPeeringRoutesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmwareengine::v1::PeeringRoute>>();
}

future<StatusOr<google::cloud::vmwareengine::v1::HcxActivationKey>>
VmwareEngineConnection::CreateHcxActivationKey(
    google::cloud::vmwareengine::v1::CreateHcxActivationKeyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::HcxActivationKey>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::vmwareengine::v1::HcxActivationKey>
VmwareEngineConnection::ListHcxActivationKeys(
    google::cloud::vmwareengine::v1::
        ListHcxActivationKeysRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmwareengine::v1::HcxActivationKey>>();
}

StatusOr<google::cloud::vmwareengine::v1::HcxActivationKey>
VmwareEngineConnection::GetHcxActivationKey(
    google::cloud::vmwareengine::v1::GetHcxActivationKeyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::vmwareengine::v1::NetworkPolicy>
VmwareEngineConnection::GetNetworkPolicy(
    google::cloud::vmwareengine::v1::GetNetworkPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::vmwareengine::v1::NetworkPolicy>
VmwareEngineConnection::ListNetworkPolicies(
    google::cloud::vmwareengine::v1::
        ListNetworkPoliciesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmwareengine::v1::NetworkPolicy>>();
}

future<StatusOr<google::cloud::vmwareengine::v1::NetworkPolicy>>
VmwareEngineConnection::CreateNetworkPolicy(
    google::cloud::vmwareengine::v1::CreateNetworkPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::NetworkPolicy>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmwareengine::v1::NetworkPolicy>>
VmwareEngineConnection::UpdateNetworkPolicy(
    google::cloud::vmwareengine::v1::UpdateNetworkPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::NetworkPolicy>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
VmwareEngineConnection::DeleteNetworkPolicy(
    google::cloud::vmwareengine::v1::DeleteNetworkPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::vmwareengine::v1::ManagementDnsZoneBinding>
VmwareEngineConnection::ListManagementDnsZoneBindings(
    google::cloud::vmwareengine::v1::
        ListManagementDnsZoneBindingsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmwareengine::v1::ManagementDnsZoneBinding>>();
}

StatusOr<google::cloud::vmwareengine::v1::ManagementDnsZoneBinding>
VmwareEngineConnection::GetManagementDnsZoneBinding(
    google::cloud::vmwareengine::v1::
        GetManagementDnsZoneBindingRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::vmwareengine::v1::ManagementDnsZoneBinding>>
VmwareEngineConnection::CreateManagementDnsZoneBinding(
    google::cloud::vmwareengine::v1::
        CreateManagementDnsZoneBindingRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::ManagementDnsZoneBinding>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmwareengine::v1::ManagementDnsZoneBinding>>
VmwareEngineConnection::UpdateManagementDnsZoneBinding(
    google::cloud::vmwareengine::v1::
        UpdateManagementDnsZoneBindingRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::ManagementDnsZoneBinding>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
VmwareEngineConnection::DeleteManagementDnsZoneBinding(
    google::cloud::vmwareengine::v1::
        DeleteManagementDnsZoneBindingRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmwareengine::v1::ManagementDnsZoneBinding>>
VmwareEngineConnection::RepairManagementDnsZoneBinding(
    google::cloud::vmwareengine::v1::
        RepairManagementDnsZoneBindingRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::ManagementDnsZoneBinding>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmwareengine::v1::VmwareEngineNetwork>>
VmwareEngineConnection::CreateVmwareEngineNetwork(
    google::cloud::vmwareengine::v1::CreateVmwareEngineNetworkRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::VmwareEngineNetwork>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmwareengine::v1::VmwareEngineNetwork>>
VmwareEngineConnection::UpdateVmwareEngineNetwork(
    google::cloud::vmwareengine::v1::UpdateVmwareEngineNetworkRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::VmwareEngineNetwork>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
VmwareEngineConnection::DeleteVmwareEngineNetwork(
    google::cloud::vmwareengine::v1::DeleteVmwareEngineNetworkRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::vmwareengine::v1::VmwareEngineNetwork>
VmwareEngineConnection::GetVmwareEngineNetwork(
    google::cloud::vmwareengine::v1::GetVmwareEngineNetworkRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::vmwareengine::v1::VmwareEngineNetwork>
VmwareEngineConnection::ListVmwareEngineNetworks(
    google::cloud::vmwareengine::v1::
        ListVmwareEngineNetworksRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmwareengine::v1::VmwareEngineNetwork>>();
}

future<StatusOr<google::cloud::vmwareengine::v1::PrivateConnection>>
VmwareEngineConnection::CreatePrivateConnection(
    google::cloud::vmwareengine::v1::CreatePrivateConnectionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::PrivateConnection>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::vmwareengine::v1::PrivateConnection>
VmwareEngineConnection::GetPrivateConnection(
    google::cloud::vmwareengine::v1::GetPrivateConnectionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::vmwareengine::v1::PrivateConnection>
VmwareEngineConnection::ListPrivateConnections(
    google::cloud::vmwareengine::v1::
        ListPrivateConnectionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmwareengine::v1::PrivateConnection>>();
}

future<StatusOr<google::cloud::vmwareengine::v1::PrivateConnection>>
VmwareEngineConnection::UpdatePrivateConnection(
    google::cloud::vmwareengine::v1::UpdatePrivateConnectionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::PrivateConnection>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
VmwareEngineConnection::DeletePrivateConnection(
    google::cloud::vmwareengine::v1::DeletePrivateConnectionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::vmwareengine::v1::PeeringRoute>
VmwareEngineConnection::ListPrivateConnectionPeeringRoutes(
    google::cloud::vmwareengine::v1::
        ListPrivateConnectionPeeringRoutesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vmwareengine::v1::PeeringRoute>>();
}

future<StatusOr<google::cloud::vmwareengine::v1::DnsBindPermission>>
VmwareEngineConnection::GrantDnsBindPermission(
    google::cloud::vmwareengine::v1::GrantDnsBindPermissionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::DnsBindPermission>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::vmwareengine::v1::DnsBindPermission>
VmwareEngineConnection::GetDnsBindPermission(
    google::cloud::vmwareengine::v1::GetDnsBindPermissionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::vmwareengine::v1::DnsBindPermission>>
VmwareEngineConnection::RevokeDnsBindPermission(
    google::cloud::vmwareengine::v1::RevokeDnsBindPermissionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vmwareengine::v1::DnsBindPermission>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<VmwareEngineConnection> MakeVmwareEngineConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 VmwareEnginePolicyOptionList>(options,
                                                               __func__);
  options =
      vmwareengine_v1_internal::VmwareEngineDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = vmwareengine_v1_internal::CreateDefaultVmwareEngineStub(
      std::move(auth), options);
  return vmwareengine_v1_internal::MakeVmwareEngineTracingConnection(
      std::make_shared<vmwareengine_v1_internal::VmwareEngineConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vmwareengine_v1
}  // namespace cloud
}  // namespace google
