#include "be_constobj.h"

static be_define_const_map_slots(m_libPin_map) {
    { be_const_key(Set_Clock_Divider, -1), be_const_ctype_func(Berry_Pin_Class_Set_Clock_Divider_79193433_85FC_4795_A8FA_9910CC9B4DD6) },
    { be_const_key(Mode_Open_Drain, 39), be_const_int(16) },
    { be_const_key(Detach_Interrupt, -1), be_const_ctype_func(Berry_Pin_Class_Detach_Interrupt_96D84D35_135C_4634_8FCD_7DE839E4DC46) },
    { be_const_key(Serial_Type, -1), be_const_class(Berry_Serial_Type) },
    { be_const_key(Valid_Output_Pin, -1), be_const_ctype_func(Berry_Pin_Class_Valid_Output_Pin_5D575B7F_527B_4826_9EBF_CB099044C492) },
    { be_const_key(Serial_Configuration_Data_8_Bits_Odd_Parity, -1), be_const_int(134217759) },
    { be_const_key(Set_Attenuation, -1), be_const_ctype_func(Berry_Pin_Class_Set_Attenuation_D824FE85_AF4F_4A8E_9D2F_610E207698F7) },
    { be_const_key(Serial_Configuration_Data_7_Bits, 36), be_const_int(134217752) },
    { be_const_key(Serial_Configuration_Data_7_Bits_Even_Parity, 57), be_const_int(134217754) },
    { be_const_key(Mode_Input, -1), be_const_int(1) },
    { be_const_key(Digital_State_High, 3), be_const_int(1) },
    { be_const_key(Interrupt_Mode_Rising, -1), be_const_int(1) },
    { be_const_key(Serial_Configuration_Data_8_Bits_Odd_Parity_2_Stop_Bits, -1), be_const_int(134217791) },
    { be_const_key(Serial_Configuration_Data_6_Bits, 35), be_const_int(134217748) },
    { be_const_key(Mode_Output, 51), be_const_int(3) },
    { be_const_key(Get_Pointer, -1), be_const_ctype_func(Berry_Pin_Class_Get_Pointer) },
    { be_const_key(Analog_Read_Milli_Volts, -1), be_const_ctype_func(Berry_Pin_Class_Analog_Read_Milli_Volts_FEE9AFA3_6C2E_4186_A0A0_96A5700FC814) },
    { be_const_key(Digital_Read, -1), be_const_ctype_func(Berry_Pin_Class_Digital_Read_DBA23AE7_A480_4C1F_BFBF_20DC4DD5FC6D) },
    { be_const_key(Mode_Pull_Down, 25), be_const_int(8) },
    { be_const_key(Serial_Configuration_Data_6_Bits_Even_Parity_2_Stop_Bits, 28), be_const_int(134217782) },
    { be_const_key(Serial_Configuration_Data_8_Bits_Even_Parity_2_Stop_Bits, 62), be_const_int(134217790) },
    { be_const_key(Serial_Configuration_Data_6_Bits_Even_Parity, -1), be_const_int(134217750) },
    { be_const_key(Set_Voltage_Reference_Pin, -1), be_const_ctype_func(Berry_Pin_Class_Set_Voltage_Reference_Pin_0F4DDBB1_4D1F_4932_BC55_A57BB881598B) },
    { be_const_key(Mode_Pull_Up, 46), be_const_int(4) },
    { be_const_key(Serial_Configuration_Data_7_Bits_2_Stop_Bits, -1), be_const_int(134217784) },
    { be_const_key(Interrupt_Mode_On_Low, -1), be_const_int(4) },
    { be_const_key(Serial_Mode_RS485_Custom, -1), be_const_int(4) },
    { be_const_key(Serial_Mode_Regular, -1), be_const_int(0) },
    { be_const_key(Serial_Configuration_Data_5_Bits_2_Stop_Bits, -1), be_const_int(134217776) },
    { be_const_key(Serial_Configuration_Data_8_Bits_Even_Parity, 40), be_const_int(134217758) },
    { be_const_key(Set_Read_Resolutions, -1), be_const_ctype_func(Berry_Pin_Class_Set_Read_Resolutions_F831A283_3CB3_4E5D_9574_6146122C411F) },
    { be_const_key(Interrupt_Mode_Change, -1), be_const_int(3) },
    { be_const_key(Analog_Read, 20), be_const_ctype_func(Berry_Pin_Class_Analog_Read_710C6C00_0D94_46D6_98DC_877A291469D0) },
    { be_const_key(Serial_Configuration_Data_5_Bits, 24), be_const_int(134217744) },
    { be_const_key(Get_Pulse_In, 21), be_const_ctype_func(Berry_Pin_Class_Get_Pulse_In_E17FA20A_7CC2_4C8D_B498_6448BE21AE4F) },
    { be_const_key(Serial_Mode_RS485_Collision_Detect, -1), be_const_int(3) },
    { be_const_key(Serial_Configuration_Data_7_Bits_Even_Parity_2_Stop_Bits, -1), be_const_int(134217786) },
    { be_const_key(Interrupt_Mode_Falling, 15), be_const_int(2) },
    { be_const_key(Serial_Mode_IRDA, 55), be_const_int(2) },
    { be_const_key(Mode_Analog, -1), be_const_int(192) },
    { be_const_key(Mode_Input_Pull_Up, -1), be_const_int(5) },
    { be_const_key(Mode_Output_Open_Drain, 42), be_const_int(18) },
    { be_const_key(Serial_Configuration_Data_5_Bits_Odd_Parity_2_Stop_Bits, 43), be_const_int(134217779) },
    { be_const_key(Serial_Configuration_Data_6_Bits_Odd_Parity_2_Stop_Bits, -1), be_const_int(134217783) },
    { be_const_key(Serial_Configuration_Data_7_Bits_Odd_Parity_2_Stop_Bits, 12), be_const_int(134217787) },
    { be_const_key(Interrupt_Mode_On_High_WE, -1), be_const_int(7) },
    { be_const_key(Digital_State_Low, -1), be_const_int(0) },
    { be_const_key(Digital_Write, -1), be_const_ctype_func(Berry_Pin_Class_Digital_Write_95F33E8E_267C_4004_AF89_9B24E5A204B4) },
    { be_const_key(Interrupt_Mode_On_High, -1), be_const_int(5) },
    { be_const_key(Set_Width, -1), be_const_ctype_func(Berry_Pin_Class_Set_Width_9063F4A8_1F8C_44A3_9CD9_E8FC3B07A775) },
    { be_const_key(Serial_Configuration_Data_8_Bits_2_Stop_Bits, 0), be_const_int(134217788) },
    { be_const_key(Serial_Configuration_Data_5_Bits_Even_Parity_2_Stop_Bits, -1), be_const_int(134217778) },
    { be_const_key(Serial_Configuration_Data_6_Bits_2_Stop_Bits, -1), be_const_int(134217780) },
    { be_const_key(Serial_Configuration_Data_6_Bits_Odd_Parity, 2), be_const_int(134217751) },
    { be_const_key(Serial_Configuration_Data_5_Bits_Odd_Parity, -1), be_const_int(134217747) },
    { be_const_key(Serial_Mode_RS485_Half_Duplex, -1), be_const_int(1) },
    { be_const_key(Serial_Configuration_Data_5_Bits_Even_Parity, -1), be_const_int(134217746) },
    { be_const_key(Set_Mode, -1), be_const_ctype_func(Berry_Pin_Class_Set_Mode_0A3EC816_40F3_4C2C_BFD1_5316EB03BBC0) },
    { be_const_key(Interrupt_Mode_On_Low_WE, 32), be_const_int(6) },
    { be_const_key(Valid_Digital_Pin, -1), be_const_ctype_func(Berry_Pin_Class_Valid_Digital_Pin_2B21F5C4_4E6E_4B6D_94E5_AE1896E28189) },
    { be_const_key(Serial_Configuration_Data_8_Bits, 6), be_const_int(134217756) },
    { be_const_key(Interrupt_Mode_Disabled, 56), be_const_int(0) },
    { be_const_key(Serial_Configuration_Data_7_Bits_Odd_Parity, 27), be_const_int(134217755) },
    { be_const_key(Attach_Interrupt, -1), be_const_ctype_func(Berry_Pin_Class_Attach_Interrupt_AC05936D_7E73_47D3_A702_D386887E99D3) },
    { be_const_key(Mode_Input_Pull_Down, 7), be_const_int(9) },
};

static be_define_const_map(
    m_libPin_map,
    65
);

static be_define_const_module(
    m_libPin,
    "Pin"
);

BE_EXPORT_VARIABLE be_define_const_native_module(Pin);
