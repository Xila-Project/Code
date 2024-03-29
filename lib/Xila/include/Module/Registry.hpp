///
/// @file Registry.hpp
/// @author Alix ANNERAUD (alix.anneraud@outlook.fr)
/// @brief
/// @version 0.1.0
/// @date 03-03-2023
///
/// @copyright Copyright (c) 2023
///

#ifndef Registry_Hpp_Included
#define Registry_Hpp_Included

#include "String.hpp"
#include "ArduinoJson.h"

namespace Xila_Namespace
{
    bool convertToJson(const char*String, JsonVariant variant);

}

#endif