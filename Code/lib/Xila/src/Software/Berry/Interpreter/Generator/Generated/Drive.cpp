// This file is automatically generated by the Generate.py script.
#include "Software/Berry/Berry.hpp"
extern "C"
{
#include "be_constobj.h"
#include "be_mapping.h"
}
using namespace Xila_Namespace;
using namespace Drive_Types;

// - Functions

// - - Constructors
void * Berry_File_Class_Initialize_4CC8975E_E710_4308_B542_F45E78BB243C()
{
return new Drive_Types::File_Class(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Initialize_4CC8975E_E710_4308_B542_F45E78BB243C, "+_p", "");

void * Berry_File_Class_Initialize_508B927C_A45B_4656_88F5_5F6D52ED4BFC()
{
return new Drive_Types::File_Class(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Initialize_508B927C_A45B_4656_88F5_5F6D52ED4BFC, "+_p", "");


// - - Destructors
void Berry_File_Class_Deinitialize_86529848_AD89_4150_9CDE_46C92C293C7D(Xila_Namespace::Drive_Types::File_Class* I)
{
return delete I;
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Deinitialize_86529848_AD89_4150_9CDE_46C92C293C7D, "", ".");


// - - Functions
int Berry_File_Class_write_43A8C6E0_4B66_46C6_8165_84DE51AE4EAF(Xila_Namespace::Drive_Types::File_Class* I, int A_0)
{
return (int)I->write((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_write_43A8C6E0_4B66_46C6_8165_84DE51AE4EAF, "i", ".i");

int Berry_File_Class_write_51B361B0_D723_4CFE_BAE5_3436357FE8B4(Xila_Namespace::Drive_Types::File_Class* I, const unsigned char* A_0, int A_1)
{
return (int)I->write(A_0, (unsigned int)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_write_51B361B0_D723_4CFE_BAE5_3436357FE8B4, "i", ".si");

int Berry_File_Class_available_AE37BFF6_5828_4CCC_81CD_D09DE1AC145E(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->available(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_available_AE37BFF6_5828_4CCC_81CD_D09DE1AC145E, "i", ".");

int Berry_File_Class_read_29902466_7CEF_42E7_BE8B_6FD85126413E(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->read(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_read_29902466_7CEF_42E7_BE8B_6FD85126413E, "i", ".");

int Berry_File_Class_peek_B23668A3_B44B_47FC_98D3_D750082E4124(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->peek(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_peek_B23668A3_B44B_47FC_98D3_D750082E4124, "i", ".");

void Berry_File_Class_flush_6D25654C_AFB4_4669_B3DA_8E4025903F17(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->flush(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_flush_6D25654C_AFB4_4669_B3DA_8E4025903F17, "", ".");

const char* Berry_File_Class_readBytes_ADC4581C_08E1_4178_9F4F_6D48B176AF34(bvm* V, Xila_Namespace::Drive_Types::File_Class* I, int A_1)
{
char* S_0 = (char*)Berry_Class::Get_Instance(V)->Buffer;
I->readBytes(S_0, (A_1 > sizeof(Berry_Class::Buffer)) ? sizeof(Berry_Class::Buffer) : A_1); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_readBytes_ADC4581C_08E1_4178_9F4F_6D48B176AF34, "s", "@.i");

int Berry_File_Class_Write_A873BBCE_A4B8_4F99_A019_CBF0819F7EE4(Xila_Namespace::Drive_Types::File_Class* I, int A_0)
{
return (int)I->Write((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Write_A873BBCE_A4B8_4F99_A019_CBF0819F7EE4, "i", ".i");

int Berry_File_Class_Write_9DE66D34_D644_4D5E_A392_3E3E6B6FDFD3(Xila_Namespace::Drive_Types::File_Class* I, const unsigned char* A_0, int A_1)
{
return (int)I->Write(A_0, (unsigned int)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Write_9DE66D34_D644_4D5E_A392_3E3E6B6FDFD3, "i", ".si");

int Berry_File_Class_Available_542201F2_12A1_4BC4_AD79_FBF227D01C1C(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->Available(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Available_542201F2_12A1_4BC4_AD79_FBF227D01C1C, "i", ".");

int Berry_File_Class_Read_5339B0CE_D310_49A6_9821_468317858378(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->Read(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Read_5339B0CE_D310_49A6_9821_468317858378, "i", ".");

int Berry_File_Class_Peek_B77270EE_C92D_4104_9671_99ED6AAEB336(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->Peek(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Peek_B77270EE_C92D_4104_9671_99ED6AAEB336, "i", ".");

void Berry_File_Class_Flush_A3C1716B_9BBE_429C_A438_DE5671A98DED(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->Flush(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Flush_A3C1716B_9BBE_429C_A438_DE5671A98DED, "", ".");

bool Berry_File_Class_Is_Valid_CC260678_B125_41AD_9C53_8A589F15A1DF(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->Is_Valid(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Is_Valid_CC260678_B125_41AD_9C53_8A589F15A1DF, "b", ".");

const char* Berry_File_Class_Read_String_9C965691_A71E_4E2C_9EE4_E1A9923549FF(bvm* V, Xila_Namespace::Drive_Types::File_Class* I, int A_1)
{
char* S_0 = (char*)Berry_Class::Get_Instance(V)->Buffer;
I->Read_String(S_0, (A_1 > sizeof(Berry_Class::Buffer)) ? sizeof(Berry_Class::Buffer) : A_1); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Read_String_9C965691_A71E_4E2C_9EE4_E1A9923549FF, "s", "@.i");

const unsigned char* Berry_File_Class_Read_Bytes_0DB12BC3_FF42_460F_AE11_1DA2252FF27C(bvm* V, Xila_Namespace::Drive_Types::File_Class* I, int A_1)
{
unsigned char* S_0 = (unsigned char*)Berry_Class::Get_Instance(V)->Buffer;
I->Read_Bytes(S_0, (A_1 > sizeof(Berry_Class::Buffer)) ? sizeof(Berry_Class::Buffer) : A_1); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Read_Bytes_0DB12BC3_FF42_460F_AE11_1DA2252FF27C, "s", "@.i");

bool Berry_File_Class_Seek_887EB390_BA64_491D_95E9_C71C28580832(Xila_Namespace::Drive_Types::File_Class* I, int A_0, int A_1)
{
return I->Seek((unsigned int)A_0, (Seek_Mode_Type)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Seek_887EB390_BA64_491D_95E9_C71C28580832, "b", ".ii");

bool Berry_File_Class_Seek_E9A09E59_CA26_45C6_8539_3D86985C39B6(Xila_Namespace::Drive_Types::File_Class* I, int A_0)
{
return I->Seek((unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Seek_E9A09E59_CA26_45C6_8539_3D86985C39B6, "b", ".i");

int Berry_File_Class_Get_Position_174422F2_C060_4793_A76D_F042DB7572C7(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->Get_Position(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Get_Position_174422F2_C060_4793_A76D_F042DB7572C7, "i", ".");

int Berry_File_Class_Get_Size_B9E3CB89_9BDE_4A19_8800_6EB0B9DA72A9(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->Get_Size(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Get_Size_B9E3CB89_9BDE_4A19_8800_6EB0B9DA72A9, "i", ".");

int Berry_File_Class_Set_Buffer_Size_22266F64_A46A_42CF_9AD4_0944FE2992C3(Xila_Namespace::Drive_Types::File_Class* I, int A_0)
{
return (int)I->Set_Buffer_Size((unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Set_Buffer_Size_22266F64_A46A_42CF_9AD4_0944FE2992C3, "i", ".i");

void Berry_File_Class_Close_46B0A99F_3434_46B7_A8CB_DBCDFCA49237(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->Close(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Close_46B0A99F_3434_46B7_A8CB_DBCDFCA49237, "", ".");

int Berry_File_Class_Get_Modification_Time_DD0DD7B8_1545_43D9_8792_94670F4E6FDC(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->Get_Modification_Time(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Get_Modification_Time_DD0DD7B8_1545_43D9_8792_94670F4E6FDC, "i", ".");

const char* Berry_File_Class_Get_Path_3B734ECA_5CA2_42D4_B222_3DA66AE16291(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->Get_Path(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Get_Path_3B734ECA_5CA2_42D4_B222_3DA66AE16291, "s", ".");

const char* Berry_File_Class_Get_Name_09A18CFF_C54F_49EC_9E12_3AB285CAA4BE(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->Get_Name(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Get_Name_09A18CFF_C54F_49EC_9E12_3AB285CAA4BE, "s", ".");

bool Berry_File_Class_Is_Directory_C237F8E2_F545_4294_85BB_83B1AD0613AD(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->Is_Directory(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Is_Directory_C237F8E2_F545_4294_85BB_83B1AD0613AD, "b", ".");

void * Berry_File_Class_Open_Next_File_00E8D493_E0AE_46F7_BC18_C0554EEA687A(Xila_Namespace::Drive_Types::File_Class* I, bool A_0 = false, bool A_1 = false)
{
File_Class* R = new File_Class();
 *R = I->Open_Next_File(A_0, A_1); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Open_Next_File_00E8D493_E0AE_46F7_BC18_C0554EEA687A, "Drive.File_Type", ".[bb");

void Berry_File_Class_Rewind_Directory_A1379974_046C_4742_8631_DC56F37AF4DF(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->Rewind_Directory(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Rewind_Directory_A1379974_046C_4742_8631_DC56F37AF4DF, "", ".");

int Berry_File_Class_Count_Items_6C9E0028_B1F2_472A_A4B2_A556B4E44D9E(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->Count_Items(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Count_Items_6C9E0028_B1F2_472A_A4B2_A556B4E44D9E, "i", ".");


// - Berry declaration
/* @const_object_info_begin
class Berry_File_Type(scope:global, name:File_Type)
{
	_p, var
	init, ctype_func(Berry_File_Class_Initialize_4CC8975E_E710_4308_B542_F45E78BB243C)
	init, ctype_func(Berry_File_Class_Initialize_508B927C_A45B_4656_88F5_5F6D52ED4BFC)
	deinit, ctype_func(Berry_File_Class_Deinitialize_86529848_AD89_4150_9CDE_46C92C293C7D)
	write, ctype_func(Berry_File_Class_write_43A8C6E0_4B66_46C6_8165_84DE51AE4EAF)
	write, ctype_func(Berry_File_Class_write_51B361B0_D723_4CFE_BAE5_3436357FE8B4)
	available, ctype_func(Berry_File_Class_available_AE37BFF6_5828_4CCC_81CD_D09DE1AC145E)
	read, ctype_func(Berry_File_Class_read_29902466_7CEF_42E7_BE8B_6FD85126413E)
	peek, ctype_func(Berry_File_Class_peek_B23668A3_B44B_47FC_98D3_D750082E4124)
	flush, ctype_func(Berry_File_Class_flush_6D25654C_AFB4_4669_B3DA_8E4025903F17)
	readBytes, ctype_func(Berry_File_Class_readBytes_ADC4581C_08E1_4178_9F4F_6D48B176AF34)
	Write, ctype_func(Berry_File_Class_Write_A873BBCE_A4B8_4F99_A019_CBF0819F7EE4)
	Write, ctype_func(Berry_File_Class_Write_9DE66D34_D644_4D5E_A392_3E3E6B6FDFD3)
	Available, ctype_func(Berry_File_Class_Available_542201F2_12A1_4BC4_AD79_FBF227D01C1C)
	Read, ctype_func(Berry_File_Class_Read_5339B0CE_D310_49A6_9821_468317858378)
	Peek, ctype_func(Berry_File_Class_Peek_B77270EE_C92D_4104_9671_99ED6AAEB336)
	Flush, ctype_func(Berry_File_Class_Flush_A3C1716B_9BBE_429C_A438_DE5671A98DED)
	Is_Valid, ctype_func(Berry_File_Class_Is_Valid_CC260678_B125_41AD_9C53_8A589F15A1DF)
	Read_String, ctype_func(Berry_File_Class_Read_String_9C965691_A71E_4E2C_9EE4_E1A9923549FF)
	Read_Bytes, ctype_func(Berry_File_Class_Read_Bytes_0DB12BC3_FF42_460F_AE11_1DA2252FF27C)
	Seek, ctype_func(Berry_File_Class_Seek_887EB390_BA64_491D_95E9_C71C28580832)
	Seek, ctype_func(Berry_File_Class_Seek_E9A09E59_CA26_45C6_8539_3D86985C39B6)
	Get_Position, ctype_func(Berry_File_Class_Get_Position_174422F2_C060_4793_A76D_F042DB7572C7)
	Get_Size, ctype_func(Berry_File_Class_Get_Size_B9E3CB89_9BDE_4A19_8800_6EB0B9DA72A9)
	Set_Buffer_Size, ctype_func(Berry_File_Class_Set_Buffer_Size_22266F64_A46A_42CF_9AD4_0944FE2992C3)
	Close, ctype_func(Berry_File_Class_Close_46B0A99F_3434_46B7_A8CB_DBCDFCA49237)
	Get_Modification_Time, ctype_func(Berry_File_Class_Get_Modification_Time_DD0DD7B8_1545_43D9_8792_94670F4E6FDC)
	Get_Path, ctype_func(Berry_File_Class_Get_Path_3B734ECA_5CA2_42D4_B222_3DA66AE16291)
	Get_Name, ctype_func(Berry_File_Class_Get_Name_09A18CFF_C54F_49EC_9E12_3AB285CAA4BE)
	Is_Directory, ctype_func(Berry_File_Class_Is_Directory_C237F8E2_F545_4294_85BB_83B1AD0613AD)
	Open_Next_File, ctype_func(Berry_File_Class_Open_Next_File_00E8D493_E0AE_46F7_BC18_C0554EEA687A)
	Rewind_Directory, ctype_func(Berry_File_Class_Rewind_Directory_A1379974_046C_4742_8631_DC56F37AF4DF)
	Count_Items, ctype_func(Berry_File_Class_Count_Items_6C9E0028_B1F2_472A_A4B2_A556B4E44D9E)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Berry_File_Type.h"
}
// - Functions
int Berry_Drive_Class_Get_Size_5368D47C_377C_4AA2_B0CF_1E54F94404F5()
{
return (int)Drive.Get_Size(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Get_Size_5368D47C_377C_4AA2_B0CF_1E54F94404F5, "i", "");


int Berry_Drive_Class_Get_Type_D155B101_A78E_434F_862D_0946C41A70DA()
{
return (int)Drive.Get_Type(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Get_Type_D155B101_A78E_434F_862D_0946C41A70DA, "i", "");


int Berry_Drive_Class_Get_Total_Size_29044A6C_58E7_4282_99F4_792BB8C9588F()
{
return (int)Drive.Get_Total_Size(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Get_Total_Size_29044A6C_58E7_4282_99F4_792BB8C9588F, "i", "");


int Berry_Drive_Class_Get_Used_Size_18ABC530_1E5C_4374_88ED_B6D5EFAAF93A()
{
return (int)Drive.Get_Used_Size(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Get_Used_Size_18ABC530_1E5C_4374_88ED_B6D5EFAAF93A, "i", "");


bool Berry_Drive_Class_Exists_A81663D8_EEC7_4916_AAAF_2BF7F308280A(const char* A_0)
{
return Drive.Exists(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Exists_A81663D8_EEC7_4916_AAAF_2BF7F308280A, "b", "s");


int Berry_Drive_Class_Make_Directory_0A87E392_593D_4053_A0E7_CB6BC4167174(const char* A_0)
{
return (int)Drive.Make_Directory(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Make_Directory_0A87E392_593D_4053_A0E7_CB6BC4167174, "i", "s");


int Berry_Drive_Class_Remove_Directory_85BE182B_75EA_4022_8AB5_554B27613561(const char* A_0)
{
return (int)Drive.Remove_Directory(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Remove_Directory_85BE182B_75EA_4022_8AB5_554B27613561, "i", "s");


int Berry_Drive_Class_Remove_Directory_64C2837B_322F_4520_A821_10CDA098FFC7(const char* A_0, bool A_1)
{
return (int)Drive.Remove_Directory(A_0, A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Remove_Directory_64C2837B_322F_4520_A821_10CDA098FFC7, "i", "sb");


int Berry_Drive_Class_Remove_FB88F5A4_95D2_47BC_9C54_4F9B0DA26D68(const char* A_0)
{
return (int)Drive.Remove(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Remove_FB88F5A4_95D2_47BC_9C54_4F9B0DA26D68, "i", "s");


void * Berry_Drive_Class_Open_7C34E87E_BC4E_47FF_8CF2_9D531145F123(const char* A_0, bool A_1 = false, bool A_2 = false)
{
File_Class* R = new File_Class();
 *R = Drive.Open(A_0, A_1, A_2); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Open_7C34E87E_BC4E_47FF_8CF2_9D531145F123, "Drive.File_Type", "s[bb");


int Berry_Drive_Class_Remove_File_B9D2FA06_9C3A_432F_9EC3_D839DF5F4A0B(const char* A_0)
{
return (int)Drive.Remove_File(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Remove_File_B9D2FA06_9C3A_432F_9EC3_D839DF5F4A0B, "i", "s");


int Berry_Drive_Class_Rename_43C4FEB2_DB1F_4815_B898_103F9BCC8F48(const char* A_0, const char* A_1)
{
return (int)Drive.Rename(A_0, A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Rename_43C4FEB2_DB1F_4815_B898_103F9BCC8F48, "i", "ss");


int Berry_Drive_Class_Copy_E79B6292_E155_41FA_B320_4EB4C1C6D404(::Xila_Namespace::Drive_Types::File_Class* A_0, ::Xila_Namespace::Drive_Types::File_Class* A_1)
{
return (int)Drive.Copy(*A_0, *A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Copy_E79B6292_E155_41FA_B320_4EB4C1C6D404, "i", "..");


int Berry_Drive_Class_Copy_52A3E794_4B52_4275_80E9_41A1240218C5(const char* A_0, const char* A_1)
{
return (int)Drive.Copy(A_0, A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Copy_52A3E794_4B52_4275_80E9_41A1240218C5, "i", "ss");


int Berry_Drive_Class_Cut_33083CCD_0257_4736_956C_90CCEB80542C(::Xila_Namespace::Drive_Types::File_Class* A_0, ::Xila_Namespace::Drive_Types::File_Class* A_1)
{
return (int)Drive.Cut(*A_0, *A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Cut_33083CCD_0257_4736_956C_90CCEB80542C, "i", "..");


int Berry_Drive_Class_Cut_F6B59E0F_11E2_4317_A183_8B91459D9525(const char* A_0, const char* A_1)
{
return (int)Drive.Cut(A_0, A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Cut_F6B59E0F_11E2_4317_A183_8B91459D9525, "i", "ss");


void Berry_Drive_Class_End_3A61E5F0_366C_4835_BFE0_87D1D0B83079()
{
return Drive.End(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_End_3A61E5F0_366C_4835_BFE0_87D1D0B83079, "", "");


int Berry_Drive_Class_Start_3F468282_E8B7_4C7C_8D71_FD62F012D4CD()
{
return (int)Drive.Start(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Start_3F468282_E8B7_4C7C_8D71_FD62F012D4CD, "i", "");



// - Berry declaration
/* @const_object_info_begin
module Drive (scope:global)
{
	Get_Size, ctype_func(Berry_Drive_Class_Get_Size_5368D47C_377C_4AA2_B0CF_1E54F94404F5)
	Get_Type, ctype_func(Berry_Drive_Class_Get_Type_D155B101_A78E_434F_862D_0946C41A70DA)
	Get_Total_Size, ctype_func(Berry_Drive_Class_Get_Total_Size_29044A6C_58E7_4282_99F4_792BB8C9588F)
	Get_Used_Size, ctype_func(Berry_Drive_Class_Get_Used_Size_18ABC530_1E5C_4374_88ED_B6D5EFAAF93A)
	Exists, ctype_func(Berry_Drive_Class_Exists_A81663D8_EEC7_4916_AAAF_2BF7F308280A)
	Make_Directory, ctype_func(Berry_Drive_Class_Make_Directory_0A87E392_593D_4053_A0E7_CB6BC4167174)
	Remove_Directory, ctype_func(Berry_Drive_Class_Remove_Directory_85BE182B_75EA_4022_8AB5_554B27613561)
	Remove_Directory, ctype_func(Berry_Drive_Class_Remove_Directory_64C2837B_322F_4520_A821_10CDA098FFC7)
	Remove, ctype_func(Berry_Drive_Class_Remove_FB88F5A4_95D2_47BC_9C54_4F9B0DA26D68)
	Open, ctype_func(Berry_Drive_Class_Open_7C34E87E_BC4E_47FF_8CF2_9D531145F123)
	Remove_File, ctype_func(Berry_Drive_Class_Remove_File_B9D2FA06_9C3A_432F_9EC3_D839DF5F4A0B)
	Rename, ctype_func(Berry_Drive_Class_Rename_43C4FEB2_DB1F_4815_B898_103F9BCC8F48)
	Copy, ctype_func(Berry_Drive_Class_Copy_E79B6292_E155_41FA_B320_4EB4C1C6D404)
	Copy, ctype_func(Berry_Drive_Class_Copy_52A3E794_4B52_4275_80E9_41A1240218C5)
	Cut, ctype_func(Berry_Drive_Class_Cut_33083CCD_0257_4736_956C_90CCEB80542C)
	Cut, ctype_func(Berry_Drive_Class_Cut_F6B59E0F_11E2_4317_A183_8B91459D9525)
	End, ctype_func(Berry_Drive_Class_End_3A61E5F0_366C_4835_BFE0_87D1D0B83079)
	Start, ctype_func(Berry_Drive_Class_Start_3F468282_E8B7_4C7C_8D71_FD62F012D4CD)

	File_Type, class(Berry_File_Type)

	Seek_Mode_Set, int(0)
	Seek_Mode_Current, int(1)
	Seek_Mode_End, int(2)

	Drive_None, int(0)
	Drive_MMC, int(1)
	Drive_SD_SC, int(2)
	Drive_SD_HC, int(3)
	Drive_Unknow, int(4)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Drive.h"
}