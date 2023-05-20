// This file is automatically generated by the Generate.py script.
#include "Software/Berry/Berry.hpp"
extern "C"
{
#include "be_constobj.h"
#include "be_mapping.h"
}
using namespace Xila_Namespace;
using namespace System_Types;

// - Functions
const char* Berry_System_Class_Get_Device_Name_21E88A58_D1DD_4A34_A003_A89DA35DD8D9(bvm* V)
{
String_Type S_0;
S_0.Set_Buffer((char*)Berry_Class::Get_Instance(V)->Buffer, sizeof(Berry_Class::Buffer));
System.Get_Device_Name(S_0); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Device_Name_21E88A58_D1DD_4A34_A003_A89DA35DD8D9, "s", "@");


void * Berry_System_Class_Get_eFuse_MAC_F4F38BF3_63CE_41E2_8CEC_4D38E6D121B4(bvm* V)
{
int64_t* R = (int64_t*) be_malloc(V, sizeof(int64_t));
 *R = System.Get_eFuse_MAC(); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_eFuse_MAC_F4F38BF3_63CE_41E2_8CEC_4D38E6D121B4, "Long_Integer_Type", "@");


int Berry_System_Class_Get_Chip_Revision_FBCE2FF8_AAE5_47E5_8402_0D05A80CFA98()
{
return (int)System.Get_Chip_Revision(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Chip_Revision_FBCE2FF8_AAE5_47E5_8402_0D05A80CFA98, "i", "");


const char* Berry_System_Class_Get_Chip_Model_5AB514F5_1644_4B6A_96EE_A532BDAD8D83()
{
return System.Get_Chip_Model(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Chip_Model_5AB514F5_1644_4B6A_96EE_A532BDAD8D83, "s", "");


int Berry_System_Class_Get_Chip_Cores_41BBC027_E158_49BC_948F_6B8B54919508()
{
return (int)System.Get_Chip_Cores(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Chip_Cores_41BBC027_E158_49BC_948F_6B8B54919508, "i", "");


int Berry_System_Class_Get_CPU_Frequency_E5773E6D_BE04_473E_9835_934914AB4AD0()
{
return (int)System.Get_CPU_Frequency(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_CPU_Frequency_E5773E6D_BE04_473E_9835_934914AB4AD0, "i", "");


void Berry_System_Class_Set_Device_Name_5D9C3CEA_957A_4CA5_BCF0_9EB69CA38E43(const char* A_0)
{
return System.Set_Device_Name(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Set_Device_Name_5D9C3CEA_957A_4CA5_BCF0_9EB69CA38E43, "", "s");


void * Berry_System_Class_Get_Time_A26C9DE5_B582_48F6_9A4B_481069EA6AB6(bvm* V)
{
Xila_Namespace::Time_Class* R = (Xila_Namespace::Time_Class*) be_malloc(V, sizeof(Xila_Namespace::Time_Class));
 *R = System.Get_Time(); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Time_A26C9DE5_B582_48F6_9A4B_481069EA6AB6, "Time_Type", "@");


void * Berry_System_Class_Get_Date_B29C46DD_C248_4BE5_9F20_EBAFB4A7A2DD(bvm* V)
{
Xila_Namespace::Date_Class* R = (Xila_Namespace::Date_Class*) be_malloc(V, sizeof(Xila_Namespace::Date_Class));
 *R = System.Get_Date(); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Date_B29C46DD_C248_4BE5_9F20_EBAFB4A7A2DD, "Date_Type", "@");


int Berry_System_Class_Get_Cycles_Count_AB03BA70_E6B4_47CD_8D4E_36ABD67075DD()
{
return (int)System.Get_Cycles_Count(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Cycles_Count_AB03BA70_E6B4_47CD_8D4E_36ABD67075DD, "i", "");


void * Berry_System_Class_Get_Up_Time_D3D18F92_C0EB_471B_B82C_E8B9E43EA2F6(bvm* V)
{
Xila_Namespace::Time_Class* R = (Xila_Namespace::Time_Class*) be_malloc(V, sizeof(Xila_Namespace::Time_Class));
 *R = System.Get_Up_Time(); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Up_Time_D3D18F92_C0EB_471B_B82C_E8B9E43EA2F6, "Time_Type", "@");


int Berry_System_Class_Get_Up_Time_Milliseconds_24854469_446B_4F99_B052_182AA8194BAF()
{
return (int)System.Get_Up_Time_Milliseconds(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Up_Time_Milliseconds_24854469_446B_4F99_B052_182AA8194BAF, "i", "");


void * Berry_System_Class_Get_Up_Time_Microseconds_2080631E_3B4A_4D20_B816_65020E937744(bvm* V)
{
int64_t* R = (int64_t*) be_malloc(V, sizeof(int64_t));
 *R = System.Get_Up_Time_Microseconds(); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Up_Time_Microseconds_2080631E_3B4A_4D20_B816_65020E937744, "Long_Integer_Type", "@");


int Berry_System_Class_Get_UTC_Offset_F5A57F83_5CCF_4FA3_A100_612BDA475066()
{
return (int)System.Get_UTC_Offset(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_UTC_Offset_F5A57F83_5CCF_4FA3_A100_612BDA475066, "i", "");


int Berry_System_Class_Get_Daylight_Offset_33E42C05_9E6B_407F_885E_3241C2F8759C()
{
return (int)System.Get_Daylight_Offset(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Daylight_Offset_33E42C05_9E6B_407F_885E_3241C2F8759C, "i", "");


const char* Berry_System_Class_Get_NTP_Server_3E86E989_B6F7_42F9_92D1_64015D7B5C22(bvm* V)
{
String_Type S_0;
S_0.Set_Buffer((char*)Berry_Class::Get_Instance(V)->Buffer, sizeof(Berry_Class::Buffer));
System.Get_NTP_Server(S_0); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_NTP_Server_3E86E989_B6F7_42F9_92D1_64015D7B5C22, "s", "@");


void Berry_System_Class_Set_Time_Zone_277F2999_D4C9_488E_83D5_925BA2325D23(int A_0, int A_1)
{
return System.Set_Time_Zone((unsigned int)A_0, (short unsigned int)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Set_Time_Zone_277F2999_D4C9_488E_83D5_925BA2325D23, "", "ii");


void Berry_System_Class_Set_NTP_Server_2364343D_331A_49D1_B720_2CDEE95CBE8E(const char* A_0)
{
return System.Set_NTP_Server(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Set_NTP_Server_2364343D_331A_49D1_B720_2CDEE95CBE8E, "", "s");


void Berry_System_Class_Start_67F45A2C_F723_452D_BACE_D60F0B037175()
{
return System.Start(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Start_67F45A2C_F723_452D_BACE_D60F0B037175, "", "");


void Berry_System_Class_Shutdown_B0F71CD9_F456_4479_B53C_31AFDC7F37FA()
{
return System.Shutdown(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Shutdown_B0F71CD9_F456_4479_B53C_31AFDC7F37FA, "", "");


void Berry_System_Class_Restart_0DCC4A4A_8A71_4468_8D4E_BAF257E4156A()
{
return System.Restart(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Restart_0DCC4A4A_8A71_4468_8D4E_BAF257E4156A, "", "");



void Berry_System_Class_Task_Function_7E28A03E_CAF3_414C_B386_EBE04106F068()
{
return System.Task_Function(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Task_Function_7E28A03E_CAF3_414C_B386_EBE04106F068, "", "");


void* Berry_System_Class_Get_Pointer()
{
	return (Module_Type*)&System;
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Pointer, "c", "")

// - Berry declaration
/* @const_object_info_begin
module System (scope:global)
{
	Get_Device_Name, ctype_func(Berry_System_Class_Get_Device_Name_21E88A58_D1DD_4A34_A003_A89DA35DD8D9)
	Get_eFuse_MAC, ctype_func(Berry_System_Class_Get_eFuse_MAC_F4F38BF3_63CE_41E2_8CEC_4D38E6D121B4)
	Get_Chip_Revision, ctype_func(Berry_System_Class_Get_Chip_Revision_FBCE2FF8_AAE5_47E5_8402_0D05A80CFA98)
	Get_Chip_Model, ctype_func(Berry_System_Class_Get_Chip_Model_5AB514F5_1644_4B6A_96EE_A532BDAD8D83)
	Get_Chip_Cores, ctype_func(Berry_System_Class_Get_Chip_Cores_41BBC027_E158_49BC_948F_6B8B54919508)
	Get_CPU_Frequency, ctype_func(Berry_System_Class_Get_CPU_Frequency_E5773E6D_BE04_473E_9835_934914AB4AD0)
	Set_Device_Name, ctype_func(Berry_System_Class_Set_Device_Name_5D9C3CEA_957A_4CA5_BCF0_9EB69CA38E43)
	Get_Time, ctype_func(Berry_System_Class_Get_Time_A26C9DE5_B582_48F6_9A4B_481069EA6AB6)
	Get_Date, ctype_func(Berry_System_Class_Get_Date_B29C46DD_C248_4BE5_9F20_EBAFB4A7A2DD)
	Get_Cycles_Count, ctype_func(Berry_System_Class_Get_Cycles_Count_AB03BA70_E6B4_47CD_8D4E_36ABD67075DD)
	Get_Up_Time, ctype_func(Berry_System_Class_Get_Up_Time_D3D18F92_C0EB_471B_B82C_E8B9E43EA2F6)
	Get_Up_Time_Milliseconds, ctype_func(Berry_System_Class_Get_Up_Time_Milliseconds_24854469_446B_4F99_B052_182AA8194BAF)
	Get_Up_Time_Microseconds, ctype_func(Berry_System_Class_Get_Up_Time_Microseconds_2080631E_3B4A_4D20_B816_65020E937744)
	Get_UTC_Offset, ctype_func(Berry_System_Class_Get_UTC_Offset_F5A57F83_5CCF_4FA3_A100_612BDA475066)
	Get_Daylight_Offset, ctype_func(Berry_System_Class_Get_Daylight_Offset_33E42C05_9E6B_407F_885E_3241C2F8759C)
	Get_NTP_Server, ctype_func(Berry_System_Class_Get_NTP_Server_3E86E989_B6F7_42F9_92D1_64015D7B5C22)
	Set_Time_Zone, ctype_func(Berry_System_Class_Set_Time_Zone_277F2999_D4C9_488E_83D5_925BA2325D23)
	Set_NTP_Server, ctype_func(Berry_System_Class_Set_NTP_Server_2364343D_331A_49D1_B720_2CDEE95CBE8E)
	Start, ctype_func(Berry_System_Class_Start_67F45A2C_F723_452D_BACE_D60F0B037175)
	Shutdown, ctype_func(Berry_System_Class_Shutdown_B0F71CD9_F456_4479_B53C_31AFDC7F37FA)
	Restart, ctype_func(Berry_System_Class_Restart_0DCC4A4A_8A71_4468_8D4E_BAF257E4156A)
	Task_Function, ctype_func(Berry_System_Class_Task_Function_7E28A03E_CAF3_414C_B386_EBE04106F068)
	Get_Pointer, ctype_func(Berry_System_Class_Get_Pointer)

	Panic_Missing_System_Files, int(0)
	Panic_Failed_To_Update_Display, int(1)
	Panic_Damaged_System_Registry, int(2)
	Panic_Installation_Conflict, int(3)
	Panic_Drive_Failure, int(4)
	Panic_Failed_To_Start_Display, int(5)
	Panic_Failed_To_Start_Graphics, int(6)
	Panic_Failed_To_Start_Sound, int(7)
	Panic_Failed_To_Start_Power, int(8)
	Panic_Failed_To_Start_Communication, int(9)
	Panic_Failed_To_Start_Accounts, int(10)
	Panic_Failed_To_Start_Drive, int(11)
	Panic_Failed_To_Start_Softwares, int(12)
	Panic_Low_Memory, int(13)
	Panic_Memory_Corruption, int(14)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_System.h"
}