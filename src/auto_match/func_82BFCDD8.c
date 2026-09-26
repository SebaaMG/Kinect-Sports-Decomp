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
extern unsigned int *auStack_70;
extern int fn_82A1E658();
extern int fn_82A28E60();
extern int fn_82A2A360();
extern int fn_82BFB960();
extern int fn_82BFBA20();
extern int fn_82BFEAC0();
extern int fn_82BFEAD8();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern U64 storeDoubleWordConditionalIndexed();
extern U64 storeWordConditionalIndexed();


ulonglong fn_82BFCDD8(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                       uint param_6,int param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  int iVar9;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint *puVar14;
  undefined4 *puVar15;
  char in_RESERVE;
  byte in_cr0;
  longlong lVar16;
  undefined4 auStack_70 [2];
  longlong lStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  
  if (param_6 == 0) {
    param_6 = 1;
  }
  if (((param_7 == 0) || (param_8 == 0)) || ((param_6 - 1 & param_6) != 0)) {
    return 0;
  }
  auStack_70[0] = 0;
  uStack_5c = param_5;
  iStack_58 = param_7;
  iStack_54 = param_8;
  uVar6 = fn_82BFB960(&uStack_60,&lStack_68,0x60,auStack_70);
  if ((uVar6 & 0xffffffff) == 0) {
    return 0;
  }
  lVar11 = uVar6 - 8;
  lVar16 = 10;
  do {
    lVar11 = lVar11 + 8;
    *(undefined8 *)lVar11 = 0;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  uVar5 = (((U64)(lStack_68) >> 0) & 0xFFFFFFFF);
  plVar4 = (longlong *)uVar6;
  *(undefined4 *)((int)plVar4 + 0x44) = (((U64)(lStack_68) >> 0) & 0xFFFFFFFF);
  *(undefined4 *)((int)plVar4 + 0x3c) = auStack_70[0];
  *(longlong **)(plVar4 + 9) = plVar4 + 10;
  *(undefined4 *)(plVar4 + 10) = uStack_60;
  *(undefined4 *)((int)plVar4 + 0x54) = uStack_5c;
  *(int *)(plVar4 + 0xb) = iStack_58;
  *(int *)((int)plVar4 + 0x5c) = iStack_54;
  if (param_1 < 0x10) {
    param_1 = 0x10;
  }
  else if (0x1000000 < param_1) {
    param_1 = 0x1000000;
  }
  if (param_2 < 0x7ffffff) {
    if (0 < param_2) goto LAB_82bfcefc;
    param_2 = -1;
    param_4 = 0;
  }
  else {
    param_2 = 0x7fffffe;
LAB_82bfcefc:
    if (param_2 < param_1) {
      param_1 = param_2;
    }
  }
  lVar11 = uVar6 + 0x34;
  *(int *)(plVar4 + 6) = param_1;
  *(int *)((int)plVar4 + 0x34) = param_2;
  if (param_3 != 0) {
    iVar9 = fn_82BFEAC0(*(undefined4 *)((int)plVar4 + 0x24));
    *(int *)((int)plVar4 + 0x24) = iVar9;
    if (iVar9 == 0) {
      iVar9 = *(int *)(plVar4 + 9);
      if (iVar9 != 0) {
        (**(code **)(iVar9 + 0xc))(*(undefined4 *)(iVar9 + 4),uVar5);
        return 0;
      }
      goto LAB_82bfcf70;
    }
  }
  if (param_4 != 0) {
    iVar9 = fn_82BFEAC0(*(undefined4 *)((int)plVar4 + 0x1c));
    *(int *)((int)plVar4 + 0x1c) = iVar9;
    if (iVar9 == 0) {
      if (*(int *)((int)plVar4 + 0x24) != 0) {
        fn_82A1E658();
      }
      iVar9 = *(int *)(plVar4 + 9);
      if (iVar9 != 0) {
        (**(code **)(iVar9 + 0xc))(*(undefined4 *)(iVar9 + 4),uVar5);
        return 0;
      }
      goto LAB_82bfcf70;
    }
  }
  uVar13 = (ulonglong)*(uint *)(plVar4 + 6);
  do {
    puVar14 = (uint *)lVar11;
    uVar2 = *puVar14;
    if ((int)uVar2 < 0) break;
    if (uVar2 == 0) goto LAB_82bfd170;
    if ((int)uVar2 < (int)uVar13) {
      uVar13 = (ulonglong)uVar2;
    }
    sync(1);
    do {
      uVar1 = *puVar14;
      if (uVar1 != uVar2) {
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed((ulonglong)uVar1,0,lVar11);
          *puVar14 = uVar3;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar2 - uVar13,0,lVar11);
        *puVar14 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  } while (uVar1 != uVar2);
  lVar11 = (uVar13 & 0xfffffff) * 0x10;
  uVar8 = fn_82BFBA20(*(undefined4 *)(plVar4 + 9),uVar6 + 0x28,lVar11,uVar6 + 0x3c);
  if ((uVar8 & 0xffffffff) == 0) {
    *puVar14 = 0;
  }
  else {
    do {
      puVar14 = (uint *)(uVar6 + 0x38);
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar13 + *puVar14,0,uVar6 + 0x38);
        *puVar14 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    uVar10 = uVar13 - 1;
    lVar11 = lVar11 + uVar8;
    iVar9 = (int)uVar10;
    uVar8 = uVar10;
    lVar16 = lVar11;
    if (iVar9 != 0) {
      do {
        lVar11 = lVar16 + -0x10;
        while( true ) {
          lVar12 = *plVar4;
          lStack_68 = ((((U64)(lStack_68)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((undefined4)((ulonglong)lVar12 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
          *(undefined4 *)((int)lVar16 + -8) = (((U64)(lStack_68) >> 0) & 0xFFFFFFFF);
          sync(1);
          in_RESERVE = '\x01';
          if (*plVar4 == lVar12) break;
          lVar12 = storeDoubleWordConditionalIndexed(*plVar4,0,uVar6);
          *plVar4 = lVar12;
        }
        lVar16 = storeDoubleWordConditionalIndexed
                           ((lVar12 + 1U & 0x7fffffff) + (lVar11 << 0x20),0,uVar6);
        *plVar4 = lVar16;
        uVar8 = uVar8 - 1;
        in_cr0 = (uVar8 == 0) << 1;
        lVar16 = lVar11;
        lStack_68 = lVar12;
      } while (uVar8 != 0);
    }
    if (*(int *)((int)plVar4 + 0x1c) != 0) {
      do {
        puVar14 = (uint *)(uVar6 + 0x18);
        uVar2 = *puVar14;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar13 + uVar2,0,uVar6 + 0x18);
          *puVar14 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      if (((int)uVar2 < -1) && (0 < iVar9)) {
        uVar13 = ~(ulonglong)uVar2;
        if (iVar9 < (int)uVar13) {
          uVar13 = uVar10;
        }
        fn_82BFEAD8(*(undefined4 *)((int)plVar4 + 0x1c),uVar13);
      }
    }
    if ((lVar11 - 0x10U & 0xffffffff) != 0) {
      if (*(int *)((int)plVar4 + 0x1c) != 0) {
        *(int *)(plVar4 + 3) = *(int *)(plVar4 + 3) + -1;
      }
      puVar15 = (undefined4 *)(lVar11 - 0x10U);
      *puVar15 = 0;
      *(undefined4 *)((int)lVar11 + -0xc) = 0;
      *(undefined4 **)(plVar4 + 2) = puVar15;
      *(undefined4 *)((int)plVar4 + 0x14) = 0;
      *(undefined4 **)(plVar4 + 1) = puVar15;
      *(undefined4 *)((int)plVar4 + 0xc) = 0;
      *(undefined4 *)(plVar4 + 8) = 0x4c665175;
      sync(1);
      return uVar6;
    }
  }
LAB_82bfd170:
  if (*(int *)((int)plVar4 + 0x24) != 0) {
    fn_82A1E658();
  }
  if (*(int *)((int)plVar4 + 0x1c) != 0) {
    fn_82A1E658();
  }
  iVar9 = *(int *)(plVar4 + 9);
  if (iVar9 != 0) {
    (**(code **)(iVar9 + 0xc))(*(undefined4 *)(iVar9 + 4),uVar5);
    return 0;
  }
LAB_82bfcf70:
  fn_82A2A360();
  uVar7 = fn_82A2A360();
  fn_82A28E60(uVar7,0,uVar5);
  return 0;
}

