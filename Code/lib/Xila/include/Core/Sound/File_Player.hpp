/// @file Player.hpp
/// @author Alix ANNERAUD (alix@anneraud.fr)
/// @brief
/// @version 0.1.0
/// @date 28-04-2023
///
/// @copyright Copyright (c) 2023

#ifndef Player_Hpp_Included
#define Player_Hpp_Included

#include "../Drive/Drive.hpp"
#include "../Module/Module.hpp"

#include "Core/Module/Stream.hpp"
#include "Stream.hpp"
#include "Decoder.hpp"


namespace Xila_Namespace
{
    namespace Sound_Types
    {

        using Encoded_Stream_Type = EncodedAudioStream;                 
        using Stream_Copier_Type = StreamCopy;

        typedef class File_Player_Class : public Stream_Type
        {
        public:
            // - Methods
            // - - Constructors / Destructor
            File_Player_Class(Sound_Types::Stream_Type& Output_Stream, Drive_Types::File_Type &Input_File, Decoder_Type &Decoder);


            // - - Operations

            Result_Type Begin() override;

            void Stop();

            Size_Type Loop();

            // - - Getters

            /// @brief Get the player current time.
            /// @return Time_Type Current time in seconds.
            uint32_t Get_Time();

            uint32_t Get_Total_Time();

            /// @brief Get the sample rate of the current playing file.
            /// @note At least one sample have to be played to get the sample rate.
            /// @return uint32_t Sample rate.
            int Get_Sample_Rate();

            /// @brief Get the bits per sample of the current playing file.
            /// @note At least one sample have to be played to get the bits per sample.
            /// @return Byte_Type Bits per sample.
            int Get_Bits_Per_Sample();

            /// @brief Get the number of channels of the current playing file.
            /// @note At least one sample have to be played to get the number of channels.
            /// @return Byte_Type Number of channels.
            int Get_Channels();

            // - - Setters

            /// @brief Set the player time.
            /// @param Time Time in seconds.
            void Set_Time(uint32_t Time);

            /// @brief Set the player time.
            /// @param Time Time
            void Set_Time(Time_Type Time);

            void Set_Input_File(Drive_Types::File_Type &Input_Stream);

            void Set_Output_Stream(Sound_Types::Stream_Type& Output_Stream);

        private:
            Decoder_Type& Decoder;
            Drive_Types::File_Type Input_File;
            Encoded_Stream_Type Encoded_Stream;
            Stream_Copier_Type Stream_Copier;

        } File_Player_Type;

    }
}

#endif