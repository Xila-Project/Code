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

// - - Constructors

// - - Destructors
void Berry_Serial_Class_Deinitialize_86F794D6_EDF7_41AD_995D_AFF2493799BC(bvm* V, Xila_Namespace::Pin_Types::Serial_Class* I)
{
if (!I) { return; }
I->~Serial_Class();
be_free(V, I, sizeof(Pin_Types::Serial_Class));
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Deinitialize_86F794D6_EDF7_41AD_995D_AFF2493799BC, "", "@.");


// - - Functions
void Berry_Serial_Class_Begin_7B172760_613B_40E5_9275_BED31FA170D2(Xila_Namespace::Pin_Types::Serial_Class* I, int A_0, int A_1 = (int)Xila_Namespace::Pin_Types::Serial_Configuration_Type::Data_8_Bits, int A_2 = -1, int A_3 = -1, bool A_4 = false, int A_5 = 20000)
{
return I->Begin((long unsigned int)A_0, (Serial_Configuration_Type)A_1, (signed char)A_2, (signed char)A_3, A_4, (long unsigned int)A_5); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Begin_7B172760_613B_40E5_9275_BED31FA170D2, "", ".i[iiibi");

void Berry_Serial_Class_End_B04F1BF2_C45F_4361_9FAF_625BA5543F1E(Xila_Namespace::Pin_Types::Serial_Class* I)
{
return I->End(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_End_B04F1BF2_C45F_4361_9FAF_625BA5543F1E, "", ".");

int Berry_Serial_Class_Available_08EDA836_A789_42B5_9905_1B9128DF954E(Xila_Namespace::Pin_Types::Serial_Class* I)
{
return (int)I->Available(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Available_08EDA836_A789_42B5_9905_1B9128DF954E, "i", ".");

int Berry_Serial_Class_Peek_ADBC9620_C25A_4A60_A5B5_DFBA88EB17B0(Xila_Namespace::Pin_Types::Serial_Class* I)
{
return (int)I->Peek(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Peek_ADBC9620_C25A_4A60_A5B5_DFBA88EB17B0, "i", ".");

int Berry_Serial_Class_Read_E572C813_C260_4887_BF34_F315BA831FB6(Xila_Namespace::Pin_Types::Serial_Class* I)
{
return (int)I->Read(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Read_E572C813_C260_4887_BF34_F315BA831FB6, "i", ".");

const unsigned char* Berry_Serial_Class_Read_Bytes_5FCE38CE_0B36_4BB8_9F57_55C33DA47103(bvm* V, Xila_Namespace::Pin_Types::Serial_Class* I, int A_1)
{
unsigned char* S_0 = (unsigned char*)Berry_Class::Get_Instance(V)->Buffer;
I->Read_Bytes(S_0, (A_1 > sizeof(Berry_Class::Buffer)) ? sizeof(Berry_Class::Buffer) : A_1); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Read_Bytes_5FCE38CE_0B36_4BB8_9F57_55C33DA47103, "s", "@.i");

const char* Berry_Serial_Class_Read_String_D3598437_3D49_4AEE_ACC7_B438615A22B9(bvm* V, Xila_Namespace::Pin_Types::Serial_Class* I)
{
String_Type S_0;
S_0.Set_Buffer((char*)Berry_Class::Get_Instance(V)->Buffer, sizeof(Berry_Class::Buffer));
I->Read_String(S_0); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Read_String_D3598437_3D49_4AEE_ACC7_B438615A22B9, "s", "@.");

int Berry_Serial_Class_Available_For_Write_D8D0C54F_5CE0_47F1_82A0_53F3BF1047AF(Xila_Namespace::Pin_Types::Serial_Class* I)
{
return (int)I->Available_For_Write(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Available_For_Write_D8D0C54F_5CE0_47F1_82A0_53F3BF1047AF, "i", ".");

void Berry_Serial_Class_Flush_90D5BDD0_24F8_4AB0_A712_254124356518(Xila_Namespace::Pin_Types::Serial_Class* I)
{
return I->Flush(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Flush_90D5BDD0_24F8_4AB0_A712_254124356518, "", ".");

int Berry_Serial_Class_Write_372B466C_A56B_46E5_B794_CA8307AE08D9(Xila_Namespace::Pin_Types::Serial_Class* I, int A_0)
{
return (int)I->Write((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Write_372B466C_A56B_46E5_B794_CA8307AE08D9, "i", ".i");

int Berry_Serial_Class_Write_Bytes_CB91B2EC_6A96_4E0E_8105_199B53AC7C0D(Xila_Namespace::Pin_Types::Serial_Class* I, const unsigned char* A_0, int A_1)
{
return (int)I->Write_Bytes(A_0, (unsigned int)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Write_Bytes_CB91B2EC_6A96_4E0E_8105_199B53AC7C0D, "i", ".si");

int Berry_Serial_Class_Write_String_1A122C94_D83E_49E9_8A66_35897233A47E(Xila_Namespace::Pin_Types::Serial_Class* I, const char* A_0)
{
return (int)I->Write_String(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Write_String_1A122C94_D83E_49E9_8A66_35897233A47E, "i", ".s");

void Berry_Serial_Class_Set_Baud_Rate_BBCD382C_D9EA_4218_8572_682E1D16602F(Xila_Namespace::Pin_Types::Serial_Class* I, int A_0)
{
return I->Set_Baud_Rate((long unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Set_Baud_Rate_BBCD382C_D9EA_4218_8572_682E1D16602F, "", ".i");

int Berry_Serial_Class_Set_Pins_DF6DF0D0_AB5E_4AA8_974A_846992597CCA(Xila_Namespace::Pin_Types::Serial_Class* I, int A_0, int A_1, int A_2 = -1, int A_3 = -1)
{
return (int)I->Set_Pins((signed char)A_0, (signed char)A_1, (signed char)A_2, (signed char)A_3); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Set_Pins_DF6DF0D0_AB5E_4AA8_974A_846992597CCA, "i", ".ii[ii");

int Berry_Serial_Class_Set_Hardware_Flow_Control_7875500A_66BE_4B30_A92B_556510155A85(Xila_Namespace::Pin_Types::Serial_Class* I, bool A_0, bool A_1 = false, bool A_2 = false, int A_3 = 64)
{
return (int)I->Set_Hardware_Flow_Control(A_0, A_1, A_2, (signed char)A_3); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Set_Hardware_Flow_Control_7875500A_66BE_4B30_A92B_556510155A85, "i", ".b[bbi");

int Berry_Serial_Class_Set_Mode_1B133F25_70D5_4A9F_B2B5_02DBB2F4A87D(Xila_Namespace::Pin_Types::Serial_Class* I, int A_0)
{
return (int)I->Set_Mode((Serial_Mode_Type)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Set_Mode_1B133F25_70D5_4A9F_B2B5_02DBB2F4A87D, "i", ".i");

int Berry_Serial_Class_Set_Receive_Buffer_Size_BDBF9EF9_2051_446A_A8C6_D81EE5CB185A(Xila_Namespace::Pin_Types::Serial_Class* I, int A_0)
{
return (int)I->Set_Receive_Buffer_Size((unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Set_Receive_Buffer_Size_BDBF9EF9_2051_446A_A8C6_D81EE5CB185A, "i", ".i");

int Berry_Serial_Class_Set_Transmit_Buffer_Size_45282E6A_3C58_4AB0_9C24_2CCE80257842(Xila_Namespace::Pin_Types::Serial_Class* I, int A_0)
{
return (int)I->Set_Transmit_Buffer_Size((unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Set_Transmit_Buffer_Size_45282E6A_3C58_4AB0_9C24_2CCE80257842, "i", ".i");

void Berry_Serial_Class_Set_Receive_Invert_19328E5E_3DC3_4525_982F_E3999BC93673(Xila_Namespace::Pin_Types::Serial_Class* I, bool A_0)
{
return I->Set_Receive_Invert(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Set_Receive_Invert_19328E5E_3DC3_4525_982F_E3999BC93673, "", ".b");

int Berry_Serial_Class_Get_Baud_Rate_E828C3AE_E96A_4D2C_9A2D_ACE5D40C2251(Xila_Namespace::Pin_Types::Serial_Class* I)
{
return (int)I->Get_Baud_Rate(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Get_Baud_Rate_E828C3AE_E96A_4D2C_9A2D_ACE5D40C2251, "i", ".");

// - - Operators

// - Berry declaration
/* @const_object_info_begin
class Berry_Serial_Type(scope:global, name:Serial_Type)
{
	_p, var
	deinit, ctype_func(Berry_Serial_Class_Deinitialize_86F794D6_EDF7_41AD_995D_AFF2493799BC)
	Begin, ctype_func(Berry_Serial_Class_Begin_7B172760_613B_40E5_9275_BED31FA170D2)
	End, ctype_func(Berry_Serial_Class_End_B04F1BF2_C45F_4361_9FAF_625BA5543F1E)
	Available, ctype_func(Berry_Serial_Class_Available_08EDA836_A789_42B5_9905_1B9128DF954E)
	Peek, ctype_func(Berry_Serial_Class_Peek_ADBC9620_C25A_4A60_A5B5_DFBA88EB17B0)
	Read, ctype_func(Berry_Serial_Class_Read_E572C813_C260_4887_BF34_F315BA831FB6)
	Read_Bytes, ctype_func(Berry_Serial_Class_Read_Bytes_5FCE38CE_0B36_4BB8_9F57_55C33DA47103)
	Read_String, ctype_func(Berry_Serial_Class_Read_String_D3598437_3D49_4AEE_ACC7_B438615A22B9)
	Available_For_Write, ctype_func(Berry_Serial_Class_Available_For_Write_D8D0C54F_5CE0_47F1_82A0_53F3BF1047AF)
	Flush, ctype_func(Berry_Serial_Class_Flush_90D5BDD0_24F8_4AB0_A712_254124356518)
	Write, ctype_func(Berry_Serial_Class_Write_372B466C_A56B_46E5_B794_CA8307AE08D9)
	Write_Bytes, ctype_func(Berry_Serial_Class_Write_Bytes_CB91B2EC_6A96_4E0E_8105_199B53AC7C0D)
	Write_String, ctype_func(Berry_Serial_Class_Write_String_1A122C94_D83E_49E9_8A66_35897233A47E)
	Set_Baud_Rate, ctype_func(Berry_Serial_Class_Set_Baud_Rate_BBCD382C_D9EA_4218_8572_682E1D16602F)
	Set_Pins, ctype_func(Berry_Serial_Class_Set_Pins_DF6DF0D0_AB5E_4AA8_974A_846992597CCA)
	Set_Hardware_Flow_Control, ctype_func(Berry_Serial_Class_Set_Hardware_Flow_Control_7875500A_66BE_4B30_A92B_556510155A85)
	Set_Mode, ctype_func(Berry_Serial_Class_Set_Mode_1B133F25_70D5_4A9F_B2B5_02DBB2F4A87D)
	Set_Receive_Buffer_Size, ctype_func(Berry_Serial_Class_Set_Receive_Buffer_Size_BDBF9EF9_2051_446A_A8C6_D81EE5CB185A)
	Set_Transmit_Buffer_Size, ctype_func(Berry_Serial_Class_Set_Transmit_Buffer_Size_45282E6A_3C58_4AB0_9C24_2CCE80257842)
	Set_Receive_Invert, ctype_func(Berry_Serial_Class_Set_Receive_Invert_19328E5E_3DC3_4525_982F_E3999BC93673)
	Get_Baud_Rate, ctype_func(Berry_Serial_Class_Get_Baud_Rate_E828C3AE_E96A_4D2C_9A2D_ACE5D40C2251)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Berry_Serial_Type.h"
}
// - Functions
void Berry_Pin_Class_Set_Mode_0A3EC816_40F3_4C2C_BFD1_5316EB03BBC0(int A_0, int A_1)
{
return Pin.Set_Mode((unsigned char)A_0, (Mode_Type)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Set_Mode_0A3EC816_40F3_4C2C_BFD1_5316EB03BBC0, "", "ii");


int Berry_Pin_Class_Valid_Output_Pin_5D575B7F_527B_4826_9EBF_CB099044C492(int A_0)
{
return (int)Pin.Valid_Output_Pin((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Valid_Output_Pin_5D575B7F_527B_4826_9EBF_CB099044C492, "i", "i");


void Berry_Pin_Class_Digital_Write_95F33E8E_267C_4004_AF89_9B24E5A204B4(int A_0, int A_1)
{
return Pin.Digital_Write((unsigned char)A_0, (Digital_State_Type)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Digital_Write_95F33E8E_267C_4004_AF89_9B24E5A204B4, "", "ii");


int Berry_Pin_Class_Digital_Read_DBA23AE7_A480_4C1F_BFBF_20DC4DD5FC6D(int A_0)
{
return (int)Pin.Digital_Read((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Digital_Read_DBA23AE7_A480_4C1F_BFBF_20DC4DD5FC6D, "i", "i");


int Berry_Pin_Class_Valid_Digital_Pin_2B21F5C4_4E6E_4B6D_94E5_AE1896E28189(int A_0)
{
return (int)Pin.Valid_Digital_Pin((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Valid_Digital_Pin_2B21F5C4_4E6E_4B6D_94E5_AE1896E28189, "i", "i");


int Berry_Pin_Class_Get_Pulse_In_E17FA20A_7CC2_4C8D_B498_6448BE21AE4F(int A_0, int A_1, int A_2 = 1000000)
{
return (int)Pin.Get_Pulse_In((unsigned char)A_0, (Digital_State_Type)A_1, (unsigned int)A_2); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Get_Pulse_In_E17FA20A_7CC2_4C8D_B498_6448BE21AE4F, "i", "ii[i");


int Berry_Pin_Class_Analog_Read_710C6C00_0D94_46D6_98DC_877A291469D0(int A_0)
{
return (int)Pin.Analog_Read((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Analog_Read_710C6C00_0D94_46D6_98DC_877A291469D0, "i", "i");


int Berry_Pin_Class_Analog_Read_Milli_Volts_FEE9AFA3_6C2E_4186_A0A0_96A5700FC814(int A_0)
{
return (int)Pin.Analog_Read_Milli_Volts((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Analog_Read_Milli_Volts_FEE9AFA3_6C2E_4186_A0A0_96A5700FC814, "i", "i");


void Berry_Pin_Class_Set_Voltage_Reference_Pin_0F4DDBB1_4D1F_4932_BC55_A57BB881598B(int A_0)
{
return Pin.Set_Voltage_Reference_Pin((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Set_Voltage_Reference_Pin_0F4DDBB1_4D1F_4932_BC55_A57BB881598B, "", "i");


void Berry_Pin_Class_Set_Read_Resolutions_F831A283_3CB3_4E5D_9574_6146122C411F(int A_0)
{
return Pin.Set_Read_Resolutions((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Set_Read_Resolutions_F831A283_3CB3_4E5D_9574_6146122C411F, "", "i");


void Berry_Pin_Class_Set_Width_9063F4A8_1F8C_44A3_9CD9_E8FC3B07A775(int A_0)
{
return Pin.Set_Width((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Set_Width_9063F4A8_1F8C_44A3_9CD9_E8FC3B07A775, "", "i");


void Berry_Pin_Class_Set_Clock_Divider_79193433_85FC_4795_A8FA_9910CC9B4DD6(int A_0)
{
return Pin.Set_Clock_Divider((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Set_Clock_Divider_79193433_85FC_4795_A8FA_9910CC9B4DD6, "", "i");


void Berry_Pin_Class_Set_Attenuation_D5E3CB26_968F_45AD_B042_DE06697760AB(int A_0)
{
return Pin.Set_Attenuation((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Set_Attenuation_D5E3CB26_968F_45AD_B042_DE06697760AB, "", "i");


void Berry_Pin_Class_Set_Attenuation_D824FE85_AF4F_4A8E_9D2F_610E207698F7(int A_0, int A_1)
{
return Pin.Set_Attenuation((unsigned char)A_0, (unsigned char)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Set_Attenuation_D824FE85_AF4F_4A8E_9D2F_610E207698F7, "", "ii");


void Berry_Pin_Class_Attach_Interrupt_AC05936D_7E73_47D3_A702_D386887E99D3(int A_0, void (*  A_1)(  ), int A_2)
{
return Pin.Attach_Interrupt((unsigned char)A_0, A_1, (Interrupt_Mode_Type)A_2); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Attach_Interrupt_AC05936D_7E73_47D3_A702_D386887E99D3, "", "i^^i");



void Berry_Pin_Class_Detach_Interrupt_96D84D35_135C_4634_8FCD_7DE839E4DC46(int A_0)
{
return Pin.Detach_Interrupt((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Detach_Interrupt_96D84D35_135C_4634_8FCD_7DE839E4DC46, "", "i");


void* Berry_Pin_Class_Get_Pointer()
{
	return (Module_Type*)&Pin;
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Get_Pointer, "c", "")

// - Berry declaration
/* @const_object_info_begin
module Pin (scope:global)
{
	Set_Mode, ctype_func(Berry_Pin_Class_Set_Mode_0A3EC816_40F3_4C2C_BFD1_5316EB03BBC0)
	Valid_Output_Pin, ctype_func(Berry_Pin_Class_Valid_Output_Pin_5D575B7F_527B_4826_9EBF_CB099044C492)
	Digital_Write, ctype_func(Berry_Pin_Class_Digital_Write_95F33E8E_267C_4004_AF89_9B24E5A204B4)
	Digital_Read, ctype_func(Berry_Pin_Class_Digital_Read_DBA23AE7_A480_4C1F_BFBF_20DC4DD5FC6D)
	Valid_Digital_Pin, ctype_func(Berry_Pin_Class_Valid_Digital_Pin_2B21F5C4_4E6E_4B6D_94E5_AE1896E28189)
	Get_Pulse_In, ctype_func(Berry_Pin_Class_Get_Pulse_In_E17FA20A_7CC2_4C8D_B498_6448BE21AE4F)
	Analog_Read, ctype_func(Berry_Pin_Class_Analog_Read_710C6C00_0D94_46D6_98DC_877A291469D0)
	Analog_Read_Milli_Volts, ctype_func(Berry_Pin_Class_Analog_Read_Milli_Volts_FEE9AFA3_6C2E_4186_A0A0_96A5700FC814)
	Set_Voltage_Reference_Pin, ctype_func(Berry_Pin_Class_Set_Voltage_Reference_Pin_0F4DDBB1_4D1F_4932_BC55_A57BB881598B)
	Set_Read_Resolutions, ctype_func(Berry_Pin_Class_Set_Read_Resolutions_F831A283_3CB3_4E5D_9574_6146122C411F)
	Set_Width, ctype_func(Berry_Pin_Class_Set_Width_9063F4A8_1F8C_44A3_9CD9_E8FC3B07A775)
	Set_Clock_Divider, ctype_func(Berry_Pin_Class_Set_Clock_Divider_79193433_85FC_4795_A8FA_9910CC9B4DD6)
	Set_Attenuation, ctype_func(Berry_Pin_Class_Set_Attenuation_D5E3CB26_968F_45AD_B042_DE06697760AB)
	Set_Attenuation, ctype_func(Berry_Pin_Class_Set_Attenuation_D824FE85_AF4F_4A8E_9D2F_610E207698F7)
	Attach_Interrupt, ctype_func(Berry_Pin_Class_Attach_Interrupt_AC05936D_7E73_47D3_A702_D386887E99D3)
	Detach_Interrupt, ctype_func(Berry_Pin_Class_Detach_Interrupt_96D84D35_135C_4634_8FCD_7DE839E4DC46)
	Get_Pointer, ctype_func(Berry_Pin_Class_Get_Pointer)

	Serial_Type, class(Berry_Serial_Type)

	Serial_Configuration_Data_5_Bits, int(134217744)
	Serial_Configuration_Data_6_Bits, int(134217748)
	Serial_Configuration_Data_7_Bits, int(134217752)
	Serial_Configuration_Data_8_Bits, int(134217756)
	Serial_Configuration_Data_5_Bits_2_Stop_Bits, int(134217776)
	Serial_Configuration_Data_6_Bits_2_Stop_Bits, int(134217780)
	Serial_Configuration_Data_7_Bits_2_Stop_Bits, int(134217784)
	Serial_Configuration_Data_8_Bits_2_Stop_Bits, int(134217788)
	Serial_Configuration_Data_5_Bits_Even_Parity, int(134217746)
	Serial_Configuration_Data_6_Bits_Even_Parity, int(134217750)
	Serial_Configuration_Data_7_Bits_Even_Parity, int(134217754)
	Serial_Configuration_Data_8_Bits_Even_Parity, int(134217758)
	Serial_Configuration_Data_5_Bits_Even_Parity_2_Stop_Bits, int(134217778)
	Serial_Configuration_Data_6_Bits_Even_Parity_2_Stop_Bits, int(134217782)
	Serial_Configuration_Data_7_Bits_Even_Parity_2_Stop_Bits, int(134217786)
	Serial_Configuration_Data_8_Bits_Even_Parity_2_Stop_Bits, int(134217790)
	Serial_Configuration_Data_5_Bits_Odd_Parity, int(134217747)
	Serial_Configuration_Data_6_Bits_Odd_Parity, int(134217751)
	Serial_Configuration_Data_7_Bits_Odd_Parity, int(134217755)
	Serial_Configuration_Data_8_Bits_Odd_Parity, int(134217759)
	Serial_Configuration_Data_5_Bits_Odd_Parity_2_Stop_Bits, int(134217779)
	Serial_Configuration_Data_6_Bits_Odd_Parity_2_Stop_Bits, int(134217783)
	Serial_Configuration_Data_7_Bits_Odd_Parity_2_Stop_Bits, int(134217787)
	Serial_Configuration_Data_8_Bits_Odd_Parity_2_Stop_Bits, int(134217791)

	Serial_Mode_Regular, int(0)
	Serial_Mode_RS485_Half_Duplex, int(1)
	Serial_Mode_IRDA, int(2)
	Serial_Mode_RS485_Collision_Detect, int(3)
	Serial_Mode_RS485_Custom, int(4)

	Digital_State_Low, int(0)
	Digital_State_High, int(1)

	Mode_Input, int(1)
	Mode_Output, int(3)
	Mode_Pull_Up, int(4)
	Mode_Input_Pull_Up, int(5)
	Mode_Pull_Down, int(8)
	Mode_Input_Pull_Down, int(9)
	Mode_Open_Drain, int(16)
	Mode_Output_Open_Drain, int(18)
	Mode_Analog, int(192)

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