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
extern int fn_828C4710();
extern unsigned int uStack00000010;
extern unsigned int uStack00000018;
extern unsigned int uStack00000020;


void fn_828C4B90(ulonglong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uStack00000010;
  undefined8 uStack00000018;
  ulonglong uStack00000020;
  
  uStack00000010 = ((((U64)(uStack00000010)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((int)param_1)) & ((U64)0xFFFFFFFF)) << 32));
  uStack00000020 = ((((U64)(uStack00000020)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((int)param_3)) & ((U64)0xFFFFFFFF)) << 32));
  iVar1 = (((U64)(uStack00000020) >> 32) & 0xFFFFFFFF);
  lVar3 = (param_3 & 0xffffffff) - (param_1 & 0xffffffff);
  uStack00000010 = param_1;
  uStack00000018 = param_2;
  uStack00000020 = param_3;
  if ((int)lVar3 < 0x29) {
    fn_828C4710(param_1,param_2,param_3);
  }
  else {
    uVar4 = lVar3 + 1;
    iVar2 = (int)uVar4;
    uVar6 = (iVar2 >> 3) + (uint)(iVar2 < 0 && (uVar4 & 7) != 0);
    iVar5 = (((U64)(uStack00000010) >> 32) & 0xFFFFFFFF) + uVar6;
    iVar2 = uVar6 * 2 + (((U64)(uStack00000010) >> 32) & 0xFFFFFFFF);
    fn_828C4710(param_1,iVar5,iVar2);
    fn_828C4710((((U64)(uStack00000018) >> 32) & 0xFFFFFFFF) - uVar6,param_2,(((U64)(uStack00000018) >> 32) & 0xFFFFFFFF) + uVar6,param_4);
    iVar2 = iVar1 - uVar6;
    fn_828C4710(iVar1 + (uVar6 & 0x7fffffff) * -2,iVar2,param_3,param_4);
    fn_828C4710(iVar5,param_2,iVar2,param_4);
  }
  return;
}

