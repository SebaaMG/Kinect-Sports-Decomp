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
extern int fn_82F04030();
extern int fn_82F0D688();
extern int fn_82F0F9A0();


void fn_82F04E20(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  bVar1 = false;
  if (param_2 == 0) {
    if ((*(uint *)(param_1 + 0x526c) & 1) == 0) {
      if (((*(uint *)(param_1 + 0x526c) & 4) != 0) && (*(int *)(param_1 + 0x6f50) == 0)) {
        uVar3 = *(uint *)(param_1 + 0x550);
        iVar2 = *(int *)(param_1 + 0x564);
        uVar4 = *(undefined4 *)(param_1 + 0x528c);
        uVar5 = *(undefined4 *)(param_1 + 0x5288);
        uVar6 = *(undefined4 *)(param_1 + 0x5284);
        goto LAB_82f05114;
      }
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x550);
      iVar2 = *(int *)(param_1 + 0x564);
      uVar4 = *(undefined4 *)(param_1 + 0x5280);
      uVar5 = *(undefined4 *)(param_1 + 0x527c);
      uVar6 = *(undefined4 *)(param_1 + 0x5278);
LAB_82f05114:
      bVar1 = true;
      fn_82F04030(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                        *(undefined4 *)(param_1 + 0x1c),uVar6,uVar5,uVar4,iVar2 >> 1,
                        ((ulonglong)uVar3 + 0x28 & 0x7fffffff) << 1);
    }
    if ((*(uint *)(param_1 + 0x526c) & 2) != 0) {
      lVar11 = (longlong)(*(int *)(param_1 + 0x564) >> 1);
      lVar12 = (longlong)(*(int *)(param_1 + 0x568) >> 1);
      fn_82F04030((ulonglong)*(uint *)(param_1 + 0x14) + lVar11,
                        (ulonglong)*(uint *)(param_1 + 0x18) + lVar12,
                        (ulonglong)*(uint *)(param_1 + 0x1c) + lVar12,
                        (ulonglong)*(uint *)(param_1 + 0x5278) + lVar11,
                        (ulonglong)*(uint *)(param_1 + 0x527c) + lVar12,
                        (ulonglong)*(uint *)(param_1 + 0x5280) + lVar12,lVar11,
                        ((ulonglong)*(uint *)(param_1 + 0x550) + 0x28 & 0x7fffffff) << 1);
      goto LAB_82f05048;
    }
    if (((*(uint *)(param_1 + 0x526c) & 8) != 0) && (*(int *)(param_1 + 0x6f50) != 0)) {
      lVar11 = (longlong)(*(int *)(param_1 + 0x564) >> 1);
      lVar12 = (longlong)(*(int *)(param_1 + 0x568) >> 1);
      fn_82F04030((ulonglong)*(uint *)(param_1 + 0x14) + lVar11,
                        (ulonglong)*(uint *)(param_1 + 0x18) + lVar12,
                        (ulonglong)*(uint *)(param_1 + 0x1c) + lVar12,
                        (ulonglong)*(uint *)(param_1 + 0x5284) + lVar11,
                        (ulonglong)*(uint *)(param_1 + 0x5288) + lVar12,
                        (ulonglong)*(uint *)(param_1 + 0x528c) + lVar12,lVar11,
                        ((ulonglong)*(uint *)(param_1 + 0x550) + 0x28 & 0x7fffffff) << 1);
      goto LAB_82f05048;
    }
  }
  else {
    if (*(int *)(param_1 + 0x6de8) == 0) {
      if ((*(uint *)(param_1 + 0x526c) & 1) != 0) {
        fn_82F04030(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                          *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x5278),
                          *(undefined4 *)(param_1 + 0x527c),*(undefined4 *)(param_1 + 0x5280),
                          *(int *)(param_1 + 0x564) >> 1,
                          ((ulonglong)*(uint *)(param_1 + 0x550) + 0x28 & 0x7fffffff) << 1);
        *(uint *)(param_1 + 0x526c) = *(uint *)(param_1 + 0x526c) ^ 1;
      }
      if ((*(uint *)(param_1 + 0x526c) & 2) != 0) {
        lVar11 = (longlong)(*(int *)(param_1 + 0x564) >> 1);
        lVar12 = (longlong)(*(int *)(param_1 + 0x568) >> 1);
        fn_82F04030((ulonglong)*(uint *)(param_1 + 0x14) + lVar11,
                          (ulonglong)*(uint *)(param_1 + 0x18) + lVar12,
                          (ulonglong)*(uint *)(param_1 + 0x1c) + lVar12,
                          (ulonglong)*(uint *)(param_1 + 0x5278) + lVar11,
                          (ulonglong)*(uint *)(param_1 + 0x527c) + lVar12,
                          (ulonglong)*(uint *)(param_1 + 0x5280) + lVar12,lVar11,
                          ((ulonglong)*(uint *)(param_1 + 0x550) + 0x28 & 0x7fffffff) << 1);
        *(uint *)(param_1 + 0x526c) = *(uint *)(param_1 + 0x526c) ^ 2;
      }
      goto LAB_82f05048;
    }
    bVar1 = false;
    if ((*(uint *)(param_1 + 0x526c) & 4) != 0) {
      bVar1 = *(int *)(param_1 + 0x6f50) == 0;
      if (bVar1) {
        iVar2 = *(int *)(param_1 + 0x564);
        uVar9 = (ulonglong)*(uint *)(param_1 + 0x1c);
        uVar8 = (ulonglong)*(uint *)(param_1 + 0x18);
        uVar7 = (ulonglong)*(uint *)(param_1 + 0x14);
      }
      else {
        iVar2 = *(int *)(param_1 + 0x564);
        uVar9 = (ulonglong)*(uint *)(param_1 + 0x4a9c) - (ulonglong)*(uint *)(param_1 + 0x578);
        uVar8 = (ulonglong)*(uint *)(param_1 + 0x4a98) - (ulonglong)*(uint *)(param_1 + 0x578);
        uVar7 = (ulonglong)*(uint *)(param_1 + 0x4a94) - (ulonglong)*(uint *)(param_1 + 0x574);
      }
      fn_82F04030(uVar7,uVar8,uVar9,*(undefined4 *)(param_1 + 0x5284),
                        *(undefined4 *)(param_1 + 0x5288),*(undefined4 *)(param_1 + 0x528c),
                        iVar2 >> 1,((ulonglong)*(uint *)(param_1 + 0x550) + 0x28 & 0x7fffffff) << 1)
      ;
      *(uint *)(param_1 + 0x526c) = *(uint *)(param_1 + 0x526c) ^ 4;
    }
    if ((*(uint *)(param_1 + 0x526c) & 8) != 0) {
      lVar11 = (longlong)(*(int *)(param_1 + 0x564) >> 1);
      if (*(int *)(param_1 + 0x6f50) == 0) {
        lVar13 = (longlong)(*(int *)(param_1 + 0x568) >> 1);
        uVar3 = *(uint *)(param_1 + 0x550);
        lVar12 = lVar13 - (ulonglong)*(uint *)(param_1 + 0x578);
        lVar10 = (ulonglong)*(uint *)(param_1 + 0x4a9c) + lVar12;
        uVar7 = (ulonglong)*(uint *)(param_1 + 0x4a94) - (ulonglong)*(uint *)(param_1 + 0x574);
        lVar12 = (ulonglong)*(uint *)(param_1 + 0x4a98) + lVar12;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x550);
        bVar1 = true;
        lVar13 = (longlong)(*(int *)(param_1 + 0x568) >> 1);
        uVar7 = (ulonglong)*(uint *)(param_1 + 0x14);
        lVar10 = (ulonglong)*(uint *)(param_1 + 0x1c) + lVar13;
        lVar12 = (ulonglong)*(uint *)(param_1 + 0x18) + lVar13;
      }
      fn_82F04030(uVar7 + lVar11,lVar12,lVar10,(ulonglong)*(uint *)(param_1 + 0x5284) + lVar11
                        ,(ulonglong)*(uint *)(param_1 + 0x5288) + lVar13,
                        (ulonglong)*(uint *)(param_1 + 0x528c) + lVar13,lVar11,
                        ((ulonglong)uVar3 + 0x28 & 0x7fffffff) << 1);
      *(uint *)(param_1 + 0x526c) = *(uint *)(param_1 + 0x526c) ^ 8;
    }
  }
  if (!bVar1) {
    return;
  }
LAB_82f05048:
  if (*(int *)(param_1 + 0x4f30) == 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x6d54);
    fn_82F0D688(param_1,0);
    *(undefined4 *)(param_1 + 0x6d54) = 0;
    *(undefined4 *)(param_1 + 0x4ed8) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x4edc) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x4ee0) = *(undefined4 *)(param_1 + 0x1c);
    fn_82F0F9A0(param_1,0x17);
    *(undefined4 *)(param_1 + 0x6d54) = uVar4;
    fn_82F0D688(param_1,1);
  }
  return;
}

