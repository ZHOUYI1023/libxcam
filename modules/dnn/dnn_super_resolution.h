/*
 * dnn_super_resolution.h -  super resolution
 *
 *  Copyright (c) 2019 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: Zong Wei <wei.zong@intel.com>
 */

#ifndef XCAM_DNN_SUPER_RESOLUTION_H
#define XCAM_DNN_SUPER_RESOLUTION_H

#pragma once

#include <string>

#include <xcam_std.h>
#include "dnn_inference_engine.h"

namespace XCam {

class DnnSuperResolution
    : public DnnInferenceEngine
{
public:
    explicit DnnSuperResolution (DnnInferConfig& config);
    virtual ~DnnSuperResolution ();

    virtual XCamReturn set_model_input_info (DnnInferInputOutputInfo& info);
    virtual XCamReturn get_model_input_info (DnnInferInputOutputInfo& info);

    virtual XCamReturn set_model_output_info (DnnInferInputOutputInfo& info);
    virtual XCamReturn get_model_output_info (DnnInferInputOutputInfo& info);

protected:
    virtual XCamReturn set_output_layer_type (const char* type);
};

}  // namespace XCam

#endif // XCAM_DNN_SUPER_RESOLUTION_H

