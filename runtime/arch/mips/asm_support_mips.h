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

#ifndef ART_RUNTIME_ARCH_MIPS_ASM_SUPPORT_MIPS_H_
#define ART_RUNTIME_ARCH_MIPS_ASM_SUPPORT_MIPS_H_

#include "asm_support.h"

#define FRAME_SIZE_SAVE_ALL_CALLEE_SAVE 96
#define FRAME_SIZE_REFS_ONLY_CALLEE_SAVE 48
#define FRAME_SIZE_REFS_AND_ARGS_CALLEE_SAVE 80
#define FRAME_SIZE_SAVE_EVERYTHING_CALLEE_SAVE 256

#endif  // ART_RUNTIME_ARCH_MIPS_ASM_SUPPORT_MIPS_H_
