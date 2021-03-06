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

#include <controller/CHIPCluster.h>
#include <core/CHIPCallback.h>
#include <lib/support/Span.h>

namespace chip {
namespace Controller {

constexpr ClusterId kIdentifyClusterId = 0x0003;

class DLL_EXPORT IdentifyCluster : public ClusterBase
{
public:
    IdentifyCluster() : ClusterBase(kIdentifyClusterId) {}
    ~IdentifyCluster() {}

    // Cluster Commands
    CHIP_ERROR Identify(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback, uint16_t identifyTime);
    CHIP_ERROR IdentifyQuery(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);

    // Cluster Attributes
    CHIP_ERROR DiscoverAttributes(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeIdentifyTime(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeClusterRevision(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR WriteAttributeIdentifyTime(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback,
                                          uint16_t value);

private:
    static constexpr CommandId kIdentifyCommandId      = 0x00;
    static constexpr CommandId kIdentifyQueryCommandId = 0x01;
};

} // namespace Controller
} // namespace chip
