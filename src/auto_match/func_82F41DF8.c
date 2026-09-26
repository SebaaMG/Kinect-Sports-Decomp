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
extern int fn_82A3F758();
extern int fn_82F64CE0();


undefined8 fn_82F41DF8(ulonglong param_1,ulonglong param_2,ushort *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort uVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  if (param_3 == (ushort *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)*param_3;
  }
  if ((param_1 & 0xffffffff) == 0) {
    return 0xffffffff80070057;
  }
  lVar2 = fn_82F64CE0(param_1);
  uVar1 = lVar2 + 1U & 0xffff;
  uVar4 = (ushort)(lVar2 + 1U);
  if ((param_2 & 0xffffffff) == 0) {
LAB_82f41eac:
    uVar3 = uVar1;
    if (-1 < (int)uVar5) goto LAB_82f41ec0;
  }
  else {
    if (uVar3 < uVar1) {
      uVar5 = 0xffffffffc00d36b1;
      goto LAB_82f41eac;
    }
    if (uVar3 < 0x80000000) {
      uVar5 = fn_82A3F758(param_2,uVar3,param_1);
    }
    else {
      uVar5 = 0xffffffff80070057;
    }
    if (-1 < (int)uVar5) goto LAB_82f41eac;
  }
  uVar4 = (ushort)uVar3;
  if ((int)uVar5 != -0x3ff2c94f) {
    return uVar5;
  }
LAB_82f41ec0:
  if (param_3 != (ushort *)0x0) {
    *param_3 = uVar4;
  }
  return uVar5;
}

