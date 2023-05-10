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
const char* Berry_System_Class_Get_Device_Name_F678DB71_B98E_4C0C_9EC1_0D59131C3EB1(bvm* V)
{
String_Type S_0;
S_0.Set_Buffer((char*)Berry_Class::Get_Instance(V)->Buffer, sizeof(Berry_Class::Buffer));
System.Get_Device_Name(S_0); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Device_Name_F678DB71_B98E_4C0C_9EC1_0D59131C3EB1, "s", "@");


int Berry_System_Class_Get_eFuse_MAC_108A1B75_CC50_4F2F_846D_ADBB77EEFBC6()
{
return (int)System.Get_eFuse_MAC(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_eFuse_MAC_108A1B75_CC50_4F2F_846D_ADBB77EEFBC6, "i", "");


int Berry_System_Class_Get_Chip_Revision_18903E9F_722F_403D_8D0D_B049CA9C35C1()
{
return (int)System.Get_Chip_Revision(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Chip_Revision_18903E9F_722F_403D_8D0D_B049CA9C35C1, "i", "");


const char* Berry_System_Class_Get_Chip_Model_F1F09E62_EFA3_4BDB_859C_67E0F64452D6()
{
return System.Get_Chip_Model(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Chip_Model_F1F09E62_EFA3_4BDB_859C_67E0F64452D6, "s", "");


int Berry_System_Class_Get_Chip_Cores_D7C3D600_ED47_4DE2_BD32_378007796655()
{
return (int)System.Get_Chip_Cores(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Chip_Cores_D7C3D600_ED47_4DE2_BD32_378007796655, "i", "");


int Berry_System_Class_Get_CPU_Frequency_719BCF8F_D670_42DC_858F_6AA2CFF74660()
{
return (int)System.Get_CPU_Frequency(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_CPU_Frequency_719BCF8F_D670_42DC_858F_6AA2CFF74660, "i", "");


void Berry_System_Class_Set_Device_Name_797D9746_8813_4BA4_A674_DDD2F3AD53E4(const char* A_0)
{
return System.Set_Device_Name(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Set_Device_Name_797D9746_8813_4BA4_A674_DDD2F3AD53E4, "", "s");


void * Berry_System_Class_Get_Time_7819F698_75C9_48B6_9A55_B323D4532085()
{
Time_Class* R = new Time_Class();
 *R = System.Get_Time(); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Time_7819F698_75C9_48B6_9A55_B323D4532085, "Time_Type", "");


void * Berry_System_Class_Get_Date_28254A53_D443_4287_96A7_D3FAC8B6FEE2()
{
Date_Class* R = new Date_Class();
 *R = System.Get_Date(); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Date_28254A53_D443_4287_96A7_D3FAC8B6FEE2, "Date_Type", "");


int Berry_System_Class_Get_Cycles_Count_08488D6E_7694_488F_849D_74130BE3C7C1()
{
return (int)System.Get_Cycles_Count(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Cycles_Count_08488D6E_7694_488F_849D_74130BE3C7C1, "i", "");


void * Berry_System_Class_Get_Up_Time_66D1A0BF_B601_4085_B926_B88D70D55E63()
{
Time_Class* R = new Time_Class();
 *R = System.Get_Up_Time(); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Up_Time_66D1A0BF_B601_4085_B926_B88D70D55E63, "Time_Type", "");


int Berry_System_Class_Get_Up_Time_Milliseconds_8DE097BA_3A23_4C28_BEC4_39C4D71163D5()
{
return (int)System.Get_Up_Time_Milliseconds(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Up_Time_Milliseconds_8DE097BA_3A23_4C28_BEC4_39C4D71163D5, "i", "");


int Berry_System_Class_Get_Up_Time_Microseconds_999B37E6_66AB_43FA_9DA6_A427DDD6165D()
{
return (int)System.Get_Up_Time_Microseconds(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Up_Time_Microseconds_999B37E6_66AB_43FA_9DA6_A427DDD6165D, "i", "");


int Berry_System_Class_Get_UTC_Offset_37E1FAB5_3F3D_4F15_9EA1_0B30F61AF07E()
{
return (int)System.Get_UTC_Offset(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_UTC_Offset_37E1FAB5_3F3D_4F15_9EA1_0B30F61AF07E, "i", "");


int Berry_System_Class_Get_Daylight_Offset_2D0DE96E_8005_41EF_A7B8_EB65F67DD60F()
{
return (int)System.Get_Daylight_Offset(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Daylight_Offset_2D0DE96E_8005_41EF_A7B8_EB65F67DD60F, "i", "");


const char* Berry_System_Class_Get_NTP_Server_E2924DC5_069D_4B29_8C7C_A8AD25BAAB76(bvm* V)
{
String_Type S_0;
S_0.Set_Buffer((char*)Berry_Class::Get_Instance(V)->Buffer, sizeof(Berry_Class::Buffer));
System.Get_NTP_Server(S_0); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_NTP_Server_E2924DC5_069D_4B29_8C7C_A8AD25BAAB76, "s", "@");


void Berry_System_Class_Set_Time_Zone_9555B0D4_3AFF_4B06_ABEF_910F470E89DA(int A_0, int A_1)
{
return System.Set_Time_Zone((unsigned int)A_0, (short unsigned int)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Set_Time_Zone_9555B0D4_3AFF_4B06_ABEF_910F470E89DA, "", "ii");


void Berry_System_Class_Set_NTP_Server_6C1BD1BC_3DC0_4E13_B8E0_3EC0F4D26530(const char* A_0)
{
return System.Set_NTP_Server(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Set_NTP_Server_6C1BD1BC_3DC0_4E13_B8E0_3EC0F4D26530, "", "s");


void Berry_System_Class_Start_EDE7742D_757B_4210_86F9_95D09D89E28C()
{
return System.Start(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Start_EDE7742D_757B_4210_86F9_95D09D89E28C, "", "");


void Berry_System_Class_Shutdown_D90EA7F0_BA65_4C63_91CB_143218AB4FEA()
{
return System.Shutdown(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Shutdown_D90EA7F0_BA65_4C63_91CB_143218AB4FEA, "", "");


void Berry_System_Class_Restart_96102FD2_B173_4390_8963_CAB6D8DE43C3()
{
return System.Restart(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Restart_96102FD2_B173_4390_8963_CAB6D8DE43C3, "", "");



void Berry_System_Class_Task_Function_01276559_6F7F_404B_A9E2_664F36B253A6()
{
return System.Task_Function(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Task_Function_01276559_6F7F_404B_A9E2_664F36B253A6, "", "");


void* Berry_System_Class_Get_Pointer()
{
	return &System;
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Pointer, "Module_Type", "")

// - Berry declaration
/* @const_object_info_begin
module System (scope:global)
{
	Get_Device_Name, ctype_func(Berry_System_Class_Get_Device_Name_F678DB71_B98E_4C0C_9EC1_0D59131C3EB1)
	Get_eFuse_MAC, ctype_func(Berry_System_Class_Get_eFuse_MAC_108A1B75_CC50_4F2F_846D_ADBB77EEFBC6)
	Get_Chip_Revision, ctype_func(Berry_System_Class_Get_Chip_Revision_18903E9F_722F_403D_8D0D_B049CA9C35C1)
	Get_Chip_Model, ctype_func(Berry_System_Class_Get_Chip_Model_F1F09E62_EFA3_4BDB_859C_67E0F64452D6)
	Get_Chip_Cores, ctype_func(Berry_System_Class_Get_Chip_Cores_D7C3D600_ED47_4DE2_BD32_378007796655)
	Get_CPU_Frequency, ctype_func(Berry_System_Class_Get_CPU_Frequency_719BCF8F_D670_42DC_858F_6AA2CFF74660)
	Set_Device_Name, ctype_func(Berry_System_Class_Set_Device_Name_797D9746_8813_4BA4_A674_DDD2F3AD53E4)
	Get_Time, ctype_func(Berry_System_Class_Get_Time_7819F698_75C9_48B6_9A55_B323D4532085)
	Get_Date, ctype_func(Berry_System_Class_Get_Date_28254A53_D443_4287_96A7_D3FAC8B6FEE2)
	Get_Cycles_Count, ctype_func(Berry_System_Class_Get_Cycles_Count_08488D6E_7694_488F_849D_74130BE3C7C1)
	Get_Up_Time, ctype_func(Berry_System_Class_Get_Up_Time_66D1A0BF_B601_4085_B926_B88D70D55E63)
	Get_Up_Time_Milliseconds, ctype_func(Berry_System_Class_Get_Up_Time_Milliseconds_8DE097BA_3A23_4C28_BEC4_39C4D71163D5)
	Get_Up_Time_Microseconds, ctype_func(Berry_System_Class_Get_Up_Time_Microseconds_999B37E6_66AB_43FA_9DA6_A427DDD6165D)
	Get_UTC_Offset, ctype_func(Berry_System_Class_Get_UTC_Offset_37E1FAB5_3F3D_4F15_9EA1_0B30F61AF07E)
	Get_Daylight_Offset, ctype_func(Berry_System_Class_Get_Daylight_Offset_2D0DE96E_8005_41EF_A7B8_EB65F67DD60F)
	Get_NTP_Server, ctype_func(Berry_System_Class_Get_NTP_Server_E2924DC5_069D_4B29_8C7C_A8AD25BAAB76)
	Set_Time_Zone, ctype_func(Berry_System_Class_Set_Time_Zone_9555B0D4_3AFF_4B06_ABEF_910F470E89DA)
	Set_NTP_Server, ctype_func(Berry_System_Class_Set_NTP_Server_6C1BD1BC_3DC0_4E13_B8E0_3EC0F4D26530)
	Start, ctype_func(Berry_System_Class_Start_EDE7742D_757B_4210_86F9_95D09D89E28C)
	Shutdown, ctype_func(Berry_System_Class_Shutdown_D90EA7F0_BA65_4C63_91CB_143218AB4FEA)
	Restart, ctype_func(Berry_System_Class_Restart_96102FD2_B173_4390_8963_CAB6D8DE43C3)
	Task_Function, ctype_func(Berry_System_Class_Task_Function_01276559_6F7F_404B_A9E2_664F36B253A6)
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