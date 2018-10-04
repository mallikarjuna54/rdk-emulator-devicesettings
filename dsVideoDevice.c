/*
 * If not stated otherwise in this file or this component's Licenses.txt file the
 * following copyright and licenses apply:
 *
 * Copyright 2017 RDK Management
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
*/

#include <stdlib.h>
#include <stdio.h>
#include "dsTypes.h"
#include "dsVideoDevice.h"

dsError_t  dsVideoDeviceInit()
{
	dsError_t ret = dsERR_NONE;
	return ret;
}

dsError_t  dsGetVideoDevice(int index, int *handle)
{
	dsError_t ret = dsERR_NONE;

	*handle = 0;
	return ret;
}

dsError_t  dsSetDFC(int handle, dsVideoZoom_t dfc)
{
	dsError_t ret = dsERR_NONE;

	return ret;
}

dsError_t  dsVideoDeviceTerm()
{
	dsError_t ret = dsERR_NONE;
	return ret;
}
