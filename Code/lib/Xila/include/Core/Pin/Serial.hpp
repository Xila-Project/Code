/// @file UART.hpp
/// @author Alix ANNERAUD (alix.anneraud@outlook.fr)
/// @brief
/// @version 0.1.0
/// @date 12-05-2023
///
/// @copyright Copyright (c) 2023

#ifndef Serial_Hpp_Included
#define Serial_Hpp_Included

#include "Arduino.h"
#include "../Module/Stream.hpp"

namespace Xila_Namespace
{
    namespace Pin_Types
    {
        enum class Serial_Configuration_Type
        {
            Data_5_Bits = SERIAL_5N1,
            Data_6_Bits = SERIAL_6N1,
            Data_7_Bits = SERIAL_7N1,
            Data_8_Bits = SERIAL_8N1,
            Data_5_Bits_2_Stop_Bits = SERIAL_5N2,
            Data_6_Bits_2_Stop_Bits = SERIAL_6N2,
            Data_7_Bits_2_Stop_Bits = SERIAL_7N2,
            Data_8_Bits_2_Stop_Bits = SERIAL_8N2,
            Data_5_Bits_Even_Parity = SERIAL_5E1,
            Data_6_Bits_Even_Parity = SERIAL_6E1,
            Data_7_Bits_Even_Parity = SERIAL_7E1,
            Data_8_Bits_Even_Parity = SERIAL_8E1,
            Data_5_Bits_Even_Parity_2_Stop_Bits = SERIAL_5E2,
            Data_6_Bits_Even_Parity_2_Stop_Bits = SERIAL_6E2,
            Data_7_Bits_Even_Parity_2_Stop_Bits = SERIAL_7E2,
            Data_8_Bits_Even_Parity_2_Stop_Bits = SERIAL_8E2,
            Data_5_Bits_Odd_Parity = SERIAL_5O1,
            Data_6_Bits_Odd_Parity = SERIAL_6O1,
            Data_7_Bits_Odd_Parity = SERIAL_7O1,
            Data_8_Bits_Odd_Parity = SERIAL_8O1,
            Data_5_Bits_Odd_Parity_2_Stop_Bits = SERIAL_5O2,
            Data_6_Bits_Odd_Parity_2_Stop_Bits = SERIAL_6O2,
            Data_7_Bits_Odd_Parity_2_Stop_Bits = SERIAL_7O2,
            Data_8_Bits_Odd_Parity_2_Stop_Bits = SERIAL_8O2,
        };

        enum class Serial_Mode_Type : uint8_t
        {
            Regular = MODE_UART,
            RS485_Half_Duplex = MODE_RS485_HALF_DUPLEX,
            IRDA = MODE_IRDA,
            RS485_Collision_Detect = MODE_RS485_COLLISION_DETECT,
            RS485_Custom = MODE_RS485_APP_CTRL
        };

        typedef class Serial_Class : public Xila_Namespace::Stream_Type
        {
        public:
            // - Methods
            Serial_Class() = default;

            void Begin(unsigned long Baud_Rate, Serial_Configuration_Type Configuration = Serial_Configuration_Type::Data_8_Bits, int8_t Receive_Pin = -1, int8_t Transmit_Pin = -1, bool Invert = false, unsigned long Timeout = 20000);
            void End();

            int Available() override;
            int Peek() override;
            int Read() override;
            Size_Type Read_Bytes(Byte_Type *Buffer, Size_Type Length) override;
            String_Type &Read_String(String_Type &String) override;

            int Available_For_Write() override;
            void Flush() override;
            Size_Type Write(Byte_Type Byte) override;
            Size_Type Write_Bytes(const Byte_Type *Buffer, Size_Type Length) override;
            Size_Type Write_String(const char* String) override;

            // - - Setters
            void Set_Baud_Rate(unsigned long Baud_Rate);
            Result_Type Set_Pins(int8_t Receive_Pin, int8_t Transmit_Pin, int8_t CTS_Pin = -1, int8_t RTS_Pin = -1);

            Result_Type Set_Hardware_Flow_Control(bool State, bool RTS_Enable = false, bool CTS_Enable = false, int8_t Threshold = 64);
            Result_Type Set_Mode(Serial_Mode_Type Mode);

            Result_Type Set_Receive_Buffer_Size(Size_Type Size);
            Result_Type Set_Transmit_Buffer_Size(Size_Type Size);

            void Set_Receive_Invert(bool State);

            // - - Getters

            uint32_t Get_Baud_Rate();

            // - - Operators

            operator bool() const;

        protected:
            Serial_Class(HardwareSerial &Serial);

            HardwareSerial &Serial;

            friend class Pin_Type;

        } Serial_Type;
    }
}

#endif