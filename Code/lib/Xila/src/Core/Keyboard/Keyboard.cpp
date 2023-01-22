///
/// @file Keyboard.cpp
/// @author Alix ANNERAUD (alix.anneraud@outlook.fr)
/// @brief
/// @version 0.1
/// @date 11-07-2021
///
/// @copyright Copyright (c) 2021
///

#if Keyboard_Hardware == Keyboard_Hardware_PS2


#include "Core/Core.hpp"


using namespace Xila_Namespace::Input;

#include <PS2Keyboard.h>

PS2Keyboard PS2_Keyboard();

///
/// @brief Construct a new Keyboard_Class::Keyboard_Class object
///
Keyboard_Class::Keyboard_Class()
    : Layout(Default_Keyboard_Layout),
      Data_Pin(Default_Keyboard_Data_Pin),
      Clock_Pin(Default_Keyboard_Clock_Pin)
{
}

///
/// @brief Load keyboard registry.
///
/// @return Result_Type
Keyboard_Class::Result_Type Keyboard_Class::Load_Registry()
{
    using namespace Xila;

    File Temporary_File = Drive.Open(Registry("Keyboard"));
    DynamicJsonDocument Keyboard_Registry(512);
    if (deserializeJson(Keyboard_Registry, Temporary_File) != DeserializationError::Ok)
    {
        Temporary_File.close();
        return Result_Type::Error;
    }
    Temporary_File.close();
    if (strcmp("Keyboard", Keyboard_Registry["Registry"] | "") != 0)
    {
        return Result_Type::Error;
    }
    Data_Pin = Keyboard_Registry["Data Pin"] | Default_Keyboard_Data_Pin;
    Clock_Pin = Keyboard_Registry["Clock Pin"] | Default_Keyboard_Clock_Pin;
    Layout = Keyboard_Registry["Layout"] | Default_Keyboard_Layout;

    Begin();
    return Result_Type::Success;
}

///
/// @brief Save keyboard registry.
///
/// @return Result_Type
Keyboard_Class::Result_Type Keyboard_Class::Save_Registry()
{
    using namespace Xila;

    File Temporary_File = Drive.Open(Registry("Keyboard"), FILE_WRITE);
    DynamicJsonDocument Keyboard_Registry(512);
    Keyboard_Registry["Registry"] = "Keyboard";
    Keyboard_Registry["Data Pin"] = Data_Pin;
    Keyboard_Registry["Clock Pin"] = Clock_Pin;
    Keyboard_Registry["Layout"] = Layout;
    if (serializeJson(Keyboard_Registry, Temporary_File) == 0)
    {
        Temporary_File.close();
        return Result_Type::Error;
    }
    Temporary_File.close();
    return Result_Type::Success;
}

///
/// @brief Initialize the communication with the keyboard.
///
void Keyboard_Class::Begin()
{
    switch (Layout)
    {
    case American:
        PS2Keyboard::begin(Data_Pin, Clock_Pin, PS2Keymap_US);
        break;
    case German:
        PS2Keyboard::begin(Data_Pin, Clock_Pin, PS2Keymap_German);
        break;
    case French:
        PS2Keyboard::begin(Data_Pin, Clock_Pin, PS2Keymap_French);
        break;
    case Spanish:
        PS2Keyboard::begin(Data_Pin, Clock_Pin, PS2Keymap_Spanish);
        break;
    case Italian:
        PS2Keyboard::begin(Data_Pin, Clock_Pin, PS2Keymap_Italian);
        break;
    case English:
        PS2Keyboard::begin(Data_Pin, Clock_Pin, PS2Keymap_UK);
        break;
    }
}

///
/// @brief Read character from the keyboard.
///
/// @return unsigned char Input character.
unsigned char Keyboard_Class::Read()
{
    return PS2Keyboard::read();
}

///
/// @brief Check if any character is availble.
///
/// @return uint8_t The amount of character available in the buffer.
uint8_t Keyboard_Class::Available()
{
    return PS2Keyboard::available();
}

///
/// @brief Read character from the keyboard.
///
/// @return uint8_t The amount of character available in the buffer.
uint8_t Keyboard_Class::Read_Raw()
{
    return PS2Keyboard::readScanCode();
}

///
/// @brief Clear the character buffer.
///
void Keyboard_Class::Clear()
{
    PS2Keyboard::clear();
}

#endif