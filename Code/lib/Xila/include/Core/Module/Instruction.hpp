///
/// @file Instruction.hpp
/// @author Alix ANNERAUD (alix@anneraud.fr)
/// @brief
/// @version 0.1.0
/// @date 25-02-2023
///
/// @copyright Copyright (c) 2023
///

#ifndef Instruction_Hpp_Included
#define Instruction_Hpp_Included

#include "Arduino.h"
#include "Base_Types.hpp"

namespace Xila_Namespace
{

    // - Forward declarations

    class Module_Class;

    class Object_Class;
    typedef Object_Class Object_Type;
    namespace Graphics_Types
    {
        enum class Event_Code_Type : uint8_t;
    };

    namespace Softwares_Types
    {
        enum class Event_Code_Type : uint8_t;
    };

    /// @brief Xila instruction type.
    typedef class Instruction_Class
    {
    public:
        // - Types

        /// @brief Graphics instruction arguments.
        typedef class Graphics_Class
        {
        private:
            // - Attributes
            Graphics_Types::Event_Code_Type Code;

            void *Object_Pointer;

        public:
            // - Methods
            // - - Constructor
            Graphics_Class();
            // - - Setters
            void Set_Code(Graphics_Types::Event_Code_Type Code);
            void Set_Object(Object_Type Object);
            // - - Getters
            Graphics_Types::Event_Code_Type Get_Code() const;
            Object_Type Get_Object() const;

        } Graphics_Type;

        /// @brief Software instruction arguments.
        typedef class Softwares_Class
        {
        public:
            // - Methods
            // - - Constructors
            inline Softwares_Class() {}
            inline Softwares_Class(Softwares_Types::Event_Code_Type Code) : Code(Code) {}
            // - - Setter
            inline void Set_Code(Softwares_Types::Event_Code_Type Code) { this->Code = Code; }
            // - - Getter
            inline Softwares_Types::Event_Code_Type Get_Code() const { return Code; }

        private:
            // - Attributes
            Softwares_Types::Event_Code_Type Code;
        } Softwares_Type;

        /// @brief Custom instruction arguments.
        typedef class Custom_Class
        {
        public:
            inline Custom_Class() : Code(0) {}
            inline Custom_Class(uint8_t Code) : Code(Code) {}
            // - - Setter
            inline void Set_Code(uint16_t Code) { this->Code = Code; }
            inline void Set_Data(void *Data) { this->Data = Data; }
            // - - Getter
            inline uint16_t Get_Code() const { return Code; }
            inline void *Get_Data() const { return Data; }

        private:
            // - Attributes
            uint16_t Code;
            void *Data;
        } Custom_Type;

        // - Arguments anonymous union.
        union
        {
            Graphics_Type Graphics;
            Softwares_Type Softwares;
            Custom_Type Custom;
        };

        // - Methods

        // - - Constructors
        Instruction_Class();
        Instruction_Class(Module_Class *Sender, Module_Class *Receiver);

        // - - Getters
        Module_Class *Get_Sender() const;
        Module_Class *Get_Receiver() const;

        // - - Setters
        void Set_Sender(Module_Class *Sender);
        void Set_Receiver(Module_Class *Receiver);

    private:
        // - Attributes
        Xila_Namespace::Module_Class *Sender;
        Xila_Namespace::Module_Class *Receiver;

    } Instruction_Type;
}

#endif