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
#define CONCAT42(h,l) ((U64)((((U32)(h)) << 16) | ((U16)(l))))
#define CONCAT62(h,l) ((U64)((((U64)(h)) << 16) | ((U16)(l))))
#define TBLr 0
extern unsigned int *auStack_110;
extern int fn_82CE5410();
extern int fn_82CE8AF0();
extern int fn_82CE8D08();
extern int fn_82CE8E78();
extern int fn_82CE8FC8();
extern int fn_82CE90F8();
extern int fn_82DBA1E0();
extern int fn_82DBCBF8();
extern int fn_82DBFFD0();
extern int fn_82DC07B0();
extern int fn_82DC0920();
extern int fn_82DC4C10();
extern int fn_82DC5D38();
extern int fn_82F68CC0();
extern unsigned int iStack_1c4;
extern unsigned int iStack_1c8;
extern unsigned int iStack_1cc;
extern unsigned int iStack_1d0;
extern unsigned int iStack_1d8;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_8323B220;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_118;
extern unsigned int uStack_18f;
extern unsigned int uStack_190;
extern unsigned int uStack_1a4;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1b0;
extern unsigned int uStack_1ba;
extern unsigned int uStack_1bc;
extern unsigned int uStack_1be;
extern unsigned int uStack_1bf;
extern unsigned int uStack_1c0;
extern unsigned int uStack_1d2;
extern unsigned int uStack_1d4;


