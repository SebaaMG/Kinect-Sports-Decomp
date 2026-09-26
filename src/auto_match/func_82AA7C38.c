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
extern int fn_82A1F248();
extern int fn_82AA75B8();
extern int fn_82AA7718();
extern int fn_82AA79C0();


void fn_82AA7C38(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  iVar5 = (int)param_4;
  uVar6 = (ulonglong)(iVar5 >> 0x1f);
  uVar1 = (param_3 & 0xffffffff) >> 0x10;
  uVar6 = (param_4 ^ uVar6) - uVar6;
  if ((param_5 & 0xffffffff) == 0) {
    return;
  }
  if (((param_3 & 0xffff) == 0) && ((param_1 & 0xffffffff) == (param_2 & 0xffffffff))) {
    return;
  }
  uVar8 = param_2;
  if (-1 < (longlong)(param_1 - param_2 ^ param_4)) {
    param_4 = -param_4;
    lVar9 = (longlong)((int)param_5 + -1) * (longlong)iVar5;
    param_1 = lVar9 + param_1;
    uVar8 = lVar9 + param_2;
  }
  uVar4 = fn_82A1F248();
  if ((uVar4 == 0) || (bVar2 = true, (uVar4 & 0x600) != 0)) {
    bVar2 = false;
  }
  uVar4 = fn_82A1F248(param_2);
  if ((uVar4 == 0) || (bVar3 = true, (uVar4 & 0x600) != 0)) {
    bVar3 = false;
  }
  if (((((bVar2) && (bVar3)) && (uVar1 < 0x11)) && ((uVar1 != 0 && ((uVar1 - 1 & uVar1) == 0)))) &&
     (((uVar6 & 0xffffffff) == uVar1 &&
      ((uVar6 = uVar6 - 1, (uVar6 & param_1) == 0 && ((uVar6 & uVar8) == 0)))))) {
    if ((param_1 & 0xffffffff) == (uVar8 & 0xffffffff)) {
      fn_82AA79C0(param_1,param_3,param_4,param_5);
      return;
    }
    uVar7 = (int)param_1 - (int)uVar8;
    uVar4 = (int)uVar7 >> 0x1f;
    if ((0x7f < (int)((uVar7 ^ uVar4) - uVar4)) && (((uVar8 ^ param_1) & 0xf) == 0)) {
      fn_82AA7718(param_1,uVar8,param_3,param_4,param_5);
      return;
    }
  }
  if ((param_5 & 0xffffffff) != 0) {
    lVar9 = uVar8 - param_1;
    do {
      fn_82AA75B8(param_1,lVar9 + param_1,param_3);
      param_5 = param_5 - 1;
      param_1 = param_4 + param_1;
    } while (param_5 != 0);
  }
  return;
}

