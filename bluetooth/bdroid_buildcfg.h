/*
 *
 *  Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *  Not a Contribution, Apache license notifications and license are retained
 *  for attribution purposes only.
 *
 * Copyright (C) 2012 The Android Open Source Project
 * Copyright (C) 2017 The LineageOS Project
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

#ifndef _BDROID_BUILDCFG_H
#define _BDROID_BUILDCFG_H

#pragma push_macro("PROPERTY_VALUE_MAX")

#include <cutils/properties.h>
#include <string.h>

static inline const char* BtmGetDefaultName()
{
    char product_device[PROPERTY_VALUE_MAX];
    property_get("ro.product.device", product_device, "");

    if (strstr(product_device, "beckham"))
        return "Moto Z3 Play";
    if (strstr(product_device, "chef"))
        return "Moto One Power";
    if (strstr(product_device, "evert"))
        return "Moto G6 Plus";
    if (strstr(product_device, "lake"))
        return "Moto G7 Plus";
    if (strstr(product_device, "lake_n"))
        return "REVVLRY+";
    if (strstr(product_device, "payton"))
        return "Moto X4";

    // Fallback to Moto SDM Generic
    return "Moto SDM6xx";
}

#define BTM_DEF_LOCAL_NAME BtmGetDefaultName()

#define BLE_VND_INCLUDED   TRUE
#define MAX_ACL_CONNECTIONS   16
#define MAX_L2CAP_CHANNELS    16

#pragma pop_macro("PROPERTY_VALUE_MAX")

#endif
