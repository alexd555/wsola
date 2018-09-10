/*
 * Copyright 2015 The Android Open Source Project
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
 */

#ifndef AUDIO_ECHO_HPF_FILTER_H
#define AUDIO_ECHO_HPF_FILTER_H

#include "audio_common.h"
/**
 *  real filter function implementation.
 */
void FilterFunc_FilterFrame(sample_buf *dataBuf);
bool FilterFunc_Init(void *buf, uint32_t size);
void* FilterFunc_Fini(void);

#endif // AUDIO_ECHO_HPF_FILTER_H
