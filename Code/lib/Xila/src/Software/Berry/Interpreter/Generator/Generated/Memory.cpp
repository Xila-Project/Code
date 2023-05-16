// This file is automatically generated by the Generate.py script.
#include "Software/Berry/Berry.hpp"
extern "C"
{
#include "be_constobj.h"
#include "be_mapping.h"
}
using namespace Xila_Namespace;
using namespace Memory_Types;

// - Functions
int Berry_Memory_Class_Get_Heap_Size_BA55FA4A_2889_4F39_A8F9_6C17BFFBFB69()
{
return (int)Memory.Get_Heap_Size(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_Heap_Size_BA55FA4A_2889_4F39_A8F9_6C17BFFBFB69, "i", "");


int Berry_Memory_Class_Get_Free_Heap_0CB68CBC_7570_459E_9B16_09E05BFC70E7()
{
return (int)Memory.Get_Free_Heap(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_Free_Heap_0CB68CBC_7570_459E_9B16_09E05BFC70E7, "i", "");


int Berry_Memory_Class_Get_Minimum_Free_Heap_B2E43B55_688F_4196_99CE_915201670F8F()
{
return (int)Memory.Get_Minimum_Free_Heap(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_Minimum_Free_Heap_B2E43B55_688F_4196_99CE_915201670F8F, "i", "");


int Berry_Memory_Class_Get_Maximum_Allocated_Heap_73549726_DA69_4C5E_AF0C_77622B26D375()
{
return (int)Memory.Get_Maximum_Allocated_Heap(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_Maximum_Allocated_Heap_73549726_DA69_4C5E_AF0C_77622B26D375, "i", "");


int Berry_Memory_Class_Get_PSRAM_Size_0C69E93E_CAFE_41BC_8636_03B85DD40149()
{
return (int)Memory.Get_PSRAM_Size(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_PSRAM_Size_0C69E93E_CAFE_41BC_8636_03B85DD40149, "i", "");


int Berry_Memory_Class_Get_Free_PSRAM_7776DB13_4820_4DE3_9235_41D5B222C2F0()
{
return (int)Memory.Get_Free_PSRAM(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_Free_PSRAM_7776DB13_4820_4DE3_9235_41D5B222C2F0, "i", "");


int Berry_Memory_Class_Get_Minimum_Free_PSRAM_10567E5A_7759_4E0B_9A79_E5AB3A7E8614()
{
return (int)Memory.Get_Minimum_Free_PSRAM(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_Minimum_Free_PSRAM_10567E5A_7759_4E0B_9A79_E5AB3A7E8614, "i", "");


int Berry_Memory_Class_Get_Maximum_Allocated_PSRAM_FEEB5E8F_4D59_48C8_947D_DB9CD94048EA()
{
return (int)Memory.Get_Maximum_Allocated_PSRAM(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_Maximum_Allocated_PSRAM_FEEB5E8F_4D59_48C8_947D_DB9CD94048EA, "i", "");


void* Berry_Memory_Class_Get_Pointer()
{
	return (Module_Type*)&Memory;
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_Pointer, "c", "")

// - Berry declaration
/* @const_object_info_begin
module Memory (scope:global)
{
	Get_Heap_Size, ctype_func(Berry_Memory_Class_Get_Heap_Size_BA55FA4A_2889_4F39_A8F9_6C17BFFBFB69)
	Get_Free_Heap, ctype_func(Berry_Memory_Class_Get_Free_Heap_0CB68CBC_7570_459E_9B16_09E05BFC70E7)
	Get_Minimum_Free_Heap, ctype_func(Berry_Memory_Class_Get_Minimum_Free_Heap_B2E43B55_688F_4196_99CE_915201670F8F)
	Get_Maximum_Allocated_Heap, ctype_func(Berry_Memory_Class_Get_Maximum_Allocated_Heap_73549726_DA69_4C5E_AF0C_77622B26D375)
	Get_PSRAM_Size, ctype_func(Berry_Memory_Class_Get_PSRAM_Size_0C69E93E_CAFE_41BC_8636_03B85DD40149)
	Get_Free_PSRAM, ctype_func(Berry_Memory_Class_Get_Free_PSRAM_7776DB13_4820_4DE3_9235_41D5B222C2F0)
	Get_Minimum_Free_PSRAM, ctype_func(Berry_Memory_Class_Get_Minimum_Free_PSRAM_10567E5A_7759_4E0B_9A79_E5AB3A7E8614)
	Get_Maximum_Allocated_PSRAM, ctype_func(Berry_Memory_Class_Get_Maximum_Allocated_PSRAM_FEEB5E8F_4D59_48C8_947D_DB9CD94048EA)
	Get_Pointer, ctype_func(Berry_Memory_Class_Get_Pointer)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Memory.h"
}