/*
 * Copyright (C) 2013 The Android Open Source Project
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

#ifndef EXYNOS_GRALLOC_USAGE_H_
#define EXYNOS_GRALLOC_USAGE_H_

#include <hardware/gralloc.h>

/* SLSI specific usages */
#define GRALLOC_USAGE_PROTECTED_DPB                 0x00800000U
#define GRALLOC_USAGE_PHYSICALLY_LINEAR             0x01000000U
#define GRALLOC_USAGE_PRIVATE_NONSECURE             0x02000000U
#define GRALLOC_USAGE_CAMERA_RESERVED               0x04000000U
#define GRALLOC_USAGE_NOZEROED                      0x08000000U
#define GRALLOC_USAGE_VIDEO_EXT                     GRALLOC_USAGE_PRIVATE_0
#define GRALLOC_USAGE_YUV_RANGE_FULL                GRALLOC_USAGE_PRIVATE_1
#define GRALLOC_USAGE_DAYDREAM_SINGLE_BUFFER_MODE   GRALLOC_USAGE_PRIVATE_2
#define GRALLOC_USAGE_SECURE_CAMERA_RESERVED        GRALLOC_USAGE_PRIVATE_3

#define AFBC_INFO_SIZE                              (sizeof(int))
#define AFBC_ENABLE                                 (0xafbc)

#endif /* EXYNOS_GRALLOC_USAGE_H_ */
