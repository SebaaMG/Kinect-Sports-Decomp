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
extern int fn_82A52360();
extern int fn_82A52590();
extern int fn_82A52830();
extern int fn_82A6A528();
extern int fn_82A6AF70();
extern int fn_82A751F8();
extern int fn_82A756E8();
extern int fn_82C16A38();
extern int fn_82C2B580();
extern int fn_82F691F0();


undefined8
fn_82A57930(int *param_1,ushort *param_2,int param_3,int param_4,int param_5,int param_6)

{
  ushort uVar1;
  undefined8 uVar2;
  int iVar4;
  byte bVar5;
  ulonglong uVar3;
  int *piVar7;
  ulonglong uVar6;
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  
  iVar4 = 0;
  uVar11 = 0;
  if ((param_1 == (int *)0x0) || (param_5 == 0)) {
    return 0xffffffff80070057;
  }
  uVar9 = (uint)*param_2;
  if (7 < uVar9 - 0x160) {
    return 0xffffffff80040000;
  }
  if (uVar9 == 0x161) {
    uVar12 = 2;
  }
  else if (uVar9 == 0x162) {
    uVar12 = 3;
  }
  else if (uVar9 == 0x163) {
    uVar12 = 3;
  }
  else {
    if (uVar9 == 0x164) {
      return 0xffffffff80040000;
    }
    if (uVar9 == 0x165) {
      uVar12 = 2;
      uVar11 = 1;
      goto LAB_82a57a10;
    }
    if (uVar9 == 0x166) {
      uVar12 = 3;
      uVar11 = 1;
      goto LAB_82a57a10;
    }
    if (uVar9 != 0x160) {
      uVar12 = 3;
      uVar11 = 1;
      goto LAB_82a57a10;
    }
    uVar12 = 1;
  }
  uVar2 = fn_82A52590(param_2,param_3,param_4,param_6);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  uVar2 = fn_82A52360(param_1);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  iVar4 = fn_82A6A528();
  *param_1 = iVar4;
  if (iVar4 == 0) {
    return 0xffffffff8007000e;
  }
  *(undefined **)(iVar4 + 0x1e4) = &fn_82A756E8;
  param_1[0xb2] = (int)fn_82A52830;
LAB_82a57a10:
  if (param_6 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(param_6 + 0xc);
  }
  param_1[0xb0] = iVar10;
  param_1[0xb1] = iVar10;
  uVar2 = fn_82A751F8(*(undefined4 *)(param_2 + 2),*(int *)(param_2 + 4) << 3,uVar12,param_2[10]);
  if (0 < (int)uVar2) {
    if (param_4 == 0) {
      piVar8 = param_1 + 0x76;
      lVar13 = 7;
      do {
        piVar8 = piVar8 + 1;
        *piVar8 = 0;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    else {
      piVar8 = (int *)(param_4 + -4);
      piVar7 = param_1 + 0x76;
      lVar13 = 7;
      do {
        piVar8 = piVar8 + 1;
        piVar7 = piVar7 + 1;
        *piVar7 = *piVar8;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    uVar1 = *(ushort *)(param_1 + 0x77);
    if ((uVar1 & 0x200) != 0) {
      param_1[0x67] = 1;
    }
    if (*(short *)(param_1 + 0x7d) != 0) {
      *(ushort *)(param_1 + 0x77) = uVar1 | 0x80;
    }
    uVar3 = (ulonglong)param_2[7] + 7 >> 3;
    uVar6 = (ulonglong)*(uint *)(param_3 + 0x10);
    if (*(uint *)(param_3 + 0x10) <= uVar3) {
      uVar6 = uVar3;
    }
    uVar11 = fn_82A6AF70(iVar4,uVar12,uVar11,uVar2,*(undefined4 *)(param_2 + 2),param_2[1],
                               uVar6);
    if ((int)uVar11 < 0) {
      return uVar11;
    }
    bVar5 = fn_82C16A38(param_1);
    if (bVar5 < 0x21) {
      uVar3 = fn_82C2B580((ulonglong)*(ushort *)(iVar4 + 0x22) * 0x6f0);
      param_1[1] = (int)uVar3;
      if ((uVar3 & 0xffffffff) == 0) {
        return 0xffffffff8007000e;
      }
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar3,0,(ulonglong)*(ushort *)(iVar4 + 0x22) * 0x6f0);
    }
  }
  return 0xffffffff80040000;
}

