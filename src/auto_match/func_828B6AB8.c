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
extern int fn_828B68E8();


void fn_828B6AB8(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar4;
  ulonglong uVar3;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = (int)param_3 - (int)param_1 >> 3;
  if (iVar1 < 0x29) {
    fn_828B68E8(param_1,param_2,param_3);
  }
  else {
    uVar4 = iVar1 + 1;
    uVar3 = (longlong)((int)uVar4 >> 3) + (ulonglong)((int)uVar4 < 0 && (uVar4 & 7) != 0);
    uVar2 = uVar3 & 0x1fffffff;
    uVar3 = uVar3 & 0xfffffff;
    lVar5 = uVar2 * 8 + param_1;
    fn_828B68E8(param_1,lVar5,uVar3 * 0x10 + param_1);
    fn_828B68E8(param_2 + uVar2 * -8,param_2,uVar2 * 8 + param_2,param_4);
    lVar6 = param_3 + uVar2 * -8;
    fn_828B68E8(param_3 + uVar3 * -0x10,lVar6,param_3,param_4);
    fn_828B68E8(lVar5,param_2,lVar6,param_4);
  }
  return;
}

