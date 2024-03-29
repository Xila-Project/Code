///
/// @file Graphic_Interface.hpp
/// @author Alix ANNERAUD (alix.anneraud@outlook.fr)
/// @brief
/// @version 0.1.0
/// @date 03-07-2022
///
/// @copyright Copyright (c) 2022
///

#ifndef Graphics_Hpp_Included
#define Graphics_Hpp_Included

#include "../Module/Module.hpp"


#include "lvgl.h"

// Base object
// Widgets
#include "Object.hpp"
#include "Arc.hpp"
#include "Bar.hpp"
#include "Button_Matrix.hpp"
#include "Canvas.hpp"
#include "Checkbox.hpp"
#include "Drop_Down_List.hpp"
#include "Image.hpp"

#include "Line.hpp"
#include "Roller.hpp"
#include "Slider.hpp"
#include "Spinbox.hpp"
#include "Switch.hpp"
#include "Table.hpp"
#include "Text_Area.hpp"
// Extra widgets
// #include "Animaton_Image.hpp"
#include "Calendar.hpp"
#include "Chart.hpp"
#include "Color_Wheel.hpp"
// #include "Image_Button.hpp"
#include "Keyboard.hpp"
#include "List.hpp"
#include "Menu.hpp"
#include "Meter.hpp"
// #include "Message_Box.hpp"
#include "Screen.hpp"
// #include "Span.hpp"
// #include "Spinner.hpp"
#include "Tabs.hpp"
// #include "Tileview.hpp"

#include "Dialog.hpp"
#include "Window.hpp"
#include "Button.hpp"
#include "Label.hpp"
#include "QRCode.hpp"

#include "File_Explorer.hpp"


namespace Xila_Namespace
{
    namespace Graphics_Types
    {
        enum
        {
            Size_Content = LV_SIZE_CONTENT,
        };

    };

    typedef class Graphics_Class : public Module_Class
    {
    public:
        // - Constructor
        Graphics_Class();

        // - Methods
        Result_Type Start();
        Result_Type Stop();

        Graphics_Types::Object_Type Get_Top_Layer();

        // - - Task
        static void Task_Start_Function(void *Instance_Pointer);
        void Task_Function();

        const char* Get_Symbol(Graphics_Types::Symbol_Code_Type Symbol);

        // - - Instruction
        static void Event_Handler(lv_event_t *Event);

        // - - Semaphore
        inline Auto_Semaphore_Type Take_Semaphore_Auto()
        {
            return Auto_Semaphore_Type(Semaphore);
        };

        inline void Take_Semaphore()
        {
            Semaphore.Take_Recursive();       
        };

        inline void Give_Semaphore()
        {
            Semaphore.Give_Recursive();
        };

        // - - Getters


        const Graphics_Types::Font_Type& Get_Font(uint16_t Size);

        // - - - Theme

        Graphics_Types::Color_Type Get_Theme_Primary_Color();
        Graphics_Types::Color_Type Get_Theme_Secondary_Color();
        bool Get_Theme_Dark_Mode();
        Graphics_Types::Coordinate_Type Get_Percentage(Graphics_Types::Coordinate_Type Coordinate);

        // - - Setters

        // - - - Theme

        void Set_Theme_Primary_Color(Graphics_Types::Color_Type Color);
        void Set_Theme_Secondary_Color(Graphics_Types::Color_Type Color);
        void Set_Theme_Dark_Mode(bool Enabled);

    private:
        // - Methods
        
        Result_Type Load_Registry();
        Result_Type Save_Registry();
        Result_Type Create_Registry();


        // - Attributes
        Semaphore_Type Semaphore;

        Graphics_Types::Theme_Type* Theme;
        
        Task_Class Task;

        // - - Buffers
        lv_color_t* Draw_Buffer;

        // - - Drivers
        lv_disp_draw_buf_t Draw_Buffer_Descriptor;
        lv_disp_drv_t Screen_Driver_Interface;
        lv_indev_drv_t Input_Device_Driver_Interface;
        lv_fs_drv_t File_System_Driver;

        /*

            void *File_System_Open(lv_fs_drv_t *, const char *, lv_fs_mode_t);
            lv_fs_res_t File_System_Close(lv_fs_drv_t *, void *);
            lv_fs_res_t File_System_Read(lv_fs_drv_t *, void *, void *, uint32_t, uint32_t *);
            lv_fs_res_t File_System_Write(lv_fs_drv_t *, void *, const void *, uint32_t, uint32_t *);
            lv_fs_res_t File_System_Set_Position(lv_fs_drv_t *, void *, uint32_t, lv_fs_whence_t);
            lv_fs_res_t File_System_Get_Position(lv_fs_drv_t *, void *, uint32_t *);
            void *File_System_Open_Directory(lv_fs_drv_t *, const char *);
            lv_fs_res_t File_System_Directory_Read(lv_fs_drv_t *, void *, char *);
            lv_fs_res_t File_System_Close_Directory(lv_fs_drv_t *, void *);
        */

        // - Friendships
        friend class System_Class;
    } Graphics_Type;

    extern Graphics_Type Graphics;

}

#endif