undefined8 fn_82DC6B00(int *param_1,undefined8 param_2,undefined1 *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar6;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  byte bVar15;
  uint uVar14;
  int iVar16;
  int iVar17;
  longlong lVar18;
  int aiStack_1e0 [2];
  int iStack_1d8;
  undefined2 uStack_1d4;
  undefined2 uStack_1d2;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  undefined1 uStack_1c0;
  undefined1 uStack_1bf;
  undefined1 uStack_1be;
  undefined2 uStack_1bc;
  undefined2 uStack_1ba;
  undefined2 uStack_1b0;
  undefined4 uStack_1ac;
  int *piStack_1a8;
  undefined4 uStack_1a4;
  undefined1 uStack_190;
  undefined1 uStack_18f;
  undefined8 uStack_118;
  undefined1 auStack_110 [272];
  
  iVar10 = *(int *)(param_3 + 0x14);
  uVar3 = fn_82DC07B0(iVar10);
  aiStack_1e0[0] = (int)uVar3;
  iVar6 = fn_82CE5410();
  uVar4 = (**(code **)(**(int **)(iVar6 + 0x18) + 0xc))(*(int **)(iVar6 + 0x18),aiStack_1e0,1);
  while ((uVar4 & 0xffffffff) == 0) {
    uVar5 = KeTlsGetValue(lbl_8323B220);
    KeTlsSetValue(lbl_8323B220,1);
    iVar6 = fn_82CE90F8(param_2,auStack_110,1);
    KeTlsSetValue(lbl_8323B220,uVar5);
    if (iVar6 == 0) {
      fn_82CE8AF0(param_2,param_3,1);
      uStack_18f = 0;
      uStack_190 = 0x10;
      fn_82CE8D08(param_2,&uStack_190,0);
      puVar13 = &uStack_118;
      puVar12 = (undefined8 *)(param_3 + -8);
      lVar18 = 0x10;
      do {
        puVar13 = puVar13 + 1;
        puVar12 = puVar12 + 1;
        *puVar12 = *puVar13;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      return 0;
    }
    lVar18 = 4000;
    iVar6 = 0;
    do {
      iStack_1d8 = iVar6;
      lVar18 = lVar18 + -1;
      iVar6 = iStack_1d8 + 1;
    } while (lVar18 != 0);
    iVar6 = fn_82CE5410();
    uVar4 = (**(code **)(**(int **)(iVar6 + 0x18) + 0xc))(*(int **)(iVar6 + 0x18),aiStack_1e0,1);
  }
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(undefined4 **)(iVar6 + 4);
  if (puVar2 < *(undefined4 **)(iVar6 + 0xc)) {
    *puVar2 = "LtIntegrate";
    puVar2[3] = "StInit";
    uVar5 = TBLr;
    puVar2[1] = (int)uVar5;
    *(undefined4 **)(iVar6 + 4) = puVar2 + 4;
  }
  iVar6 = *param_1;
  iVar11 = iVar6 + 0x1d0;
  if (*(char *)(iVar6 + 0xb0) == '\0') {
    iVar7 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar7 + 4);
    if (puVar2 < *(undefined4 **)(iVar7 + 0xc)) {
      *puVar2 = "StActions";
      uVar5 = TBLr;
      puVar2[1] = (int)uVar5;
      *(undefined4 **)(iVar7 + 4) = puVar2 + 3;
    }
    iVar7 = 0;
    if (0 < *(int *)(iVar10 + 0x3c)) {
      iVar17 = 0;
      do {
        piVar8 = *(int **)(iVar17 + *(int *)(iVar10 + 0x38));
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 0xc))(piVar8,iVar11);
        }
        iVar7 = iVar7 + 1;
        iVar17 = iVar17 + 4;
      } while (iVar7 < *(int *)(iVar10 + 0x3c));
    }
  }
  iVar7 = fn_82CE5410();
  piVar8 = (int *)(**(code **)(**(int **)(iVar7 + 0x10) + 4))(*(int **)(iVar7 + 0x10),0x80);
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8[3] = 1;
    piVar8[4] = 1;
    piVar8[5] = 0;
    piVar8[6] = 0;
    piVar8[7] = 0;
    piVar8[0x17] = 0;
    piVar8[0x18] = 0;
    piVar8[0x19] = -0x80000000;
    piVar8[0x1a] = 0;
    piVar8[0x1b] = 0;
    piVar8[0x1c] = 0;
    piVar8[0x1d] = 0;
    piVar8[0x1e] = 0;
    *(undefined2 *)(piVar8 + 0x1f) = 0;
  }
  iVar7 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(undefined4 **)(iVar7 + 4);
  if (puVar2 < *(undefined4 **)(iVar7 + 0xc)) {
    *puVar2 = "StIsland Splitting";
    uVar5 = TBLr;
    puVar2[1] = (int)uVar5;
    *(undefined4 **)(iVar7 + 4) = puVar2 + 3;
  }
  iVar7 = *(int *)(iVar10 + 0x4c);
  iVar17 = *(int *)(iVar10 + 0x48);
  iVar16 = 0;
  *(short *)(piVar8 + 0x15) = (short)iVar7;
  piVar8[0x14] = iVar17;
  *(short *)((int)piVar8 + 0x56) = (short)*(undefined4 *)(iVar10 + 0x50);
  piVar8[1] = 0;
  piVar8[2] = 1;
  piVar8[5] = 0;
  piVar8[6] = 0;
  piVar8[9] = 0;
  piVar8[0x1a] = 0;
  piVar8[0xc] = 0;
  iVar9 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(undefined4 **)(iVar9 + 4);
  if (puVar2 < *(undefined4 **)(iVar9 + 0xc)) {
    *puVar2 = "StSplitIslands";
    uVar5 = TBLr;
    puVar2[1] = (int)uVar5;
    *(undefined4 **)(iVar9 + 4) = puVar2 + 3;
  }
  bVar1 = *(byte *)(iVar10 + 0x25);
  bVar15 = *(char *)(iVar10 + 0x24) + 1;
  *(byte *)(iVar10 + 0x24) = bVar15;
  if ((bVar1 & 0x30) == 0) {
    if ((((bVar1 & 0xc0) == 0) || ((bVar15 & 7) != 0)) || (*(char *)(*param_1 + 200) == '\0'))
    goto LAB_82dc6ecc;
  }
  else {
    iVar9 = *(int *)(iVar10 + 0x4c);
    if (*(int *)(iVar10 + 0x4c) <= *(int *)(iVar10 + 0x1c)) {
      iVar9 = *(int *)(iVar10 + 0x1c);
    }
    if (iVar9 < *(int *)(*param_1 + 0xb4)) {
      bVar15 = bVar15 & 7;
    }
    else {
      bVar15 = bVar15 & 3;
      *(byte *)(iVar10 + 0x25) = bVar1 & 0xcf;
    }
    if (bVar15 != 0) goto LAB_82dc6ecc;
  }
  iVar16 = 1;
