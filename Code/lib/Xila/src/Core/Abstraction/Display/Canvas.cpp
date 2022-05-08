///
 /// @file Canvas.cpp
 /// @author Alix ANNERAUD (alix.anneraud@outlook.fr)
 /// @brief 
 /// @version 0.1.0
 /// @date 08-05-2022
 /// 
 /// @copyright Copyright (c) 2022
 /// 


#include "Core/Core.hpp"

#define Class Xila_Class::Display_Class::Canvas_Class

Class::Canvas_Class(Object_Type& Parent_Object)
{
    LVGL_Object_Pointer = lv_canvas_create(Parent_Object.Get_Pointer());
}

#undef Class