/// @file File.cpp
/// @author Alix ANNERAUD (alix.anneraud@outlook.fr)
/// @brief
/// @version 0.1.0
/// @date 09-02-2023
///
/// @copyright Copyright (c) 2023

#include "Drive/Drive.hpp"
#include "System/System.hpp"

using namespace Xila_Namespace;
using namespace Drive_Types;

File_Class::File_Class()
{
}

File_Class::File_Class(fs::File File) : File(File)
{
}

size_t File_Class::write(uint8_t Data)
{
    return File.write(Data);
}

size_t File_Class::write(const uint8_t *Buffer, size_t Size)
{
    return File.write(Buffer, Size);
}

int File_Class::available()
{
    return File.available();
}

int File_Class::read()
{
    return File.read();
}

int File_Class::peek()
{
    return File.peek();
}

void File_Class::flush()
{
    File.flush();
}

size_t File_Class::readBytes(char *Buffer, size_t Length)
{
    return File.readBytes(Buffer, Length);
}

Size_Type File_Class::Write(uint8_t Data)
{
    return File.write(Data);
}

Size_Type File_Class::Write(const uint8_t *Buffer, Size_Type Size)
{
    return File.write(Buffer, Size);
}

int File_Class::Available()
{
    return File.available();
}

int File_Class::Read()
{
    return File.read();
}

int File_Class::Peek()
{
    return File.peek();
}

void File_Class::Flush()
{
    File.flush();
}

Size_Type File_Class::Read_String(char *Buffer, Size_Type Size)
{
    return File.readBytes(Buffer, Size);
}

Size_Type File_Class::Read_Bytes(uint8_t *Buffer, Size_Type Length)
{
    return File.read(Buffer, Length);
}

bool File_Class::Seek(uint32_t Position, Seek_Mode_Type Mode)
{
    return File.seek(Position, (SeekMode)Mode);
}

bool File_Class::Seek(uint32_t Position)
{
    return File.seek(Position);
}

Size_Type File_Class::Get_Position() const
{
    return File.position();
}

Size_Type File_Class::Get_Size() const
{
    return File.size();
}

Result_Type File_Class::Set_Buffer_Size(Size_Type Size)
{
    if (File.setBufferSize(Size))
    {
        return Result_Type::Success;
    }
    return Result_Type::Error;
}

Result_Type File_Class::Copy(File_Class &Destination_File)
{
    uint8_t Buffer[256];

    // - Check if the file is valid
    if (!this->Is_Valid() || !Destination_File || this->Is_Directory() || Destination_File.Is_Directory())
        return Result_Type::Error;

    auto Next_Pause = System.Get_Up_Time_Milliseconds() + 100;

    this->Seek(0);
    Destination_File.Seek(0);

    while (this->Available() > 0)
    {
        Size_Type Read_Bytes = this->Read_Bytes(Buffer, sizeof(Buffer));
        Destination_File.write(Buffer, Read_Bytes);

        if (System.Get_Up_Time_Milliseconds() > Next_Pause)
        {
            Task_Type::Delay_Static(10); // Let the system breath.
            Next_Pause = System.Get_Up_Time_Milliseconds() + 100;
        }
    }
    return Result_Type::Success;
}

Result_Type File_Class::Cut(File_Class &Destination_File)
{
    if (this->Copy(Destination_File) == Result_Type::Success)
    {
        Drive.Remove(this->Get_Path());
        this->Close();
        
        return Result_Type::Success;
    }
    return Result_Type::Error;
}

void File_Class::Close()
{
    File.close();
}

time_t File_Class::Get_Modification_Time()
{
    return File.getLastWrite();
}

const char *File_Class::Get_Name() const
{
    return File.name();
}

const char *File_Class::Get_Path() const
{
    return File.path();
}

const char *File_Class::Get_Extension() const
{
    char *Extension = strrchr(Get_Name(), '.');
    if (Extension != NULL)
        return Extension;
    return "";
}

bool File_Class::Is_Valid() const
{
    return File;
}

File_Class::operator bool() const
{
    return Is_Valid();
}

bool File_Class::Is_Directory()
{
    return File.isDirectory();
}

File_Class File_Class::Open_Next_File(bool Write, bool Apprend)
{
    if (Write)
    {
        if (Apprend)
        {
            return File_Class(File.openNextFile(FILE_APPEND));
        }
        return File_Class(File.openNextFile(FILE_WRITE));
    }
    return File_Class(File.openNextFile(FILE_READ));
}

void File_Class::Rewind_Directory()
{
    File.rewindDirectory();
}

Size_Type File_Class::Get_Items_Count()
{
    if (!Is_Valid() || !Is_Directory())
    {
        return 0;
    }

    Rewind_Directory();
    Drive_Types::File_Type Temporary_File = Open_Next_File();
    Size_Type Count = 0;
    
    while (Temporary_File)
    {
        Count++;

        Temporary_File.Close();
        Temporary_File = Open_Next_File();
    }
    
    return Count;
}