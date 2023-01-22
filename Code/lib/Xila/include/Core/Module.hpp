///
/// @file Modules.hpp
/// @author Alix ANNERAUD (alix.anneraud@outlook.fr)
/// @brief
/// @version 0.1.0
/// @date 20-07-2022
///
/// @copyright Copyright (c) 2022
///

#ifndef Modules_Hpp_Included
#define Modules_Hpp_Included

#include <vector>
#include "Arduino.h"
#include "ArduinoJson.h"
#include "FS.h"
#include "ArduinoTrace.h"

#include "Configuration/Configuration.hpp"
#include "Configuration/Path.hpp"

namespace Xila_Namespace
{
    typedef class Module_Class
    {

    public:
        typedef bool Boolean_Type;
        typedef short Short_Integer;
        typedef int Integer;
        typedef long Long_Integer;
        typedef long long Long_Long_Integer;

        typedef short Unsigned_Short_Integer;
        typedef int Unsigned_Integer;
        typedef long Unsigned_Long_Integer;
        typedef long long Unsigned_Long_Long_Integer;

        typedef float Float;
        typedef double Precision_Float;
        typedef char Character;
        // typedef String String;

        typedef void Void;

        typedef uint32_t Tick_Type;

        /// @brief Size Type;
        typedef size_t Size_Type;

        /// @brief Result type.
        enum class Result_Type
        {
            Success,
            Invalid_Argument,
            Error,       ///< Error event.
            Warning,     ///< Warning event.
            Information, ///< Information event.
            Question,    ///< Question event.
            None
        };

        /// @brief Time class.
        class Time_Type
        {
        private:
            uint8_t Second;
            uint8_t Minute;
            uint8_t Hour;

            uint8_t Day;
            uint8_t Month;
            uint16_t Year;

        public:
            Time_Type();
            Time_Type(uint8_t Second, uint8_t Minute, uint8_t Hour, uint8_t Day, uint8_t Month, uint16_t Year);

            void Set(uint8_t Day, uint8_t Month, uint16_t Year);
            void Set_Day(uint8_t Day);
            void Set_Month(uint8_t Month);
            void Set_Year(uint16_t Year);

            uint8_t Get_Day();
            uint8_t Get_Month();
            uint16_t Get_Year();
        };

        typedef class IP_Address_Class
        {
        public:
            IP_Address_Class();
            IP_Address_Class(uint32_t Address);
            IP_Address_Class(const uint8_t* Address, bool Is_IPv4 = true);
            IP_Address_Class(uint8_t Byte_1, uint8_t Byte_2, uint8_t Byte_3, uint8_t Byte_4);


        private:

            bool Is_IPv4;

            union {
                uint32_t Address;
                uint8_t Byte[128];
            };

        } IP_Address_Type;

        // TODO : Add all base instruction (like minimize, maximize, etc.)
        /// @brief Xila instruction type.
        typedef class Instruction_Class
        {
        private:
            Xila_Namespace::Module_Class *Sender;
            Xila_Namespace::Module_Class *Receiver;

        public:
            class Graphical_Interface_Class
            {
            private:
                uint8_t Code;
                void *Object_Pointer;

            public:
                inline Graphical_Interface_Class() : Code(0) {}
                inline Graphical_Interface_Class(uint8_t Code, void *Object_Pointer) : Code(Code), Object_Pointer(Object_Pointer) {}
                inline void Set_Code(uint32_t Code) { this->Code = Code; }
                inline void Set_Object_Pointer(void *Object_Pointer) { this->Object_Pointer = Object_Pointer; }
                inline uint32_t Get_Code() const { return Code; }
                inline void *Get_Object_Pointer() const { return Object_Pointer; }
            };

            class Software_Class
            {
            private:
                uint8_t Code;

            public:
                inline Software_Class() : Code(0) {}
                inline Software_Class(uint8_t Code) : Code(Code) {}
                inline void Set_Code(uint8_t Code) { this->Code = Code; }
                inline uint8_t Get_Code() const { return Code; }
            };

            union
            {
                Graphical_Interface_Class Graphical_Interface;
                Software_Class Software;
            };

            Instruction_Class();

            Instruction_Class(Module_Class *Sender, Module_Class *Receiver);

            Module_Class *Get_Sender() const;
            Module_Class *Get_Receiver() const;

            void Set_Sender(Module_Class *Sender);
            void Set_Receiver(Module_Class *Receiver);

        } Instruction_Type;

        /// @brief Xila task type.
        typedef class Task_Class
        {
        public:
            typedef void (*Function_Type)(void *);

            // - Types

            typedef void Task_Function(void *);

            enum class Priority_Type
            {
                Idle = 0,
                Background,
                Low,
                Normal,
                High,
                System,
                Driver
            };

            enum class State_Type
            {
                Running = eRunning,
                Ready = eReady,
                Blocked = eBlocked,
                Suspended = eSuspended,
                Deleted = eDeleted,
                Invalid = eInvalid,
            };

            // - Methods

            Task_Class(xTaskHandle Handle);
            // - Constructors / Destructors
            Task_Class(Module_Class *Owner_Module, Function_Type Task_Function, const char *Name, Size_Type Stack_Size, void *Data = NULL, Priority_Type Priority = Priority_Type::Normal);
            ~Task_Class();

            Result_Type Set_Priority(Priority_Type Priority);

            void Suspend();
            void Resume();

            State_Type Get_State();
            Priority_Type Get_Priority();

            /*
            static void Give_Notification(Task_Class& Task, unsigned int Index = 0);
            static void Give_Notification_From_ISR(Task_Class& Task, void* Data, unsigned int Index = 0);
            static void Take_Notification(Task_Class& Task);
            */

            void Delay(uint32_t Delay_In_Millisecond);
            static void Delay_Static(uint32_t Delay_In_Millisecond);
            void Delay_Until(TickType_t Time_Increment);

            void Set_Watchdog_Timeout(uint16_t Watchdog_Timeout = Default_Watchdog_Timeout);
            static void Check_Watchdogs();

        private:
            void Feed_Watchdog();

            xTaskHandle Task_Handle;

            uint32_t Watchdog_Timer;
            uint32_t Watchdog_Timeout;

            TickType_t Previous_Wake_Time;

            Module_Class *Owner_Module;

            static std::vector<Task_Class *> List; // - Task lists.

        } Task_Type;

        /// @brief Xila Semaphore type.
        typedef class Semaphore_Class
        {
        public:
            typedef enum
            {
                Binary,
                Counting,
                Mutex,
                Recursive_Mutex
            } Type_Type;

            Semaphore_Class();

            Result_Type Create(Type_Type Type, unsigned int Initial_Count, unsigned int Maximum_Count);
            // Event_Type Create_Static()

            void Delete();
            Result_Type Take(uint32_t Timeout = 0xFFFFFFFF);
            void Take_Recursive(Tick_Type Tick_To_Wait);
            void Give();
            void Take_From_ISR(Integer *Higher_Priority_Task_Woken);
            void Give_From_ISR(Integer *Higher_Priority_Task_Woken);
            void Take_Recursive();
            void Give_Recursive();
            // Task_Type Get_Mutex_Holder();
            unsigned int Get_Count();

        private:
            SemaphoreHandle_t Semaphore_Handle;
        } Semaphore_Type;

        /*typedef class Queue_Class
        {
        public:
            Queue_Class();
            ~Queue_Class();

            Result_Type Create(Size_Type Length, Size_Type Item_Size);
            Result_Type Create_Static(Size_Type Length, Size_Type Item_Size);

            void Delete();
            void Reset();

            Result_Type Send(const void *Item, Tick_Type Ticks_To_Wait, bool Send_To_Front = true);
            void Overwrite(const void *Buffer);
            Result_Type Peek(void *Buffer, Tick_Type Ticks_To_Wait);
            Result_Type Receive(void *Buffer, Tick_Type Ticks_To_Wait);

            uint16_t Waiting();

            Size_Type Spaces_Available();

        private:
            QueueHandle_t Queue_Handle;
        } Queue_Type;*/

        // - Methods

        Module_Class(Size_Type Queue_Size = Default_Instruction_Queue_Size);
        ~Module_Class();

        void Send_Instruction(const Instruction_Type &Instruction);

        Instruction_Type Get_Instruction();
        Size_Type Instruction_Available();

    private:
        QueueHandle_t Instruction_Queue_Handle;

        static std::vector<Module_Class *> List; // - Module lists.

    } Module_Type;

#define Instruction_Macro()

}

#endif
