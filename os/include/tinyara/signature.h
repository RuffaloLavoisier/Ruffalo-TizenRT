/****************************************************************************
 *
 * Copyright 2022 Samsung Electronics All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the License.
 *
 ****************************************************************************/

#ifndef __INCLUDE_TINYARA_SIGNATURE_H
#define __INCLUDE_TINYARA_SIGNATURE_H

#include <tinyara/config.h>
#include <stdint.h>

#if defined(CONFIG_APP_BINARY_SEPARATION) && defined(CONFIG_ARCH_BOARD_RTL8721CSM)
/* The size of prepended binary signing data */
#define USER_SIGN_PREPEND_SIZE     0
#endif

int up_verify_kernelsignature(uint32_t address);

#ifdef CONFIG_APP_BINARY_SEPARATION
int up_verify_usersignature(uint32_t address);
#endif

#ifdef __cplusplus
#define EXTERN extern "C"
extern "C" {
#else
#define EXTERN extern
#endif

#undef EXTERN
#ifdef __cplusplus
}
#endif

#endif /* __INCLUDE_TINYARA_SIGNATURE_H */
