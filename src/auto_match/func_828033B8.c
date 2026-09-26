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


void fn_828033B8(int *param_1,int *param_2,int *param_3,int *param_4,uint *param_5,uint *param_6,
                  uint *param_7,uint *param_8)

{
  uint uVar1;
  int in_stack_00000054;
  
  uVar1 = *param_5;
  *param_5 = uVar1 + in_stack_00000054 & 0x1f;
  *param_1 = (uVar1 + in_stack_00000054 >> 3 & 0x1ffffffc) + *param_1;
  uVar1 = *param_6;
  *param_6 = uVar1 + in_stack_00000054 & 0x1f;
  *param_2 = (uVar1 + in_stack_00000054 >> 3 & 0x1ffffffc) + *param_2;
  uVar1 = *param_7;
  *param_7 = uVar1 + in_stack_00000054 & 0x1f;
  *param_3 = (uVar1 + in_stack_00000054 >> 3 & 0x1ffffffc) + *param_3;
  uVar1 = *param_8;
  *param_8 = uVar1 + in_stack_00000054 & 0x1f;
  *param_4 = (uVar1 + in_stack_00000054 >> 3 & 0x1ffffffc) + *param_4;
  return;
}

