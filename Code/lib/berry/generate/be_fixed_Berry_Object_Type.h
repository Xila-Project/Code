#include "be_constobj.h"

static be_define_const_map_slots(Berry_Object_Type_map) {
    { be_const_key(Add_Flag, -1), be_const_ctype_func(Berry_Object_Class_Add_Flag_051C2BB4_57A1_480B_AC0A_8B7816411543) },
    { be_const_key(Set_Style_Background_Image_Recolor_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Background_Image_Recolor_Opacity_837CD09D_359C_43F3_850E_F016FAA6DA6B) },
    { be_const_key(Get_Style_Background_Color, 144), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Color_546A1A57_03E9_4F69_A36F_7D7560C2D956) },
    { be_const_key(Get_Style_Grid_Cell_Column_Position, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Grid_Cell_Column_Position_575EDC59_B303_4DE6_BE64_A4EB52BE54B2) },
    { be_const_key(Set_Style_Shadow_Color, 180), be_const_ctype_func(Berry_Object_Class_Set_Style_Shadow_Color_7E8D82C1_8486_483D_8467_F6D497070DD3) },
    { be_const_key(Set_Height, -1), be_const_ctype_func(Berry_Object_Class_Set_Height_4FF89777_EA4F_4413_9C4C_6BC067423E2B) },
    { be_const_key(Get_Style_Width, 135), be_const_ctype_func(Berry_Object_Class_Get_Style_Width_9B9E7C54_8897_4B05_A5A0_851CC4C07A45) },
    { be_const_key(DPX, 154), be_const_ctype_func(Berry_Object_Class_DPX_DEE9BC9A_CF2B_4611_B23E_37C4E4F06E83) },
    { be_const_key(Get_Style_Text_Decor, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Text_Decor_A40EB7CC_BA8E_4836_A9D6_62FF1BEA9802) },
    { be_const_key(Get_Style_Grid_Column_Descriptor_Array, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Grid_Column_Descriptor_Array_FE69CE59_AE5D_439B_A6DF_C20DF5B01EE8) },
    { be_const_key(Set_Style_Image_Recolor_Opacity, 249), be_const_ctype_func(Berry_Object_Class_Set_Style_Image_Recolor_Opacity_C797D3CB_0B72_47A5_B092_546DDBC90255) },
    { be_const_key(Get_Child_Index, 56), be_const_ctype_func(Berry_Object_Class_Get_Child_Index_52EDBCA7_45AA_43C6_A1BB_BC0BF237995C) },
    { be_const_key(Get_Style_Line_Dash_Width, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Line_Dash_Width_61A9944E_B8BD_471F_B657_C1DEC33751B4) },
    { be_const_key(Get_Style_Background_Image_Source, 148), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Image_Source_0A4EB48F_0286_4AEB_AF1E_85E38188C2B4) },
    { be_const_key(Move_Foreground, -1), be_const_ctype_func(Berry_Object_Class_Move_Foreground_453BE6D5_F595_4EC8_94E5_D3C591F4377F) },
    { be_const_key(Get_Style_Grid_Cell_Row_Span, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Grid_Cell_Row_Span_1012119C_05B0_42BC_BCA0_A370ABDCDB8E) },
    { be_const_key(Get_Style_Outline_Color_Filtered, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Outline_Color_Filtered_4E443F03_DB84_4AA1_8017_883AD5902C4E) },
    { be_const_key(Set_Style_Background_Main_Stop, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Background_Main_Stop_377E7616_2CD9_4D92_8798_3E5A5296DB2B) },
    { be_const_key(Get_Style_Flex_Cross_Place, 13), be_const_ctype_func(Berry_Object_Class_Get_Style_Flex_Cross_Place_B5B76523_FB13_45A5_926C_9F105D90EC0A) },
    { be_const_key(Set_Style_Flex_Grow, 11), be_const_ctype_func(Berry_Object_Class_Set_Style_Flex_Grow_9EE1D168_1F54_4C02_A9C7_75FF333AA6A1) },
    { be_const_key(Get_Style_Arc_Image_Source, 150), be_const_ctype_func(Berry_Object_Class_Get_Style_Arc_Image_Source_9FED9FCB_226C_4606_9526_C81737BBB793) },
    { be_const_key(Set_Style_Background_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Background_Opacity_D3616816_580E_4F02_B052_F15FB13EB3B5) },
    { be_const_key(Get_Style_X_, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_X_96AC905F_3289_43E1_8E3C_F370F041BBCE) },
    { be_const_key(Set_Style_Grid_Column_Alignment, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Grid_Column_Alignment_07D88C7C_29EE_4FFC_895F_A8D3FCB2D900) },
    { be_const_key(Add_Style, 149), be_const_ctype_func(Berry_Object_Class_Add_Style_48794E6C_7DAD_4B22_B463_FBCCC31391D0) },
    { be_const_key(Set_Style_Y, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Y_355E2CD2_E79C_432D_B09A_472957D9E2F5) },
    { be_const_key(Set_Position_X_, -1), be_const_ctype_func(Berry_Object_Class_Set_Position_X_D648EBA3_76C3_4A1C_92D9_EA5F0DA9E637) },
    { be_const_key(Has_Any_Flag, -1), be_const_ctype_func(Berry_Object_Class_Has_Any_Flag_EEBE87F6_1189_4CFA_858C_9C644F26B3CB) },
    { be_const_key(Send_Event, 208), be_const_ctype_func(Berry_Object_Class_Send_Event_FDCA575D_5527_4154_A988_8CFBF1921385) },
    { be_const_key(Set_Style_Grid_Cell_Row_Position, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Grid_Cell_Row_Position_F2D773C3_67BB_4AFD_9A2F_A95927D31AAF) },
    { be_const_key(Set_Tile, 60), be_const_ctype_func(Berry_Object_Class_Set_Tile_CE4B69E8_319C_438E_95AC_4332A185C36D) },
    { be_const_key(Set_Style_Color_Filter_Descriptor, 252), be_const_ctype_func(Berry_Object_Class_Set_Style_Color_Filter_Descriptor_17D4DEF1_A45D_4403_AE60_54C3B99A7EE1) },
    { be_const_key(Set_Style_Pad_Row, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Pad_Row_87E91CA2_B653_4B12_A596_131411DB9A80) },
    { be_const_key(Set_Style_Border_Post, 207), be_const_ctype_func(Berry_Object_Class_Set_Style_Border_Post_F2835F06_D714_426F_B39D_8AFE65725287) },
    { be_const_key(Set_Style_Line_Dash_Gap, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Line_Dash_Gap_A823A65F_D223_47CF_BE77_7C716571892F) },
    { be_const_key(Set_Style_Grid_Cell_Y_Alignment, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Grid_Cell_Y_Alignment_32B7279C_3953_4E37_BAA0_A0B1708BCD4B) },
    { be_const_key(Get_Style_Arc_Color_Filtered, 83), be_const_ctype_func(Berry_Object_Class_Get_Style_Arc_Color_Filtered_B8860AA2_EF60_4905_9443_A060137AAE3E) },
    { be_const_key(Set_Style_Shadow_Offset_X_, 49), be_const_ctype_func(Berry_Object_Class_Set_Style_Shadow_Offset_X_A674A478_2CE8_4E9E_8E22_8F66D6D5EBD8) },
    { be_const_key(Set_Style_Grid_Cell_Column_Position, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Grid_Cell_Column_Position_77854755_1C88_40D2_BFDE_870475AC77B8) },
    { be_const_key(Get_Style_Text_Line_Space, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Text_Line_Space_A76E7B7E_5D8E_4663_BFDD_A5A8A35C8CFE) },
    { be_const_key(Set_Style_Grid_Cell_X__Alignment, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Grid_Cell_X_Alignment_B3499AE0_2037_4A24_A4C1_F1C76C46CEAC) },
    { be_const_key(Set_Style_Minimum_Width, 175), be_const_ctype_func(Berry_Object_Class_Set_Style_Minimum_Width_D4668265_3F47_473D_9DAC_7F4D83B9B846) },
    { be_const_key(Get_Style_Shadow_Color, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Shadow_Color_8491E05B_8820_43A7_912E_591CF2054640) },
    { be_const_key(Set_Style_Image_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Image_Opacity_D710F2B5_C92B_43E7_8056_28C25971DF37) },
    { be_const_key(Get_Style_Pad_Row, 96), be_const_ctype_func(Berry_Object_Class_Get_Style_Pad_Row_3CA53AEE_2BA7_43A0_B7D7_A756F6CCB9B6) },
    { be_const_key(Create, -1), be_const_ctype_func(Berry_Object_Class_Create_F63AE927_C665_4086_8A41_B6C2FB15F6E0) },
    { be_const_key(Set_Style_Line_Dash_Width, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Line_Dash_Width_9A163CDE_2986_4DDD_86F1_B745045E4D83) },
    { be_const_key(Get_Style_Minimum_Width, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Minimum_Width_C6143598_223F_4E05_B49A_F839DA3ABE38) },
    { be_const_key(Get_Style_Outline_Width, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Outline_Width_6ED2E4CD_71DC_4323_8BBF_FA3FDD766AA0) },
    { be_const_key(Set_Alignment, 170), be_const_ctype_func(Berry_Object_Class_Set_Alignment_FFA7795C_4AD8_4091_B774_AA73C44ED774) },
    { be_const_key(Get_Style_Color_Filter_Opacity, 26), be_const_ctype_func(Berry_Object_Class_Get_Style_Color_Filter_Opacity_FD3A3289_9ECC_4FE8_9C5F_62C3F109B3F5) },
    { be_const_key(Set_Style_Border_Color, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Border_Color_0F32161C_64DB_4A47_BFE1_CBEC6479DD4F) },
    { be_const_key(Get_Style_Arc_Rounded, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Arc_Rounded_B82D87FE_A2B3_47F6_B7DC_0C585B273737) },
    { be_const_key(Set_Style_Grid_Column_Descriptor_Array, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Grid_Column_Descriptor_Array_A1B6F0F3_799F_4D9A_9F79_41D5E69ECAFB) },
    { be_const_key(Get_Style_Line_Color_Filtered, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Line_Color_Filtered_90DF2FCC_C275_436F_84A1_86CF29A03120) },
    { be_const_key(Set_Style_Text_Color, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Text_Color_22610450_F672_499C_99F0_1AFADFC97003) },
    { be_const_key(_X21_X3D, -1), be_const_ctype_func(Berry_Object_Class_Operator_E785D60B_1879_46DC_A8EF_30479DD73024) },
    { be_const_key(Get_Style_Grid_Column_Alignment, 0), be_const_ctype_func(Berry_Object_Class_Get_Style_Grid_Column_Alignment_FF55E21D_A64E_4528_87E9_3FC20AD325D1) },
    { be_const_key(Get_Style_Maximum_Height, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Maximum_Height_C29CD7E4_D3E7_44D0_B428_9A4C7D6290A2) },
    { be_const_key(Set_Style_Arc_Width, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Arc_Width_4700905E_6AFA_48D6_B5F3_4583270665D0) },
    { be_const_key(Set_Style_Background_Image_Opacity, 195), be_const_ctype_func(Berry_Object_Class_Set_Style_Background_Image_Opacity_9BD4494C_00C0_4A7F_93B8_0806E0759306) },
    { be_const_key(Set_Style_Text_Decor, 55), be_const_ctype_func(Berry_Object_Class_Set_Style_Text_Decor_D90140CC_C595_410F_B53F_D3537AC72087) },
    { be_const_key(Delete, -1), be_const_ctype_func(Berry_Object_Class_Delete_825CE3D3_E076_4351_8F90_A0E9C69A6965) },
    { be_const_key(Get_Style_Pad_Column, 235), be_const_ctype_func(Berry_Object_Class_Get_Style_Pad_Column_62B656C9_B0E8_4FEF_883F_73D7D91BBD4B) },
    { be_const_key(deinit, 10), be_const_ctype_func(Berry_Object_Class_Deinitialize_C68CD6AD_7429_4917_880B_27B31516AA78) },
    { be_const_key(Get_Style_Base_Direction, 247), be_const_ctype_func(Berry_Object_Class_Get_Style_Base_Direction_AFA20407_E042_4DF3_BCEA_19373CF5AAA5) },
    { be_const_key(Set_Style_Transform_Zoom, 38), be_const_ctype_func(Berry_Object_Class_Set_Style_Transform_Zoom_4BDFD25A_B767_4B6A_A784_FAD3A1459106) },
    { be_const_key(Get_Style_Image_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Image_Opacity_C212A9D4_8708_45DA_9C75_2EC13E3890E4) },
    { be_const_key(Set_Style_Animation_Speed, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Animation_Speed_C4A59959_A16C_45AC_82D6_E3F4BBD5E8F2) },
    { be_const_key(Get_Scroll_Left, -1), be_const_ctype_func(Berry_Object_Class_Get_Scroll_Left_EDB1F049_A2C8_4B81_8EEC_D28ABBB82A3C) },
    { be_const_key(Get_Child, 140), be_const_ctype_func(Berry_Object_Class_Get_Child_017A5546_35EF_4C2A_8C3A_B1AFEE3721A9) },
    { be_const_key(Get_Style_Translate_X_, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Translate_X_BD4C7FBE_A8DF_4A48_9B66_91FA8B8A00B8) },
    { be_const_key(Set_Style_Base_Direction, 156), be_const_ctype_func(Berry_Object_Class_Set_Style_Base_Direction_859BB396_D1FD_4102_8D8A_268F681D9CE8) },
    { be_const_key(Set_Style_Grid_Row_Descriptor_Array, 147), be_const_ctype_func(Berry_Object_Class_Set_Style_Grid_Row_Descriptor_Array_29FF71C8_C1A8_43EA_BA77_F77892A458D5) },
    { be_const_key(Set_Style_X_, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_X_DC493900_777E_47A9_B0C1_85771C22BE04) },
    { be_const_key(Set_Grid_Alignment, 131), be_const_ctype_func(Berry_Object_Class_Set_Grid_Alignment_7898F1FD_AC26_4C33_AE19_68287350D32C) },
    { be_const_key(Get_Style_Image_Recolor_Opacity, 51), be_const_ctype_func(Berry_Object_Class_Get_Style_Image_Recolor_Opacity_F8146272_ACAA_4703_84F1_5FB9EEEBA33E) },
    { be_const_key(Set_Style_Text_Opacity, 241), be_const_ctype_func(Berry_Object_Class_Set_Style_Text_Opacity_8AD9960F_F608_4775_B6DE_FF431B246927) },
    { be_const_key(Get_Style_Shadow_Offset_Y, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Shadow_Offset_Y_F5B792CE_7FAC_43F0_93D5_20530275AE40) },
    { be_const_key(Get_State, -1), be_const_ctype_func(Berry_Object_Class_Get_State_B09E9358_A127_4F0D_89FB_B5E88A33FD91) },
    { be_const_key(Set_Style_Arc_Color, 14), be_const_ctype_func(Berry_Object_Class_Set_Style_Arc_Color_C7A7B516_7C80_4C0F_B340_C2D7A1BB0ECC) },
    { be_const_key(Set_Flex_Alignment, -1), be_const_ctype_func(Berry_Object_Class_Set_Flex_Alignment_8768E13E_853B_4A42_97DF_33EB343B003B) },
    { be_const_key(Get_Style_Shadow_Spread, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Shadow_Spread_7FB9DDDD_0E0A_43FC_B433_8261E92AE72E) },
    { be_const_key(Set_Flex_Flow, 250), be_const_ctype_func(Berry_Object_Class_Set_Flex_Flow_689F1889_B970_450F_974A_4B5E75DB33AA) },
    { be_const_key(Set_Style_Background_Color, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Background_Color_09B10EA2_C183_4C1D_9B31_5F7679B30669) },
    { be_const_key(Get_Style_Grid_Cell_Y_Alignment, 118), be_const_ctype_func(Berry_Object_Class_Get_Style_Grid_Cell_Y_Alignment_4A0728E8_3905_47D5_BC4C_B4BA811A871D) },
    { be_const_key(Set_Style_Shadow_Spread, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Shadow_Spread_508DB50B_6291_4E1A_BB81_182540DA2259) },
    { be_const_key(Get_Style_Flex_Main_Place, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Flex_Main_Place_E746B506_269A_4802_8A2D_16771DE37F03) },
    { be_const_key(Scroll_Vertically, -1), be_const_ctype_func(Berry_Object_Class_Scroll_Vertically_AFA4CC34_134F_4210_8E4F_6388BF0A6F03) },
    { be_const_key(Get_Style_Blend_Mode, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Blend_Mode_5979E198_6CDE_46D6_A114_04CA2DEC636E) },
    { be_const_key(Remove_Event, 21), be_const_ctype_func(Berry_Object_Class_Remove_Event_5F2BF55E_3611_4050_BBF3_19058E2588E5) },
    { be_const_key(Set_Style_Flex_Track_Place, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Flex_Track_Place_F43BAF8D_F568_4985_A98E_178095265AE3) },
    { be_const_key(Get_Style_Background_Image_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Image_Opacity_849674A2_8749_45ED_927C_01661744B8A2) },
    { be_const_key(Clear_Pointer, -1), be_const_ctype_func(Berry_Object_Class_Clear_Pointer_9E452342_3F8B_40AD_8652_9598A657B139) },
    { be_const_key(Set_Style_Border_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Border_Opacity_7AF38E35_6B71_401E_8930_707AF7849D35) },
    { be_const_key(Get_Style_Line_Width, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Line_Width_85F11A0A_0D06_46EF_86B8_C61D1CCEFB42) },
    { be_const_key(Set_Style_Radius, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Radius_A4424423_9ACA_4945_8240_B9ED02C1A74F) },
    { be_const_key(Get_Group, 8), be_const_ctype_func(Berry_Object_Class_Get_Group_962B8AE1_2B37_44FC_ABE1_978828BAFBF1) },
    { be_const_key(_p, -1), be_const_var(0) },
    { be_const_key(Set_Style_Maximum_Width, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Maximum_Width_A40482D8_CFF4_4653_A4BC_5AFE097EE3E8) },
    { be_const_key(Get_Style_Translate_Y, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Translate_Y_2917F24F_047E_46E2_960A_61B6E9E9B0F7) },
    { be_const_key(Set_Index, -1), be_const_ctype_func(Berry_Object_Class_Set_Index_8E9F96FF_8BBE_40CD_B70B_60E828E3D68D) },
    { be_const_key(Set_Position_Y, -1), be_const_ctype_func(Berry_Object_Class_Set_Position_Y_11BE01FE_A551_451F_A150_51A7745C09AA) },
    { be_const_key(Get_Style_Background_Gradient_Color_Filtered, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Gradient_Color_Filtered_87B35BFB_070A_4161_99EC_29D2E8209DCB) },
    { be_const_key(Set_Style_Minimum_Height, 36), be_const_ctype_func(Berry_Object_Class_Set_Style_Minimum_Height_340B950F_F021_4A4C_8CEF_BA94F7B2D9E5) },
    { be_const_key(Get_Scroll_Y, 73), be_const_ctype_func(Berry_Object_Class_Get_Scroll_Y_A8C92F52_355E_4E46_AB4D_7733E8D6D199) },
    { be_const_key(Set_Style_Line_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Line_Opacity_BB913B8B_18F3_41F2_B14F_49CC18139319) },
    { be_const_key(_X3D_X3D, -1), be_const_ctype_func(Berry_Object_Class_Operator_E88F69D5_61AF_4250_AE86_6D673071CD8C) },
    { be_const_key(Add_State, -1), be_const_ctype_func(Berry_Object_Class_Add_State_6137DFA4_9153_45D7_BFE7_5BC96E9223DC) },
    { be_const_key(Get_Style_Height, 217), be_const_ctype_func(Berry_Object_Class_Get_Style_Height_C91061A5_0CEE_4A05_83EF_1112892D0254) },
    { be_const_key(Set_Style_Border_Side, 29), be_const_ctype_func(Berry_Object_Class_Set_Style_Border_Side_9257AAD5_AEB1_41F7_9023_E3617444B6ED) },
    { be_const_key(Has_Flag, -1), be_const_ctype_func(Berry_Object_Class_Has_Flag_AB1E9C46_97BF_48AD_A872_1CA5A52AFEBE) },
    { be_const_key(Get_Style_Animation_Speed, 75), be_const_ctype_func(Berry_Object_Class_Get_Style_Animation_Speed_8290D87B_74A9_4A40_813D_0A02F62B7AD1) },
    { be_const_key(Set_Style_Background_Image_Tiled, 237), be_const_ctype_func(Berry_Object_Class_Set_Style_Background_Image_Tiled_C31C2092_D9CF_468D_9D7D_D05EEA346D31) },
    { be_const_key(Set_Style_Line_Rounded, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Line_Rounded_47A69F8F_E9C8_489E_A2D0_BDCFE1CC86CE) },
    { be_const_key(Set_Style_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Opacity_49FC72D1_E35B_4801_A156_2D5605B5EF36) },
    { be_const_key(Clear_State, 93), be_const_ctype_func(Berry_Object_Class_Clear_State_8548EF1A_0AFC_48C4_91A5_A1E0CEFBBECB) },
    { be_const_key(Get_Style_Background_Image_Recolor_Opacity, 115), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Image_Recolor_Opacity_2778F59A_0F25_4D90_A52D_8F8D2FE9112B) },
    { be_const_key(Get_Style_Text_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Text_Opacity_83370D12_E55A_4B8A_8564_1BB907C8A7D6) },
    { be_const_key(Set_Style_Line_Width, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Line_Width_13C9DE45_E812_4184_B928_43D67A0152A4) },
    { be_const_key(Scroll_Horizontally, 157), be_const_ctype_func(Berry_Object_Class_Scroll_Horizontally_85BC7F9D_6209_4206_A031_3DFFF4A9CF80) },
    { be_const_key(Clear_Flag, -1), be_const_ctype_func(Berry_Object_Class_Clear_Flag_0D0B3603_0F94_4090_A9B7_DFABE5C29838) },
    { be_const_key(Set_Style_Maximum_Height, 161), be_const_ctype_func(Berry_Object_Class_Set_Style_Maximum_Height_FD8D41A4_B178_47FC_A6F7_9CA042BFF76E) },
    { be_const_key(Get_Style_Background_Image_Recolor, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Image_Recolor_EB0AB872_C2AD_4446_926D_0DA88B662192) },
    { be_const_key(Set_Style_Outline_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Outline_Opacity_F091A86F_1A2D_46DC_BD7C_E0DAFECCCC28) },
    { be_const_key(Set_Style_Text_Alignment, 168), be_const_ctype_func(Berry_Object_Class_Set_Style_Text_Alignment_0645BE9A_23D4_44C7_B95D_4BE6C928BB6A) },
    { be_const_key(Get_Style_Image_Recolor_Filtered, 4), be_const_ctype_func(Berry_Object_Class_Get_Style_Image_Recolor_Filtered_17152F6C_DCE7_4BA1_B163_8A2554A45900) },
    { be_const_key(Get_Style_Text_Alignment, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Text_Alignment_671B1C25_A7D0_49E9_B482_F4E7EA57EAE3) },
    { be_const_key(Get_Style_Transform_Angle, 42), be_const_ctype_func(Berry_Object_Class_Get_Style_Transform_Angle_54CF6D34_568D_4AF6_8CE0_346795B59E39) },
    { be_const_key(Set_Grid_Cell, -1), be_const_ctype_func(Berry_Object_Class_Set_Grid_Cell_8AE4F6A4_36CF_4532_B119_B57576861D89) },
    { be_const_key(Get_Style_Background_Image_Tiled, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Image_Tiled_F5D6C108_1712_417D_871E_9365991958F9) },
    { be_const_key(Get_Style_Line_Color, 82), be_const_ctype_func(Berry_Object_Class_Get_Style_Line_Color_5B74B484_F499_44A0_9B76_00F72F2E78EE) },
    { be_const_key(Set_Style_Layout, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Layout_83D443AF_0CA0_411B_ABAF_FC5999714D61) },
    { be_const_key(Get_Style_Grid_Row_Alignment, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Grid_Row_Alignment_E2095D85_4F94_43B9_A207_CA8D40053E8E) },
    { be_const_key(Get_User_Data, 101), be_const_ctype_func(Berry_Object_Class_Get_User_Data_A0BC10A1_EE7B_451A_86E0_EE83ABE3FA95) },
    { be_const_key(Set_Style_Arc_Rounded, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Arc_Rounded_4551368D_3BD9_43C9_BC72_2F0B57B840FD) },
    { be_const_key(Get_Style_Shadow_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Shadow_Opacity_D8F2A629_A0DD_4E45_9C30_333D2CE1E650) },
    { be_const_key(Get_Style_Background_Main_Stop, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Main_Stop_98A6167B_7391_411F_B6DF_7E05E8F8E880) },
    { be_const_key(Get_Style_Image_Recolor, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Image_Recolor_750A2A99_0221_41DD_8E46_6175EB76AB7C) },
    { be_const_key(Get_Style_Alignment, 89), be_const_ctype_func(Berry_Object_Class_Get_Style_Alignment_6E202A13_7327_4998_9B0D_A49CC9921D4B) },
    { be_const_key(Get_Style_Arc_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Arc_Opacity_39C88AD8_7714_4BA7_BCF3_A184117E7167) },
    { be_const_key(Get_Style_Maximum_Width, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Maximum_Width_6F82CBF6_F18E_4772_BF8B_30D37FB3F73A) },
    { be_const_key(Set_Style_Shadow_Opacity, 251), be_const_ctype_func(Berry_Object_Class_Set_Style_Shadow_Opacity_7FFBFCE4_F635_4523_9609_14BD6074AC81) },
    { be_const_key(Get_Style_Transition, 1), be_const_ctype_func(Berry_Object_Class_Get_Style_Transition_DF967700_FFCD_44B5_880A_EDCF9FC8817E) },
    { be_const_key(Get_Style_Grid_Cell_Row_Position, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Grid_Cell_Row_Position_72A8E2A4_59EA_4AC2_ACC0_362F184C73A9) },
    { be_const_key(Set_Content_Height, 48), be_const_ctype_func(Berry_Object_Class_Set_Content_Height_A77BC4AF_D6EB_4EFA_8203_3B71F6362870) },
    { be_const_key(Get_Style_Border_Opacity, 74), be_const_ctype_func(Berry_Object_Class_Get_Style_Border_Opacity_7280A570_7D6E_4F65_ADA4_B5DD51834D03) },
    { be_const_key(Has_State, 219), be_const_ctype_func(Berry_Object_Class_Has_State_DDBD2197_CDAC_41FE_BC22_2F8CD7684E76) },
    { be_const_key(Get_Style_Border_Side, 178), be_const_ctype_func(Berry_Object_Class_Get_Style_Border_Side_10B957A9_5532_45E8_9E78_C84818F13A07) },
    { be_const_key(Get_Style_Flex_Flow, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Flex_Flow_2C657C65_C62E_4D07_B8F0_A6647F1B0987) },
    { be_const_key(Swap, -1), be_const_ctype_func(Berry_Object_Class_Swap_5CCC890C_2F55_4036_8E60_DA7A8B58FA04) },
    { be_const_key(Get_Style_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Opacity_818BA3A8_D05B_4F38_A8CB_B116586A0147) },
    { be_const_key(Set_Style_Transform_Width, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Transform_Width_7ED5DF41_905D_4E96_B095_CB7D3B75774F) },
    { be_const_key(Allocate_Special_Data, 65), be_const_ctype_func(Berry_Object_Class_Allocate_Special_Data_23DF616E_D0CF_461A_9F0C_820158768AB9) },
    { be_const_key(Get_Style_Background_Gradient, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Gradient_360FD8E8_987E_4E15_A309_23DE1A7B5DBC) },
    { be_const_key(Set_Style_Flex_Main_Place, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Flex_Main_Place_C2DC3476_8B52_4CBA_8A49_DDB6DABE5399) },
    { be_const_key(Set_Style_Pad_Bottom, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Pad_Bottom_2DB5E673_929E_4051_9266_AB0A58C9E703) },
    { be_const_key(Get_Style_Outline_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Outline_Opacity_45EB71CF_FE19_4135_B2F8_A256B22D7F35) },
    { be_const_key(Set_Style_Shadow_Offset_Y, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Shadow_Offset_Y_1F15A44D_BE3B_4575_B00D_50DCA7EEE285) },
    { be_const_key(Get_Style_Y, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Y_B02038E8_E68B_4210_9487_DDC91A76C6F8) },
    { be_const_key(Get_Style_Transform_Height, 111), be_const_ctype_func(Berry_Object_Class_Get_Style_Transform_Height_04FDA6C5_A20D_4895_8701_2A4F7F492C1C) },
    { be_const_key(Get_Style_Border_Color_Filtered, 16), be_const_ctype_func(Berry_Object_Class_Get_Style_Border_Color_Filtered_6EEDA202_ACD2_4B52_B545_C307BA1D9DB6) },
    { be_const_key(Set_Style_Width, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Width_16615CDD_69AD_4A77_B831_A63F3093DE32) },
    { be_const_key(Get_Children_Count, -1), be_const_ctype_func(Berry_Object_Class_Get_Children_Count_0B2A3CCC_E228_408D_B6AD_78653A293CA8) },
    { be_const_key(Set_Style_Height, 182), be_const_ctype_func(Berry_Object_Class_Set_Style_Height_66FF7E53_FA78_4132_9AFD_F43B4AD0BFB2) },
    { be_const_key(Set_Style_Alignment, 103), be_const_ctype_func(Berry_Object_Class_Set_Style_Alignment_AAF312DE_37DB_4D43_908E_FABEF69BE192) },
    { be_const_key(Scroll_To, -1), be_const_ctype_func(Berry_Object_Class_Scroll_To_4E19925A_8F69_41A6_A7BD_8C444613E265) },
    { be_const_key(Set_Style_Background_Image_Recolor, 95), be_const_ctype_func(Berry_Object_Class_Set_Style_Background_Image_Recolor_F44908C7_D610_4BD3_A9FF_758F3CA221AA) },
    { be_const_key(Set_Style_Translate_X_, 240), be_const_ctype_func(Berry_Object_Class_Set_Style_Translate_X_23BEEE5C_BB9F_474A_89B8_2FA6758454C4) },
    { be_const_key(Get_Style_Text_Color, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Text_Color_64BB83E8_4E0F_45B0_B5BA_0D90159AEA0F) },
    { be_const_key(Get_Style_Background_Gradient_Color, 211), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Gradient_Color_58001B72_D0FF_41FE_BD35_3902A9435E53) },
    { be_const_key(Remove_All_Events, -1), be_const_ctype_func(Berry_Object_Class_Remove_All_Events_1BE1C70B_9468_4E03_8299_564BF457DCA5) },
    { be_const_key(Get_Style_Minimum_Height, 114), be_const_ctype_func(Berry_Object_Class_Get_Style_Minimum_Height_B5730536_6D8A_40F1_AAD3_879F1A9C7885) },
    { be_const_key(Set_Style_Transform_Angle, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Transform_Angle_41F4E890_2622_4909_9CCF_775485A42672) },
    { be_const_key(Set_Style_Clip_Corner, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Clip_Corner_74335847_D057_4E2D_9BCE_2A64C43A41A9) },
    { be_const_key(init, -1), be_const_ctype_func(Berry_Object_Class_Initialize_F5583E8C_39D4_4F6A_BAA6_C77DEFFB3954) },
    { be_const_key(Set_Style_Arc_Opacity, 88), be_const_ctype_func(Berry_Object_Class_Set_Style_Arc_Opacity_CCDB58F6_339A_47C9_AD21_6657BF898EFF) },
    { be_const_key(Get_Style_Background_Dither_Mode, 145), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Dither_Mode_5B036E93_2024_4EB6_A9BB_FC41AB7E21E6) },
    { be_const_key(Get_Style_Outline_Color, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Outline_Color_7898CD53_6560_4F5E_8A46_B63A09408F5A) },
    { be_const_key(Set_Style_Border_Width, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Border_Width_17D35EF1_6EEB_4D1C_BF0D_F9A1609E258A) },
    { be_const_key(Get_Style_Background_Gradient_Stop, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Gradient_Stop_BE35C1F1_32E6_4C0D_BD13_C1D99A351AE5) },
    { be_const_key(Set_Style_Grid_Cell_Row_Span, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Grid_Cell_Row_Span_1E3FFAC3_621A_41C9_AD97_73E92037E919) },
    { be_const_key(Set_Style_Pad_Top, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Pad_Top_ED5434BA_028F_4843_9572_C17249F568B0) },
    { be_const_key(Get_Style_Grid_Row_Descriptor_Array, 143), be_const_ctype_func(Berry_Object_Class_Get_Style_Grid_Row_Descriptor_Array_4F39356E_6514_4AA4_8CFF_43703FC0242A) },
    { be_const_key(Get_Style_Line_Rounded, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Line_Rounded_A4CBE53A_4628_4D0B_B3ED_40DD8BE096EF) },
    { be_const_key(Set_Position, -1), be_const_ctype_func(Berry_Object_Class_Set_Position_6A75C42D_F6FE_4DD2_A5E0_03B03944132B) },
    { be_const_key(Get_Style_Layout, 142), be_const_ctype_func(Berry_Object_Class_Get_Style_Layout_83AAE673_D8DB_45DA_9832_6BC60E6AEB13) },
    { be_const_key(Set_Style_Blend_Mode, 102), be_const_ctype_func(Berry_Object_Class_Set_Style_Blend_Mode_8F985B4E_0738_4EE8_93BC_5C4D2C7E2773) },
    { be_const_key(Is_Valid, -1), be_const_ctype_func(Berry_Object_Class_Is_Valid_4276C416_A51A_48E0_A8D5_417DCEE79A3C) },
    { be_const_key(Get_Scroll_X_, -1), be_const_ctype_func(Berry_Object_Class_Get_Scroll_X_77C13685_572A_4D08_9600_A78795B0D59E) },
    { be_const_key(Get_Style_Line_Dash_Gap, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Line_Dash_Gap_C2D68E58_3430_4BC8_B416_4516A8AD771B) },
    { be_const_key(Set_Style_Pad_All, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Pad_All_EC4773D4_082D_49E5_BF19_660C1005E85C) },
    { be_const_key(Set_Style_Color_Filter_Opacity, 100), be_const_ctype_func(Berry_Object_Class_Set_Style_Color_Filter_Opacity_8A98F533_1BE1_4294_935A_B65BF5719027) },
    { be_const_key(Get_Style_Pad_Top, 130), be_const_ctype_func(Berry_Object_Class_Get_Style_Pad_Top_BB78F73F_4F4A_437E_8670_40C37CCF3259) },
    { be_const_key(Get_Style_Arc_Color, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Arc_Color_01D26218_A5FB_431A_A0EC_0C620A3B3A04) },
    { be_const_key(Get_Style_Background_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Opacity_C9D44534_8C09_4CC6_BB63_8BCCF25FF7CD) },
    { be_const_key(Set_Style_Pad_Column, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Pad_Column_707955F0_E89A_4E21_B235_93C0AD7C27F4) },
    { be_const_key(Get_Style_Pad_Left, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Pad_Left_ADE3DF4B_DF41_40DC_87AB_2215BEC5B63D) },
    { be_const_key(Get_Parent, -1), be_const_ctype_func(Berry_Object_Class_Get_Parent_48530800_505D_43BB_892F_14A26C5842A8) },
    { be_const_key(Get_Style_Border_Width, 23), be_const_ctype_func(Berry_Object_Class_Get_Style_Border_Width_0606D328_6430_41A5_B035_2AAF351521C3) },
    { be_const_key(Set_Style_Transform_Height, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Transform_Height_08CC45C8_CAAC_4B44_8C51_AD7A27A1030B) },
    { be_const_key(Scroll_By, -1), be_const_ctype_func(Berry_Object_Class_Scroll_By_62CDCE33_939F_45A1_95FA_39E547266FCC) },
    { be_const_key(Set_Style_Pad_Right, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Pad_Right_AC06EB38_BBD4_416E_9E7D_DF49F0B23EBD) },
    { be_const_key(Get_Style_Flex_Grow, 242), be_const_ctype_func(Berry_Object_Class_Get_Style_Flex_Grow_A1DCF53F_3F7C_46CE_AAA9_967A1C2627A1) },
    { be_const_key(Get_Style_Grid_Cell_X__Alignment, 205), be_const_ctype_func(Berry_Object_Class_Get_Style_Grid_Cell_X_Alignment_C93EC8DD_1040_4618_BD1A_3A95EB5DC933) },
    { be_const_key(Set_Style_Flex_Flow, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Flex_Flow_629D37C4_4233_417C_8B82_0051D9F8865E) },
    { be_const_key(Set_Tile_Identifier, -1), be_const_ctype_func(Berry_Object_Class_Set_Tile_Identifier_12831E5B_6409_4038_BD80_CB600FFE442E) },
    { be_const_key(Get_Style_Arc_Width, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Arc_Width_FF6E94BF_FDE4_45F9_BA42_EE01E0B8D9E1) },
    { be_const_key(Get_Style_Border_Color, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Border_Color_032CCB32_0327_4B3E_A48B_9CEDE0D4734A) },
    { be_const_key(Add_Event, -1), be_const_ctype_func(Berry_Object_Class_Add_Event_E48C4D9E_1689_4081_981A_51D31D91F741) },
    { be_const_key(Set_Style_Line_Color, 31), be_const_ctype_func(Berry_Object_Class_Set_Style_Line_Color_9AD37154_63BE_4365_8E76_68665DBA86F4) },
    { be_const_key(Get_Style_Transform_Width, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Transform_Width_07D24882_37F9_4A36_84FF_58CA267E773E) },
    { be_const_key(Set_Style_Image_Recolor, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Image_Recolor_BD1B8368_5E7F_4B36_9EA0_F4E30BA810CC) },
    { be_const_key(Get_Style_Text_Font, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Text_Font_70CB806A_EDE6_45CF_8A11_1814CAA6C889) },
    { be_const_key(Set_Parent, -1), be_const_ctype_func(Berry_Object_Class_Set_Parent_14D9CA38_4134_4749_853F_45C208049C4A) },
    { be_const_key(Get_Style_Shadow_Offset_X_, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Shadow_Offset_X_2FE99369_476E_400E_9756_44413FAF120A) },
    { be_const_key(Set_Style_Outline_Color, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Outline_Color_09EAB3E5_70F3_4CD6_952C_9F9401510E3A) },
    { be_const_key(Get_Style_Flex_Track_Place, 220), be_const_ctype_func(Berry_Object_Class_Get_Style_Flex_Track_Place_E512B695_8761_4778_BB1E_F116CBFF7E9F) },
    { be_const_key(Set_Layout, -1), be_const_ctype_func(Berry_Object_Class_Set_Layout_B4E3C859_B365_4F80_8775_E75125A2A1F1) },
    { be_const_key(Set_Style_Pad_Left, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Pad_Left_73D2531E_F77D_4756_B724_8670C20C40A7) },
    { be_const_key(Get_Scroll_Top, -1), be_const_ctype_func(Berry_Object_Class_Get_Scroll_Top_5612E1ED_511C_4616_91D7_2505F61A7262) },
    { be_const_key(Set_Style_Shadow_Width, 164), be_const_ctype_func(Berry_Object_Class_Set_Style_Shadow_Width_5F57821F_7EEB_42C7_A3CF_C657EA0C69BF) },
    { be_const_key(Set_Style_Outline_Pad, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Outline_Pad_ED50C528_0C85_4C27_A720_42654FCA4B00) },
    { be_const_key(Get_Scroll_Bottom, -1), be_const_ctype_func(Berry_Object_Class_Get_Scroll_Bottom_9D150082_2EDA_4204_B50D_3F8E496754D8) },
    { be_const_key(Get_Scroll_Right, 63), be_const_ctype_func(Berry_Object_Class_Get_Scroll_Right_AB817B27_27D0_467C_9ADA_966ABB0519C2) },
    { be_const_key(Get_Style_Background_Image_Recolor_Filtered, 41), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Image_Recolor_Filtered_5AFD0C0D_242B_45FD_A4DF_48658B57E984) },
    { be_const_key(Set_Width, 189), be_const_ctype_func(Berry_Object_Class_Set_Width_E53BCF20_CEAE_4B19_B904_4243FEE30F8E) },
    { be_const_key(Set_Style_Text_Line_Space, 141), be_const_ctype_func(Berry_Object_Class_Set_Style_Text_Line_Space_1B3AC519_A6E1_4C84_9997_6F404AFD04B7) },
    { be_const_key(Set_Style_Animation_Time, 201), be_const_ctype_func(Berry_Object_Class_Set_Style_Animation_Time_8707464A_EA21_4E9C_863E_BFD4FD3006B4) },
    { be_const_key(Set_Style_Grid_Row_Alignment, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Grid_Row_Alignment_E0B33628_2FA0_43E1_9E30_C9BA8570BE75) },
    { be_const_key(Clean, 173), be_const_ctype_func(Berry_Object_Class_Clean_7CE2DBA6_406B_463F_9463_6C59CE948332) },
    { be_const_key(Set_Flex_Grow, -1), be_const_ctype_func(Berry_Object_Class_Set_Flex_Grow_0B3302FB_8587_49D0_8CEF_64DE81E885E8) },
    { be_const_key(Set_Grid_Descriptor_Array, -1), be_const_ctype_func(Berry_Object_Class_Set_Grid_Descriptor_Array_990C68E5_54F4_4D55_A0D3_A7C4B6FF08ED) },
    { be_const_key(Get_Style_Border_Post, 72), be_const_ctype_func(Berry_Object_Class_Get_Style_Border_Post_B1A4F67D_B704_4BA0_8965_B7596FD61174) },
    { be_const_key(Get_Style_Transform_Zoom, 172), be_const_ctype_func(Berry_Object_Class_Get_Style_Transform_Zoom_F76FA90A_6004_47D6_B272_8012213277F3) },
    { be_const_key(Set_Style_Flex_Cross_Place, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Flex_Cross_Place_452FA19A_1985_4463_AF5E_B64C520E4027) },
    { be_const_key(Get_Style_Pad_Right, 86), be_const_ctype_func(Berry_Object_Class_Get_Style_Pad_Right_283A3D78_9C69_4241_B64A_7C393E8B1A39) },
    { be_const_key(Set_Style_Grid_Cell_Column_Span, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Grid_Cell_Column_Span_8977B41D_5F43_409A_B38D_E8FD03469FFB) },
    { be_const_key(Get_Style_Radius, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Radius_5D7630A9_FB26_49AE_BF76_CEAF2B1E00DA) },
    { be_const_key(Get_Style_Background_Gradient_Direction, 256), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Gradient_Direction_776C8B1A_B042_4636_9EE4_8B3B82F57647) },
    { be_const_key(Get_Style_Text_Color_Filtered, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Text_Color_Filtered_64D5365B_D42F_4EA2_8AF1_96B21E7ED8CC) },
    { be_const_key(Get_Style_Text_Letter_Space, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Text_Letter_Space_1AAAA567_18A5_4519_A2DF_EB1F9722B73E) },
    { be_const_key(Get_Style_Pad_Bottom, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Pad_Bottom_749B6F91_84F2_48AB_99D9_C2738060A7A4) },
    { be_const_key(Move_Background, -1), be_const_ctype_func(Berry_Object_Class_Move_Background_F869AEA4_4EA6_4020_906B_21C50B0B9FDC) },
    { be_const_key(Get_Style_Outline_Pad, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Outline_Pad_730C9BF2_6EE3_4C26_A099_77967EAFBF1F) },
    { be_const_key(Set_Size, -1), be_const_ctype_func(Berry_Object_Class_Set_Size_D18DAE54_B77C_4C88_A0F0_178E59184FC0) },
    { be_const_key(Set_Style_Translate_Y, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Translate_Y_FC5BC0CE_1EE8_44C0_9978_935C2A30BDE4) },
    { be_const_key(Get_Style_Shadow_Width, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Shadow_Width_5F5E5767_A449_4D2C_A8E8_74E92B165F96) },
    { be_const_key(Get_Style_Animation_Time, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Animation_Time_102A8A15_A465_4545_BDA0_FABBC20EC1C4) },
    { be_const_key(Get_Style_Shadow_Color_Filtered, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Shadow_Color_Filtered_40CECECD_AE21_4C4A_9232_83FB15A63020) },
    { be_const_key(Get_Style_Clip_Corner, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Clip_Corner_1BA9B64E_E77B_486F_974E_EA4F099F4353) },
    { be_const_key(Get_Style_Line_Opacity, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Line_Opacity_E68027B0_C1CE_430C_99E9_24C2CAC39D31) },
    { be_const_key(Get_Object_Visibility, -1), be_const_ctype_func(Berry_Object_Class_Get_Object_Visibility_65B89861_D697_4C84_92BF_EA4BA3290760) },
    { be_const_key(Set_Style_Outline_Width, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Outline_Width_359987BB_0CB6_4BB4_8252_C339D204A9CB) },
    { be_const_key(Get_Style_Background_Color_Filtered, 3), be_const_ctype_func(Berry_Object_Class_Get_Style_Background_Color_Filtered_78549D10_1432_44B3_8B05_44D620B4BE37) },
    { be_const_key(Set_Style_Background_Dither_Mode, 152), be_const_ctype_func(Berry_Object_Class_Set_Style_Background_Dither_Mode_353D3511_8DED_4A42_AA56_7AF29963E169) },
    { be_const_key(Get_Style_Grid_Cell_Column_Span, -1), be_const_ctype_func(Berry_Object_Class_Get_Style_Grid_Cell_Column_Span_D7F3BB2A_8E44_4152_A37B_001501E3E6CC) },
    { be_const_key(Set_Style_Text_Letter_Space, -1), be_const_ctype_func(Berry_Object_Class_Set_Style_Text_Letter_Space_346D1C70_BC29_466D_AB65_31BB5D368725) },
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
