///
/// @file Bar.hpp
/// @author Alix ANNERAUD (alix.anneraud@outlook.fr)
/// @brief
/// @version 0.1
/// @date 04-05-2022
///
/// @copyright Copyright (c) 2022
///

///
/// @brief Create a new bar.
///
/// @param Parent Parent object of the new bar.
/// @param Copy Object to copy from.
/// @return Object

#include "Object.hpp"

#ifndef Bar_Hpp_Included
#define Bar_Hpp_Included

namespace Xila_Namespace
{
    /// @brief Bar class.
    typedef class Bar_Class : public Object_Class
    {
    public:
        // -- Types

        class Mode
        {
        public:
            /// @brief Bar mode type.
            typedef lv_bar_mode_t Type;

            /// @brief Bar mode enumeration.
            enum Enumeration
            {
                Normal = LV_BAR_MODE_NORMAL,
                Symmetrical = LV_BAR_MODE_SYMMETRICAL,
                Range = LV_BAR_MODE_RANGE
            };
        };

        class Draw_Part
        {
        public:
            /// @brief Draw part type and enumeration.
            typedef enum Enumeration
            {
                Indicator = LV_BAR_DRAW_PART_INDICATOR
            } Type;
        };

        // - Methods

        // - - Constructors / destructors

        Bar_Class(const Object_Class &Object_To_Copy);

        // - - Manipulation
        virtual void Create(Object_Class& Parent_Object) override;

        // - - Setters.

        virtual bool Set_Pointer(lv_obj_t *LVGL_Object_Pointer) override;

        void Set_Value(int32_t Value, bool Enable_Animation = true);
        void Set_Start_Value(int32_t Value, bool Enable_Animation = true);
        void Set_Range(int32_t Minimum_Value, int32_t Maximum_Value);
        void Set_Mode(Mode::Type Mode);

        // - - Getters.
        int32_t Get_Value();
        int32_t Get_Start_Value();
        int32_t Get_Minimum_Value();
        int32_t Get_Maximum_Value();
        Mode::Type Get_Mode();

        // - - Attributes
        static const Graphics_Types::Class_Type &Class;

    } Bar_Type;
}

#endif
