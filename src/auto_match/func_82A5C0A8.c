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


void fn_82A5C0A8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  param_1[5] = param_3;
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x82a5c0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0x2c))();
    return;
  }
  if (param_2 != 1) {
                    /* WARNING: Could not recover jumptable at 0x82a5c0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0x34))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82a5c0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x30))();
  return;
}

