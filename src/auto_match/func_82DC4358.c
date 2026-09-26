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
extern int fn_82CE5410();
extern int fn_82CE8E78();
extern int fn_82CE8FC8();
extern int fn_82D80CB8();
extern int fn_82D80CE8();
extern int fn_82D90888();
extern int fn_82DAA348();
extern int fn_82DAEE18();
extern int fn_82DB4D88();
extern int fn_83088518();
extern int fn_830885D0();
extern unsigned int iStack_84;
extern unsigned int iStack_90;
extern unsigned int iStack_94;
extern unsigned int iStack_a0;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern U64 storeWordConditionalIndexed();


undefined8 fn_82DC4358(int *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar8;
  int *piVar9;
  int iVar10;
  char cVar14;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 uVar7;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  char *pcVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint *puVar21;
  char in_RESERVE;
  byte in_cr0;
  int iStack_a0;
  uint uStack_9c;
  uint uStack_98;
  int iStack_94;
  int iStack_90;
  uint uStack_8c;
  uint uStack_88;
  int iStack_84;
  
  iVar13 = *(int *)(param_3 + 0x14);
  iVar8 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(undefined4 **)(iVar8 + 4);
  if (puVar2 < *(undefined4 **)(iVar8 + 0xc)) {
    *puVar2 = "TtBroadphase";
    uVar7 = TBLr;
    puVar2[1] = (int)uVar7;
    *(undefined4 **)(iVar8 + 4) = puVar2 + 3;
  }
  if ((((*(int *)(*(int *)(param_3 + 0x18) + 8) != 0) && (*(char *)(*param_1 + 0xd5) != '\0')) &&
      ((*(byte *)(iVar13 + 0x26) & 0x30) != 0)) && ((*(byte *)(iVar13 + 0x25) & 0x30) == 0)) {
    fn_82D90888(*param_1,iVar13);
  }
  iVar8 = *(int *)(param_3 + 0x18);
  pcVar18 = (char *)(iVar8 + 0x20);
  uVar3 = *(uint *)(*param_1 + 0x33c);
  iStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0x80000000;
  piVar9 = (int *)fn_82CE5410();
  uStack_88 = uVar3 | 0x80000000;
  iStack_90 = *piVar9;
  *piVar9 = (uVar3 * 8 + 0x7f & 0xffffff80) + iStack_90;
  uVar3 = *(uint *)(*param_1 + 0x33c);
  iStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0x80000000;
  iStack_84 = iStack_90;
  piVar9 = (int *)fn_82CE5410();
  uStack_98 = uVar3 | 0x80000000;
  iStack_a0 = *piVar9;
  *piVar9 = (uVar3 * 8 + 0x7f & 0xffffff80) + iStack_a0;
  uVar3 = *(uint *)(param_3 + 0x18);
  iStack_94 = iStack_a0;
  fn_82DB4D88(param_1[0x3c],*(undefined4 *)(iVar13 + 0x48),*(undefined4 *)(iVar13 + 0x4c),*param_1
                ,&iStack_90,&iStack_a0);
  iVar11 = *(int *)(uVar3 + 0x10);
  iVar17 = 0;
  lVar20 = (ulonglong)uVar3 + 0xc;
  puVar21 = (uint *)lVar20;
  if (iVar11 == 1) {
    uVar16 = *(uint *)(uVar3 + 0xc);
    *(uint *)(uVar3 + 0xc) = uVar16 - 1;
  }
  else {
    do {
      uVar16 = *puVar21;
      if (in_RESERVE != '\0') {
        uVar5 = storeWordConditionalIndexed((ulonglong)uVar16 - 1,0,lVar20);
        *puVar21 = uVar5;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  if (uVar16 == *(uint *)(uVar3 + 0x10)) {
    if (iVar8 != -0x20) {
      iVar8 = KeTlsGetValue(lbl_8323B4A0);
      puVar2 = *(undefined4 **)(iVar8 + 4);
      if (puVar2 < *(undefined4 **)(iVar8 + 0xc)) {
        *puVar2 = "TtWaitForExport";
        uVar7 = TBLr;
        puVar2[1] = (int)uVar7;
        *(undefined4 **)(iVar8 + 4) = puVar2 + 3;
      }
      do {
        if (*pcVar18 == '\x01') break;
      } while (*pcVar18 != '\x02');
      iVar8 = KeTlsGetValue(lbl_8323B4A0);
      puVar2 = *(undefined4 **)(iVar8 + 4);
      if (puVar2 < *(undefined4 **)(iVar8 + 0xc)) {
        *puVar2 = &lbl_82132BC4;
        uVar7 = TBLr;
        puVar2[1] = (int)uVar7;
        *(undefined4 **)(iVar8 + 4) = puVar2 + 3;
      }
    }
    puVar21 = *(uint **)(uVar3 + 0x24);
    if (puVar21 != (uint *)0x0) {
      uVar19 = 0;
      do {
        uVar16 = *puVar21;
        puVar21 = (uint *)puVar21[1];
        uVar19 = uVar16 + uVar19;
      } while (puVar21 != (uint *)0x0);
      piVar9 = (int *)fn_82CE5410();
      iVar8 = *piVar9;
      iVar10 = 0;
      *piVar9 = ((int)((uVar19 & 0xffffffff) << 4) + 0x7fU & 0xffffff80) + iVar8;
      for (puVar21 = *(uint **)(uVar3 + 0x24); puVar21 != (uint *)0x0; puVar21 = (uint *)puVar21[1])
      {
        puVar15 = puVar21 + 4;
        lVar20 = ((ulonglong)*puVar21 & 0x3fffffff) << 2;
        if (0 < (int)lVar20) {
          iVar6 = iVar10 * 0x10 - (int)puVar15;
          do {
            *(uint *)(iVar6 + iVar8 + (int)puVar15) = *puVar15;
            puVar15 = puVar15 + 1;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
        iVar10 = *puVar21 + iVar10;
      }
      fn_82DAEE18(*param_1,iVar8,uVar19);
      piVar9 = (int *)fn_82CE5410();
      *piVar9 = iVar8;
    }
    *pcVar18 = '\x02';
  }
  else {
    if (*pcVar18 != '\x02') {
      iVar8 = KeTlsGetValue(lbl_8323B4A0);
      puVar2 = *(undefined4 **)(iVar8 + 4);
      if (puVar2 < *(undefined4 **)(iVar8 + 0xc)) {
        *puVar2 = "TtWaitForSolverCallbacks";
        uVar7 = TBLr;
        puVar2[1] = (int)uVar7;
        *(undefined4 **)(iVar8 + 4) = puVar2 + 3;
      }
      do {
      } while (*pcVar18 != '\x02');
      iVar8 = KeTlsGetValue(lbl_8323B4A0);
      puVar2 = *(undefined4 **)(iVar8 + 4);
      if (puVar2 < *(undefined4 **)(iVar8 + 0xc)) {
        *puVar2 = &lbl_82132BC4;
        uVar7 = TBLr;
        puVar2[1] = (int)uVar7;
        *(undefined4 **)(iVar8 + 4) = puVar2 + 3;
      }
    }
    if (*(int *)(uVar3 + 0x10) < 3) {
      iVar17 = -1;
    }
    else {
      do {
        uVar16 = *puVar21;
        if (in_RESERVE != '\0') {
          uVar5 = storeWordConditionalIndexed((ulonglong)uVar16 - 1,0,lVar20);
          *puVar21 = uVar5;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      iVar17 = uVar16 - 1;
    }
  }
  if ((ulonglong)uStack_9c + (ulonglong)uStack_8c != 0) {
    iVar8 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar8 + 4);
    if (puVar2 < *(undefined4 **)(iVar8 + 0xc)) {
      *puVar2 = "LtAddRemoveAgnts";
      puVar2[3] = "StInit";
      uVar7 = TBLr;
      puVar2[1] = (int)uVar7;
      *(undefined4 **)(iVar8 + 4) = puVar2 + 4;
    }
    piVar9 = *(int **)(iVar13 + 0x48);
    iVar8 = *param_1;
    if ((ulonglong)uStack_9c + (ulonglong)uStack_8c != 0) {
      iVar10 = KeTlsGetValue(lbl_8323B4A0);
      puVar2 = *(undefined4 **)(iVar10 + 4);
      if (puVar2 < *(undefined4 **)(iVar10 + 0xc)) {
        *puVar2 = "StRemoveAgt";
        uVar7 = TBLr;
        puVar2[1] = (int)uVar7;
        *(undefined4 **)(iVar10 + 4) = puVar2 + 3;
      }
      fn_82D80CB8(iVar8,*(undefined4 *)(*piVar9 + 0xcc));
      fn_830885D0(*(undefined4 *)(iVar8 + 100),iStack_a0,uStack_9c);
      uVar16 = uStack_8c;
      iVar10 = fn_82CE5410();
      cVar14 = (**(code **)(**(int **)(iVar10 + 0x10) + 0x24))
                         (*(int **)(iVar10 + 0x10),uVar16 << 10);
      if (cVar14 == '\0') {
        uVar12 = *(undefined4 *)(*piVar9 + 0xcc);
      }
      else {
        iVar10 = KeTlsGetValue(lbl_8323B4A0);
        puVar2 = *(undefined4 **)(iVar10 + 4);
        if (puVar2 < *(undefined4 **)(iVar10 + 0xc)) {
          *puVar2 = "StAddAgt";
          uVar7 = TBLr;
          puVar2[1] = (int)uVar7;
          *(undefined4 **)(iVar10 + 4) = puVar2 + 3;
        }
        fn_83088518(*(undefined4 *)(iVar8 + 100),iStack_90,uStack_8c,
                        -(ulonglong)((ulonglong)*(uint *)(iVar8 + 0x7c) != 0) &
                        (ulonglong)*(uint *)(iVar8 + 0x7c) + 8);
        uVar12 = *(undefined4 *)(*piVar9 + 0xcc);
      }
      fn_82D80CE8(iVar8,uVar12);
    }
    iVar8 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar8 + 4);
    if (puVar2 < *(undefined4 **)(iVar8 + 0xc)) {
      *puVar2 = &lbl_8202CF7C;
      uVar7 = TBLr;
      puVar2[1] = (int)uVar7;
      *(undefined4 **)(iVar8 + 4) = puVar2 + 3;
    }
  }
  if (iVar17 == 1 - iVar11) {
    iVar8 = *(int *)(uVar3 + 0x68);
    while (iVar8 != 0) {
      puVar2 = *(undefined4 **)(uVar3 + 0x68);
      *(undefined4 *)(uVar3 + 0x68) = *puVar2;
      iVar8 = fn_82CE5410();
      (**(code **)(**(int **)(iVar8 + 0x10) + 8))(*(int **)(iVar8 + 0x10),puVar2,0x1000);
      iVar8 = *(int *)(uVar3 + 0x68);
    }
    iVar8 = *(int *)(uVar3 + 0x78);
    while (iVar8 != 0) {
      puVar2 = *(undefined4 **)(uVar3 + 0x78);
      *(undefined4 *)(uVar3 + 0x78) = *puVar2;
      iVar8 = fn_82CE5410();
      (**(code **)(**(int **)(iVar8 + 0x10) + 8))(*(int **)(iVar8 + 0x10),puVar2,0x30);
      iVar8 = *(int *)(uVar3 + 0x78);
    }
    iVar8 = *(int *)(uVar3 + 0x14);
    if (iVar8 != 0) {
      uVar12 = *(undefined4 *)(uVar3 + 0x1c);
      iVar11 = fn_82CE5410();
      (**(code **)(**(int **)(iVar11 + 0x18) + 0x10))(*(int **)(iVar11 + 0x18),iVar8,uVar12,1);
      *(undefined4 *)(uVar3 + 0x14) = 0;
    }
    if (1 < *(int *)(uVar3 + 0x10)) {
      uVar1 = *(undefined2 *)(uVar3 + 0x56);
      uVar12 = *(undefined4 *)(uVar3 + 0x50);
      iVar8 = fn_82CE5410();
      (**(code **)(**(int **)(iVar8 + 0x10) + 0x10))(*(int **)(iVar8 + 0x10),uVar12,uVar1,4);
      *(undefined4 *)(uVar3 + 0x50) = 0;
    }
    iVar8 = fn_82CE5410();
    piVar9 = *(int **)(iVar8 + 0x10);
    *(undefined4 *)(uVar3 + 0x60) = 0;
    if ((*(uint *)(uVar3 + 100) & 0x80000000) == 0) {
      (**(code **)(*piVar9 + 0x10))
                (piVar9,*(undefined4 *)(uVar3 + 0x5c),*(uint *)(uVar3 + 100) & 0x3fffffff,4);
    }
    *(undefined4 *)(uVar3 + 0x5c) = 0;
    *(undefined4 *)(uVar3 + 100) = 0x80000000;
    iVar8 = fn_82CE5410();
    (**(code **)(**(int **)(iVar8 + 0x10) + 8))(*(int **)(iVar8 + 0x10),(ulonglong)uVar3,0x80);
  }
  uVar3 = *(uint *)(iVar13 + 0x60);
  if ((int)uVar3 < 1) {
    iVar13 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar13 + 4);
    if (puVar2 < *(undefined4 **)(iVar13 + 0xc)) {
      *puVar2 = &lbl_82132BC4;
      uVar7 = TBLr;
      puVar2[1] = (int)uVar7;
      *(undefined4 **)(iVar13 + 4) = puVar2 + 3;
    }
    uVar7 = fn_82CE8E78(param_2,param_3,param_3);
  }
  else {
    iVar8 = *param_1;
    uVar12 = *(undefined4 *)(iVar13 + 0x58);
    uVar4 = *(undefined4 *)(iVar13 + 0x5c);
    uVar16 = *(uint *)(iVar8 + 0xe0);
    *param_3 = 0xd;
    param_3[1] = 0;
    param_3[2] = 1;
    *(undefined2 *)(param_3 + 6) = 0xffff;
    *(undefined2 *)(param_3 + 4) = 0x50;
    *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(iVar8 + 0x1d0);
    *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(iVar8 + 0x1d4);
    *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(iVar8 + 0x1d8);
    *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(iVar8 + 0x1dc);
    *(undefined2 *)(param_3 + 0x24) = 0;
    *(undefined4 *)(param_3 + 0x2c) = uVar4;
    *(short *)(param_3 + 0x28) = (short)uVar3;
    *(short *)(param_3 + 0x2a) = (short)uVar16;
    *(undefined4 *)(param_3 + 0x20) = 0;
    param_3[1] = 1;
    *(undefined4 *)(param_3 + 0x40) = 0;
    *(short *)(param_3 + 0x44) = (short)uVar12;
    if ((int)uVar16 < (int)uVar3) {
      uVar19 = (ulonglong)uVar3 - 1;
      lVar20 = (longlong)((int)uVar19 / (int)uVar16) + 1;
      uVar19 = (ulonglong)uVar16 &
               ~(((uVar19 & 0x7fffffff) << 1 | (uVar19 & 0xffffffff) >> 0x1f) - 1);
      trapWord(6,(ulonglong)uVar16,0);
      trapWord(5,uVar19,0xffff);
      uVar12 = fn_82DAA348(lVar20,0x10,uVar4,uVar12,uVar19);
      *(undefined4 *)(param_3 + 0x20) = uVar12;
      *(short *)(param_3 + 0x26) = (short)lVar20;
    }
    iVar13 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar13 + 4);
    if (puVar2 < *(undefined4 **)(iVar13 + 0xc)) {
      *puVar2 = &lbl_82132BC4;
      uVar7 = TBLr;
      puVar2[1] = (int)uVar7;
      *(undefined4 **)(iVar13 + 4) = puVar2 + 3;
    }
    uVar7 = fn_82CE8FC8(param_2,0,1,param_3,0);
  }
  iVar13 = iStack_94;
  uStack_9c = -(uint)(iStack_a0 != iStack_94) & uStack_9c;
  piVar9 = (int *)fn_82CE5410();
  *piVar9 = iVar13;
  iVar13 = fn_82CE5410();
  uStack_9c = 0;
  if ((uStack_98 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar13 + 0x10) + 0x10))
              (*(int **)(iVar13 + 0x10),iStack_a0,uStack_98 & 0x3fffffff);
  }
  iVar13 = iStack_84;
  iStack_a0 = 0;
  uStack_98 = 0x80000000;
  uStack_8c = -(uint)(iStack_90 != iStack_84) & uStack_8c;
  piVar9 = (int *)fn_82CE5410();
  *piVar9 = iVar13;
  iVar13 = fn_82CE5410();
  uStack_8c = 0;
  if ((uStack_88 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar13 + 0x10) + 0x10))
              (*(int **)(iVar13 + 0x10),iStack_90,uStack_88 & 0x3fffffff,8);
  }
  return uVar7;
}

