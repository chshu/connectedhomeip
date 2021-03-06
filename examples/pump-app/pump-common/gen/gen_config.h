/*
 *
 *    Copyright (c) 2021 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP

// Prevent multiple inclusion
#pragma once

// User options for plugin Binding Table Library
#define EMBER_BINDING_TABLE_SIZE 10

/**** Network Section ****/
#define EMBER_SUPPORTED_NETWORKS (1)

#define EMBER_APS_UNICAST_MESSAGE_COUNT 10

/**** Cluster endpoint counts ****/
#define EMBER_AF_BASIC_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_GENERAL_COMMISSIONING_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_GROUPS_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_IDENTIFY_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_IDENTIFY_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_NETWORK_COMMISSIONING_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_ON_OFF_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_PUMP_CONFIG_CONTROL_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_SCENES_CLUSTER_SERVER_ENDPOINT_COUNT (1)

/**** Cluster Plugins ****/

// Use this macro to check if the server side of the Basic cluster is included
#define ZCL_USING_BASIC_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_BASIC_SERVER
#define EMBER_AF_PLUGIN_BASIC

// Use this macro to check if the server side of the General Commissioning cluster is included
#define ZCL_USING_GENERAL_COMMISSIONING_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_GENERAL_COMMISSIONING_SERVER
#define EMBER_AF_PLUGIN_GENERAL_COMMISSIONING

// Use this macro to check if the server side of the Groups cluster is included
#define ZCL_USING_GROUPS_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_GROUPS_SERVER
#define EMBER_AF_PLUGIN_GROUPS

// Use this macro to check if the client side of the Identify cluster is included
#define ZCL_USING_IDENTIFY_CLUSTER_CLIENT
#define EMBER_AF_PLUGIN_IDENTIFY_CLIENT

// Use this macro to check if the server side of the Identify cluster is included
#define ZCL_USING_IDENTIFY_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_IDENTIFY_SERVER
#define EMBER_AF_PLUGIN_IDENTIFY

// Use this macro to check if the server side of the Network Commissioning cluster is included
#define ZCL_USING_NETWORK_COMMISSIONING_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_NETWORK_COMMISSIONING_SERVER
#define EMBER_AF_PLUGIN_NETWORK_COMMISSIONING

// Use this macro to check if the server side of the On/off cluster is included
#define ZCL_USING_ON_OFF_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_ON_OFF_SERVER
#define EMBER_AF_PLUGIN_ON_OFF

// Use this macro to check if the server side of the Pump Configuration and Control cluster is included
#define ZCL_USING_PUMP_CONFIG_CONTROL_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_PUMP_CONFIGURATION_AND_CONTROL_SERVER
#define EMBER_AF_PLUGIN_PUMP_CONFIGURATION_AND_CONTROL

// Use this macro to check if the server side of the Scenes cluster is included
#define ZCL_USING_SCENES_CLUSTER_SERVER
#define EMBER_AF_PLUGIN_SCENES_SERVER
#define EMBER_AF_PLUGIN_SCENES
// User options for server plugin Scenes
#define EMBER_AF_PLUGIN_SCENES_TABLE_SIZE 3
