/*
 *  Copyright 2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */
#pragma once

#include <aws_common/sdk_utils/logging/aws_log_system.h>
#include <aws_common/sdk_utils/parameter_reader.h>

#include <string>

namespace Aws {
namespace Kinesis {

struct H264DecoderNodeParams
{
  std::string subscription_topic;
  std::string publication_topic;
  int queue_size;
};

enum FrameFlag : uint16_t { kBPFrameFlag = (0), kKeyFrameFlag = (1 << 0) };

Aws::AwsError GetH264DecoderNodeParams(const Aws::Client::ParameterReaderInterface & param_reader,
                                       H264DecoderNodeParams & params);

}  // namespace Kinesis
}  // namespace Aws
