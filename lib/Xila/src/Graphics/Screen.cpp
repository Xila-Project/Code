/// @file Screen.cpp
/// @author Alix ANNERAUD (alix@anneraud.fr)
/// @brief
/// @version 0.1.0
/// @date 30-03-2023
///
/// @copyright Copyright (c) 2023

#include "Graphics/Screen.hpp"
#include "Graphics/Graphics.hpp"
#include "Software/Software.hpp"
#include "Log/Log.hpp"

using namespace Xila_Namespace;
using namespace Xila_Namespace::Graphics_Types;

// - Attributes

std::list<Screen_Class *> Screen_Class::List;

const Class_Type Screen_Class::Class = {
    .base_class = &lv_obj_class,
    .constructor_cb = lv_obj_class.constructor_cb,
    .destructor_cb = lv_obj_class.destructor_cb,
    .event_cb = lv_obj_class.event_cb,
    .width_def = lv_obj_class.width_def,
    .height_def = lv_obj_class.height_def,
    .editable = lv_obj_class.editable,
    .group_def = lv_obj_class.group_def,
    .instance_size = sizeof(lv_obj_t),
};

// - Methods

// - - Constructors / destructors

Screen_Class::Screen_Class() : Object_Class()
{
}

Screen_Class::Screen_Class(const Softwares_Types::Software_Type *Owner_Software)
{
    this->Create(Owner_Software);
}

Screen_Class::Screen_Class(const Object_Class &Object_To_Copy)
{
    if (Set_Pointer(Object_To_Copy))
        this->Set_User_Data(Object_To_Copy.Get_User_Data());
}

// - - Manipulation

void Screen_Class::Create(const Softwares_Types::Software_Type *Owner_Software)
{
    if (!Owner_Software)
        return;

    {

        Auto_Semaphore_Type Semaphore = Graphics.Take_Semaphore_Auto();

        this->LVGL_Object_Pointer = lv_obj_create(NULL);

        if (!this->LVGL_Object_Pointer)
            return;

        this->LVGL_Object_Pointer->class_p = &Screen_Class::Class;
    }

    this->Set_User_Data(const_cast<Softwares_Types::Software_Type *>(Owner_Software));

    this->List.push_back(this);

    this->Add_Event(const_cast<Softwares_Types::Software_Type *>(Owner_Software), Event_Code_Type::Child_Changed);
}

void Screen_Class::Delete(bool Asynchronous)
{
    if (!this->Is_Valid())
        return;

    {
        Auto_Semaphore_Class Semaphore = Graphics.Take_Semaphore_Auto();
        if (Asynchronous)
            lv_obj_del_async(Get_Pointer());
        else
            lv_obj_del(Get_Pointer());    
    }

    this->List.remove(this);
}

void Screen_Class::Load()
{
    if (this->Is_Valid())
        lv_scr_load(Get_Pointer());
}

bool Screen_Class::Set_Pointer(lv_obj_t *LVGL_Object_Pointer)
{
    if (Get_Pointer() != NULL)
        return false;

    Object_Type Object(LVGL_Object_Pointer);

    if (!Object.Check_Class(&Screen_Class::Class))
        return false;

    this->LVGL_Object_Pointer = LVGL_Object_Pointer;
    return true;
}

Screen_Type Screen_Class::Get_Active()
{
    Auto_Semaphore_Type Semaphore = Graphics.Take_Semaphore_Auto();
    return Object_Type(lv_scr_act());
}

Screen_Type Screen_Class::Get_User_Screen(const Accounts_Types::User_Type *User)
{
    if (User == NULL)
        return Screen_Type();

    Softwares_Types::Software_Type *Owner_Software;

    for (auto &Screen : List)
    {
        Owner_Software = static_cast<Softwares_Types::Software_Type *>(Screen->Get_User_Data());

        if (Owner_Software != NULL && Owner_Software->Get_Owner_User() == User)
            return *Screen;
    }

    return Screen_Type();
}