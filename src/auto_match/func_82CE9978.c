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
#define TBLr 0
extern int fn_82CE82A8();
extern int fn_82CE8758();
extern int fn_82CE98C8();
extern int fn_82CFBAF8();
extern int fn_82CFBB08();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B220;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;


undefined8
fn_82CE9978(int param_1,longlong param_2,longlong param_3,int param_4,undefined8 param_5)

{
  char cVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar13;
  longlong lVar12;
  uint uVar14;
  char *pcVar16;
  undefined8 *puVar17;
  int iVar18;
  ulonglong uVar15;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  byte bStack_cf;
  
  iVar7 = KeTlsGetValue(lbl_8323B220);
  if (iVar7 == 0) {
    iVar7 = *(int *)(param_1 + 0x58);
  }
  else {
    iVar7 = KeTlsGetValue(lbl_8323B220);
    iVar7 = (int)*(char *)(iVar7 + param_1 + 0xd0);
  }
  pcVar16 = (char *)(iVar7 * 0x11 + param_1 + 0x8c);
  cVar1 = *pcVar16;
  iVar7 = (int)param_3;
  if (-1 < cVar1) {
LAB_82ce99f0:
    uVar19 = (ulonglong)cVar1;
    iVar20 = (int)cVar1;
    pcVar16 = pcVar16 + 1;
    lVar11 = (uVar19 + (uVar19 & 0x3fffffff) * 4 & 0x3fffffff) * 4 + param_3;
    lVar21 = lVar11 + 0x2c;
    iVar8 = (int)lVar11;
    if (*(int *)(iVar8 + 0x3c) == 0) goto code_r0x82ce9a14;
    puVar13 = &uStack_d8;
    lVar11 = 0x10;
    puVar17 = (undefined8 *)(*(int *)(iVar8 + 0x34) * 0x80 + *(int *)lVar21 + -8);
    do {
      puVar17 = puVar17 + 1;
      puVar13 = puVar13 + 1;
      *puVar13 = *puVar17;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    iVar18 = *(int *)(iVar8 + 0x34) + 1;
    *(int *)(iVar8 + 0x34) = iVar18;
    if (iVar18 == *(int *)(iVar8 + 0x30)) {
      *(undefined4 *)(iVar8 + 0x34) = 0;
    }
    *(int *)(iVar8 + 0x3c) = *(int *)(iVar8 + 0x3c) + -1;
    iVar8 = (**(code **)(param_1 + 0x20))(param_1,param_3,&uStack_d0,param_5);
    if (iVar8 == 1) {
      fn_82CE98C8(lVar21,&uStack_d0);
      if ((int)cVar1 < *(int *)(param_1 + 0x88)) {
        iVar8 = (int)((uVar19 + 0x11 & 0xffffffff) << 1);
        sVar2 = *(short *)(iVar8 + iVar7);
        if (sVar2 != 0) {
          *(short *)(iVar8 + iVar7) = sVar2 + -1;
          fn_82CFBB08(*(undefined4 *)((int)((uVar19 + 0x1e & 0xffffffff) << 2) + param_1),1);
          goto LAB_82ce9b54;
        }
      }
      fn_82CE8758(param_1,param_3);
    }
LAB_82ce9b54:
    *(short *)((uint)bStack_cf * 2 + iVar7) = *(short *)((uint)bStack_cf * 2 + iVar7) + 1;
    goto LAB_82ce9a28;
  }
LAB_82ce9a24:
  iVar20 = -1;
LAB_82ce9a28:
  iVar8 = (int)param_2;
  if ((iVar8 != -1) && (iVar8 != iVar20)) {
    if (iVar8 < *(int *)(param_1 + 0x88)) {
      iVar8 = (int)((param_2 + 0x11U & 0xffffffff) << 1);
      sVar2 = *(short *)(iVar8 + iVar7);
      if (sVar2 != 0) {
        *(short *)(iVar8 + iVar7) = sVar2 + -1;
        fn_82CFBB08(*(undefined4 *)((int)((param_2 + 0x1eU & 0xffffffff) << 2) + param_1),1);
        goto LAB_82ce9b78;
      }
    }
    fn_82CE8758(param_1,param_3);
  }
LAB_82ce9b78:
  if (-1 < iVar20) {
    RtlLeaveCriticalSection(param_1);
    return 0;
  }
  uVar9 = *(uint *)(param_1 + 0x50);
  uVar15 = (ulonglong)uVar9;
  lVar21 = 0;
  uVar14 = *(uint *)(param_1 + 0x54);
  lVar11 = 0;
  bVar6 = false;
  bVar5 = false;
  uVar19 = 0;
  if ((int)uVar9 < (int)uVar14) {
    if (1 < (int)(uVar14 - uVar9)) {
      lVar10 = (((uVar14 - uVar15) - 2 & 0xffffffff) >> 1) + 1;
      lVar12 = (uVar15 + 2 + (uVar15 + 2 & 0x3fffffff) * 4 & 0x3fffffff) * 4 + param_3;
      uVar15 = (lVar10 * 2 & 0xfffffffeU) + uVar15;
      do {
        iVar8 = (int)lVar12;
        lVar12 = lVar12 + 0x28;
        lVar21 = (ulonglong)*(uint *)(iVar8 + 0x14) + lVar21;
        lVar11 = (ulonglong)*(uint *)lVar12 + lVar11;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    if ((int)uVar15 < (int)uVar14) {
      uVar19 = (ulonglong)
               *(uint *)((int)((uVar15 + 3 + (uVar15 + 3 & 0x3fffffff) * 4 & 0xffffffff) << 2) +
                        iVar7);
    }
    if (lVar21 + lVar11 + uVar19 == 0) goto LAB_82ce9c30;
  }
  else {
LAB_82ce9c30:
    uVar19 = (ulonglong)*(uint *)(param_1 + 0x28);
    uVar9 = 0;
    uVar14 = 0;
    lVar11 = param_3;
    if (0 < (int)*(uint *)(param_1 + 0x28)) {
      do {
        if ((0 < *(short *)lVar11) ||
           (iVar8 = 0, *(int *)((*(int *)(param_1 + 0x34) + uVar14 + 3) * 0x14 + iVar7) != 0)) {
          iVar8 = 1;
        }
        uVar9 = iVar8 << (uVar14 & 0x3f) | uVar9;
        uVar14 = uVar14 + 1;
        uVar19 = uVar19 - 1;
        lVar11 = lVar11 + 2;
      } while (uVar19 != 0);
    }
    bVar5 = uVar9 == 0;
    bVar6 = (*(uint *)(iVar7 + 0x18) & uVar9) == 0;
  }
  if (bVar6) {
    iVar8 = KeTlsGetValue(lbl_8323B220);
    if (iVar8 != 0) {
      if (*(short *)((*(char *)(param_1 + 0xd0) + 0x11) * 2 + iVar7) != 0) {
        iVar8 = (*(char *)(param_1 + 0xd0) + 0x11) * 2;
        *(short *)(iVar8 + iVar7) = *(short *)(iVar8 + iVar7) + -1;
        fn_82CFBB08(*(undefined4 *)((*(char *)(param_1 + 0xd0) + 0x1e) * 4 + param_1),1);
      }
      goto LAB_82ce9d50;
    }
    if (!bVar5) goto LAB_82ce9ce8;
  }
  else {
LAB_82ce9d50:
    if ((!bVar5) || (*(int *)(iVar7 + 0x1c) == 1)) {
      if (param_4 == 1) {
        RtlLeaveCriticalSection(param_1);
        return 1;
      }
      iVar8 = KeTlsGetValue(lbl_8323B220);
      lVar11 = (longlong)*(char *)(iVar8 + param_1 + 0xd0);
      iVar8 = (int)((lVar11 + 0x11U & 0xffffffff) << 1);
      *(short *)(iVar8 + iVar7) = *(short *)(iVar8 + iVar7) + 1;
      RtlLeaveCriticalSection(param_1);
      iVar7 = KeTlsGetValue(lbl_8323B4A0);
      puVar3 = *(undefined4 **)(iVar7 + 4);
      if (puVar3 < *(undefined4 **)(iVar7 + 0xc)) {
        *puVar3 = "TtNoJobAvailable";
        uVar4 = TBLr;
        puVar3[1] = (int)uVar4;
        *(undefined4 **)(iVar7 + 4) = puVar3 + 3;
      }
      fn_82CFBAF8(*(undefined4 *)((int)((lVar11 + 0x1eU & 0xffffffff) << 2) + param_1));
      iVar7 = KeTlsGetValue(lbl_8323B4A0);
      puVar3 = *(undefined4 **)(iVar7 + 4);
      if (puVar3 < *(undefined4 **)(iVar7 + 0xc)) {
        *puVar3 = &lbl_82132BC4;
        uVar4 = TBLr;
        puVar3[1] = (int)uVar4;
        *(undefined4 **)(iVar7 + 4) = puVar3 + 3;
      }
      return 0xffffffffffffffff;
    }
  }
  fn_82CE82A8(param_1,param_3);
LAB_82ce9ce8:
  RtlLeaveCriticalSection(param_1);
  return 2;
code_r0x82ce9a14:
  cVar1 = *pcVar16;
  if (cVar1 < '\0') goto LAB_82ce9a24;
  goto LAB_82ce99f0;
}