LAB_82dc6ecc:
  if (*(int *)(iVar10 + 0xc) == 0) {
    iVar7 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar7 + 4);
    if (puVar2 < *(undefined4 **)(iVar7 + 0xc)) {
      *puVar2 = "StSingleObj";
      uVar3 = TBLr;
      puVar2[1] = (int)uVar3;
      *(undefined4 **)(iVar7 + 4) = puVar2 + 3;
    }
    iVar6 = fn_82DBCBF8(iVar6 + 0x1e0,iVar11,iVar6 + 0x200,*(undefined4 *)(iVar10 + 0x48),
                            *(undefined4 *)(iVar10 + 0x4c),0xe0);
    fn_82DBA1E0(*(undefined4 *)(*(int *)(iVar10 + 0x18) + 0x78),*(undefined4 *)(iVar10 + 0x48)
                      ,*(undefined4 *)(iVar10 + 0x4c));
  }
  else {
    uVar14 = *(uint *)(iVar10 + 0x4c);
    if ((int)*(uint *)(iVar10 + 0x4c) < (int)*(uint *)(iVar10 + 0x1c)) {
      uVar14 = *(uint *)(iVar10 + 0x1c);
    }
    if (*(uint *)(param_1[0x3c] + 0xbc) <= uVar14) {
      iVar11 = KeTlsGetValue(lbl_8323B4A0);
      puVar2 = *(undefined4 **)(iVar11 + 4);
      if (puVar2 < *(undefined4 **)(iVar11 + 0xc)) {
        *puVar2 = "StSetupJobs";
        uVar5 = TBLr;
        puVar2[1] = (int)uVar5;
        *(undefined4 **)(iVar11 + 4) = puVar2 + 3;
      }
      fn_82DBFFD0(iVar10,uVar4,uVar3,piVar8);
      uVar14 = iVar7 - 1U >> 7;
      piVar8[0x11] = *(int *)(iVar10 + 0x10);
      piVar8[0x12] = *(int *)(iVar10 + 0x14);
      piVar8[0x13] = (int)(param_1 + 4);
      *(undefined1 *)(piVar8 + 8) = 0;
      piVar8[1] = uVar14 + iVar16 + 1;
      *(char *)((int)piVar8 + 0x21) = (char)iVar16;
      piVar8[7] = aiStack_1e0[0];
      *param_3 = 1;
      *(int **)(param_3 + 0x18) = piVar8;
      *(int *)(param_3 + 0x20) = iVar17;
      *(undefined2 *)(param_3 + 0x24) = 0;
      *(short *)(param_3 + 0x26) = (short)iVar7;
      param_3[2] = 1;
      *piVar8 = uVar14 + 2;
      fn_82CE8AF0(param_2,param_3,0);
      iStack_1cc = 0;
      iStack_1c8 = 0;
      iStack_1c4 = 0;
      iStack_1d8 = 0;
      uStack_1d4 = 0;
      fn_82DC5D38(iVar10,*(undefined1 *)(iVar6 + 0x304),piVar8,&iStack_1d0,&iStack_1d8);
      iVar10 = KeTlsGetValue(lbl_8323B4A0);
      puVar2 = *(undefined4 **)(iVar10 + 4);
      if (puVar2 < *(undefined4 **)(iVar10 + 0xc)) {
        *puVar2 = &lbl_8202CF7C;
        uVar3 = TBLr;
        puVar2[1] = (int)uVar3;
        *(undefined4 **)(iVar10 + 4) = puVar2 + 3;
      }
      *(ulonglong *)(piVar8 + 0x1e) = CONCAT62(CONCAT42(iStack_1d8,uStack_1d4),uStack_1d2);
      piVar8[0x1c] = iStack_1c8;
      piVar8[0x1d] = iStack_1c4;
      piVar8[0x1a] = iStack_1d0;
      piVar8[0x1b] = iStack_1cc;
      uStack_1a4 = *(undefined4 *)(param_3 + 0x1c);
      uStack_1c0 = 2;
      uStack_1ac = *(undefined4 *)(param_3 + 0x14);
      uStack_1bf = 0;
      uStack_1b0 = *(undefined2 *)(param_3 + 0x10);
      uStack_1be = 1;
      uStack_1bc = 0x30;
      uStack_1ba = 0xffff;
      piStack_1a8 = piVar8;
      uVar3 = fn_82CE8E78(param_2,&uStack_1c0,param_3,0);
      return uVar3;
    }
    iVar9 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(undefined4 **)(iVar9 + 4);
    if (puVar2 < *(undefined4 **)(iVar9 + 0xc)) {
      *puVar2 = "StSolver 1Cpu";
      uVar5 = TBLr;
      puVar2[1] = (int)uVar5;
      *(undefined4 **)(iVar9 + 4) = puVar2 + 3;
    }
    fn_82F68CC0(&uStack_190,param_1 + 4,0x60);
    iVar6 = fn_82DC0920(iVar11,iVar6 + 0x1e0,&uStack_190,iVar10,uVar4,uVar3,iVar17,iVar7);
  }
  iVar11 = aiStack_1e0[0];
  if (iVar6 < 6) {
    piVar8[2] = 0;
  }
  iVar6 = fn_82CE5410();
  (**(code **)(**(int **)(iVar6 + 0x18) + 0x10))(*(int **)(iVar6 + 0x18),uVar4,iVar11,1);
  if (iVar16 != 0) {
    fn_82DC4C10(iVar10,piVar8 + 0x17);
  }
  iVar10 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(undefined4 **)(iVar10 + 4);
  if (puVar2 < *(undefined4 **)(iVar10 + 0xc)) {
    *puVar2 = &lbl_8202CF7C;
    uVar3 = TBLr;
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar10 + 4) = puVar2 + 3;
  }
  *(undefined1 *)(piVar8 + 8) = 1;
  *param_3 = 0xc;
  param_3[1] = 0;
  param_3[2] = 2;
  *(undefined2 *)(param_3 + 4) = 0x30;
  *(undefined2 *)(param_3 + 6) = 0xffff;
  *(int **)(param_3 + 0x18) = piVar8;
  *(undefined2 *)(param_3 + 0x20) = 1;
  fn_82CE8FC8(param_2,0,0,param_3,0);
  return 0;
}

