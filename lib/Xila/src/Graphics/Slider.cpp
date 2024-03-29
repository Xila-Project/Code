///
/// @file Slider.cpp
/// @author Alix ANNERAUD (alix.anneraud@outlook.fr)
/// @brief
/// @version 0.1.0
/// @date 12-07-2022
///
/// @copyright Copyright (c) 2022
///

#include "Graphics/Slider.hpp"
#include "Graphics/Graphics.hpp"

using namespace Xila_Namespace;
using namespace Xila_Namespace::Graphics_Types;

// - Attributes

const Class_Type &Slider_Class::Class = lv_slider_class;

// - Methods

// - - Constructors / destructors

Slider_Class::Slider_Class() : Object_Class()
{
}

Slider_Class::Slider_Class(const Object_Class &Object_To_Copy)
{
    Set_Pointer(Object_To_Copy);
}

// - - Manipulation

void Slider_Class::Create(Object_Class Parent_Object)
{
    if (Parent_Object)
    {
        Auto_Semaphore_Type Semaphore = Graphics.Take_Semaphore_Auto();
        this->LVGL_Object_Pointer = lv_slider_create(Parent_Object);
    }
}

bool Slider_Class::Is_Dragged()
{
    Auto_Semaphore_Type Semaphore = Graphics.Take_Semaphore_Auto();
    return lv_slider_is_dragged(Get_Pointer());
}

// ------------------------------------------------------------------------- //
//
//                                    Setters
//
// ------------------------------------------------------------------------- //

bool Slider_Class::Set_Pointer(lv_obj_t *LVGL_Object_Pointer)
{
    if (Get_Pointer() != NULL)
    {
        return false;
    }
    Object_Type Object(LVGL_Object_Pointer);
    if (!Object.Check_Class(&lv_slider_class))
    {
        return false;
    }
    this->LVGL_Object_Pointer = LVGL_Object_Pointer;
    return true;
}

void Slider_Class::Set_Value(int32_t Value, bool Animation)
{
    Auto_Semaphore_Type Semaphore = Graphics.Take_Semaphore_Auto();
    if (Animation)
    {
        lv_slider_set_value(Get_Pointer(), Value, LV_ANIM_ON);
    }
    else
    {
        lv_slider_set_value(Get_Pointer(), Value, LV_ANIM_OFF);
    }
}

void Slider_Class::Set_Left_Value(int32_t Value, bool Animation)
{
    Auto_Semaphore_Type Semaphore = Graphics.Take_Semaphore_Auto();
    if (Animation)
    {
        lv_slider_set_left_value(Get_Pointer(), Value, LV_ANIM_ON);
    }
    else
    {
        lv_slider_set_left_value(Get_Pointer(), Value, LV_ANIM_OFF);
    }
}

void Slider_Class::Set_Range(int32_t Minimum_Value, int32_t Maximum_Value)
{
    Auto_Semaphore_Type Semaphore = Graphics.Take_Semaphore_Auto();
    lv_slider_set_range(Get_Pointer(), Minimum_Value, Maximum_Value);
}

void Slider_Class::Set_Mode(Mode_Type Mode)
{
    Auto_Semaphore_Type Semaphore = Graphics.Take_Semaphore_Auto();
    lv_slider_set_mode(Get_Pointer(), Mode);
}

// ------------------------------------------------------------------------- //
//
//                                    Getters
//
// ------------------------------------------------------------------------- //

int32_t Slider_Class::Get_Value()
{
    Auto_Semaphore_Type Semaphore = Graphics.Take_Semaphore_Auto();
    return lv_slider_get_value(Get_Pointer());
}

int32_t Slider_Class::Get_Left_Value()
{
    Auto_Semaphore_Type Semaphore = Graphics.Take_Semaphore_Auto();
    return lv_slider_get_left_value(Get_Pointer());
}

int32_t Slider_Class::Get_Minimum_Value()
{
    Auto_Semaphore_Type Semaphore = Graphics.Take_Semaphore_Auto();
    return lv_slider_get_min_value(Get_Pointer());
}

int32_t Slider_Class::Get_Maximum_Value()
{
    Auto_Semaphore_Type Semaphore = Graphics.Take_Semaphore_Auto();
    return lv_slider_get_max_value(Get_Pointer());
}

Slider_Class::Mode_Type Slider_Class::Get_Mode()
{
    Auto_Semaphore_Type Semaphore = Graphics.Take_Semaphore_Auto();
    return lv_slider_get_mode(Get_Pointer());
}
