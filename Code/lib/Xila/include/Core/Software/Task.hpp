///
 /// @file Task.hpp
 /// @author Alix ANNERAUD (alix.anneraud@outlook.fr)
 /// @brief 
 /// @version 0.1
 /// @date 29-03-2021
 /// 
 /// @copyright Copyright (c) 2021
 /// 

#ifndef Task_Hpp_Included
#define TASK_HPP_INCLUDED

#include "Arduino.h"
#include "Configuration.hpp"

class Task_Class
{
public:

  typedef enum Priority_Enumeration
  {
    Background = tskIDLE
    Low = tskIDLE_PRIORITY + 2 + 3,
    Normal = tskIDLE_PRIORITY + 2 + 2,
    High = Software,
  } Priority_Type;

  Task_Class();

  Event_Type Create(Task_Function (*Task_Function)(void*), const char* Task_Name, size_t Stack_Size, Priority_Type Priority = Normal);

  Event_Type Set_Priority(Priority_Type Priority);
  void Suspend();
  void Resume();
  void Delete();
  
  static void Delay(uint32_t Delay_In_Millisecond);
  static void Delay_Until(TickType_t* Previous_Wake_Time, const TickType_t Time_Increment);

private:

  xTaskHandle Task_Handle;
  Software* Software_Pointer;
};



 #endif