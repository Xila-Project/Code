#include "be_constobj.h"

static be_define_const_map_slots(m_libGraphics_map) {
    { be_const_key(Event_Code_Hit_Test, -1), be_const_int(17) },
    { be_const_key(Symbol_Code_Left, 299), be_const_int(23) },
    { be_const_key(Button_Matrix_Control_Hidden, 8), be_const_int(16) },
    { be_const_key(Bar_Type, -1), be_const_class(Berry_Bar_Type) },
    { be_const_key(State_Default, -1), be_const_int(0) },
    { be_const_key(Opacity_Cover, -1), be_const_int(255) },
    { be_const_key(Enumeration_Reverse, 16), be_const_int(2) },
    { be_const_key(Alignment_Top_Left, -1), be_const_int(1) },
    { be_const_key(Bar_Mode_Normal, 297), be_const_int(0) },
    { be_const_key(Opacity_Opacity_100_Percent, -1), be_const_int(255) },
    { be_const_key(Alignment_Middle_Left, -1), be_const_int(7) },
    { be_const_key(Flex_Alignment_Start, 19), be_const_int(0) },
    { be_const_key(Symbol_Code_Down, -1), be_const_int(32) },
    { be_const_key(Color_Format_Enumeration_User_Encoded_1, 320), be_const_int(31) },
    { be_const_key(Message_Dialog_Type, -1), be_const_class(Berry_Message_Dialog_Type) },
    { be_const_key(Direction_Horizontal, 98), be_const_int(3) },
    { be_const_key(Color_Format_Enumeration_User_Encoded_5, 226), be_const_int(35) },
    { be_const_key(Table_Cell_Control_Merge_Right, -1), be_const_int(1) },
    { be_const_key(Flex_Flow_Column_Wrap_Reverse, -1), be_const_int(13) },
    { be_const_key(Alignment_Out_Top_Middle, -1), be_const_int(11) },
    { be_const_key(Mode_Enumeration_Special, 148), be_const_int(2) },
    { be_const_key(Part_Scrollbar, -1), be_const_int(65536) },
    { be_const_key(Bar_Mode_Range, 293), be_const_int(2) },
    { be_const_key(Event_Code_Screen_Loaded, 322), be_const_int(39) },
    { be_const_key(Color_Wheel_Mode_Value, -1), be_const_int(2) },
    { be_const_key(Alignment_Bottom_Right, 279), be_const_int(6) },
    { be_const_key(Enumeration_Normal, -1), be_const_int(0) },
    { be_const_key(Long_Dot, -1), be_const_int(1) },
    { be_const_key(Flex_Alignment_Center, -1), be_const_int(2) },
    { be_const_key(Event_Code_Screen_Unloaded, -1), be_const_int(40) },
    { be_const_key(Button_Matrix_Control_Checkable, 133), be_const_int(128) },
    { be_const_key(Symbol_Code_Shuffle, -1), be_const_int(30) },
    { be_const_key(Opacity_Opacity_70_Percent, 313), be_const_int(178) },
    { be_const_key(Mode_Enumeration_User_2, -1), be_const_int(5) },
    { be_const_key(Symbol_Code_Bullet, 269), be_const_int(0) },
    { be_const_key(Opacity_Opacity_50_Percent, 181), be_const_int(127) },
    { be_const_key(Event_Code_Draw_Main_Begin, -1), be_const_int(20) },
    { be_const_key(Color_Format_Enumeration_Reserved_18, 78), be_const_int(24) },
    { be_const_key(Event_Code_Insert, 97), be_const_int(29) },
    { be_const_key(Color_Wheel_Mode_Saturation, -1), be_const_int(1) },
    { be_const_key(Slider_Mode_Range, -1), be_const_int(2) },
    { be_const_key(Mode_Enumeration_User_3, -1), be_const_int(6) },
    { be_const_key(Grid_Alignment_Space_Around, -1), be_const_int(5) },
    { be_const_key(State_Any, -1), be_const_int(65535) },
    { be_const_key(Symbol_Code_List, -1), be_const_int(3) },
    { be_const_key(Symbol_Code_Next, -1), be_const_int(21) },
    { be_const_key(Flag_Layout_1, -1), be_const_int(8388608) },
    { be_const_key(Size_Mode_Enumeration_Real, -1), be_const_int(1) },
    { be_const_key(Symbol_Code_Image, -1), be_const_int(15) },
    { be_const_key(Grid_Alignment_Center, -1), be_const_int(1) },
    { be_const_key(Event_Code_Close, 9), be_const_int(47) },
    { be_const_key(Flag_Scroll_Chain, -1), be_const_int(768) },
    { be_const_key(Set_Theme_Dark_Mode, 206), be_const_ctype_func(Berry_Graphics_Class_Set_Theme_Dark_Mode_5E7E3EBB_103E_4D3F_A115_0566B94F747C) },
    { be_const_key(Task_Function, -1), be_const_ctype_func(Berry_Graphics_Class_Task_Function_33BD29BA_4919_4F77_83A6_45712359D05C) },
    { be_const_key(Color_Format_Enumeration_Indexed_8_Bits, -1), be_const_int(10) },
    { be_const_key(Event_Code_Layout_Changed, -1), be_const_int(43) },
    { be_const_key(Color_Format_Enumeration_User_Encoded_6, 54), be_const_int(36) },
    { be_const_key(Flag_Checkable, 361), be_const_int(8) },
    { be_const_key(Color_Format_Enumeration_Alpha_2_Bits, -1), be_const_int(12) },
    { be_const_key(Color_Dialog_Type, -1), be_const_class(Berry_Color_Dialog_Type) },
    { be_const_key(Symbol_Code_Close, -1), be_const_int(5) },
    { be_const_key(Symbol_Code_Save, 112), be_const_int(39) },
    { be_const_key(Alignment_Middle_Right, -1), be_const_int(8) },
    { be_const_key(Flag_Custom_1, -1), be_const_int(134217728) },
    { be_const_key(Flag_Clickable, -1), be_const_int(2) },
    { be_const_key(Give_Semaphore, -1), be_const_ctype_func(Berry_Graphics_Class_Give_Semaphore_26221E30_D950_4787_8038_A5FB844FBB38) },
    { be_const_key(Color_Format_Enumeration_Reserved_21, 332), be_const_int(27) },
    { be_const_key(Table_Cell_Control_Custom_4, 214), be_const_int(128) },
    { be_const_key(Color_Format_Enumeration_Indexed_4_Bits, -1), be_const_int(9) },
    { be_const_key(Flag_Floating, -1), be_const_int(262144) },
    { be_const_key(Event_Code_Leave, 308), be_const_int(16) },
    { be_const_key(Event_Code_Scroll_End, 256), be_const_int(10) },
    { be_const_key(Part_Cursor, 188), be_const_int(458752) },
    { be_const_key(Opacity_Opacity_20_Percent, -1), be_const_int(51) },
    { be_const_key(Color_Filter_Descriptor_Type, 282), be_const_class(Berry_Color_Filter_Descriptor_Type) },
    { be_const_key(Color_Format_Enumeration_Raw_Chroma_Keyed, 156), be_const_int(3) },
    { be_const_key(Symbol_Code_Call, -1), be_const_int(36) },
    { be_const_key(Opacity_Opacity_60_Percent, -1), be_const_int(153) },
    { be_const_key(Flex_Alignment_Space_Evenly, 119), be_const_int(3) },
    { be_const_key(Alignment_Out_Left_Top, -1), be_const_int(16) },
    { be_const_key(Symbol_Code_Plus, 57), be_const_int(25) },
    { be_const_key(Symbol_Code_Power, -1), be_const_int(6) },
    { be_const_key(Flex_Flow_Reverse, 59), be_const_int(8) },
    { be_const_key(Color_Format_Enumeration_Raw, 288), be_const_int(1) },
    { be_const_key(State_Focused, -1), be_const_int(2) },
    { be_const_key(Event_Code_Minimize, -1), be_const_int(46) },
    { be_const_key(Alignment_Center, -1), be_const_int(9) },
    { be_const_key(Take_Semaphore, 137), be_const_ctype_func(Berry_Graphics_Class_Take_Semaphore_319C39B7_74CE_4764_BFCC_1CF9F2E6A371) },
    { be_const_key(Direction_Bottom, 316), be_const_int(8) },
    { be_const_key(Event_Code_Long_Pressed_Repeat, -1), be_const_int(6) },
    { be_const_key(Alignment_Top_Middle, -1), be_const_int(2) },
    { be_const_key(Table_Cell_Control_Text_Crop, 128), be_const_int(2) },
    { be_const_key(Flex_Flow_Wrap, -1), be_const_int(4) },
    { be_const_key(Event_Code_Value_Changed, 225), be_const_int(28) },
    { be_const_key(Direction_All, 258), be_const_int(15) },
    { be_const_key(Event_Code_Focused, -1), be_const_int(14) },
    { be_const_key(Button_Matrix_Control_Custom_2, 315), be_const_int(32768) },
    { be_const_key(Alignment_Out_Top_Left, -1), be_const_int(10) },
    { be_const_key(Border_Side_Bottom, 353), be_const_int(1) },
    { be_const_key(Checkbox_Type, -1), be_const_class(Berry_Checkbox_Type) },
    { be_const_key(Flag_Snappable, -1), be_const_int(4096) },
    { be_const_key(Grid_Alignment_Start, -1), be_const_int(0) },
    { be_const_key(Flex_Alignment_End, 110), be_const_int(1) },
    { be_const_key(Color_Format_Enumeration_User_Encoded_7, 83), be_const_int(37) },
    { be_const_key(Arc_Type, 101), be_const_class(Berry_Arc_Type) },
    { be_const_key(Event_Code_Released, 70), be_const_int(8) },
    { be_const_key(Symbol_Code_Right, -1), be_const_int(24) },
    { be_const_key(Color_Format_Enumeration_Alpha_8_Bits, -1), be_const_int(14) },
    { be_const_key(Event_Code_Screen_Load_Start, -1), be_const_int(38) },
    { be_const_key(Event_Code_Long_Pressed, -1), be_const_int(5) },
    { be_const_key(Flag_Scroll_Chain_Vertical, -1), be_const_int(512) },
    { be_const_key(Symbol_Code_Volume_Maximum, -1), be_const_int(14) },
    { be_const_key(Event_Code_Delete, 321), be_const_int(33) },
    { be_const_key(Symbol_Code_Upload, -1), be_const_int(35) },
    { be_const_key(Window_State_Full_screen, -1), be_const_int(3) },
    { be_const_key(Execute_Instruction, -1), be_const_ctype_func(Berry_Graphics_Class_Execute_Instruction_85AA35AD_24D5_424E_B04B_20A44B92D138) },
    { be_const_key(Line_Type, 100), be_const_class(Berry_Line_Type) },
    { be_const_key(Symbol_Code_Copy, -1), be_const_int(38) },
    { be_const_key(Screen_Type, -1), be_const_class(Berry_Screen_Type) },
    { be_const_key(Event_Code_Ready, -1), be_const_int(31) },
    { be_const_key(Opacity_Opacity_30_Percent, -1), be_const_int(76) },
    { be_const_key(Get_Top_Layer, -1), be_const_ctype_func(Berry_Graphics_Class_Get_Top_Layer_1AC0C5CF_0C3E_4E26_A446_CA990411BCAF) },
    { be_const_key(Event_Code_Child_Changed, -1), be_const_int(34) },
    { be_const_key(Symbol_Code_Backspace, 63), be_const_int(58) },
    { be_const_key(Flag_Scroll_Momentum, -1), be_const_int(64) },
    { be_const_key(Enumeration_Symmetrical, -1), be_const_int(1) },
    { be_const_key(Part_Placeholder, 227), be_const_int(524288) },
    { be_const_key(Mode_Enumeration_User_4, -1), be_const_int(7) },
    { be_const_key(State_Custom_4, -1), be_const_int(32768) },
    { be_const_key(Color_Format_Enumeration_Alpha_1_Bit, -1), be_const_int(11) },
    { be_const_key(Dialog_Type, 10), be_const_class(Berry_Dialog_Type) },
    { be_const_key(Set_Theme_Secondary_Color, -1), be_const_ctype_func(Berry_Graphics_Class_Set_Theme_Secondary_Color_CDC74F03_4030_44F8_ABA4_0A23003DF20C) },
    { be_const_key(Window_State_Minimized, -1), be_const_int(0) },
    { be_const_key(Event_Code_Child_Deleted, -1), be_const_int(36) },
    { be_const_key(State_Hovered, 36), be_const_int(16) },
    { be_const_key(Mode_Enumeration_Text_Upper, -1), be_const_int(1) },
    { be_const_key(Border_Side_Top, 190), be_const_int(2) },
    { be_const_key(Alignment_Out_Left_Bottom, -1), be_const_int(18) },
    { be_const_key(Long_Clip, -1), be_const_int(4) },
    { be_const_key(Symbol_Code_Battery_Full, 62), be_const_int(49) },
    { be_const_key(Symbol_Code_GPS, -1), be_const_int(46) },
    { be_const_key(Color_Format_Enumeration_User_Encoded_4, -1), be_const_int(34) },
    { be_const_key(Symbol_Code_Battery_Three_Quarters, 212), be_const_int(50) },
    { be_const_key(State_Disabled, -1), be_const_int(128) },
    { be_const_key(Symbol_Code_Drive, -1), be_const_int(10) },
    { be_const_key(Grid_Alignment_End, 178), be_const_int(2) },
    { be_const_key(Border_Side_Right, 35), be_const_int(8) },
    { be_const_key(State_Scrolled, -1), be_const_int(64) },
    { be_const_key(Symbol_Code_Battery_Quarter, 351), be_const_int(52) },
    { be_const_key(Flex_Flow_Wrap_Reverse, -1), be_const_int(12) },
    { be_const_key(Symbol_Code_Bluetooth, 141), be_const_int(55) },
    { be_const_key(Symbol_Code_Paste, -1), be_const_int(43) },
    { be_const_key(Flag_Scroll_With_Arrow, -1), be_const_int(2048) },
    { be_const_key(Symbol_Code_Audio, -1), be_const_int(1) },
    { be_const_key(Color_Format_Enumeration_Reserved_20, -1), be_const_int(26) },
    { be_const_key(State_Pressed, -1), be_const_int(32) },
    { be_const_key(Drop_Down_List_Type, -1), be_const_class(Berry_Drop_Down_List_Type) },
    { be_const_key(Symbol_Code_Eject, -1), be_const_int(22) },
    { be_const_key(Flex_Flow_Column, -1), be_const_int(1) },
    { be_const_key(Color_Format_Enumeration_Unknow, -1), be_const_int(0) },
    { be_const_key(Flag_Custom_3, -1), be_const_int(536870912) },
    { be_const_key(Event_Code_Scroll_Begin, -1), be_const_int(9) },
    { be_const_key(Symbol_Code_File, -1), be_const_int(47) },
    { be_const_key(State_Edited, -1), be_const_int(8) },
    { be_const_key(Flag_Scroll_Chain_Horizontal, -1), be_const_int(256) },
    { be_const_key(Part_Any, -1), be_const_int(983040) },
    { be_const_key(Point_Type, -1), be_const_class(Berry_Point_Type) },
    { be_const_key(Opacity_Transparent, 302), be_const_int(0) },
    { be_const_key(Flag_Click_Focusable, 319), be_const_int(4) },
    { be_const_key(Mode_Enumeration_Number, -1), be_const_int(3) },
    { be_const_key(Flag_Custom_2, -1), be_const_int(268435456) },
    { be_const_key(Button_Matrix_Control_Checked, -1), be_const_int(256) },
    { be_const_key(Alignment_Default, 245), be_const_int(0) },
    { be_const_key(Event_Code_Refresh, -1), be_const_int(30) },
    { be_const_key(Flag_Gesture_Bubble, 153), be_const_int(32768) },
    { be_const_key(Part_Items, -1), be_const_int(327680) },
    { be_const_key(Part_Main, -1), be_const_int(0) },
    { be_const_key(Roller_Mode_Normal, 224), be_const_int(0) },
    { be_const_key(Symbol_Code_Bell, -1), be_const_int(44) },
    { be_const_key(Symbol_Code_Home, -1), be_const_int(8) },
    { be_const_key(Alignment_Out_Bottom_Right, -1), be_const_int(15) },
    { be_const_key(Direction_Top, -1), be_const_int(4) },
    { be_const_key(Direction_Left, 163), be_const_int(1) },
    { be_const_key(Get_Theme_Secondary_Color, -1), be_const_ctype_func(Berry_Graphics_Class_Get_Theme_Secondary_Color_1C44DF5D_5092_40E9_9ADC_F9C67D625B7C) },
    { be_const_key(Get_Symbol, 335), be_const_ctype_func(Berry_Graphics_Class_Get_Symbol_59ABFD5E_6FB5_4E1B_996C_90DD6693C0C9) },
    { be_const_key(Alignment_Out_Left_Middle, 306), be_const_int(17) },
    { be_const_key(Color_Format_Enumeration_Reserved_19, -1), be_const_int(25) },
    { be_const_key(Style_Type, -1), be_const_class(Berry_Style_Type) },
    { be_const_key(Alignment_Top_Right, -1), be_const_int(3) },
    { be_const_key(Symbol_Code_Mute, -1), be_const_int(12) },
    { be_const_key(Color_Format_Enumeration_True_Color_Chroma_Keyed, 168), be_const_int(6) },
    { be_const_key(Symbol_Code_Battery_Half, -1), be_const_int(51) },
    { be_const_key(Long_Wrap, 252), be_const_int(0) },
    { be_const_key(Table_Type, -1), be_const_class(Berry_Table_Type) },
    { be_const_key(Direction_Right, 273), be_const_int(2) },
    { be_const_key(Flag_Press_Lock, 72), be_const_int(8192) },
    { be_const_key(Get_Theme_Primary_Color, -1), be_const_ctype_func(Berry_Graphics_Class_Get_Theme_Primary_Color_7601E252_0099_46B2_9E3A_62E16ED4B2B4) },
    { be_const_key(Flag_Ignore_Layout, 6), be_const_int(131072) },
    { be_const_key(Color_Format_Enumeration_Indexed_2_Bits, 20), be_const_int(8) },
    { be_const_key(Event_Code_Draw_Post, -1), be_const_int(24) },
    { be_const_key(Color_Format_Enumeration_Indexed_1_Bit, 352), be_const_int(7) },
    { be_const_key(Border_Side_Left, -1), be_const_int(4) },
    { be_const_key(Set_Theme_Primary_Color, 301), be_const_ctype_func(Berry_Graphics_Class_Set_Theme_Primary_Color_948E7A84_FF87_45B0_B6E1_FCD94E0F3FEF) },
    { be_const_key(Flag_Adv_Hittest, 51), be_const_int(65536) },
    { be_const_key(Table_Cell_Control_Custom_1, 131), be_const_int(16) },
    { be_const_key(Slider_Type, -1), be_const_class(Berry_Slider_Type) },
    { be_const_key(Alignment_Out_Top_Right, -1), be_const_int(12) },
    { be_const_key(Alignment_Out_Right_Bottom, -1), be_const_int(21) },
    { be_const_key(Calendar_Type, -1), be_const_class(Berry_Calendar_Type) },
    { be_const_key(Symbol_Code_Volume_Medium, 369), be_const_int(13) },
    { be_const_key(Roller_Mode_Infinite, -1), be_const_int(1) },
    { be_const_key(Draw_Part_Enumeration_Box, -1), be_const_int(0) },
    { be_const_key(Symbol_Code_Bars, -1), be_const_int(40) },
    { be_const_key(Direction_Vertical, 21), be_const_int(12) },
    { be_const_key(Spinbox_Type, -1), be_const_class(Berry_Spinbox_Type) },
    { be_const_key(Flex_Alignment_Space_Around, -1), be_const_int(4) },
    { be_const_key(Alignment_Bottom_Middle, -1), be_const_int(5) },
    { be_const_key(Event_Code_All, 160), be_const_int(0) },
    { be_const_key(Size_Mode_Enumeration_Virtual, -1), be_const_int(0) },
    { be_const_key(Part_Custom_First, -1), be_const_int(524288) },
    { be_const_key(Grid_Alignment_Space_Evenly, 108), be_const_int(4) },
    { be_const_key(State_Custom_3, -1), be_const_int(16384) },
    { be_const_key(Symbol_Code_Loop, -1), be_const_int(33) },
    { be_const_key(Image_Type, 122), be_const_class(Berry_Image_Type) },
    { be_const_key(Button_Matrix_Control_Click_Trigger, -1), be_const_int(512) },
    { be_const_key(Event_Code_Pressed, 334), be_const_int(1) },
    { be_const_key(State_Focus_Key, 230), be_const_int(4) },
    { be_const_key(Window_Type, -1), be_const_class(Berry_Window_Type) },
    { be_const_key(Flex_Flow_Row, 209), be_const_int(0) },
    { be_const_key(Part_Ticks, -1), be_const_int(393216) },
    { be_const_key(Long_Scroll, -1), be_const_int(2) },
    { be_const_key(Flag_Overflow_Visible, -1), be_const_int(524288) },
    { be_const_key(State_Custom_1, -1), be_const_int(4096) },
    { be_const_key(Window_State_Windowed, 37), be_const_int(1) },
    { be_const_key(Flex_Alignment_Space_Between, -1), be_const_int(5) },
    { be_const_key(Object_Type, 303), be_const_class(Berry_Object_Type) },
    { be_const_key(Symbol_Code_Stop, 184), be_const_int(20) },
    { be_const_key(Button_Matrix_Control_Custom_1, 272), be_const_int(16384) },
    { be_const_key(Button_Matrix_Control_Recolor, 169), be_const_int(2048) },
    { be_const_key(Event_Code_Pressing, -1), be_const_int(2) },
    { be_const_key(Symbol_Code_Dummy, 34), be_const_int(61) },
    { be_const_key(Flag_Scroll_Elastic, 25), be_const_int(32) },
    { be_const_key(Label_Type, 292), be_const_class(Berry_Label_Type) },
    { be_const_key(Opacity_Opacity_40_Percent, -1), be_const_int(102) },
    { be_const_key(Color_Format_Enumeration_User_Encoded_2, -1), be_const_int(32) },
    { be_const_key(File_Explorer_Type, -1), be_const_class(Berry_File_Explorer_Type) },
    { be_const_key(Event_Code_Short_Clicked, 7), be_const_int(4) },
    { be_const_key(Color_Format_Enumeration_Reserved_23, 136), be_const_int(29) },
    { be_const_key(Get_Percentage, 270), be_const_ctype_func(Berry_Graphics_Class_Get_Percentage_2E393449_088F_409C_9EA0_6D2E41C63B39) },
    { be_const_key(Direction_None, -1), be_const_int(0) },
    { be_const_key(Window_State_Maximized, 85), be_const_int(2) },
    { be_const_key(Flex_Flow_Column_Wrap, -1), be_const_int(5) },
    { be_const_key(Part_Selected, 340), be_const_int(262144) },
    { be_const_key(Color_Format_Enumeration_User_Encoded_3, -1), be_const_int(33) },
    { be_const_key(Grid_Alignment_Stretch, -1), be_const_int(3) },
    { be_const_key(Flex_Flow_Column_Reverse, -1), be_const_int(9) },
    { be_const_key(Grid_Alignment_Space_Between, -1), be_const_int(6) },
    { be_const_key(Symbol_Code_Video, -1), be_const_int(2) },
    { be_const_key(Button_Type, -1), be_const_class(Berry_Button_Type) },
    { be_const_key(Event_Code_Get_Self_Size, -1), be_const_int(44) },
    { be_const_key(Flag_Custom_4, 104), be_const_int(1073741824) },
    { be_const_key(Color_Wheel_Type, -1), be_const_class(Berry_Color_Wheel_Type) },
    { be_const_key(Part_Indicator, 23), be_const_int(131072) },
    { be_const_key(Slider_Mode_Normal, 366), be_const_int(0) },
    { be_const_key(Mode_Enumeration_User_1, -1), be_const_int(4) },
    { be_const_key(Flag_Scrollable, -1), be_const_int(16) },
    { be_const_key(Symbol_Code_Pause, 5), be_const_int(19) },
    { be_const_key(Long_Scroll_Circular, 194), be_const_int(3) },
    { be_const_key(Event_Code_Size_Changed, 202), be_const_int(41) },
    { be_const_key(Symbol_Code_Charge, -1), be_const_int(42) },
    { be_const_key(Symbol_Code_Cut, 275), be_const_int(37) },
    { be_const_key(Symbol_Code_Battery_Empty, -1), be_const_int(53) },
    { be_const_key(Part_Knob, -1), be_const_int(196608) },
    { be_const_key(Symbol_Code_Directory, -1), be_const_int(34) },
    { be_const_key(Symbol_Code_Eye_Open, 359), be_const_int(27) },
    { be_const_key(Symbol_Code_Edit, -1), be_const_int(57) },
    { be_const_key(Color_Format_Enumeration_Reserved_17, -1), be_const_int(23) },
    { be_const_key(Bar_Mode_Symmetrical, 295), be_const_int(1) },
    { be_const_key(Symbol_Code_Previous, -1), be_const_int(17) },
    { be_const_key(Symbol_Code_New_Line, -1), be_const_int(60) },
    { be_const_key(Alignment_Out_Right_Top, -1), be_const_int(19) },
    { be_const_key(Symbol_Code_Up, 149), be_const_int(31) },
    { be_const_key(Symbol_Code_Ok, 207), be_const_int(4) },
    { be_const_key(Event_Code_Screen_Unload_Start, 344), be_const_int(37) },
    { be_const_key(Symbol_Code_Envelope, 193), be_const_int(41) },
    { be_const_key(Event_Code_Extra_Draw_Size, 278), be_const_int(19) },
    { be_const_key(Flag_Scroll_One, -1), be_const_int(128) },
    { be_const_key(Symbol_Code_Play, -1), be_const_int(18) },
    { be_const_key(Flag_Event_Bubble, -1), be_const_int(16384) },
    { be_const_key(Button_Matrix_Control_No_Repeat, -1), be_const_int(32) },
    { be_const_key(Event_Code_Cover_Check, 69), be_const_int(18) },
    { be_const_key(Slider_Mode_Symmetrical, 253), be_const_int(1) },
    { be_const_key(Symbol_Code_SD_Card, -1), be_const_int(59) },
    { be_const_key(Symbol_Code_Eye_Close, -1), be_const_int(28) },
    { be_const_key(Symbol_Code_Trash, 154), be_const_int(56) },
    { be_const_key(Symbol_Code_Tint, -1), be_const_int(16) },
    { be_const_key(Text_Alignment_Left, -1), be_const_int(1) },
    { be_const_key(Event_Code_Defocused, 307), be_const_int(15) },
    { be_const_key(Table_Cell_Control_Custom_3, 287), be_const_int(64) },
    { be_const_key(Symbol_Code_WiFi, 368), be_const_int(48) },
    { be_const_key(Flag_Scroll_On_Focus, 93), be_const_int(1024) },
    { be_const_key(State_Checked, 17), be_const_int(1) },
    { be_const_key(Opacity_Opacity_80_Percent, -1), be_const_int(204) },
    { be_const_key(Symbol_Code_Refresh, -1), be_const_int(11) },
    { be_const_key(Event_Code_Draw_Main, -1), be_const_int(21) },
    { be_const_key(Opacity_Opacity_0_Percent, 48), be_const_int(0) },
    { be_const_key(Event_Code_Draw_Post_Begin, -1), be_const_int(23) },
    { be_const_key(Placeholder, -1), be_const_int(524288) },
    { be_const_key(Flag_Widget_2, -1), be_const_int(67108864) },
    { be_const_key(Keyboard_Type, 89), be_const_class(Berry_Keyboard_Type) },
    { be_const_key(Event_Code_Draw_Part_Begin, -1), be_const_int(26) },
    { be_const_key(Alignment_Out_Bottom_Middle, 38), be_const_int(14) },
    { be_const_key(Flag_Hidden, -1), be_const_int(1) },
    { be_const_key(Text_Alignment_Automatic, -1), be_const_int(0) },
    { be_const_key(Size_Content, -1), be_const_int(10193) },
    { be_const_key(Text_Alignment_Center, -1), be_const_int(2) },
    { be_const_key(Alignment_Out_Right_Middle, 355), be_const_int(20) },
    { be_const_key(Border_Side_Internal, 99), be_const_int(16) },
    { be_const_key(List_Type, -1), be_const_class(Berry_List_Type) },
    { be_const_key(Text_Area_Type, -1), be_const_class(Berry_Text_Area_Type) },
    { be_const_key(Border_Side_Full, -1), be_const_int(15) },
    { be_const_key(Text_Alignment_Right, -1), be_const_int(3) },
    { be_const_key(Opacity_Opacity_10_Percent, -1), be_const_int(25) },
    { be_const_key(Color_Format_Enumeration_Reserved_16, 257), be_const_int(22) },
    { be_const_key(Progress_Dialog_Type, -1), be_const_class(Berry_Progress_Dialog_Type) },
    { be_const_key(Symbol_Code_Settings, -1), be_const_int(7) },
    { be_const_key(Switch_Type, 221), be_const_class(Berry_Switch_Type) },
    { be_const_key(Start, -1), be_const_ctype_func(Berry_Graphics_Class_Start_0E208036_91E7_4A0A_AD13_43CCF97DE4E2) },
    { be_const_key(Color_Format_Enumeration_True_Color_Alpha, 356), be_const_int(5) },
    { be_const_key(Event_Code_Last_Event, 348), be_const_int(45) },
    { be_const_key(Event_Code_Draw_Main_End, -1), be_const_int(22) },
    { be_const_key(Border_Side_None, 41), be_const_int(0) },
    { be_const_key(Symbol_Code_Keyboard, 229), be_const_int(45) },
    { be_const_key(Get_Pointer, 58), be_const_ctype_func(Berry_Graphics_Class_Get_Pointer) },
    { be_const_key(Event_Code_Cancel, 183), be_const_int(32) },
    { be_const_key(Event_Code_Style_Changed, -1), be_const_int(42) },
    { be_const_key(Event_Code_Press_Lost, 263), be_const_int(3) },
    { be_const_key(Event_Code_Key, 31), be_const_int(13) },
    { be_const_key(Color_Format_Enumeration_User_Encoded_0, -1), be_const_int(30) },
    { be_const_key(Color_Format_Enumeration_Alpha_4_Bits, -1), be_const_int(13) },
    { be_const_key(Color_Format_Enumeration_Raw_Alpha, -1), be_const_int(2) },
    { be_const_key(Area_Type, 66), be_const_class(Berry_Area_Type) },
    { be_const_key(Button_Matrix_Control_Disabled, -1), be_const_int(64) },
    { be_const_key(Button_Matrix_Control_Popover, 346), be_const_int(1024) },
    { be_const_key(Event_Code_Child_Created, -1), be_const_int(35) },
    { be_const_key(Table_Cell_Control_Custom_2, 201), be_const_int(32) },
    { be_const_key(Event_Code_Clicked, -1), be_const_int(7) },
    { be_const_key(Event_Code_Scroll, -1), be_const_int(11) },
    { be_const_key(Event_Code_Draw_Post_End, -1), be_const_int(25) },
    { be_const_key(Event_Code_Gesture, 71), be_const_int(12) },
    { be_const_key(Tabs_Type, -1), be_const_class(Berry_Tabs_Type) },
    { be_const_key(Roller_Type, -1), be_const_class(Berry_Roller_Type) },
    { be_const_key(Color_Format_Enumeration_Reserved_22, -1), be_const_int(28) },
    { be_const_key(Alignment_Out_Bottom_Left, -1), be_const_int(13) },
    { be_const_key(Symbol_Code_USB, -1), be_const_int(54) },
    { be_const_key(Alignment_Bottom_Left, -1), be_const_int(4) },
    { be_const_key(Symbol_Code_Minus, -1), be_const_int(26) },
    { be_const_key(Color_Type, 254), be_const_class(Berry_Color_Type) },
    { be_const_key(Mode_Enumeration_Text_Lower, 331), be_const_int(0) },
    { be_const_key(Color_Format_Enumeration_Reserved_15, -1), be_const_int(21) },
    { be_const_key(Symbol_Code_Warning, -1), be_const_int(29) },
    { be_const_key(Button_Matrix_Type, -1), be_const_class(Berry_Button_Matrix_Type) },
    { be_const_key(Event_Code_Draw_Part_End, -1), be_const_int(27) },
    { be_const_key(Color_Format_Enumeration_True_Color, -1), be_const_int(4) },
    { be_const_key(Symbol_Code_Download, -1), be_const_int(9) },
    { be_const_key(Stop, -1), be_const_ctype_func(Berry_Graphics_Class_Stop_A80A92D0_1A11_4541_803F_2ACFDC15EF01) },
    { be_const_key(Flag_Widget_1, -1), be_const_int(33554432) },
    { be_const_key(Color_Wheel_Mode_Hue, -1), be_const_int(0) },
    { be_const_key(State_Custom_2, -1), be_const_int(8192) },
    { be_const_key(Get_Theme_Dark_Mode, -1), be_const_ctype_func(Berry_Graphics_Class_Get_Theme_Dark_Mode_67DEAAD2_D7C9_4132_B102_DAD139E63E07) },
    { be_const_key(Opacity_Opacity_90_Percent, 274), be_const_int(229) },
    { be_const_key(Flag_Layout_2, -1), be_const_int(16777216) },
};

static be_define_const_map(
    m_libGraphics_map,
    372
);

static be_define_const_module(
    m_libGraphics,
    "Graphics"
);

BE_EXPORT_VARIABLE be_define_const_native_module(Graphics);
