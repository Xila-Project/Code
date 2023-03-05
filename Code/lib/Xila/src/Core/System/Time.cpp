///
 /// @file Time.cpp
 /// @author Alix ANNERAUD (alix@anneraud.fr)
 /// @brief 
 /// @version 0.1.0
 /// @date 04-03-2023
 /// 
 /// @copyright Copyright (c) 2023
 /// 

#ifndef Defaut_Daylight_Offset
    #define Defaut_Daylight_Offset 0
#endif
#ifndef Defaut_UTC_Offset
    #define Defaut_UTC_Offset 0
#endif
#ifndef Default_NTP_Server
    #define Default_NTP_Server "pool.ntp.org"
#endif

 #include "Core/System/System.hpp"

using namespace Xila_Namespace;


// - Methods

// - - Getters

Time_Type System_Class::Get_Time()
{
  struct tm Time_Info;
  if (!getLocalTime(&Time_Info))
  {
    return Time_Type();
  }
  return Time_Type(Time_Info.tm_hour, Time_Info.tm_min, Time_Info.tm_sec, 0);
}

Date_Type System_Class::Get_Date()
{
  struct tm Time_Info;
  if (!getLocalTime(&Time_Info))
  {
    return Date_Type();
  }
  return Date_Type(Time_Info.tm_year + 1900, Time_Info.tm_mon + 1, Time_Info.tm_mday);
}

Time_Type System_Class::Get_Up_Time()
{
  uint32_t Up_Time = millis();
  return Time_Type(Up_Time / 3600000, (Up_Time % 3600000) / 60000, (Up_Time % 60000) / 1000, (Up_Time % 1000) * 1000);
}

uint64_t System_Class::Get_Up_Time_Microseconds()
{
  return micros();
}

uint32_t System_Class::Get_Up_Time_Milliseconds()
{
  return millis();
}

uint32_t System_Class::Get_Cycles_Count()
{
  return cpu_hal_get_cycle_count();
}

uint32_t System_Class::Get_UTC_Offset()
{
  return UTC_Offset;
}

uint16_t System_Class::Get_Daylight_Offset()
{
  return Daylight_Offset;
}

void System_Class::Get_NTP_Server(String_Type &NTP_Server)
{
  NTP_Server = this->NTP_Server;
}

// - - Setters

void System_Class::Set_Time_Zone(uint32_t UTC_Offset, uint16_t Daylight_Offset)
{
  this->UTC_Offset = UTC_Offset;
  this->Daylight_Offset = Daylight_Offset;
  configTime(this->UTC_Offset, this->Daylight_Offset, this->NTP_Server);
}

void System_Class::Set_NTP_Server(const String_Type &NTP_Server)
{
  this->NTP_Server = NTP_Server;
  configTime(this->UTC_Offset, this->Daylight_Offset, this->NTP_Server);
}