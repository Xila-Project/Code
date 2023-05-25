#include "be_constobj.h"

static be_define_const_map_slots(Berry_Style_Type_map) {
    { be_const_key(Set_Opacity, 5), be_const_ctype_func(Berry_Style_Class_Set_Opacity_44FD6C1E_F32F_475F_B0A4_04DADCF2FA3F) },
    { be_const_key(Set_Background_Opacity, 75), be_const_ctype_func(Berry_Style_Class_Set_Background_Opacity_7BF5CF20_95DA_4862_A38C_B7C26E62701C) },
    { be_const_key(Set_Line_Width, 55), be_const_ctype_func(Berry_Style_Class_Set_Line_Width_ECD8B4E8_BDA6_405E_9E5B_A9049A6E44AE) },
    { be_const_key(Set_Base_Direction, -1), be_const_ctype_func(Berry_Style_Class_Set_Base_Direction_0238D1AC_C17E_4B77_9FB7_83E9229469F8) },
    { be_const_key(Set_Line_Dash_Width, -1), be_const_ctype_func(Berry_Style_Class_Set_Line_Dash_Width_2199CFDD_1C70_4179_A503_F2BEEABE0C1F) },
    { be_const_key(Set_Line_Dash_Gap, 35), be_const_ctype_func(Berry_Style_Class_Set_Line_Dash_Gap_48D95368_3170_46F7_B4FD_A5872B89EBAA) },
    { be_const_key(Reset, -1), be_const_ctype_func(Berry_Style_Class_Reset_7FD226C8_C146_4C8A_A2C4_B50DDD69F30D) },
    { be_const_key(Set_Pad_Gap, 78), be_const_ctype_func(Berry_Style_Class_Set_Pad_Gap_013E6EA8_6264_4FE6_AF99_E1F403F3FCB1) },
    { be_const_key(Set_Translate_X_, -1), be_const_ctype_func(Berry_Style_Class_Set_Translate_X_9971E1E1_161C_4860_B946_B838A682A737) },
    { be_const_key(Set_Background_Color, -1), be_const_ctype_func(Berry_Style_Class_Set_Background_Color_F78690D2_D24E_4EFD_BD76_C611C6ED7F0D) },
    { be_const_key(Set_Grid_Cell_Column_Position, 88), be_const_ctype_func(Berry_Style_Class_Set_Grid_Cell_Column_Position_FD4AE0B8_0C2A_4186_9D64_AFFFB2585F10) },
    { be_const_key(Set_Background_Image_Recolor, -1), be_const_ctype_func(Berry_Style_Class_Set_Background_Image_Recolor_7E996666_0BFD_4BF7_A827_2886CDCACBB7) },
    { be_const_key(Set_Flex_Main_Place, 48), be_const_ctype_func(Berry_Style_Class_Set_Flex_Main_Place_1FEF52CB_10C9_4695_9F3E_82DE9DE53E59) },
    { be_const_key(Set_Animation_Time, -1), be_const_ctype_func(Berry_Style_Class_Set_Animation_Time_A35EDF8F_7247_4BB3_A3F0_EA2074D1E0EE) },
    { be_const_key(Set_Background_Image_Tiled, 76), be_const_ctype_func(Berry_Style_Class_Set_Background_Image_Tiled_320906F4_59B3_4D07_BA73_F8F51698FAD9) },
    { be_const_key(Set_Background_Gradient_Direction, -1), be_const_ctype_func(Berry_Style_Class_Set_Background_Gradient_Direction_9B8D4C2A_C8DC_4749_9B9A_FA9DAE19C130) },
    { be_const_key(Set_Outline_Color, -1), be_const_ctype_func(Berry_Style_Class_Set_Outline_Color_735C1128_FB3C_4EC0_97C4_D2F56B30DD35) },
    { be_const_key(Set_Background_Main_Stop, 65), be_const_ctype_func(Berry_Style_Class_Set_Background_Main_Stop_9A7DC37B_6071_43E3_AF78_55C545497A31) },
    { be_const_key(Set_Outline_Opacity, 66), be_const_ctype_func(Berry_Style_Class_Set_Outline_Opacity_DFC5FEDD_FDD9_4FBF_9D2C_5F6FCEF9C124) },
    { be_const_key(Remove_Property, -1), be_const_ctype_func(Berry_Style_Class_Remove_Property_13383ADE_F5D4_4D12_B4F9_C1056269C4D8) },
    { be_const_key(Set_Grid_Row_Descriptor_Array, 67), be_const_ctype_func(Berry_Style_Class_Set_Grid_Row_Descriptor_Array_037E342D_0465_40C1_B628_69C6D0121733) },
    { be_const_key(Set_Background_Dither_Mode, 58), be_const_ctype_func(Berry_Style_Class_Set_Background_Dither_Mode_86E454FF_914C_4449_824C_5A55E5A1D004) },
    { be_const_key(Set_Border_Width, 93), be_const_ctype_func(Berry_Style_Class_Set_Border_Width_3399AB81_FF23_48F5_AFF1_7A561E9F3BFD) },
    { be_const_key(Set_Color_Filter_Descriptor, 90), be_const_ctype_func(Berry_Style_Class_Set_Color_Filter_Descriptor_07357A52_17F5_4794_947F_3FE332FE7630) },
    { be_const_key(Register_Property, -1), be_const_ctype_func(Berry_Style_Class_Register_Property_4AF80146_570D_47C7_A981_ED3EAF298714) },
    { be_const_key(Set_Arc_Opacity, -1), be_const_ctype_func(Berry_Style_Class_Set_Arc_Opacity_207ABFEE_A39B_4E00_BAEF_AEA8210406A9) },
    { be_const_key(Set_Transform_Height, 10), be_const_ctype_func(Berry_Style_Class_Set_Transform_Height_C41B2258_D89F_4045_B0B4_8DA871BDFD4F) },
    { be_const_key(Set_Border_Color, -1), be_const_ctype_func(Berry_Style_Class_Set_Border_Color_0487B129_B77B_4170_AFEB_7DF1104399E4) },
    { be_const_key(Set_Border_Opacity, -1), be_const_ctype_func(Berry_Style_Class_Set_Border_Opacity_0BAAB985_1D35_4D24_9343_269C3DC67B18) },
    { be_const_key(Set_Maximum_Height, -1), be_const_ctype_func(Berry_Style_Class_Set_Maximum_Height_3A4D36D0_7713_49AD_A539_6E0F58E0250D) },
    { be_const_key(Set_Background_Gradient_Color, 0), be_const_ctype_func(Berry_Style_Class_Set_Background_Gradient_Color_03989192_6A94_43FE_AF1F_966CF860B95D) },
    { be_const_key(Set_Flex_Flow, -1), be_const_ctype_func(Berry_Style_Class_Set_Flex_Flow_4C384BC5_9FDA_4759_8CAF_78B48A23D857) },
    { be_const_key(Set_Background_Image_Recolor_Opacity, -1), be_const_ctype_func(Berry_Style_Class_Set_Background_Image_Recolor_Opacity_609EFB14_631E_4FDE_82FC_1BBE08D4313F) },
    { be_const_key(Set_Grid_Column_Descriptor_Array, 6), be_const_ctype_func(Berry_Style_Class_Set_Grid_Column_Descriptor_Array_B76A5E33_6894_40D8_9437_D27DCA6C6599) },
    { be_const_key(Set_Minimum_Width, -1), be_const_ctype_func(Berry_Style_Class_Set_Minimum_Width_193F19B9_2C32_47CF_B41E_010261246AD7) },
    { be_const_key(Initialize, -1), be_const_ctype_func(Berry_Style_Class_Initialize_604F7506_C19F_4A85_B9EF_52B933781D94) },
    { be_const_key(Set_Border_Post, -1), be_const_ctype_func(Berry_Style_Class_Set_Border_Post_CD34BBFE_95B5_4BA1_8B85_D94344CF0EF0) },
    { be_const_key(Set_Grid_Cell_Column_Span, 69), be_const_ctype_func(Berry_Style_Class_Set_Grid_Cell_Column_Span_CC712F98_237F_4993_82F8_B18D7778322E) },
    { be_const_key(Set_Line_Rounded, 14), be_const_ctype_func(Berry_Style_Class_Set_Line_Rounded_B55F523B_B30A_405C_A347_E6A9B4D601A0) },
    { be_const_key(Set_Shadow_Offset_Y, 4), be_const_ctype_func(Berry_Style_Class_Set_Shadow_Offset_Y_55B5C874_6613_4A68_8A4E_13543B08A318) },
    { be_const_key(Set_Alignment, -1), be_const_ctype_func(Berry_Style_Class_Set_Alignment_0CC17EF8_6037_4484_B476_2B9D0C2423CE) },
    { be_const_key(Set_Flex_Cross_Place, 32), be_const_ctype_func(Berry_Style_Class_Set_Flex_Cross_Place_CA39A214_714F_42EA_AD98_1D5E2FD889CE) },
    { be_const_key(Set_Image_Recolor_Opacity, -1), be_const_ctype_func(Berry_Style_Class_Set_Image_Recolor_Opacity_7F2F03BE_7979_4C22_8B29_4E41E6306C35) },
    { be_const_key(Set_Grid_Row_Alignment, 97), be_const_ctype_func(Berry_Style_Class_Set_Grid_Row_Alignment_10E043BA_519B_451A_B333_494E8770D797) },
    { be_const_key(Set_Line_Color, 18), be_const_ctype_func(Berry_Style_Class_Set_Line_Color_F65C25B8_E32B_4CD2_B738_8C0F33DC9917) },
    { be_const_key(Set_Line_Opacity, 43), be_const_ctype_func(Berry_Style_Class_Set_Line_Opacity_51A44C24_279A_445B_A0BB_76A7C58D6752) },
    { be_const_key(Set_Flex_Grow, 1), be_const_ctype_func(Berry_Style_Class_Set_Flex_Grow_D27BA67C_6AD8_4016_AC41_AE9FE2061B25) },
    { be_const_key(Set_Y, 24), be_const_ctype_func(Berry_Style_Class_Set_Y_B4E599AF_F24E_4275_80C5_F0C63E8FAC0D) },
    { be_const_key(Set_Height, -1), be_const_ctype_func(Berry_Style_Class_Set_Height_01992120_EF31_49A9_A2F1_8E570776114D) },
    { be_const_key(Set_Pad_Top, -1), be_const_ctype_func(Berry_Style_Class_Set_Pad_Top_B06D9759_907B_4F8B_B780_CBA14E99385F) },
    { be_const_key(Set_Arc_Rounded, -1), be_const_ctype_func(Berry_Style_Class_Set_Arc_Rounded_9D7A7D2F_7391_4D35_A152_A98291D0C434) },
    { be_const_key(Set_Clip_Corner, -1), be_const_ctype_func(Berry_Style_Class_Set_Clip_Corner_32ADCC4E_A67A_4E93_84F4_43239E7A0BAE) },
    { be_const_key(Set_Maximum_Width, 36), be_const_ctype_func(Berry_Style_Class_Set_Maximum_Width_BF7F209C_403F_4ADA_99AA_E42B51519B94) },
    { be_const_key(Set_Text_Color, 50), be_const_ctype_func(Berry_Style_Class_Set_Text_Color_1C9487F5_6BC0_491A_BC3E_1B3F28B5557D) },
    { be_const_key(Set_Transform_Width, -1), be_const_ctype_func(Berry_Style_Class_Set_Transform_Width_B2AF00BF_616A_4703_B254_0EA52BCA5414) },
    { be_const_key(Set_Pad_Row, 84), be_const_ctype_func(Berry_Style_Class_Set_Pad_Row_2B8C3267_6D3C_4BE0_9738_4138F2B33F5C) },
    { be_const_key(Set_Text_Line_Space, -1), be_const_ctype_func(Berry_Style_Class_Set_Text_Line_Space_8FE5DBA0_1F68_479E_B9E5_59255BE9239B) },
    { be_const_key(Set_Arc_Color, -1), be_const_ctype_func(Berry_Style_Class_Set_Arc_Color_FC6C19AC_3C33_4BC9_9605_C116BF3B00A1) },
    { be_const_key(Set_Translate_Y, 101), be_const_ctype_func(Berry_Style_Class_Set_Translate_Y_7168634E_8B40_4416_8D03_C31E55C070C9) },
    { be_const_key(Set_Radius, 21), be_const_ctype_func(Berry_Style_Class_Set_Radius_1B1BEFF1_3C04_4897_A941_5DFE5CF958AF) },
    { be_const_key(Set_Background_Gradient_Stop, -1), be_const_ctype_func(Berry_Style_Class_Set_Background_Gradient_Stop_D162BF53_0B44_4C3A_B7CE_310F5675F0C4) },
    { be_const_key(Set_Minimum_Height, -1), be_const_ctype_func(Berry_Style_Class_Set_Minimum_Height_540F7B7A_A975_4A71_9E9D_CC283A58EE41) },
    { be_const_key(Set_Width, -1), be_const_ctype_func(Berry_Style_Class_Set_Width_00557B03_1C4E_4FD4_90A7_B0C1FAE12CB3) },
    { be_const_key(Set_Grid_Cell_X__Alignment, 27), be_const_ctype_func(Berry_Style_Class_Set_Grid_Cell_X_Alignment_A1EDB0F0_5AB2_4C54_87BE_8FAB9117F964) },
    { be_const_key(Set_Pad_Bottom, -1), be_const_ctype_func(Berry_Style_Class_Set_Pad_Bottom_A401DC62_0F12_48D6_9D21_7C73430AC685) },
    { be_const_key(Set_Transform_Zoom, -1), be_const_ctype_func(Berry_Style_Class_Set_Transform_Zoom_3A4C8527_4129_467E_AEF2_973499DEE6BF) },
    { be_const_key(Set_Shadow_Spread, -1), be_const_ctype_func(Berry_Style_Class_Set_Shadow_Spread_AAAEC716_AA99_45A4_AE13_1C671EB0ABB7) },
    { be_const_key(Set_Shadow_Width, -1), be_const_ctype_func(Berry_Style_Class_Set_Shadow_Width_A2638A0C_86FF_471F_9636_44B7C792989F) },
    { be_const_key(Set_Grid_Column_Alignment, 13), be_const_ctype_func(Berry_Style_Class_Set_Grid_Column_Alignment_7095FAB7_D869_4731_BA46_97C2A9489A78) },
    { be_const_key(Set_Layout, 11), be_const_ctype_func(Berry_Style_Class_Set_Layout_36F41736_8491_4512_AE3E_4061E0103E63) },
    { be_const_key(Set_Text_Alignment, -1), be_const_ctype_func(Berry_Style_Class_Set_Text_Alignment_078B9DA8_D2D2_423D_994C_8ED7B360237A) },
    { be_const_key(init, -1), be_const_ctype_func(Berry_Style_Class_Initialize_285A7F82_6037_4F26_9ED6_B3B965072897) },
    { be_const_key(Set_Border_Side, -1), be_const_ctype_func(Berry_Style_Class_Set_Border_Side_570EA13E_07D4_4166_A8DD_0BAF982EE106) },
    { be_const_key(Set_Pad_All, -1), be_const_ctype_func(Berry_Style_Class_Set_Pad_All_F4186FBF_97DB_4096_B335_D7DE180AA604) },
    { be_const_key(Set_Text_Letter_Space, -1), be_const_ctype_func(Berry_Style_Class_Set_Text_Letter_Space_59964CA5_9E89_4CC5_AF84_9D30F8179F12) },
    { be_const_key(Set_Color_Filter_Opacity, -1), be_const_ctype_func(Berry_Style_Class_Set_Color_Filter_Opacity_A989C586_1C04_43E1_AF8E_BCA8CF4246DF) },
    { be_const_key(Set_Pad_Left, -1), be_const_ctype_func(Berry_Style_Class_Set_Pad_Left_D9E5C414_F6B6_49C2_8FFB_22BD9F1FE9C9) },
    { be_const_key(Set_Image_Opacity, 56), be_const_ctype_func(Berry_Style_Class_Set_Image_Opacity_429ADE00_3F39_4381_AEDC_0BAE4CFE9639) },
    { be_const_key(Set_Background_Image_Opacity, -1), be_const_ctype_func(Berry_Style_Class_Set_Background_Image_Opacity_E50361C2_90E7_45E0_BCD9_AF8FB5BFE641) },
    { be_const_key(Set_Grid_Cell_Row_Span, -1), be_const_ctype_func(Berry_Style_Class_Set_Grid_Cell_Row_Span_767F8AE4_41CD_4DC2_8B7D_8B0FBDF8E1BC) },
    { be_const_key(Set_Blend_Mode, 40), be_const_ctype_func(Berry_Style_Class_Set_Blend_Mode_16262485_C90B_478F_9CCB_6F1215439E98) },
    { be_const_key(Set_Outline_Width, 3), be_const_ctype_func(Berry_Style_Class_Set_Outline_Width_15872936_4579_4743_B085_C22865F6D79F) },
    { be_const_key(Set_Flex_Track_Place, 9), be_const_ctype_func(Berry_Style_Class_Set_Flex_Track_Place_82E0140C_198E_4D7F_95E7_BD02A3316640) },
    { be_const_key(_p, -1), be_const_var(0) },
    { be_const_key(Set_Animation_Speed, -1), be_const_ctype_func(Berry_Style_Class_Set_Animation_Speed_056EFB5F_0140_484F_8FE5_3678122E7A49) },
    { be_const_key(Set_Pad_Column, -1), be_const_ctype_func(Berry_Style_Class_Set_Pad_Column_5B44BE62_B9D9_43B1_A023_EE152088EAD4) },
    { be_const_key(Set_Text_Decor, -1), be_const_ctype_func(Berry_Style_Class_Set_Text_Decor_F02AB501_EC01_420A_B3A3_4C2344872FAC) },
    { be_const_key(Set_Shadow_Offset_X_, -1), be_const_ctype_func(Berry_Style_Class_Set_Shadow_Offset_X_D0F95927_594D_44F9_B043_F5F2CC506F5C) },
    { be_const_key(Set_Size, -1), be_const_ctype_func(Berry_Style_Class_Set_Size_FBBF457E_92A4_4790_BD28_7AF65CE2FA6D) },
    { be_const_key(Set_Shadow_Opacity, -1), be_const_ctype_func(Berry_Style_Class_Set_Shadow_Opacity_2CFB3F23_F293_41F0_BC17_8DFC550E8180) },
    { be_const_key(deinit, 77), be_const_ctype_func(Berry_Style_Class_Deinitialize_09471878_0ECB_4CCC_B372_25A85254A29C) },
    { be_const_key(Set_Arc_Width, 87), be_const_ctype_func(Berry_Style_Class_Set_Arc_Width_8AFF1291_D7D8_4E4A_B571_5CED9BC2ED80) },
    { be_const_key(Set_Pad_Horizontal, 19), be_const_ctype_func(Berry_Style_Class_Set_Pad_Horizontal_1C935B97_ECC1_4B5B_902D_69D22C42761F) },
    { be_const_key(Set_X_, -1), be_const_ctype_func(Berry_Style_Class_Set_X_C60EA009_E309_4218_907E_7F1037776550) },
    { be_const_key(Set_Pad_Right, -1), be_const_ctype_func(Berry_Style_Class_Set_Pad_Right_DB07DC9D_586E_4418_8F93_EDE4F6783B5C) },
    { be_const_key(Set_Shadow_Color, 73), be_const_ctype_func(Berry_Style_Class_Set_Shadow_Color_19A9F49B_814F_42D8_A6F1_D4AED3AEA6E7) },
    { be_const_key(Set_Grid_Cell_Y_Alignment, -1), be_const_ctype_func(Berry_Style_Class_Set_Grid_Cell_Y_Alignment_209705A4_1D9F_43A9_A6CC_F3EBFBF295DD) },
    { be_const_key(Set_Image_Recolor, -1), be_const_ctype_func(Berry_Style_Class_Set_Image_Recolor_271204C9_6C1F_45A3_A8A5_0A3A30EC2358) },
    { be_const_key(Set_Grid_Cell_Row_Position, 22), be_const_ctype_func(Berry_Style_Class_Set_Grid_Cell_Row_Position_1D1009F0_995F_4449_B4E7_D9F083D376CB) },
    { be_const_key(Set_Text_Opacity, -1), be_const_ctype_func(Berry_Style_Class_Set_Text_Opacity_B3D3904C_6B98_4441_8EC5_45C0352FC9D9) },
    { be_const_key(Set_Transform_Angle, -1), be_const_ctype_func(Berry_Style_Class_Set_Transform_Angle_26A99E75_5356_4F8A_A720_120111605988) },
    { be_const_key(Set_Outline_Pad, -1), be_const_ctype_func(Berry_Style_Class_Set_Outline_Pad_046ECC42_AAC5_40F6_9D6D_75F63EA715D8) },
    { be_const_key(Set_Pad_Vertical, -1), be_const_ctype_func(Berry_Style_Class_Set_Pad_Vertical_5E006B1F_F7A0_40A6_8D7D_C26FC1429D31) },
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
