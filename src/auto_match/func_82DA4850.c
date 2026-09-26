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
extern int fn_82D02610();
extern int fn_82DBA1E0();
extern int fn_83088518();
extern int fn_830885D0();
extern int fn_83088640();
extern unsigned int iStack_74;
extern unsigned int iStack_80;
extern unsigned int iStack_84;
extern unsigned int iStack_90;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;


void fn_82DA4850(int *param_1,ulonglong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  char cVar8;
  int iVar7;
  undefined4 *puVar9;
  undefined4 *puVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  int aiStack_a0 [4];
  int iStack_90;
  uint uStack_8c;
  uint uStack_88;
  int iStack_84;
  int iStack_80;
  uint uStack_7c;
  uint uStack_78;
  int iStack_74;
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar10 = *(undefined4 **)(iVar4 + 4);
  if (puVar10 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar10 = "LtBroadPhase";
    puVar10[3] = "StInitMem";
    uVar3 = TBLr;
    puVar10[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar10 + 4;
  }
  uVar1 = *(uint *)(param_3 + 0x33c);
  iStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0x80000000;
  piVar5 = (int *)fn_82CE5410();
  uStack_78 = uVar1 | 0x80000000;
  iStack_80 = *piVar5;
  *piVar5 = (uVar1 * 8 + 0x7f & 0xffffff80) + iStack_80;
  iStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0x80000000;
  uVar1 = *(uint *)(param_3 + 0x33c);
  iStack_74 = iStack_80;
  piVar5 = (int *)fn_82CE5410();
  uStack_88 = uVar1 | 0x80000000;
  iStack_90 = *piVar5;
  *piVar5 = (uVar1 * 8 + 0x7f & 0xffffff80) + iStack_90;
  iStack_84 = iStack_90;
  piVar5 = (int *)fn_82CE5410();
  iVar4 = *piVar5;
  *piVar5 = ((int)((param_2 & 0xffffffff) << 5) + 0x7fU & 0xffffff80) + iVar4;
  piVar5 = (int *)fn_82CE5410();
  iVar7 = *piVar5;
  *piVar5 = ((int)((param_2 & 0xffffffff) << 2) + 0x7fU & 0xffffff80) + iVar7;
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar10 = *(undefined4 **)(iVar6 + 4);
  if (puVar10 < *(undefined4 **)(iVar6 + 0xc)) {
    *puVar10 = "StCalcAabbs";
    uVar3 = TBLr;
    puVar10[1] = (int)uVar3;
    *(undefined4 **)(iVar6 + 4) = puVar10 + 3;
  }
  lVar11 = param_2 - 1;
  if (-1 < lVar11) {
    iVar6 = iVar7 - (int)param_1;
    iVar12 = iVar4;
    do {
      iVar2 = *param_1;
      *(int *)(iVar6 + (int)param_1) = iVar2 + 0x24;
      aiStack_a0[0] = iVar2;
      if (*(uint *)(iVar2 + 0x40) < *(uint *)(iVar2 + 0x30)) {
        fn_82DBA1E0(*(undefined4 *)(param_3 + 0x78),aiStack_a0,1);
      }
      puVar10 = (undefined4 *)(iVar2 + 0x2c);
      puVar9 = (undefined4 *)(iVar12 + -4);
      lVar14 = 2;
      do {
        puVar9[1] = puVar10[1];
        puVar9[2] = puVar10[2];
        puVar9[3] = puVar10[3];
        puVar10 = puVar10 + 4;
        puVar9 = puVar9 + 4;
        *puVar9 = *puVar10;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      lVar11 = lVar11 + -1;
      iVar12 = iVar12 + 0x20;
      param_1 = param_1 + 1;
    } while (-1 < lVar11);
  }
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar10 = *(undefined4 **)(iVar6 + 4);
  if (puVar10 < *(undefined4 **)(iVar6 + 0xc)) {
    *puVar10 = "St3AxisSweep";
    uVar3 = TBLr;
    puVar10[1] = (int)uVar3;
    *(undefined4 **)(iVar6 + 4) = puVar10 + 3;
  }
  (**(code **)(**(int **)(param_3 + 0x58) + 0x2c))
            (*(int **)(param_3 + 0x58),iVar7,iVar4,param_2,&iStack_80,&iStack_90);
  piVar5 = (int *)fn_82CE5410();
  *piVar5 = iVar7;
  piVar5 = (int *)fn_82CE5410();
  *piVar5 = iVar4;
  if ((ulonglong)uStack_8c + (ulonglong)uStack_7c != 0) {
    iVar4 = KeTlsGetValue(lbl_8323B4A0);
    puVar10 = *(undefined4 **)(iVar4 + 4);
    if (puVar10 < *(undefined4 **)(iVar4 + 0xc)) {
      *puVar10 = "StRemoveDup";
      uVar3 = TBLr;
      puVar10[1] = (int)uVar3;
      *(undefined4 **)(iVar4 + 4) = puVar10 + 3;
    }
    fn_83088640(&iStack_80,&iStack_90);
    iVar4 = KeTlsGetValue(lbl_8323B4A0);
    puVar10 = *(undefined4 **)(iVar4 + 4);
    if (puVar10 < *(undefined4 **)(iVar4 + 0xc)) {
      *puVar10 = "StRemoveAgt";
      uVar3 = TBLr;
      puVar10[1] = (int)uVar3;
      *(undefined4 **)(iVar4 + 4) = puVar10 + 3;
    }
    fn_830885D0(*(undefined4 *)(param_3 + 100),iStack_90,uStack_8c);
    uVar1 = uStack_7c;
    uVar13 = (ulonglong)uStack_7c;
    iVar4 = fn_82CE5410();
    cVar8 = (**(code **)(**(int **)(iVar4 + 0x10) + 0x24))
                      (*(int **)(iVar4 + 0x10),
                       (uVar13 + ((ulonglong)uVar1 & 0x3fffffff) * 4 & 0x1ffffff) << 7);
    if (cVar8 == '\0') {
      fn_82D02610(1);
    }
    else {
      iVar4 = KeTlsGetValue(lbl_8323B4A0);
      puVar10 = *(undefined4 **)(iVar4 + 4);
      if (puVar10 < *(undefined4 **)(iVar4 + 0xc)) {
        *puVar10 = "StAddAgt";
        uVar3 = TBLr;
        puVar10[1] = (int)uVar3;
        *(undefined4 **)(iVar4 + 4) = puVar10 + 3;
      }
      fn_83088518(*(undefined4 *)(param_3 + 100),iStack_80,uStack_7c);
    }
  }
  iVar7 = KeTlsGetValue(lbl_8323B4A0);
  iVar4 = iStack_84;
  puVar10 = *(undefined4 **)(iVar7 + 4);
  if (puVar10 < *(undefined4 **)(iVar7 + 0xc)) {
    *puVar10 = &lbl_8202CF7C;
    uVar3 = TBLr;
    puVar10[1] = (int)uVar3;
    *(undefined4 **)(iVar7 + 4) = puVar10 + 3;
  }
  uStack_8c = -(uint)(iStack_90 != iStack_84) & uStack_8c;
  piVar5 = (int *)fn_82CE5410();
  *piVar5 = iVar4;
  iVar4 = fn_82CE5410();
  uStack_8c = 0;
  if ((uStack_88 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),iStack_90,uStack_88 & 0x3fffffff);
  }
  iVar4 = iStack_74;
  iStack_90 = 0;
  uStack_88 = 0x80000000;
  uStack_7c = -(uint)(iStack_80 != iStack_74) & uStack_7c;
  piVar5 = (int *)fn_82CE5410();
  *piVar5 = iVar4;
  iVar4 = fn_82CE5410();
  uStack_7c = 0;
  if ((uStack_78 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),iStack_80,uStack_78 & 0x3fffffff,8);
  }
  return;
}

