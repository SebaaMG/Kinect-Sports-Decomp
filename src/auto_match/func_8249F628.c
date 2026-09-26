typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_8249F6A0();
extern unsigned int lbl_821CC160;


undefined8 fn_8249F628(int param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  
  if ((((param_5 != 0) && (fn_8249F6A0(), param_2 != 0)) &&
      (iVar1 = *(int *)(param_1 + 0x18), iVar1 != 0)) &&
     (*(int *)(param_2 + 0x4c) = iVar1, iVar1 != *(int *)(param_2 + 0x48))) {
    *(undefined4 *)(param_2 + 0x80) = lbl_821CC160;
  }
  return 1;
}

