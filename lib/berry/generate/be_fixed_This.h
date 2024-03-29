#include "be_constobj.h"

static be_define_const_map_slots(m_libThis_map) {
    { be_const_key(Get_Instruction, -1), be_const_ctype_func(Berry_This_Get_Instruction) },
    { be_const_key(Get_Window, 5), be_const_ctype_func(Berry_This_Get_Window) },
    { be_const_key(Delay_Microseconds, -1), be_const_ctype_func(Berry_This_Delay_Microseconds) },
    { be_const_key(Instruction_Available, -1), be_const_ctype_func(Berry_This_Instruction_Available) },
    { be_const_key(Delay, 1), be_const_ctype_func(Berry_This_Delay) },
    { be_const_key(Get_This, -1), be_const_ctype_func(Berry_This_Get_This) },
};

static be_define_const_map(
    m_libThis_map,
    6
);

static be_define_const_module(
    m_libThis,
    "This"
);

BE_EXPORT_VARIABLE be_define_const_native_module(This);
