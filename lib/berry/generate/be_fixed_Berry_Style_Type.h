#include "be_constobj.h"

static be_define_const_map_slots(Berry_Style_Type_map) {
    { be_const_key(Set_Opacity, 5), be_const_ctype_func(Berry_Style_Class_Set_Opacity_6D2CDE46_EE91_437C_B05C_131C7E5D6676) },
    { be_const_key(Set_Background_Opacity, 75), be_const_ctype_func(Berry_Style_Class_Set_Background_Opacity_9D0FB525_D1B2_40EB_B628_C823C1CEA545) },
    { be_const_key(Set_Line_Width, 55), be_const_ctype_func(Berry_Style_Class_Set_Line_Width_CCA23442_7E4A_4674_965B_B48376167F75) },
    { be_const_key(Set_Base_Direction, -1), be_const_ctype_func(Berry_Style_Class_Set_Base_Direction_17E53F14_6510_42BE_9F98_706F7AE3949C) },
    { be_const_key(Set_Line_Dash_Width, -1), be_const_ctype_func(Berry_Style_Class_Set_Line_Dash_Width_E07AB328_B645_44CD_BA4A_026147555180) },
    { be_const_key(Set_Line_Dash_Gap, 35), be_const_ctype_func(Berry_Style_Class_Set_Line_Dash_Gap_29D82A43_06EC_48D4_8C53_BD3FF6ABA3E5) },
    { be_const_key(Reset, -1), be_const_ctype_func(Berry_Style_Class_Reset_82F10C9E_FB49_4A95_BD98_1A444DB47329) },
    { be_const_key(Set_Pad_Gap, 78), be_const_ctype_func(Berry_Style_Class_Set_Pad_Gap_A587B4F6_A8C3_46B8_A4DC_4E337D2CD96D) },
    { be_const_key(Set_Translate_X_, -1), be_const_ctype_func(Berry_Style_Class_Set_Translate_X_4EEFF2E7_B31C_4B4E_946B_E59B17D7AB9B) },
    { be_const_key(Set_Background_Color, -1), be_const_ctype_func(Berry_Style_Class_Set_Background_Color_89FD3AE2_A4A5_41F7_A7A4_AE8C360BDDAE) },
    { be_const_key(Set_Grid_Cell_Column_Position, 88), be_const_ctype_func(Berry_Style_Class_Set_Grid_Cell_Column_Position_52CDD233_C9E2_484C_B24D_31FA10D14B34) },
    { be_const_key(Set_Background_Image_Recolor, -1), be_const_ctype_func(Berry_Style_Class_Set_Background_Image_Recolor_9B26A0C7_B03E_42A3_B3C1_3317DDD4D745) },
    { be_const_key(Set_Flex_Main_Place, 48), be_const_ctype_func(Berry_Style_Class_Set_Flex_Main_Place_7324621B_87EA_464A_9B71_89DAA753F104) },
    { be_const_key(Set_Animation_Time, -1), be_const_ctype_func(Berry_Style_Class_Set_Animation_Time_126A446B_DD01_4AD8_9630_97EF36EB8078) },
    { be_const_key(Set_Background_Image_Tiled, 76), be_const_ctype_func(Berry_Style_Class_Set_Background_Image_Tiled_72F932F6_9F67_4DC4_9665_BCFB298C6AF0) },
    { be_const_key(Set_Background_Gradient_Direction, -1), be_const_ctype_func(Berry_Style_Class_Set_Background_Gradient_Direction_F90193D5_6698_4253_89B0_E27EC8F16656) },
    { be_const_key(Set_Outline_Color, -1), be_const_ctype_func(Berry_Style_Class_Set_Outline_Color_397989CC_689B_4A88_8606_6DD9170EA296) },
    { be_const_key(Set_Background_Main_Stop, 65), be_const_ctype_func(Berry_Style_Class_Set_Background_Main_Stop_0062BDA1_7D53_4FB7_A06F_0D1B21E40076) },
    { be_const_key(Set_Outline_Opacity, 66), be_const_ctype_func(Berry_Style_Class_Set_Outline_Opacity_43BCD81F_965F_4BE6_B5F2_64B4BCCA77F2) },
    { be_const_key(Remove_Property, -1), be_const_ctype_func(Berry_Style_Class_Remove_Property_C168EEB9_EE92_407E_A0C1_61E00998DB89) },
    { be_const_key(Set_Grid_Row_Descriptor_Array, 67), be_const_ctype_func(Berry_Style_Class_Set_Grid_Row_Descriptor_Array_E7709469_6B80_48C3_B5B2_F1A5282583B9) },
    { be_const_key(Set_Background_Dither_Mode, 58), be_const_ctype_func(Berry_Style_Class_Set_Background_Dither_Mode_16568F5B_FD5F_4DD3_B992_7422724346A7) },
    { be_const_key(Set_Border_Width, 93), be_const_ctype_func(Berry_Style_Class_Set_Border_Width_53EFC3E8_2956_4414_8CBB_762075CBB204) },
    { be_const_key(Set_Color_Filter_Descriptor, 90), be_const_ctype_func(Berry_Style_Class_Set_Color_Filter_Descriptor_E3DE1C98_BFCD_4257_838F_B24AED3A350D) },
    { be_const_key(Register_Property, -1), be_const_ctype_func(Berry_Style_Class_Register_Property_D22CC7F7_04A0_440D_BDF6_5D6D964360AF) },
    { be_const_key(Set_Arc_Opacity, -1), be_const_ctype_func(Berry_Style_Class_Set_Arc_Opacity_10349123_3B96_4C81_B4A2_87B2543144D6) },
    { be_const_key(Set_Transform_Height, 10), be_const_ctype_func(Berry_Style_Class_Set_Transform_Height_30241A22_CE9E_43A8_896E_FBEF8D64E411) },
    { be_const_key(Set_Border_Color, -1), be_const_ctype_func(Berry_Style_Class_Set_Border_Color_348F788A_7158_4CBC_8B62_7A77ADF0C5FA) },
    { be_const_key(Set_Border_Opacity, -1), be_const_ctype_func(Berry_Style_Class_Set_Border_Opacity_3354DCC0_0EF2_4EA0_B543_F55AA02DD6FA) },
    { be_const_key(Set_Maximum_Height, -1), be_const_ctype_func(Berry_Style_Class_Set_Maximum_Height_82F96DB1_1601_4F70_BD86_2CAC70499BC9) },
    { be_const_key(Set_Background_Gradient_Color, 0), be_const_ctype_func(Berry_Style_Class_Set_Background_Gradient_Color_4C03AC3A_33E6_4CBE_940C_637F3DD364D2) },
    { be_const_key(Set_Flex_Flow, -1), be_const_ctype_func(Berry_Style_Class_Set_Flex_Flow_0FA58292_4711_42BB_BD3C_F82AB953B349) },
    { be_const_key(Set_Background_Image_Recolor_Opacity, -1), be_const_ctype_func(Berry_Style_Class_Set_Background_Image_Recolor_Opacity_30A1E58A_3651_4E69_AC3F_AFC6D84C6A7C) },
    { be_const_key(Set_Grid_Column_Descriptor_Array, 6), be_const_ctype_func(Berry_Style_Class_Set_Grid_Column_Descriptor_Array_6A046931_ACF8_4D20_84C6_088A40BCBA18) },
    { be_const_key(Set_Minimum_Width, -1), be_const_ctype_func(Berry_Style_Class_Set_Minimum_Width_988D2314_D2B1_42AE_8ACD_1C1C25670706) },
    { be_const_key(Initialize, -1), be_const_ctype_func(Berry_Style_Class_Initialize_E1E07CD7_A72D_4CA1_A8B2_5EE92019E448) },
    { be_const_key(Set_Border_Post, -1), be_const_ctype_func(Berry_Style_Class_Set_Border_Post_6FA70340_DC7D_4C8C_B43B_93453164D2FF) },
    { be_const_key(Set_Grid_Cell_Column_Span, 69), be_const_ctype_func(Berry_Style_Class_Set_Grid_Cell_Column_Span_F43F6714_372F_40C2_AAED_00254A58FFEE) },
    { be_const_key(Set_Line_Rounded, 14), be_const_ctype_func(Berry_Style_Class_Set_Line_Rounded_FC57C0D3_EE07_4E54_8881_11F461745074) },
    { be_const_key(Set_Shadow_Offset_Y, 4), be_const_ctype_func(Berry_Style_Class_Set_Shadow_Offset_Y_7F5D804B_84A9_44C4_9BF1_A7030D6C1890) },
    { be_const_key(Set_Alignment, -1), be_const_ctype_func(Berry_Style_Class_Set_Alignment_4487951A_FC0F_4417_93C7_BB2379B5848C) },
    { be_const_key(Set_Flex_Cross_Place, 32), be_const_ctype_func(Berry_Style_Class_Set_Flex_Cross_Place_451B8250_40F5_4964_A95A_B98D7306F1F3) },
    { be_const_key(Set_Image_Recolor_Opacity, -1), be_const_ctype_func(Berry_Style_Class_Set_Image_Recolor_Opacity_3F7F7D25_2A2F_4CEB_A883_8F020BB15A9D) },
    { be_const_key(Set_Grid_Row_Alignment, 97), be_const_ctype_func(Berry_Style_Class_Set_Grid_Row_Alignment_CEB96CEF_8302_4084_A138_90D02A4E36D0) },
    { be_const_key(Set_Line_Color, 18), be_const_ctype_func(Berry_Style_Class_Set_Line_Color_8FF16B07_0C66_4FC1_BDD3_DE4B4104002F) },
    { be_const_key(Set_Line_Opacity, 43), be_const_ctype_func(Berry_Style_Class_Set_Line_Opacity_A536C216_030F_4A5E_9408_E930E9B69F98) },
    { be_const_key(Set_Flex_Grow, 1), be_const_ctype_func(Berry_Style_Class_Set_Flex_Grow_FCE14670_3C89_41C6_AB76_AEA37FB4B6C4) },
    { be_const_key(Set_Y, 24), be_const_ctype_func(Berry_Style_Class_Set_Y_45C78CA6_1D58_44F4_A575_DFE046BFE444) },
    { be_const_key(Set_Height, -1), be_const_ctype_func(Berry_Style_Class_Set_Height_E9007569_5143_4A3B_BF91_2BA739A28B21) },
    { be_const_key(Set_Pad_Top, -1), be_const_ctype_func(Berry_Style_Class_Set_Pad_Top_C853EA31_5FC0_4CAF_A219_3FA01D2FC654) },
    { be_const_key(Set_Arc_Rounded, -1), be_const_ctype_func(Berry_Style_Class_Set_Arc_Rounded_7B298A24_58BF_4ADD_A22B_F605AB9B1145) },
    { be_const_key(Set_Clip_Corner, -1), be_const_ctype_func(Berry_Style_Class_Set_Clip_Corner_1DE294E5_8CFF_4752_B5DC_39730C51BE44) },
    { be_const_key(Set_Maximum_Width, 36), be_const_ctype_func(Berry_Style_Class_Set_Maximum_Width_CAEBC3B7_FDA0_452D_94B8_CEA8069F5CDC) },
    { be_const_key(Set_Text_Color, 50), be_const_ctype_func(Berry_Style_Class_Set_Text_Color_B84F6FDF_018F_4E61_8D31_F8D59AFF3463) },
    { be_const_key(Set_Transform_Width, -1), be_const_ctype_func(Berry_Style_Class_Set_Transform_Width_3988A250_C32C_4D13_88AA_671DB30EFE2E) },
    { be_const_key(Set_Pad_Row, 84), be_const_ctype_func(Berry_Style_Class_Set_Pad_Row_FAF3AE06_4DEE_47BB_B84C_DF7A78EE98DB) },
    { be_const_key(Set_Text_Line_Space, -1), be_const_ctype_func(Berry_Style_Class_Set_Text_Line_Space_12FC37EB_9661_4CCC_9BD4_10E423820D31) },
    { be_const_key(Set_Arc_Color, -1), be_const_ctype_func(Berry_Style_Class_Set_Arc_Color_6FB5470C_DBE0_4756_972B_44EEB4EC3707) },
    { be_const_key(Set_Translate_Y, 101), be_const_ctype_func(Berry_Style_Class_Set_Translate_Y_31012D7E_34AC_4256_842E_3B2B84316578) },
    { be_const_key(Set_Radius, 21), be_const_ctype_func(Berry_Style_Class_Set_Radius_5188317B_99F3_41D3_A73B_0B59857C136B) },
    { be_const_key(Set_Background_Gradient_Stop, -1), be_const_ctype_func(Berry_Style_Class_Set_Background_Gradient_Stop_67E032E8_9A58_40D0_9EBB_CFB701CC169B) },
    { be_const_key(Set_Minimum_Height, -1), be_const_ctype_func(Berry_Style_Class_Set_Minimum_Height_F329B778_585C_4ECB_9E32_AA9E7F486F4F) },
    { be_const_key(Set_Width, -1), be_const_ctype_func(Berry_Style_Class_Set_Width_DFF6EE09_0E2D_4F2C_9BFF_920B941A5628) },
    { be_const_key(Set_Grid_Cell_X__Alignment, 27), be_const_ctype_func(Berry_Style_Class_Set_Grid_Cell_X_Alignment_E482762E_53A6_41A5_AC48_96D14EC5F21C) },
    { be_const_key(Set_Pad_Bottom, -1), be_const_ctype_func(Berry_Style_Class_Set_Pad_Bottom_9F2CD0A1_27C7_46F4_9545_2E893C407779) },
    { be_const_key(Set_Transform_Zoom, -1), be_const_ctype_func(Berry_Style_Class_Set_Transform_Zoom_9362BEE2_9B85_4B22_993B_141F82C77D1E) },
    { be_const_key(Set_Shadow_Spread, -1), be_const_ctype_func(Berry_Style_Class_Set_Shadow_Spread_A0AB7AC4_C8C8_4AE4_85A2_63276A8C6901) },
    { be_const_key(Set_Shadow_Width, -1), be_const_ctype_func(Berry_Style_Class_Set_Shadow_Width_E342760C_5195_4D83_842E_C96C3F7C5B33) },
    { be_const_key(Set_Grid_Column_Alignment, 13), be_const_ctype_func(Berry_Style_Class_Set_Grid_Column_Alignment_19E0B56A_B444_4F2E_8C05_620C85C8564C) },
    { be_const_key(Set_Layout, 11), be_const_ctype_func(Berry_Style_Class_Set_Layout_E1D86213_732A_4895_A6F0_73DB5047C540) },
    { be_const_key(Set_Text_Alignment, -1), be_const_ctype_func(Berry_Style_Class_Set_Text_Alignment_909E95DA_5A83_486B_AB3E_B92FD759C61A) },
    { be_const_key(init, -1), be_const_ctype_func(Berry_Style_Class_Initialize_DD94E60F_A2C3_4D48_A3CF_6AA67DDFDC4A) },
    { be_const_key(Set_Border_Side, -1), be_const_ctype_func(Berry_Style_Class_Set_Border_Side_5FD3F796_2026_46CE_9D7A_868708D19288) },
    { be_const_key(Set_Pad_All, -1), be_const_ctype_func(Berry_Style_Class_Set_Pad_All_79D916B3_29BB_4DF9_B397_A9B28E2DC366) },
    { be_const_key(Set_Text_Letter_Space, -1), be_const_ctype_func(Berry_Style_Class_Set_Text_Letter_Space_2827B3BC_8BDF_4B63_ABD7_0B68066103DA) },
    { be_const_key(Set_Color_Filter_Opacity, -1), be_const_ctype_func(Berry_Style_Class_Set_Color_Filter_Opacity_88FF3074_B46A_4860_9F6D_42E1748B89ED) },
    { be_const_key(Set_Pad_Left, -1), be_const_ctype_func(Berry_Style_Class_Set_Pad_Left_6A203B76_73F2_4F81_8CAD_296E1FCD79D2) },
    { be_const_key(Set_Image_Opacity, 56), be_const_ctype_func(Berry_Style_Class_Set_Image_Opacity_43B1D75B_4B82_42F6_B7FB_8A71FAFB2B0F) },
    { be_const_key(Set_Background_Image_Opacity, -1), be_const_ctype_func(Berry_Style_Class_Set_Background_Image_Opacity_6C917343_12BA_4459_97BB_99F0D591B4A4) },
    { be_const_key(Set_Grid_Cell_Row_Span, -1), be_const_ctype_func(Berry_Style_Class_Set_Grid_Cell_Row_Span_ED83CF1B_71ED_4223_B80C_D8614007B12E) },
    { be_const_key(Set_Blend_Mode, 40), be_const_ctype_func(Berry_Style_Class_Set_Blend_Mode_9F4228FC_F9A5_4564_A872_254D019D136D) },
    { be_const_key(Set_Outline_Width, 3), be_const_ctype_func(Berry_Style_Class_Set_Outline_Width_79BE7AC6_925C_4081_9CB9_DE5762665644) },
    { be_const_key(Set_Flex_Track_Place, 9), be_const_ctype_func(Berry_Style_Class_Set_Flex_Track_Place_8FFD5EEC_13A9_4ABF_83BC_5898181FAE03) },
    { be_const_key(_p, -1), be_const_var(0) },
    { be_const_key(Set_Animation_Speed, -1), be_const_ctype_func(Berry_Style_Class_Set_Animation_Speed_3D261EF6_F34E_411B_A460_70D745809E2F) },
    { be_const_key(Set_Pad_Column, -1), be_const_ctype_func(Berry_Style_Class_Set_Pad_Column_826F98F6_B92D_4AB8_AEE9_CDB523129FAA) },
    { be_const_key(Set_Text_Decor, -1), be_const_ctype_func(Berry_Style_Class_Set_Text_Decor_107DBEDA_DD01_44D8_A63A_4E88F6B33DED) },
    { be_const_key(Set_Shadow_Offset_X_, -1), be_const_ctype_func(Berry_Style_Class_Set_Shadow_Offset_X_9C9674C5_A8F1_4B3B_AC44_F810D6E67A20) },
    { be_const_key(Set_Size, -1), be_const_ctype_func(Berry_Style_Class_Set_Size_3C12EB46_2D7E_441C_BA8F_46C3B2C1FBF1) },
    { be_const_key(Set_Shadow_Opacity, -1), be_const_ctype_func(Berry_Style_Class_Set_Shadow_Opacity_B97F4F40_7382_4CAF_891B_76E04BD3F1FD) },
    { be_const_key(deinit, 77), be_const_ctype_func(Berry_Style_Class_Deinitialize_94332E5E_9BF6_44D5_B820_433ECF65621B) },
    { be_const_key(Set_Arc_Width, 87), be_const_ctype_func(Berry_Style_Class_Set_Arc_Width_1C229382_3B0A_4BED_8B72_234D0B899A9C) },
    { be_const_key(Set_Pad_Horizontal, 19), be_const_ctype_func(Berry_Style_Class_Set_Pad_Horizontal_6C4FD706_36EA_4C32_9AF5_004CDE33146A) },
    { be_const_key(Set_X_, -1), be_const_ctype_func(Berry_Style_Class_Set_X_C502932F_2B51_4699_9C87_A61C22392DE5) },
    { be_const_key(Set_Pad_Right, -1), be_const_ctype_func(Berry_Style_Class_Set_Pad_Right_2D30DF33_4CE2_4CB9_B8D6_698068934BC7) },
    { be_const_key(Set_Shadow_Color, 73), be_const_ctype_func(Berry_Style_Class_Set_Shadow_Color_1B8DDAFE_81B2_435F_A6FA_797E07E125D7) },
    { be_const_key(Set_Grid_Cell_Y_Alignment, -1), be_const_ctype_func(Berry_Style_Class_Set_Grid_Cell_Y_Alignment_D51CE9C9_6744_4AB4_BAFF_47661E323638) },
    { be_const_key(Set_Image_Recolor, -1), be_const_ctype_func(Berry_Style_Class_Set_Image_Recolor_B1A0852D_6FF4_440E_96EE_50B2AD54D608) },
    { be_const_key(Set_Grid_Cell_Row_Position, 22), be_const_ctype_func(Berry_Style_Class_Set_Grid_Cell_Row_Position_92547AE6_FB07_47AE_B23F_EB965C11B489) },
    { be_const_key(Set_Text_Opacity, -1), be_const_ctype_func(Berry_Style_Class_Set_Text_Opacity_DD315ADD_372E_4D8A_83F1_090F53BF5800) },
    { be_const_key(Set_Transform_Angle, -1), be_const_ctype_func(Berry_Style_Class_Set_Transform_Angle_46DC87F5_826F_431F_A704_561B65D36844) },
    { be_const_key(Set_Outline_Pad, -1), be_const_ctype_func(Berry_Style_Class_Set_Outline_Pad_46B9C45E_0C13_4459_861E_8230842835F9) },
    { be_const_key(Set_Pad_Vertical, -1), be_const_ctype_func(Berry_Style_Class_Set_Pad_Vertical_19493D3B_5E57_477A_B88F_E58BBDCC9EB8) },
};

static be_define_const_map(
    Berry_Style_Type_map,
    103
);

BE_EXPORT_VARIABLE be_define_const_class(
    Berry_Style_Type,
    1,
    NULL,
    Style_Type
);
