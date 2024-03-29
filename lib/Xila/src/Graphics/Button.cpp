///
/// @file Button.cpp
/// @author Alix ANNERAUD (alix.anneraud@outlook.fr)
/// @brief
/// @version 0.1.0
/// @date 08-07-2022
///
/// @copyright Copyright (c) 2022
///

#include "Graphics/Button.hpp"
#include "Graphics/Graphics.hpp"

using namespace Xila_Namespace;
using namespace Xila_Namespace::Graphics_Types;

// - Methods

const Class_Type &Button_Class::Class = lv_btn_class;

// - Methods

// - - Constructors / destructors

Button_Class::Button_Class() : Object_Class()
{
}

Button_Class::Button_Class(const Object_Class &Object_To_Copy)
{
    Set_Pointer(Object_To_Copy);
}

// - - Manipulation

void Button_Class::Create(Object_Class Parent_Object)
{
    if (Parent_Object)
    {
        Auto_Semaphore_Type Auto_Semaphore = Graphics.Take_Semaphore_Auto();
        this->LVGL_Object_Pointer = lv_btn_create(Parent_Object);
    }
}


void Button_Class::Create(Object_Class Parent_Object, const char*Label_Text, Coordinate_Type Width, Coordinate_Type Height, Module_Type *Module, Graphics_Types::Event_Code_Type Event_Code)
{
    if (Parent_Object)
    {
        this->Create(Parent_Object);
        if (Width != 0)
            this->Set_Width(Width);

        if (Height != 0)
            this->Set_Height(Height);

        if (Module != NULL)
            this->Add_Event(Module, Event_Code);
        
        if (Label_Text != "")
        {
            Label_Type Label;
            Label.Create(*this, Label_Text, true);
            Label.Set_Alignment(Alignment_Type::Center);
        }
    }
}

// - - Setters

bool Button_Class::Set_Pointer(lv_obj_t *LVGL_Object_Pointer)
{
    if (Get_Pointer() != NULL)
    {
        return false;
    }
    Object_Type Object(LVGL_Object_Pointer);
    if (!Object.Check_Class(&lv_btn_class))
    {
        return false;
    }
    this->LVGL_Object_Pointer = LVGL_Object_Pointer;
    return true;
}