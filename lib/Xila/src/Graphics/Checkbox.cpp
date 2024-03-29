///
/// @file Checkbox.cpp
/// @author Alix ANNERAUD (alix.anneraud@outlook.fr)
/// @brief
/// @version 0.1.0
/// @date 12-07-2022
///
/// @copyright Copyright (c) 2022
///

#include "Graphics/Checkbox.hpp"
#include "Graphics/Graphics.hpp"
#include "Log/Log.hpp"

using namespace Xila_Namespace;
using namespace Xila_Namespace::Graphics_Types;

// - Attributes

const Class_Type& Checkbox_Class::Class = lv_checkbox_class;

// - Methods

// - - Constructors / destructors

Checkbox_Class::Checkbox_Class() : Object_Class()
{
}

Checkbox_Class::Checkbox_Class(const Object_Class &Object_To_Copy)
{
    Set_Pointer(Object_To_Copy);
}

// - - Manipulation

void Checkbox_Class::Create(Object_Class Parent_Object)
{
    if (Parent_Object)
    {
        Auto_Semaphore_Type Semaphore = Graphics.Take_Semaphore_Auto();
        this->LVGL_Object_Pointer = lv_checkbox_create(Parent_Object);
    }
}

// ------------------------------------------------------------------------- //
//
//                                    Setters
//
// ------------------------------------------------------------------------- //

bool Checkbox_Class::Set_Pointer(lv_obj_t* LVGL_Object_Pointer)
{
     if (Get_Pointer() != NULL)
    {
        return false;
    }
   Object_Type Object(LVGL_Object_Pointer);
    if (!Object.Check_Class( &lv_checkbox_class))
    {
        return false;
    }
    this->LVGL_Object_Pointer = LVGL_Object_Pointer;
    return true;
}

void Checkbox_Class::Set_Text(const char *Text)
{ Auto_Semaphore_Type Semaphore = Graphics.Take_Semaphore_Auto();
    lv_checkbox_set_text(Get_Pointer(), Text);
}

void Checkbox_Class::Set_Text_Static(const char *Text)
{ Auto_Semaphore_Type Semaphore = Graphics.Take_Semaphore_Auto();
    lv_checkbox_set_text_static(Get_Pointer(), Text);
}



// ------------------------------------------------------------------------- //
//
//                                    Getters
//
// ------------------------------------------------------------------------- //

const char *Checkbox_Class::Get_Text()
{ Auto_Semaphore_Type Semaphore = Graphics.Take_Semaphore_Auto();
    return lv_checkbox_get_text(Get_Pointer());
}