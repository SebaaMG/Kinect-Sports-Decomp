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
extern int fn_82A91338();


longlong fn_82A8B960(int *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                      ulonglong param_5)

{
  undefined4 *puVar1;
  int in_r0;
  longlong lVar2;
  undefined1 in_vs32 [16];
  undefined1 in_vs43 [16];
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  
  if (((param_4 & 0xffffffff) == 0) || ((param_5 & 0xffffffff) == 0)) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 8))();
    if (lVar2 < 0) {
      altv207_13(in_vs32,in_vs43);
      puVar1 = (undefined4 *)(in_r0 + (int)param_5 & 0xfffffff0);
      *puVar1 = in_register_000103f0;
      puVar1[1] = in_register_000103f4;
      puVar1[2] = in_register_000103f8;
      puVar1[3] = in_vr63;
      puVar1 = (undefined4 *)(in_r0 + (int)param_4 & 0xfffffff0);
      *puVar1 = in_register_000103f0;
      puVar1[1] = in_register_000103f4;
      puVar1[2] = in_register_000103f8;
      puVar1[3] = in_vr63;
    }
    else {
      fn_82A91338(param_1 + 9,param_2,param_3,param_4,param_5);
    }
  }
  return lVar2;
}

