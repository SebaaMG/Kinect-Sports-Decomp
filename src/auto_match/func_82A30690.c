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
extern int fn_82A302E8();


void fn_82A30690(int param_1,ulonglong param_2,int *param_3,undefined8 param_4,int *param_5,
                  undefined8 param_6)

{
  int iVar1;
  
  iVar1 = fn_82A302E8(param_1,param_1 + 0x38,param_2,0,param_4,param_5,param_6);
  if (-1 < iVar1) {
    *param_3 = ((uint)param_2 & 0xfff) + *param_5;
    if ((param_2 & 0xffffffff) == (ulonglong)*(uint *)(param_1 + 0x54)) {
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) + 0x1000;
    }
  }
  return;
}

