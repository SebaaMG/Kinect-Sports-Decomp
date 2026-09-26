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
extern int fn_82AA66A8();
extern int fn_82AE5040();
extern int fn_82AE5400();
extern int fn_82AE5AC8();
extern int fn_82AE5C40();


ulonglong fn_82AE6910(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  uVar4 = 0;
  uVar11 = 0xffffffffffffffff;
  uVar10 = 0xffffffffffffffff;
  lVar13 = 0;
  uVar12 = 0x100 - param_3;
  do {
    uVar2 = fn_82AE5C40(param_2,uVar4,param_3);
    if ((int)uVar2 == -1) break;
    uVar3 = fn_82AE5040(param_2 + 8,(uVar2 & 0x3fffffff) << 2);
    if ((uVar3 == 0xffffffff) || (uVar4 = (ulonglong)(uVar3 >> 2), uVar3 >> 2 == 0xffffffff)) {
      uVar4 = uVar12 + param_3;
    }
    uVar7 = uVar2 + param_3;
    uVar1 = uVar4 & 0xfffffffc;
    uVar9 = uVar7 & 0xfffffffc;
    if (uVar9 == uVar1) {
      uVar14 = uVar4 - uVar7;
    }
    else {
      uVar14 = uVar4 - uVar1;
      if ((uVar7 & 0xffffffff) != uVar9) {
        uVar14 = (uVar14 - uVar7) + uVar9 + 4;
      }
    }
    if ((uVar4 & 0xffffffff) < (uVar12 & 0xffffffff)) {
      uVar7 = uVar4 - param_3;
      uVar9 = uVar2 & 0xfffffffc;
      if (uVar9 == (uVar7 & 0xfffffffc)) {
        uVar7 = uVar7 - uVar2;
      }
      else {
        uVar7 = uVar7 - (uVar7 & 0xfffffffc);
        if ((uVar2 & 0xffffffff) != uVar9) {
          uVar7 = (uVar9 - uVar2) + uVar7 + 4;
        }
      }
    }
    else {
      uVar7 = 0xffffffffffffffff;
    }
    lVar5 = 0;
    uVar8 = (uVar2 + 3 & 0xfffffffc) + param_3;
    uVar9 = uVar8 & 0xfffffffc;
    if ((uVar2 & 0xffffffff) != (uVar2 & 0xfffffffc)) {
      lVar5 = ((uVar2 & 0xfffffffc) - uVar2) + 4;
    }
    if (uVar9 == uVar1) {
      uVar6 = (lVar5 - uVar8) + uVar4;
    }
    else {
      uVar6 = (lVar5 - uVar1) + uVar4;
      if ((uVar8 & 0xffffffff) != uVar9) {
        uVar6 = (uVar6 - uVar8) + uVar9 + 4;
      }
    }
    if ((uVar7 & 0xffffffff) < (uVar14 & 0xffffffff)) {
      uVar2 = uVar4 - param_3;
      uVar14 = uVar7;
    }
    if ((uVar6 & 0xffffffff) < (uVar14 & 0xffffffff)) {
      uVar2 = uVar2 + 3 & 0xfffffffc;
      uVar14 = uVar6;
    }
    lVar5 = 0;
    if (((uVar4 & 0xffffffff) < (uVar12 & 0xffffffff)) &&
       (uVar3 = fn_82AE5400(param_2,uVar4,1,4), uVar3 != 0xffffffff)) {
      lVar5 = ((ulonglong)(uVar3 >> 4) + 3 & 0xfffffffc) - (ulonglong)(uVar3 >> 4);
    }
    uVar9 = lVar5 + uVar14 + lVar13;
    if (((int)uVar11 == -1) || ((uVar9 & 0xffffffff) < (uVar10 & 0xffffffff))) {
      uVar10 = uVar9;
      uVar11 = uVar2;
    }
    lVar13 = uVar4 - uVar1;
  } while ((uVar4 & 0xffffffff) <= (uVar12 & 0xffffffff));
  if ((int)uVar11 == -1) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xdee);
  }
  fn_82AE5AC8(param_2,uVar11,param_3);
  return uVar11;
}

