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
extern int fn_8268F318();
extern int fn_8268F620();
extern int fn_8268F848();


undefined8
fn_82690068(int *param_1,longlong param_2,longlong param_3,longlong param_4,ulonglong param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar1 = param_1[2];
  uVar12 = (ulonglong)uVar1;
  if ((param_5 & 0xffffffff) < uVar12) {
    param_5 = uVar12;
  }
  uVar9 = (param_3 + param_5) - 1 & ~(param_5 - 1);
  uVar11 = (param_4 + param_5) - 1 & ~(param_5 - 1);
  if ((uVar11 & 0xffffffff) == (uVar9 & 0xffffffff)) {
    uVar5 = 1;
  }
  else if ((uVar9 & 0xffffffff) < (uVar11 & 0xffffffff)) {
    iVar6 = fn_8268F848(param_1);
    uVar7 = param_1[3];
    uVar4 = (uint)(uVar11 - uVar9) >> (uVar7 & 0x3f);
    uVar2 = param_1[iVar6 * 3 + 7];
    iVar3 = (int)(((int)param_2 - uVar2) + (int)uVar9) >> (uVar7 & 0x3f);
    lVar10 = ((ulonglong)uVar2 -
             ((((uVar1 * 8 + param_1[iVar6 * 3 + 8]) - 1 >> (uVar7 + 3 & 0x3f)) + uVar12) - 1 &
             ~(uVar12 - 1))) + (ulonglong)(uint)param_1[iVar6 * 3 + 8];
    uVar7 = fn_8268F620(lVar10,iVar3);
    if ((uVar7 < uVar4) ||
       (iVar8 = (**(code **)(*(int *)param_1[1] + 0xc))
                          ((int *)param_1[1],
                           (longlong)(int)uVar1 * (longlong)iVar3 + (ulonglong)uVar2,uVar11 - uVar9)
       , iVar8 == 0)) {
      uVar5 = 0;
    }
    else {
      fn_8268F318(lVar10,iVar3,uVar4);
      uVar5 = 1;
      param_1[iVar6 * 3 + 9] = param_1[iVar6 * 3 + 9] + uVar4;
      param_1[6] = (uVar4 << (param_1[3] & 0x3fU)) + param_1[6];
    }
  }
  else {
    uVar5 = (**(code **)(*param_1 + 8))(param_1,param_2 + uVar11,uVar9 - uVar11,param_5);
  }
  return uVar5;
}

