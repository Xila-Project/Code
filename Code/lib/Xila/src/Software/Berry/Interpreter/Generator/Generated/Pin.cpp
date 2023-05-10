// This file is automatically generated by the Generate.py script.
#include "Software/Berry/Berry.hpp"
extern "C"
{
#include "be_constobj.h"
#include "be_mapping.h"
}
using namespace Xila_Namespace;
using namespace Pin_Types;

// - Functions
void Berry_Pin_Class_Set_Mode_FB938C4D_7DC8_4826_B83A_43FB7BE262D5(int A_0, int A_1)
{
return Pin.Set_Mode((unsigned char)A_0, (Mode_Type)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Set_Mode_FB938C4D_7DC8_4826_B83A_43FB7BE262D5, "", "ii");


int Berry_Pin_Class_Valid_Output_Pin_15B59AC8_14AC_4BBA_8092_6EF475442008(int A_0)
{
return (int)Pin.Valid_Output_Pin((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Valid_Output_Pin_15B59AC8_14AC_4BBA_8092_6EF475442008, "i", "i");


void Berry_Pin_Class_Digital_Write_1D4B6CAC_2582_47E2_AAFA_55AD59D560D7(int A_0, int A_1)
{
return Pin.Digital_Write((unsigned char)A_0, (Digital_State_Type)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Digital_Write_1D4B6CAC_2582_47E2_AAFA_55AD59D560D7, "", "ii");


int Berry_Pin_Class_Digital_Read_4750A6AD_5BDF_496F_9601_88DE8B880245(int A_0)
{
return (int)Pin.Digital_Read((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Digital_Read_4750A6AD_5BDF_496F_9601_88DE8B880245, "i", "i");


int Berry_Pin_Class_Valid_Digital_Pin_E92F8826_FBAA_4BB1_86C8_BAF89405E017(int A_0)
{
return (int)Pin.Valid_Digital_Pin((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Valid_Digital_Pin_E92F8826_FBAA_4BB1_86C8_BAF89405E017, "i", "i");


int Berry_Pin_Class_Analog_Read_6F92B8DF_F279_43AE_ADED_024077F0BE36(int A_0)
{
return (int)Pin.Analog_Read((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Analog_Read_6F92B8DF_F279_43AE_ADED_024077F0BE36, "i", "i");


int Berry_Pin_Class_Analog_Read_Milli_Volts_EB302342_4745_4EDD_8BBC_356ABBB3A88B(int A_0)
{
return (int)Pin.Analog_Read_Milli_Volts((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Analog_Read_Milli_Volts_EB302342_4745_4EDD_8BBC_356ABBB3A88B, "i", "i");


void Berry_Pin_Class_Set_Voltage_Reference_Pin_A1F0CA61_C65E_44F3_8B81_738CE90309F5(int A_0)
{
return Pin.Set_Voltage_Reference_Pin((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Set_Voltage_Reference_Pin_A1F0CA61_C65E_44F3_8B81_738CE90309F5, "", "i");


void Berry_Pin_Class_Set_Read_Resolutions_DC75BB3D_5CBB_4602_92FC_D29D0459C711(int A_0)
{
return Pin.Set_Read_Resolutions((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Set_Read_Resolutions_DC75BB3D_5CBB_4602_92FC_D29D0459C711, "", "i");


void Berry_Pin_Class_Set_Width_52C3E0A4_79CA_4F20_A0FA_BC1E9CC62A8A(int A_0)
{
return Pin.Set_Width((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Set_Width_52C3E0A4_79CA_4F20_A0FA_BC1E9CC62A8A, "", "i");


void Berry_Pin_Class_Set_Clock_Divider_9B22A638_4C9C_4E6A_B53F_547371D6A5F6(int A_0)
{
return Pin.Set_Clock_Divider((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Set_Clock_Divider_9B22A638_4C9C_4E6A_B53F_547371D6A5F6, "", "i");


void Berry_Pin_Class_Set_Attenuation_A416D4A5_B0AB_4EEB_9661_61D9FD1440C8(int A_0)
{
return Pin.Set_Attenuation((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Set_Attenuation_A416D4A5_B0AB_4EEB_9661_61D9FD1440C8, "", "i");


void Berry_Pin_Class_Set_Attenuation_110A08B9_D952_477B_AF5D_3EDA66B9D235(int A_0, int A_1)
{
return Pin.Set_Attenuation((unsigned char)A_0, (unsigned char)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Set_Attenuation_110A08B9_D952_477B_AF5D_3EDA66B9D235, "", "ii");




void Berry_Pin_Class_Detach_Interrupt_69F2197D_B8FD_4625_BC0B_7922E357A985(int A_0)
{
return Pin.Detach_Interrupt((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Detach_Interrupt_69F2197D_B8FD_4625_BC0B_7922E357A985, "", "i");


void* Berry_Pin_Class_Get_Pointer()
{
	return &Pin;
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Get_Pointer, "Module_Type", "")

// - Berry declaration
/* @const_object_info_begin
module Pin (scope:global)
{
	Set_Mode, ctype_func(Berry_Pin_Class_Set_Mode_FB938C4D_7DC8_4826_B83A_43FB7BE262D5)
	Valid_Output_Pin, ctype_func(Berry_Pin_Class_Valid_Output_Pin_15B59AC8_14AC_4BBA_8092_6EF475442008)
	Digital_Write, ctype_func(Berry_Pin_Class_Digital_Write_1D4B6CAC_2582_47E2_AAFA_55AD59D560D7)
	Digital_Read, ctype_func(Berry_Pin_Class_Digital_Read_4750A6AD_5BDF_496F_9601_88DE8B880245)
	Valid_Digital_Pin, ctype_func(Berry_Pin_Class_Valid_Digital_Pin_E92F8826_FBAA_4BB1_86C8_BAF89405E017)
	Analog_Read, ctype_func(Berry_Pin_Class_Analog_Read_6F92B8DF_F279_43AE_ADED_024077F0BE36)
	Analog_Read_Milli_Volts, ctype_func(Berry_Pin_Class_Analog_Read_Milli_Volts_EB302342_4745_4EDD_8BBC_356ABBB3A88B)
	Set_Voltage_Reference_Pin, ctype_func(Berry_Pin_Class_Set_Voltage_Reference_Pin_A1F0CA61_C65E_44F3_8B81_738CE90309F5)
	Set_Read_Resolutions, ctype_func(Berry_Pin_Class_Set_Read_Resolutions_DC75BB3D_5CBB_4602_92FC_D29D0459C711)
	Set_Width, ctype_func(Berry_Pin_Class_Set_Width_52C3E0A4_79CA_4F20_A0FA_BC1E9CC62A8A)
	Set_Clock_Divider, ctype_func(Berry_Pin_Class_Set_Clock_Divider_9B22A638_4C9C_4E6A_B53F_547371D6A5F6)
	Set_Attenuation, ctype_func(Berry_Pin_Class_Set_Attenuation_A416D4A5_B0AB_4EEB_9661_61D9FD1440C8)
	Set_Attenuation, ctype_func(Berry_Pin_Class_Set_Attenuation_110A08B9_D952_477B_AF5D_3EDA66B9D235)
	Detach_Interrupt, ctype_func(Berry_Pin_Class_Detach_Interrupt_69F2197D_B8FD_4625_BC0B_7922E357A985)
	Get_Pointer, ctype_func(Berry_Pin_Class_Get_Pointer)

	Digital_State_Low, int(0)
	Digital_State_High, int(1)

	Mode_Input, int(0)
	Mode_Output, int(1)
	Mode_Pull_Up, int(2)
	Mode_Input_Pull_Up, int(3)
	Mode_Pull_Down, int(4)
	Mode_Input_Pull_Down, int(5)
	Mode_Open_Drain, int(6)
	Mode_Output_Open_Drain, int(7)
	Mode_Analog, int(8)

	Interrupt_Mode_Disabled, int(0)
	Interrupt_Mode_Rising, int(1)
	Interrupt_Mode_Falling, int(2)
	Interrupt_Mode_Change, int(3)
	Interrupt_Mode_On_Low, int(4)
	Interrupt_Mode_On_High, int(5)
	Interrupt_Mode_On_Low_WE, int(6)
	Interrupt_Mode_On_High_WE, int(7)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Pin.h"
}