// This file is automatically generated by the Generate.py script.
#include "Software/Berry/Berry.hpp"
extern "C"
{
#include "be_constobj.h"
#include "be_mapping.h"
}
using namespace Xila_Namespace;
using namespace Clipboard_Types;

// - Functions
int Berry_Clipboard_Class_Start_0135C718_23CA_439E_9652_1532E171CAE1()
{
return (int)Clipboard.Start(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Clipboard_Class_Start_0135C718_23CA_439E_9652_1532E171CAE1, "i", "");


int Berry_Clipboard_Class_Stop_BA742C0E_89A8_4166_B97A_1FC32BBF51E0()
{
return (int)Clipboard.Stop(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Clipboard_Class_Stop_BA742C0E_89A8_4166_B97A_1FC32BBF51E0, "i", "");


void Berry_Clipboard_Class_Clear_3B8A16ED_123B_41A8_A9BB_D170EDBF3218()
{
return Clipboard.Clear(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Clipboard_Class_Clear_3B8A16ED_123B_41A8_A9BB_D170EDBF3218, "", "");


void Berry_Clipboard_Class_Copy_8F8A1358_31C6_454D_BA89_66640BC71C2F(long long unsigned int*A_0)
{
return Clipboard.Copy(*A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Clipboard_Class_Copy_8F8A1358_31C6_454D_BA89_66640BC71C2F, "", ".");


void Berry_Clipboard_Class_Copy_081C12F8_15FB_41AB_A577_34382ECFD23E(const char* A_0)
{
return Clipboard.Copy(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Clipboard_Class_Copy_081C12F8_15FB_41AB_A577_34382ECFD23E, "", "s");



void * Berry_Clipboard_Class_Paste_283502FD_87DF_4C6C_AB77_CBAF717DA5FE(bvm* V)
{
int64_t* R = (int64_t*) be_malloc(V, sizeof(int64_t));
 *R = Clipboard.Paste(); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_Clipboard_Class_Paste_283502FD_87DF_4C6C_AB77_CBAF717DA5FE, "Long_Integer_Type", "@");


const char* Berry_Clipboard_Class_Paste_AA76B7FB_805E_48A6_A465_AEE2BD7FEBF2(bvm* V, int A_1)
{
char* S_0 = (char*)Berry_Class::Get_Instance(V)->Buffer;
Clipboard.Paste(S_0, (A_1 > sizeof(Berry_Class::Buffer)) ? sizeof(Berry_Class::Buffer) : A_1); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_Clipboard_Class_Paste_AA76B7FB_805E_48A6_A465_AEE2BD7FEBF2, "s", "@i");


const char* Berry_Clipboard_Class_Paste_34FA2BB3_AEFD_4632_8899_7B1B89BD5F00(bvm* V)
{
String_Type S_0;
S_0.Set_Buffer((char*)Berry_Class::Get_Instance(V)->Buffer, sizeof(Berry_Class::Buffer));
Clipboard.Paste(S_0); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_Clipboard_Class_Paste_34FA2BB3_AEFD_4632_8899_7B1B89BD5F00, "s", "@");


void* Berry_Clipboard_Class_Get_Pointer()
{
	return (Module_Type*)&Clipboard;
}
BE_FUNC_CTYPE_DECLARE(Berry_Clipboard_Class_Get_Pointer, "c", "")

// - Berry declaration
/* @const_object_info_begin
module Clipboard (scope:global)
{
	Start, ctype_func(Berry_Clipboard_Class_Start_0135C718_23CA_439E_9652_1532E171CAE1)
	Stop, ctype_func(Berry_Clipboard_Class_Stop_BA742C0E_89A8_4166_B97A_1FC32BBF51E0)
	Clear, ctype_func(Berry_Clipboard_Class_Clear_3B8A16ED_123B_41A8_A9BB_D170EDBF3218)
	Copy, ctype_func(Berry_Clipboard_Class_Copy_8F8A1358_31C6_454D_BA89_66640BC71C2F)
	Copy, ctype_func(Berry_Clipboard_Class_Copy_081C12F8_15FB_41AB_A577_34382ECFD23E)
	Paste, ctype_func(Berry_Clipboard_Class_Paste_283502FD_87DF_4C6C_AB77_CBAF717DA5FE)
	Paste, ctype_func(Berry_Clipboard_Class_Paste_AA76B7FB_805E_48A6_A465_AEE2BD7FEBF2)
	Paste, ctype_func(Berry_Clipboard_Class_Paste_34FA2BB3_AEFD_4632_8899_7B1B89BD5F00)
	Get_Pointer, ctype_func(Berry_Clipboard_Class_Get_Pointer)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Clipboard.h"
}