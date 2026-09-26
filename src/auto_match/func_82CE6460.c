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
extern int fn_82F68CC0();
extern unsigned int stack0x00000034;
extern unsigned int uStack00000034;


void fn_82CE6460(int *param_1,undefined4 *param_2,undefined8 param_3,ulonglong param_4,
                  uint param_5)

{
  undefined4 uVar1;
  uint uStack00000034;
  
  uStack00000034 = param_5;
  if (((param_4 & 0xffffffff) == 0) || ((int)param_5 <= (int)param_2[1])) {
    uVar1 = (**(code **)(*param_1 + 0x14))(param_1,*param_2,param_2[2],&stack0x00000034,param_3);
    *param_2 = uVar1;
    param_2[2] = uStack00000034;
  }
  else {
    fn_82F68CC0(param_4,*param_2,(longlong)(int)param_2[1] * (longlong)(int)param_3);
    (**(code **)(*param_1 + 0x10))(param_1,*param_2,param_2[2] & 0x3fffffff,param_3);
    *param_2 = (int)param_4;
    param_2[2] = uStack00000034 | 0x80000000;
  }
  return;
}

