#include "be_constobj.h"

static be_define_const_map_slots(Berry_Object_Type_map) {
    { be_const_key(Add_Flag, -1), be_const_ctype_func(Berry_Object_Class_Add_Flag_1FD10F84_F74A_4691_9B2A_CCF492A485FB) },
    { be_const_key(Set_Style_Background_Image_Recolor_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Background_Image_Recolor_Opacity_4A19757D_ADFF_4450_9800_B86F4E20FFD5) },
    { be_const_key(Get_Style_Background_Color, 144), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Color_937F9C7C_8CEB_4E0D_A9C1_8AD9BD6FA115) },
    { be_const_key(Get_Style_Grid_Cell_Column_Position, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Grid_Cell_Column_Position_92F6B2A2_55C1_453C_9D87_B0D6E767B868) },
    { be_const_key(Set_Style_Shadow_Color, 180), be_const_ctype_func(Berry_Object_Class_Set_Style_Shadow_Color_685FC09E_44E6_4A37_8FD6_A94574EBB49E) },
    { be_const_key(Set_Height, -1), be_const_ctype_func(Berry_Object_Class_Set_Height_7C74096D_A434_4EB6_BCA0_A3FBF9470905) },
    { be_const_key(Get_Style_Width, 135), be_const_ctype_func(Berry_Object_Class_Get_Style_Width_990224AA_8FFC_491C_B53A_92F3C59CEB4E) },
    { be_const_key(DPX, 154), be_const_ctype_func(Berry_Object_Class_DPX_961F9643_2BDB_4507_8A06_9E10F998955B) },
    { be_const_key(Get_Style_Text_Decor, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Text_Decor_5A081ACD_F07A_4688_97E2_5E80DAC333D7) },
    { be_const_key(Get_Style_Grid_Column_Descriptor_Array, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Grid_Column_Descriptor_Array_200D7690_1617_4F3A_B938_6B10DA1000DE) },
    { be_const_key(Set_Style_Image_Recolor_Opacity, 249), be_const_ctype_func(Berry_Object_Class_Set_Style_Image_Recolor_Opacity_DD38B163_F57D_4072_B01F_6DEA40F37D2F) },
    { be_const_key(Get_Child_Index, 56), be_const_ctype_func(Berry_Object_Class_Get_Child_Index_D24BD147_CFC7_4520_9C12_AF66FA2811BB) },
    { be_const_key(Get_Style_Line_Dash_Width, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Line_Dash_Width_2194A30A_8E3E_49C8_8852_85A9BAA89488) },
    { be_const_key(Get_Style_Background_Image_Source, 148), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Image_Source_6D291168_6B65_4726_AF98_77EC231A5249) },
    { be_const_key(Move_Foreground, -1), be_const_ctype_func(Berry_Object_Class_Move_Foreground_16DCA64A_7F83_4AC0_9234_41D9789C3992) },
    { be_const_key(Get_Style_Grid_Cell_Row_Span, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Grid_Cell_Row_Span_170E6AD4_8A71_4CDA_9657_93B3952B83EE) },
    { be_const_key(Get_Style_Outline_Color_Filtered, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Outline_Color_Filtered_EDBC833E_884A_4FC5_9EA7_73FE44214065) },
    { be_const_key(Set_Style_Background_Main_Stop, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Background_Main_Stop_27CE03EB_1CBE_4861_9A30_503E416DA611) },
    { be_const_key(Get_Style_Flex_Cross_Place, 13), be_const_ctype_func(Berry_Object_Class_Get_Style_Flex_Cross_Place_E43C5396_6FFF_4419_B31D_DE04B13CD7DC) },
    { be_const_key(Set_Style_Flex_Grow, 11), be_const_ctype_func(Berry_Object_Class_Set_Style_Flex_Grow_D73D0DA2_DA36_447D_8E01_5411B083EABD) },
    { be_const_key(Get_Style_Arc_Image_Source, 150), be_const_ctype_func(Berry_Object_Class_Get_Style_Arc_Image_Source_1DF5AB55_5BAE_486F_96DE_F032747EB17D) },
    { be_const_key(Set_Style_Background_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Background_Opacity_7BEF9E3C_5C22_43DC_B289_DCD7DF63C7AE) },
    { be_const_key(Get_Style_X_, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_X_243C42D8_A236_4C0E_B10F_0C7AEE14C289) },
    { be_const_key(Set_Style_Grid_Column_Alignment, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Grid_Column_Alignment_15D922EC_4E73_48F4_BB8C_3D4524175FCD) },
    { be_const_key(Add_Style, 149), be_const_ctype_func(Berry_Object_Class_Add_Style_0A7E35E5_5523_4439_A7D1_393FAF90F8AB) },
    { be_const_key(Set_Style_Y, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Y_3DF7C82E_035F_4081_B0A6_DAED795337EC) },
    { be_const_key(Set_Position_X_, -1), be_const_ctype_func(Berry_Object_Class_Set_Position_X_49ADF43C_3EB1_4740_83F8_993CF972946F) },
    { be_const_key(Has_Any_Flag, -1), be_const_ctype_func(Berry_Object_Class_Has_Any_Flag_6DD9C412_6B5C_4DA0_B0C5_42D54759E7D5) },
    { be_const_key(Send_Event, 208), be_const_ctype_func(Berry_Object_Class_Send_Event_842BD741_111B_4398_B79E_6D98DB3A59CE) },
    { be_const_key(Set_Style_Grid_Cell_Row_Position, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Grid_Cell_Row_Position_02781C0C_20B7_499C_99FD_0F09558E936A) },
    { be_const_key(Set_Tile, 60), be_const_ctype_func(Berry_Object_Class_Set_Tile_FFB69B7A_B7F9_40EB_BE5A_6212BEB914A7) },
    { be_const_key(Set_Style_Color_Filter_Descriptor, 252), be_const_ctype_func(Berry_Object_Class_Set_Style_Color_Filter_Descriptor_D262CBFD_6FFA_4EE1_BA4A_DDE77198D127) },
    { be_const_key(Set_Style_Pad_Row, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Pad_Row_95FC3D29_FEE6_402B_B6DB_44CB3C970242) },
    { be_const_key(Set_Style_Border_Post, 207), be_const_ctype_func(Berry_Object_Class_Set_Style_Border_Post_398B0441_99B0_4409_AE81_B95CFF36A625) },
    { be_const_key(Set_Style_Line_Dash_Gap, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Line_Dash_Gap_CB89CB2D_2142_4702_859C_6DE12E9C0FC9) },
    { be_const_key(Set_Style_Grid_Cell_Y_Alignment, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Grid_Cell_Y_Alignment_1A0C746A_C77F_4812_B637_BA0DDD3B5706) },
    { be_const_key(Get_Style_Arc_Color_Filtered, 83), be_const_ctype_func(Berry_Object_Class_Get_Style_Arc_Color_Filtered_16B72330_22D4_47D9_BC6E_4A5C6E59D57E) },
    { be_const_key(Set_Style_Shadow_Offset_X_, 49), be_const_ctype_func(Berry_Object_Class_Set_Style_Shadow_Offset_X_5D330F55_7946_4CC2_A873_9A2EA68D4765) },
    { be_const_key(Set_Style_Grid_Cell_Column_Position, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Grid_Cell_Column_Position_A6D0D654_8A19_47AB_ADF5_6312B65B7A28) },
    { be_const_key(Get_Style_Text_Line_Space, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Text_Line_Space_848153C7_A31D_4E5E_9105_ADDEA38D5A9E) },
    { be_const_key(Set_Style_Grid_Cell_X__Alignment, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Grid_Cell_X_Alignment_FBF4BEBB_5619_45B1_ABF0_A7C37CDAD217) },
    { be_const_key(Set_Style_Minimum_Width, 175), be_const_ctype_func(Berry_Object_Class_Set_Style_Minimum_Width_6AE406F0_8093_4BDA_B299_71A487A7CA1F) },
    { be_const_key(Get_Style_Shadow_Color, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Shadow_Color_958B2090_26D1_49A3_B10D_579C592151A8) },
    { be_const_key(Set_Style_Image_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Image_Opacity_6712714E_6825_461A_AE4D_945C91301D36) },
    { be_const_key(Get_Style_Pad_Row, 96), be_const_ctype_func(Berry_Object_Class_Get_Style_Pad_Row_A73F1E8C_ED52_4937_9C1E_561C890817FE) },
    { be_const_key(Create, -1), be_const_ctype_func(Berry_Object_Class_Create_9262E75A_B503_47CA_A3C7_34949C2A4DB6) },
    { be_const_key(Set_Style_Line_Dash_Width, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Line_Dash_Width_8FAA152C_425D_4C52_AB16_1128C7FF97CB) },
    { be_const_key(Get_Style_Minimum_Width, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Minimum_Width_426AF2E6_F11A_4DB5_847F_E4390A23450C) },
    { be_const_key(Get_Style_Outline_Width, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Outline_Width_9AD8E5BE_9CD7_4794_86D5_D0C65639387D) },
    { be_const_key(Set_Alignment, 170), be_const_ctype_func(Berry_Object_Class_Set_Alignment_F68D837A_FDE8_4AFD_A3A5_A10C04997AEE) },
    { be_const_key(Get_Style_Color_Filter_Opacity, 26), be_const_ctype_func(Berry_Object_Class_Get_Style_Color_Filter_Opacity_4CE3479D_37A1_4B8F_AD53_DE8FB9AD0553) },
    { be_const_key(Set_Style_Border_Color, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Border_Color_2679687B_D70B_4B20_9E36_E84DFEB574ED) },
    { be_const_key(Get_Style_Arc_Rounded, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Arc_Rounded_EA4F7A32_2203_4D75_8ACB_CFAAE5CD3C0D) },
    { be_const_key(Set_Style_Grid_Column_Descriptor_Array, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Grid_Column_Descriptor_Array_B470D376_7F36_42C8_9A01_672705A5A9FC) },
    { be_const_key(Get_Style_Line_Color_Filtered, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Line_Color_Filtered_6D96F9DA_427D_4047_9D3F_4CE043729C8A) },
    { be_const_key(Set_Style_Text_Color, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Text_Color_B7CD0598_5322_456F_BBFE_97B3F13007BB) },
    { be_const_key(_X21_X3D, -1), be_const_ctype_func(Berry_Object_Class_Operator_54FE79E7_34BC_4BA6_930A_E316DDFC8F12) },
    { be_const_key(Get_Style_Grid_Column_Alignment, 0), be_const_ctype_func(Berry_Object_Class_Get_Style_Grid_Column_Alignment_0BD9FADC_12B2_42D6_AA4F_F6BB077609A5) },
    { be_const_key(Get_Style_Maximum_Height, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Maximum_Height_68C5CD12_C4D6_4DED_9258_1D20311E0DE3) },
    { be_const_key(Set_Style_Arc_Width, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Arc_Width_A16C5025_08F0_4F87_9584_6070ECAD8EDF) },
    { be_const_key(Set_Style_Background_Image_Opacity, 195), be_const_ctype_func(Berry_Object_Class_Set_Style_Background_Image_Opacity_B731273D_D76B_4A0D_B094_6E7CFF73AB3C) },
    { be_const_key(Set_Style_Text_Decor, 55), be_const_ctype_func(Berry_Object_Class_Set_Style_Text_Decor_903F762E_EFD7_40D4_A594_A5DA02014E54) },
    { be_const_key(Delete, -1), be_const_ctype_func(Berry_Object_Class_Delete_50595984_B565_4C15_9ACF_FE8DCF699BAC) },
    { be_const_key(Get_Style_Pad_Column, 235), be_const_ctype_func(Berry_Object_Class_Get_Style_Pad_Column_44F71C1B_6241_49EE_9BC6_AE132350BCE0) },
    { be_const_key(deinit, 10), be_const_ctype_func(Berry_Object_Class_Deinitialize_24F93A69_3C36_4FA9_9BE1_9373F4DB8AB2) },
    { be_const_key(Get_Style_Base_Direction, 247), be_const_ctype_func(Berry_Object_Class_Get_Style_Base_Direction_1D1B7705_D292_48AF_9D81_5BAA079D1EBA) },
    { be_const_key(Set_Style_Transform_Zoom, 38), be_const_ctype_func(Berry_Object_Class_Set_Style_Transform_Zoom_343F3265_BC63_41C3_A3E9_C2C667B9316B) },
    { be_const_key(Get_Style_Image_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Image_Opacity_2F9E8FBB_D3E7_4AB7_B6DE_2FBFC61AA4C0) },
    { be_const_key(Set_Style_Animation_Speed, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Animation_Speed_CF997D3B_C16C_4BB4_A21B_8E2E22E4F174) },
    { be_const_key(Get_Scroll_Left, -1), be_const_ctype_func(Berry_Object_Class_Get_Scroll_Left_2856D290_F0DE_4361_95FA_23A3288ECB1B) },
    { be_const_key(Get_Child, 140), be_const_ctype_func(Berry_Object_Class_Get_Child_CEC21067_63B4_4428_93BA_B5FE75866C1E) },
    { be_const_key(Get_Style_Translate_X_, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Translate_X_DA580C35_3C8D_4828_85BA_53ED4D479759) },
    { be_const_key(Set_Style_Base_Direction, 156), be_const_ctype_func(Berry_Object_Class_Set_Style_Base_Direction_31808C56_D176_488E_BE16_556D2F8DC6AE) },
    { be_const_key(Set_Style_Grid_Row_Descriptor_Array, 147), be_const_ctype_func(Berry_Object_Class_Set_Style_Grid_Row_Descriptor_Array_219C24CE_A284_48E2_AC38_7043F03C9E61) },
    { be_const_key(Set_Style_X_, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_X_6D9823D6_FA58_4D7D_9E48_14BD6C2CC8E9) },
    { be_const_key(Set_Grid_Alignment, 131), be_const_ctype_func(Berry_Object_Class_Set_Grid_Alignment_141F33FE_4549_43FC_A684_13817471F842) },
    { be_const_key(Get_Style_Image_Recolor_Opacity, 51), be_const_ctype_func(Berry_Object_Class_Get_Style_Image_Recolor_Opacity_BDB249DB_867E_47BA_AFA4_5C8AC312DECC) },
    { be_const_key(Set_Style_Text_Opacity, 241), be_const_ctype_func(Berry_Object_Class_Set_Style_Text_Opacity_4E15AD9D_D4E9_42CA_8864_4FDDB162D571) },
    { be_const_key(Get_Style_Shadow_Offset_Y, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Shadow_Offset_Y_F84724E2_658B_4D51_8F34_C8100AD4AD78) },
    { be_const_key(Get_State, -1), be_const_ctype_func(Berry_Object_Class_Get_State_A2BD1054_2567_42BC_BED0_59D4FF7EE56B) },
    { be_const_key(Set_Style_Arc_Color, 14), be_const_ctype_func(Berry_Object_Class_Set_Style_Arc_Color_C32B4CCB_7437_4D70_B569_59E97FE104D8) },
    { be_const_key(Set_Flex_Alignment, -1), be_const_ctype_func(Berry_Object_Class_Set_Flex_Alignment_29F3B9C6_C367_4209_B2EB_B58EE3DC8914) },
    { be_const_key(Get_Style_Shadow_Spread, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Shadow_Spread_815F362D_144B_4F57_AA48_D6C8ED6F83AD) },
    { be_const_key(Set_Flex_Flow, 250), be_const_ctype_func(Berry_Object_Class_Set_Flex_Flow_FD7758F1_4DE6_427F_8B98_2D0316DA59F4) },
    { be_const_key(Set_Style_Background_Color, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Background_Color_2AF86EDD_8FFD_4E54_8D1B_4F50EF67B398) },
    { be_const_key(Get_Style_Grid_Cell_Y_Alignment, 118), be_const_ctype_func(Berry_Object_Class_Get_Style_Grid_Cell_Y_Alignment_9DF56593_34B4_4F4F_BD54_652763D04FB5) },
    { be_const_key(Set_Style_Shadow_Spread, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Shadow_Spread_2AD56D3C_D5F7_440B_AE44_9C053FDD0522) },
    { be_const_key(Get_Style_Flex_Main_Place, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Flex_Main_Place_B3CBE4E7_64A8_49A9_BC7A_972672A47B52) },
    { be_const_key(Scroll_Vertically, -1), be_const_ctype_func(Berry_Object_Class_Scroll_Vertically_6C4CA8F2_7171_4A7D_9ED7_2943DC0A68EB) },
    { be_const_key(Get_Style_Blend_Mode, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Blend_Mode_AF4AE961_55F5_4574_80C6_9F1BE59B5200) },
    { be_const_key(Remove_Event, 21), be_const_ctype_func(Berry_Object_Class_Remove_Event_9E5C2EB3_0880_449F_944A_457B5867B866) },
    { be_const_key(Set_Style_Flex_Track_Place, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Flex_Track_Place_40CC79C2_9C30_46E7_86EE_45FE1813D735) },
    { be_const_key(Get_Style_Background_Image_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Image_Opacity_598AAD3B_DC75_4287_842A_158D52F2231C) },
    { be_const_key(Clear_Pointer, -1), be_const_ctype_func(Berry_Object_Class_Clear_Pointer_10787190_D4FC_4E89_8F42_E84B5DCFA190) },
    { be_const_key(Set_Style_Border_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Border_Opacity_970A1B0C_4661_4472_95A0_EA9B6E732DD2) },
    { be_const_key(Get_Style_Line_Width, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Line_Width_DFD7F68E_5BAB_4635_BEEA_EAD227E3F8D0) },
    { be_const_key(Set_Style_Radius, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Radius_69E1ECA5_EDD6_4C2E_901E_95A91553879D) },
    { be_const_key(Get_Group, 8), be_const_ctype_func(Berry_Object_Class_Get_Group_48FA14F8_FF28_459C_9320_855EC545F29E) },
    { be_const_key(_p, -1), be_const_var(0) },
    { be_const_key(Set_Style_Maximum_Width, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Maximum_Width_DDDDBB33_CCEF_4E24_999B_5B0A57095AD2) },
    { be_const_key(Get_Style_Translate_Y, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Translate_Y_C06E51BE_FBE5_4C82_B621_C79662C9B3F9) },
    { be_const_key(Set_Index, -1), be_const_ctype_func(Berry_Object_Class_Set_Index_6D52D1E4_498F_41F4_BF5D_D8E290F20DAC) },
    { be_const_key(Set_Position_Y, -1), be_const_ctype_func(Berry_Object_Class_Set_Position_Y_1540EEA7_A565_4DEB_B463_C6AE2DD5B554) },
    { be_const_key(Get_Style_Background_Gradient_Color_Filtered, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Gradient_Color_Filtered_0266CF97_9377_4305_A09F_382D381E239F) },
    { be_const_key(Set_Style_Minimum_Height, 36), be_const_ctype_func(Berry_Object_Class_Set_Style_Minimum_Height_B2653C47_6EAA_4FF1_9A40_EA8EC854B80E) },
    { be_const_key(Get_Scroll_Y, 73), be_const_ctype_func(Berry_Object_Class_Get_Scroll_Y_FC2CDA4E_3594_4495_864F_9E0AD58B679C) },
    { be_const_key(Set_Style_Line_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Line_Opacity_C6937079_0B7B_43AF_AA3A_9FD846CEE53A) },
    { be_const_key(_X3D_X3D, -1), be_const_ctype_func(Berry_Object_Class_Operator_915F0119_62F8_423D_A05B_87218952580F) },
    { be_const_key(Add_State, -1), be_const_ctype_func(Berry_Object_Class_Add_State_730768B9_D012_42C4_A085_27384290EC82) },
    { be_const_key(Get_Style_Height, 217), be_const_ctype_func(Berry_Object_Class_Get_Style_Height_C7B8D352_5431_4D5A_B732_B2B6D2372FB4) },
    { be_const_key(Set_Style_Border_Side, 29), be_const_ctype_func(Berry_Object_Class_Set_Style_Border_Side_4656B12E_B79F_4924_A1A4_80651FC2AB76) },
    { be_const_key(Has_Flag, -1), be_const_ctype_func(Berry_Object_Class_Has_Flag_5F016E6F_50A2_474C_975A_EFF9FE8F0092) },
    { be_const_key(Get_Style_Animation_Speed, 75), be_const_ctype_func(Berry_Object_Class_Get_Style_Animation_Speed_1EE3F46A_D3E7_4AB3_A0F4_4C77F7B6EA89) },
    { be_const_key(Set_Style_Background_Image_Tiled, 237), be_const_ctype_func(Berry_Object_Class_Set_Style_Background_Image_Tiled_3A43A017_155F_47BF_B379_37CDFA1A39ED) },
    { be_const_key(Set_Style_Line_Rounded, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Line_Rounded_FD830674_71E2_42E4_B2CD_E6C9DA72DA9E) },
    { be_const_key(Set_Style_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Opacity_BB6F0B51_D4D9_4229_9AFA_C70925351899) },
    { be_const_key(Clear_State, 93), be_const_ctype_func(Berry_Object_Class_Clear_State_5AD39D0B_5279_4888_B5BF_CF065F7EE3A4) },
    { be_const_key(Get_Style_Background_Image_Recolor_Opacity, 115), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Image_Recolor_Opacity_BE0C74C1_A543_4FD9_8B3E_B914FDFCB584) },
    { be_const_key(Get_Style_Text_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Text_Opacity_DAE9F91D_ED3D_4DCB_9288_8BEA0B3F90FB) },
    { be_const_key(Set_Style_Line_Width, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Line_Width_1619A589_3A92_44BA_9340_1F0EC37BD913) },
    { be_const_key(Scroll_Horizontally, 157), be_const_ctype_func(Berry_Object_Class_Scroll_Horizontally_47FEA979_EF72_4785_8C4B_15475912D78B) },
    { be_const_key(Clear_Flag, -1), be_const_ctype_func(Berry_Object_Class_Clear_Flag_64AE2723_0D1A_42FA_B88C_413655114F8B) },
    { be_const_key(Set_Style_Maximum_Height, 161), be_const_ctype_func(Berry_Object_Class_Set_Style_Maximum_Height_DBC849B5_8574_413E_8AD1_CE2A6DD482A0) },
    { be_const_key(Get_Style_Background_Image_Recolor, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Image_Recolor_92306B87_A32C_473F_B3EC_8EB9D623EF5E) },
    { be_const_key(Set_Style_Outline_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Outline_Opacity_F027CC36_C7CA_4DFC_9548_E5F8D87BF6EC) },
    { be_const_key(Set_Style_Text_Alignment, 168), be_const_ctype_func(Berry_Object_Class_Set_Style_Text_Alignment_FB552DE8_B08A_4D32_9E5F_C28464606A20) },
    { be_const_key(Get_Style_Image_Recolor_Filtered, 4), be_const_ctype_func(Berry_Object_Class_Get_Style_Image_Recolor_Filtered_79ECC9F6_BF78_4EEC_B832_CB8C41A25A29) },
    { be_const_key(Get_Style_Text_Alignment, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Text_Alignment_8FB1556B_37F6_4EF3_B01E_5B5FA11F6908) },
    { be_const_key(Get_Style_Transform_Angle, 42), be_const_ctype_func(Berry_Object_Class_Get_Style_Transform_Angle_602E344D_2B3F_4EF4_AE2C_1966656416C8) },
    { be_const_key(Set_Grid_Cell, -1), be_const_ctype_func(Berry_Object_Class_Set_Grid_Cell_8C521277_1CDA_4F10_B7FD_12F76E6EE07F) },
    { be_const_key(Get_Style_Background_Image_Tiled, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Image_Tiled_8D53F17A_C1CC_49B3_A3D1_407E9A765C55) },
    { be_const_key(Get_Style_Line_Color, 82), be_const_ctype_func(Berry_Object_Class_Get_Style_Line_Color_A0A03070_8E4C_4F1C_A149_0EF5C9C58972) },
    { be_const_key(Set_Style_Layout, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Layout_ED3A64D5_36F6_4856_B989_EDC66EF890AC) },
    { be_const_key(Get_Style_Grid_Row_Alignment, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Grid_Row_Alignment_613B157D_F2B8_4C81_A85F_920E3A5AA480) },
    { be_const_key(Get_User_Data, 101), be_const_ctype_func(Berry_Object_Class_Get_User_Data_A17C33D4_C48D_4131_8F3E_DBEB17234439) },
    { be_const_key(Set_Style_Arc_Rounded, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Arc_Rounded_A7FEA3A0_6384_4FD9_AEB7_AEAF1B008FEB) },
    { be_const_key(Get_Style_Shadow_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Shadow_Opacity_459CAD77_E54D_4A5A_8F96_959400A7EDE2) },
    { be_const_key(Get_Style_Background_Main_Stop, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Main_Stop_E82C0559_3224_4D9A_AD27_12BB57907AD5) },
    { be_const_key(Get_Style_Image_Recolor, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Image_Recolor_56654E9F_CE22_4384_BD9C_2131F7BD25CA) },
    { be_const_key(Get_Style_Alignment, 89), be_const_ctype_func(Berry_Object_Class_Get_Style_Alignment_411FEE0D_3351_4D20_80B9_AFFC834F7DDB) },
    { be_const_key(Get_Style_Arc_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Arc_Opacity_2648633E_5FD8_49A9_BC23_7ED34567D93A) },
    { be_const_key(Get_Style_Maximum_Width, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Maximum_Width_BE4260A0_13E9_4641_A121_3524EC03DDA8) },
    { be_const_key(Set_Style_Shadow_Opacity, 251), be_const_ctype_func(Berry_Object_Class_Set_Style_Shadow_Opacity_204F001A_A06F_48DB_AD42_733DC012ACAF) },
    { be_const_key(Get_Style_Transition, 1), be_const_ctype_func(Berry_Object_Class_Get_Style_Transition_B90D72C0_43DA_4C89_9D3F_E85F1E33BD02) },
    { be_const_key(Get_Style_Grid_Cell_Row_Position, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Grid_Cell_Row_Position_F9C2E389_5C1F_41C8_B47A_1E90D42F8AFE) },
    { be_const_key(Set_Content_Height, 48), be_const_ctype_func(Berry_Object_Class_Set_Content_Height_38F8731B_81A7_4D6F_9D20_DD1614F670F3) },
    { be_const_key(Get_Style_Border_Opacity, 74), be_const_ctype_func(Berry_Object_Class_Get_Style_Border_Opacity_114E66BC_6AFF_4258_9C61_62B3C494E4DF) },
    { be_const_key(Has_State, 219), be_const_ctype_func(Berry_Object_Class_Has_State_DC7D57C5_C476_468B_A9EC_733A5B224548) },
    { be_const_key(Get_Style_Border_Side, 178), be_const_ctype_func(Berry_Object_Class_Get_Style_Border_Side_8CF50DD6_13AC_47FC_BD0F_B0E593101066) },
    { be_const_key(Get_Style_Flex_Flow, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Flex_Flow_2205BDE3_335B_4764_A69C_400D74ADFE17) },
    { be_const_key(Swap, -1), be_const_ctype_func(Berry_Object_Class_Swap_6CFCA290_5CA7_4852_A769_28B035F88992) },
    { be_const_key(Get_Style_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Opacity_8DDCB783_712E_4A1C_8077_D51E63AAC559) },
    { be_const_key(Set_Style_Transform_Width, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Transform_Width_5E88DF11_8CDA_430E_A3C5_EE0F7B67D58A) },
    { be_const_key(Allocate_Special_Data, 65), be_const_ctype_func(Berry_Object_Class_Allocate_Special_Data_1B50064B_CEE4_42CC_AEA7_58A7EFF26F5B) },
    { be_const_key(Get_Style_Background_Gradient, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Gradient_DB9F3410_7AA0_4147_AA26_80688AC8930A) },
    { be_const_key(Set_Style_Flex_Main_Place, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Flex_Main_Place_5EBFE69E_6156_4B40_AB3D_D6BFE7542AC9) },
    { be_const_key(Set_Style_Pad_Bottom, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Pad_Bottom_F58F627A_6509_4CA6_8D95_40EF57A34F8B) },
    { be_const_key(Get_Style_Outline_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Outline_Opacity_E86B8638_0220_4B00_B3CA_9B44364B9410) },
    { be_const_key(Set_Style_Shadow_Offset_Y, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Shadow_Offset_Y_17F7E048_3A13_40F8_80D2_76009E25B921) },
    { be_const_key(Get_Style_Y, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Y_2F55BC47_6657_4587_BE94_42BFE7934FA3) },
    { be_const_key(Get_Style_Transform_Height, 111), be_const_ctype_func(Berry_Object_Class_Get_Style_Transform_Height_D69BEDC0_3FDE_403F_8897_EB03C8CAFB95) },
    { be_const_key(Get_Style_Border_Color_Filtered, 16), be_const_ctype_func(Berry_Object_Class_Get_Style_Border_Color_Filtered_45C5E02F_5972_4516_8415_3B0D0698DF6B) },
    { be_const_key(Set_Style_Width, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Width_891BDDA4_B279_44CB_BE48_6C5BBDA732D5) },
    { be_const_key(Get_Children_Count, -1), be_const_ctype_func(Berry_Object_Class_Get_Children_Count_870E0E5D_F8BD_4196_9042_826574F40BA5) },
    { be_const_key(Set_Style_Height, 182), be_const_ctype_func(Berry_Object_Class_Set_Style_Height_D9BCC8D1_9C88_4B32_B326_18D8021F9DD3) },
    { be_const_key(Set_Style_Alignment, 103), be_const_ctype_func(Berry_Object_Class_Set_Style_Alignment_E7F39863_9F72_438B_966D_6DD23F5D8A0B) },
    { be_const_key(Scroll_To, -1), be_const_ctype_func(Berry_Object_Class_Scroll_To_5BBAE37A_9302_4AC5_BFEF_332A364AEE3A) },
    { be_const_key(Set_Style_Background_Image_Recolor, 95), be_const_ctype_func(Berry_Object_Class_Set_Style_Background_Image_Recolor_CD94BFBA_7527_42C1_BA21_F011558E7B0F) },
    { be_const_key(Set_Style_Translate_X_, 240), be_const_ctype_func(Berry_Object_Class_Set_Style_Translate_X_772A9121_ACFE_4750_99C5_F404BA054A6F) },
    { be_const_key(Get_Style_Text_Color, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Text_Color_C0938169_EE60_4D07_B98E_8EA11FE9D28C) },
    { be_const_key(Get_Style_Background_Gradient_Color, 211), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Gradient_Color_4BFA1C15_C394_4DEF_B086_DF78B0F8561B) },
    { be_const_key(Remove_All_Events, -1), be_const_ctype_func(Berry_Object_Class_Remove_All_Events_84F39EA8_76C0_44D7_BFB3_67BE2AF2B4B6) },
    { be_const_key(Get_Style_Minimum_Height, 114), be_const_ctype_func(Berry_Object_Class_Get_Style_Minimum_Height_79B0EFD2_443D_4F30_B3F2_DCDEDA16920D) },
    { be_const_key(Set_Style_Transform_Angle, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Transform_Angle_B8D507BD_EBE8_4B67_8231_9FA17856BDD4) },
    { be_const_key(Set_Style_Clip_Corner, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Clip_Corner_4D682CDB_1692_4937_A26D_470B71F2ABB7) },
    { be_const_key(init, -1), be_const_ctype_func(Berry_Object_Class_Initialize_4082B4B8_6732_433C_906C_E744A44F33E2) },
    { be_const_key(Set_Style_Arc_Opacity, 88), be_const_ctype_func(Berry_Object_Class_Set_Style_Arc_Opacity_B436EAD1_F215_4D8A_9527_98C73EA0F301) },
    { be_const_key(Get_Style_Background_Dither_Mode, 145), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Dither_Mode_636A0F55_A865_4FF6_BB6F_7811C6C27FAD) },
    { be_const_key(Get_Style_Outline_Color, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Outline_Color_2567ED2C_953F_46BD_9054_4E2C121A6FCE) },
    { be_const_key(Set_Style_Border_Width, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Border_Width_11F1EF57_6BAB_4DA5_B900_E75459B11464) },
    { be_const_key(Get_Style_Background_Gradient_Stop, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Gradient_Stop_0C1933E1_7D4D_4AE7_9B52_70FDAA52CEDF) },
    { be_const_key(Set_Style_Grid_Cell_Row_Span, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Grid_Cell_Row_Span_ADEB78F0_BAD8_4E04_B250_75B078B05623) },
    { be_const_key(Set_Style_Pad_Top, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Pad_Top_B7FA6E2E_5DDC_49B0_83B4_49D3C7A8C389) },
    { be_const_key(Get_Style_Grid_Row_Descriptor_Array, 143), be_const_ctype_func(Berry_Object_Class_Get_Style_Grid_Row_Descriptor_Array_050B5F60_FD26_45E1_A300_F454292915B9) },
    { be_const_key(Get_Style_Line_Rounded, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Line_Rounded_A1E25DCB_6964_42CF_9ACA_23A34E981720) },
    { be_const_key(Set_Position, -1), be_const_ctype_func(Berry_Object_Class_Set_Position_682F1608_A6CF_44DF_B209_A6331D034CE7) },
    { be_const_key(Get_Style_Layout, 142), be_const_ctype_func(Berry_Object_Class_Get_Style_Layout_3DBA179C_4648_4B66_9CED_48D26D2A32DE) },
    { be_const_key(Set_Style_Blend_Mode, 102), be_const_ctype_func(Berry_Object_Class_Set_Style_Blend_Mode_6EF83B37_3CCB_41E5_A7C2_D7AF792D60F0) },
    { be_const_key(Is_Valid, -1), be_const_ctype_func(Berry_Object_Class_Is_Valid_8C8E80CC_C04E_403F_833E_A166D3ED3B93) },
    { be_const_key(Get_Scroll_X_, -1), be_const_ctype_func(Berry_Object_Class_Get_Scroll_X_E6450E02_9034_4E56_811E_8247126107DD) },
    { be_const_key(Get_Style_Line_Dash_Gap, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Line_Dash_Gap_857A7530_788B_4A57_B2D4_B04523C3BA14) },
    { be_const_key(Set_Style_Pad_All, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Pad_All_89C4C751_35E7_4144_BEE1_8156A9697F9E) },
    { be_const_key(Set_Style_Color_Filter_Opacity, 100), be_const_ctype_func(Berry_Object_Class_Set_Style_Color_Filter_Opacity_A4B9A14C_2F5E_4120_B519_C496FF4F6CB4) },
    { be_const_key(Get_Style_Pad_Top, 130), be_const_ctype_func(Berry_Object_Class_Get_Style_Pad_Top_C1448240_FFDB_469E_AA4F_4AB748A742C8) },
    { be_const_key(Get_Style_Arc_Color, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Arc_Color_581BBDDA_949E_462E_8CE7_400CF3989D80) },
    { be_const_key(Get_Style_Background_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Opacity_927482B9_9C2D_4F93_BA55_DDDE3BA9ADF3) },
    { be_const_key(Set_Style_Pad_Column, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Pad_Column_B31ED443_4778_4835_BD60_5DF1106AA4E2) },
    { be_const_key(Get_Style_Pad_Left, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Pad_Left_C403FA42_E88E_44E0_BAAE_1E0C87B37EA6) },
    { be_const_key(Get_Parent, -1), be_const_ctype_func(Berry_Object_Class_Get_Parent_FF89413E_0B87_4706_B2A7_4B303FF8B325) },
    { be_const_key(Get_Style_Border_Width, 23), be_const_ctype_func(Berry_Object_Class_Get_Style_Border_Width_CAB980CB_7BB1_48CE_81D8_947C53E4AA02) },
    { be_const_key(Set_Style_Transform_Height, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Transform_Height_86407369_72AD_4E0B_93CC_2B6AE18A61E0) },
    { be_const_key(Scroll_By, -1), be_const_ctype_func(Berry_Object_Class_Scroll_By_099CF79C_36E8_4632_8ACD_540BF2026682) },
    { be_const_key(Set_Style_Pad_Right, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Pad_Right_952B1266_0E72_4736_818F_305EA33D8AFE) },
    { be_const_key(Get_Style_Flex_Grow, 242), be_const_ctype_func(Berry_Object_Class_Get_Style_Flex_Grow_344E8A48_88A7_4D86_922A_C2838A31CB08) },
    { be_const_key(Get_Style_Grid_Cell_X__Alignment, 205), be_const_ctype_func(Berry_Object_Class_Get_Style_Grid_Cell_X_Alignment_846E7AE2_ED56_4BAE_A869_3E0081BFF6FB) },
    { be_const_key(Set_Style_Flex_Flow, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Flex_Flow_B00A1255_F9FC_4247_A53B_A3D24C6DC1E3) },
    { be_const_key(Set_Tile_Identifier, -1), be_const_ctype_func(Berry_Object_Class_Set_Tile_Identifier_7CE836A5_A5ED_40C6_90B2_73C6AD72CD05) },
    { be_const_key(Get_Style_Arc_Width, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Arc_Width_2AD9BDE0_F5CC_451B_BD60_A0A8D0638EDA) },
    { be_const_key(Get_Style_Border_Color, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Border_Color_C086DCDF_3600_4AD0_B23C_EF305B97CF81) },
    { be_const_key(Add_Event, -1), be_const_ctype_func(Berry_Object_Class_Add_Event_0269315B_578C_41BE_BAEE_4046EFB4DF52) },
    { be_const_key(Set_Style_Line_Color, 31), be_const_ctype_func(Berry_Object_Class_Set_Style_Line_Color_71A05468_BEC5_4436_AC43_270A8286210B) },
    { be_const_key(Get_Style_Transform_Width, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Transform_Width_294181FD_C6E9_442B_A741_5E3704BDCB03) },
    { be_const_key(Set_Style_Image_Recolor, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Image_Recolor_38D8012B_8B25_4C5F_984F_5C196E0776F5) },
    { be_const_key(Get_Style_Text_Font, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Text_Font_B38EEA7E_38BD_4EDD_B886_5357D5C5C2C2) },
    { be_const_key(Set_Parent, -1), be_const_ctype_func(Berry_Object_Class_Set_Parent_11B9D900_6456_4C35_B2B9_C72C5DF8A8A5) },
    { be_const_key(Get_Style_Shadow_Offset_X_, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Shadow_Offset_X_A247DAF7_19DD_43E2_838B_9487929EB885) },
    { be_const_key(Set_Style_Outline_Color, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Outline_Color_4653A13D_F4DD_4498_A8F9_C61CB69E521D) },
    { be_const_key(Get_Style_Flex_Track_Place, 220), be_const_ctype_func(Berry_Object_Class_Get_Style_Flex_Track_Place_AD1458A5_04CE_4229_8DCD_F05BBD58FD43) },
    { be_const_key(Set_Layout, -1), be_const_ctype_func(Berry_Object_Class_Set_Layout_4969EB4F_CA54_4C01_9BEC_1D5339A78EAC) },
    { be_const_key(Set_Style_Pad_Left, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Pad_Left_0D3D544E_800D_4F25_8EB4_8E44234B17EE) },
    { be_const_key(Get_Scroll_Top, -1), be_const_ctype_func(Berry_Object_Class_Get_Scroll_Top_9C2D78EB_D801_4E56_A024_F1F4569BDE2C) },
    { be_const_key(Set_Style_Shadow_Width, 164), be_const_ctype_func(Berry_Object_Class_Set_Style_Shadow_Width_13CF133A_EAF5_4EF5_A893_AA701BD3E866) },
    { be_const_key(Set_Style_Outline_Pad, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Outline_Pad_67D4EC7B_3BA6_4922_9A45_CFA5C391F064) },
    { be_const_key(Get_Scroll_Bottom, -1), be_const_ctype_func(Berry_Object_Class_Get_Scroll_Bottom_1E062685_143C_4E8A_AD14_47378315A57F) },
    { be_const_key(Get_Scroll_Right, 63), be_const_ctype_func(Berry_Object_Class_Get_Scroll_Right_673F38BF_C102_4A7C_9647_18C8F12633E1) },
    { be_const_key(Get_Style_Background_Image_Recolor_Filtered, 41), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Image_Recolor_Filtered_B2206BE1_5EAD_4887_9083_538946AB02C2) },
    { be_const_key(Set_Width, 189), be_const_ctype_func(Berry_Object_Class_Set_Width_5EB098C6_87E0_4523_9AC2_19C0D76255E5) },
    { be_const_key(Set_Style_Text_Line_Space, 141), be_const_ctype_func(Berry_Object_Class_Set_Style_Text_Line_Space_4A6AD6DF_B030_4B02_A177_DE286BFE4C8F) },
    { be_const_key(Set_Style_Animation_Time, 201), be_const_ctype_func(Berry_Object_Class_Set_Style_Animation_Time_12383475_5F66_46D2_BD5C_5274BAB3A839) },
    { be_const_key(Set_Style_Grid_Row_Alignment, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Grid_Row_Alignment_19FA15A9_D144_4009_9C6D_2EA0AA9F2B24) },
    { be_const_key(Clean, 173), be_const_ctype_func(Berry_Object_Class_Clean_3078622C_DD6C_4C21_A7A1_15B3FFC4B4EA) },
    { be_const_key(Set_Flex_Grow, -1), be_const_ctype_func(Berry_Object_Class_Set_Flex_Grow_6FF435E3_3400_4BD1_85AA_236211E86C28) },
    { be_const_key(Set_Grid_Descriptor_Array, -1), be_const_ctype_func(Berry_Object_Class_Set_Grid_Descriptor_Array_9F260DEF_7EA1_48CF_BD01_98142AEFB02C) },
    { be_const_key(Get_Style_Border_Post, 72), be_const_ctype_func(Berry_Object_Class_Get_Style_Border_Post_21BBDDCC_3F7B_4358_ACC7_C1B62B89ECCA) },
    { be_const_key(Get_Style_Transform_Zoom, 172), be_const_ctype_func(Berry_Object_Class_Get_Style_Transform_Zoom_3CC6F428_BABE_4D6F_BB99_435659E2DF33) },
    { be_const_key(Set_Style_Flex_Cross_Place, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Flex_Cross_Place_0E14A1D4_10F0_40B1_9120_5508F06AE71B) },
    { be_const_key(Get_Style_Pad_Right, 86), be_const_ctype_func(Berry_Object_Class_Get_Style_Pad_Right_F2FFD69F_C1FD_477D_B2B1_04F55DBAEE6C) },
    { be_const_key(Set_Style_Grid_Cell_Column_Span, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Grid_Cell_Column_Span_402ED2BF_7D93_4737_B4B0_2E94121CB801) },
    { be_const_key(Get_Style_Radius, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Radius_D318A0B0_EDA0_484C_BAF2_FAB12E1EC2F0) },
    { be_const_key(Get_Style_Background_Gradient_Direction, 256), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Gradient_Direction_3ABE8CDD_0834_4749_A5ED_4C655AFDAAB6) },
    { be_const_key(Get_Style_Text_Color_Filtered, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Text_Color_Filtered_C39EB7CE_9346_406C_9CCB_01FF254435D4) },
    { be_const_key(Get_Style_Text_Letter_Space, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Text_Letter_Space_9FF4752C_A437_4A7D_8A74_C98FCEF0036F) },
    { be_const_key(Get_Style_Pad_Bottom, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Pad_Bottom_D89D82B9_1516_4C35_BFD3_B001F28798AF) },
    { be_const_key(Move_Background, -1), be_const_ctype_func(Berry_Object_Class_Move_Background_70A7E92C_5D37_4757_8701_EF3C84E01313) },
    { be_const_key(Get_Style_Outline_Pad, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Outline_Pad_F5BFA52C_65A9_4B30_81D8_A17FA2C2AB8B) },
    { be_const_key(Set_Size, -1), be_const_ctype_func(Berry_Object_Class_Set_Size_B0BB55A3_DA00_4EEE_A2D2_BB74F47CDFD5) },
    { be_const_key(Set_Style_Translate_Y, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Translate_Y_171A7766_97CD_4224_8327_1A00707A04FC) },
    { be_const_key(Get_Style_Shadow_Width, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Shadow_Width_185446E3_1D6E_4141_A31A_BE92839009B5) },
    { be_const_key(Get_Style_Animation_Time, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Animation_Time_43DD637B_6B78_4312_9D77_DFB7F2E8F83C) },
    { be_const_key(Get_Style_Shadow_Color_Filtered, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Shadow_Color_Filtered_ABC705DF_4138_418A_8C4E_1CC66B19B404) },
    { be_const_key(Get_Style_Clip_Corner, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Clip_Corner_5FEAD0E3_72D0_40F6_AE68_0848AAFE0655) },
    { be_const_key(Get_Style_Line_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Line_Opacity_7BA44DBA_15FD_4017_A6CE_8036F4403EAD) },
    { be_const_key(Get_Object_Visibility, -1), be_const_ctype_func(Berry_Object_Class_Get_Object_Visibility_F9EF336F_73C8_4B2E_8F03_02269BDD280B) },
    { be_const_key(Set_Style_Outline_Width, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Outline_Width_A77AB0C1_092C_4F8A_AC11_C9E9B8AC36C6) },
    { be_const_key(Get_Style_Background_Color_Filtered, 3), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Color_Filtered_6E42C38C_9260_4FA2_BE94_8B0EDFD39F9D) },
    { be_const_key(Set_Style_Background_Dither_Mode, 152), be_const_ctype_func(Berry_Object_Class_Set_Style_Background_Dither_Mode_71C9F0F0_1028_4080_A767_FF100EDAA543) },
    { be_const_key(Get_Style_Grid_Cell_Column_Span, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Grid_Cell_Column_Span_DA97280D_0F28_4CB6_9B47_9B268F2EF94E) },
    { be_const_key(Set_Style_Text_Letter_Space, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Text_Letter_Space_1798D026_AFCD_42C0_B135_6D0EDB6123E8) },
};

static be_define_const_map(
    Berry_Object_Type_map,
    258
);

BE_EXPORT_VARIABLE be_define_const_class(
    Berry_Object_Type,
    1,
    NULL,
    Object_Type
);
