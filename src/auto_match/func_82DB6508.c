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
extern int fn_82D80CB8();
extern int fn_82D80CE8();
extern int fn_82DBA1E0();
extern int fn_83088518();
extern int fn_830885D0();
extern int fn_83088640();
extern int fn_83096038();
extern int fn_83096040();
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


void fn_82DB6508(undefined8 param_1,int *param_2,ulonglong param_3,int param_4,char *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  char cVar13;
  int iVar12;
  uint uVar14;
  int *piVar15;
  longlong lVar16;
  int aiStack_b0 [4];
  int iStack_a0;
  uint uStack_9c;
  uint uStack_98;
  int iStack_94;
  int iStack_90;
  uint uStack_8c;
  uint uStack_88;
  int iStack_84;
  
  if ((int)param_3 != 0) {
    iVar9 = KeTlsGetValue(lbl_8323B4A0);
    puVar4 = *(undefined4 **)(iVar9 + 4);
    if (puVar4 < *(undefined4 **)(iVar9 + 0xc)) {
      *puVar4 = "LtBroadPhase";
      puVar4[3] = "StGatherAabbs";
      uVar8 = TBLr;
      puVar4[1] = (int)uVar8;
      *(undefined4 **)(iVar9 + 4) = puVar4 + 4;
    }
    uVar14 = *(uint *)(param_4 + 0x33c);
    iStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0x80000000;
    piVar10 = (int *)fn_82CE5410();
    uStack_88 = uVar14 | 0x80000000;
    iStack_90 = *piVar10;
    *piVar10 = (uVar14 * 8 + 0x7f & 0xffffff80) + iStack_90;
    iStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0x80000000;
    uVar14 = *(uint *)(param_4 + 0x33c);
    iStack_84 = iStack_90;
    piVar10 = (int *)fn_82CE5410();
    uStack_98 = uVar14 | 0x80000000;
    iStack_a0 = *piVar10;
    *piVar10 = (uVar14 * 8 + 0x7f & 0xffffff80) + iStack_a0;
    iStack_94 = iStack_a0;
    piVar10 = (int *)fn_82CE5410();
    iVar9 = *piVar10;
    *piVar10 = ((int)((param_3 & 0xffffffff) << 5) + 0x7fU & 0xffffff80) + iVar9;
    piVar10 = (int *)fn_82CE5410();
    iVar12 = *piVar10;
    lVar16 = param_3 - 1;
    *piVar10 = ((int)((param_3 & 0xffffffff) << 2) + 0x7fU & 0xffffff80) + iVar12;
    if (-1 < lVar16) {
      piVar10 = (int *)(iVar9 + -8);
      piVar15 = param_2;
      do {
        iVar11 = *piVar15;
        if (3 < (int)lVar16) {
          dataCacheBlockTouch((ulonglong)(uint)piVar15[4] + 0x10);
        }
        *(int *)((iVar12 - (int)param_2) + (int)piVar15) = iVar11 + 0x24;
        aiStack_b0[0] = iVar11;
        if (*(uint *)(iVar11 + 0x40) < *(uint *)(iVar11 + 0x30)) {
          fn_82DBA1E0(*(undefined4 *)(param_4 + 0x78),aiStack_b0,1);
        }
        bVar1 = *(byte *)(iVar11 + 0x3f);
        lVar16 = lVar16 + -1;
        piVar15 = piVar15 + 1;
        bVar2 = *(byte *)(iVar11 + 0x3e);
        bVar3 = *(byte *)(iVar11 + 0x3c);
        iVar5 = *(int *)(iVar11 + 0x38);
        uVar14 = (uint)bVar1;
        iVar6 = *(int *)(iVar11 + 0x30);
        piVar10[3] = *(int *)(iVar11 + 0x34) - ((uint)*(byte *)(iVar11 + 0x3d) << (bVar1 & 0x3f));
        piVar10[4] = iVar5 - ((uint)bVar2 << (bVar1 & 0x3f));
        piVar10[2] = iVar6 - ((uint)bVar3 << (uVar14 & 0x3f));
        bVar1 = *(byte *)(iVar11 + 0x4c);
        bVar2 = *(byte *)(iVar11 + 0x4e);
        iVar5 = *(int *)(iVar11 + 0x40);
        iVar6 = *(int *)(iVar11 + 0x48);
        piVar10[7] = ((uint)*(byte *)(iVar11 + 0x4d) << (uVar14 & 0x3f)) + *(int *)(iVar11 + 0x44);
        piVar10[6] = ((uint)bVar1 << (uVar14 & 0x3f)) + iVar5;
        piVar10 = piVar10 + 8;
        *piVar10 = ((uint)bVar2 << (uVar14 & 0x3f)) + iVar6;
      } while (-1 < lVar16);
    }
    iVar11 = KeTlsGetValue(lbl_8323B4A0);
    puVar4 = *(undefined4 **)(iVar11 + 4);
    if (puVar4 < *(undefined4 **)(iVar11 + 0xc)) {
      *puVar4 = "St3AxisSweep";
      uVar8 = TBLr;
      puVar4[1] = (int)uVar8;
      *(undefined4 **)(iVar11 + 4) = puVar4 + 3;
    }
    if (*(int *)(*(int *)(param_4 + 0x58) + 0x10) != 0) {
      fn_83096038();
    }
    (**(code **)(**(int **)(param_4 + 0x58) + 0x2c))
              (*(int **)(param_4 + 0x58),iVar12,iVar9,param_3,&iStack_90,&iStack_a0);
    if (*(int *)(*(int *)(param_4 + 0x58) + 0x10) != 0) {
      fn_83096040();
    }
    piVar10 = (int *)fn_82CE5410();
    *piVar10 = iVar12;
    piVar10 = (int *)fn_82CE5410();
    *piVar10 = iVar9;
    if ((ulonglong)uStack_9c + (ulonglong)uStack_8c != 0) {
      iVar9 = KeTlsGetValue(lbl_8323B4A0);
      puVar4 = *(undefined4 **)(iVar9 + 4);
      if (puVar4 < *(undefined4 **)(iVar9 + 0xc)) {
        *puVar4 = "StRemoveDup";
        uVar8 = TBLr;
        puVar4[1] = (int)uVar8;
        *(undefined4 **)(iVar9 + 4) = puVar4 + 3;
      }
      fn_83088640(&iStack_90,&iStack_a0);
    }
    if (param_5 != (char *)0x0) {
      iVar9 = KeTlsGetValue(lbl_8323B4A0);
      puVar4 = *(undefined4 **)(iVar9 + 4);
      if (puVar4 < *(undefined4 **)(iVar9 + 0xc)) {
        *puVar4 = "TtWaitForExport";
        uVar8 = TBLr;
        puVar4[1] = (int)uVar8;
        *(undefined4 **)(iVar9 + 4) = puVar4 + 3;
      }
      do {
        if (*param_5 == '\x01') break;
      } while (*param_5 != '\x02');
      iVar9 = KeTlsGetValue(lbl_8323B4A0);
      puVar4 = *(undefined4 **)(iVar9 + 4);
      if (puVar4 < *(undefined4 **)(iVar9 + 0xc)) {
        *puVar4 = &lbl_82132BC4;
        uVar8 = TBLr;
        puVar4[1] = (int)uVar8;
        *(undefined4 **)(iVar9 + 4) = puVar4 + 3;
      }
    }
    if ((ulonglong)uStack_9c + (ulonglong)uStack_8c != 0) {
      iVar9 = KeTlsGetValue(lbl_8323B4A0);
      puVar4 = *(undefined4 **)(iVar9 + 4);
      if (puVar4 < *(undefined4 **)(iVar9 + 0xc)) {
        *puVar4 = "StRemoveAgt";
        uVar8 = TBLr;
        puVar4[1] = (int)uVar8;
        *(undefined4 **)(iVar9 + 4) = puVar4 + 3;
      }
      fn_82D80CB8(param_4,*(undefined4 *)(*param_2 + 0xcc));
      fn_830885D0(*(undefined4 *)(param_4 + 100),iStack_a0,uStack_9c);
      uVar14 = uStack_8c;
      iVar9 = fn_82CE5410();
      cVar13 = (**(code **)(**(int **)(iVar9 + 0x10) + 0x24))(*(int **)(iVar9 + 0x10),uVar14 << 10);
      if (cVar13 == '\0') {
        uVar7 = *(undefined4 *)(*param_2 + 0xcc);
      }
      else {
        iVar9 = KeTlsGetValue(lbl_8323B4A0);
        puVar4 = *(undefined4 **)(iVar9 + 4);
        if (puVar4 < *(undefined4 **)(iVar9 + 0xc)) {
          *puVar4 = "StAddAgt";
          uVar8 = TBLr;
          puVar4[1] = (int)uVar8;
          *(undefined4 **)(iVar9 + 4) = puVar4 + 3;
        }
        fn_83088518(*(undefined4 *)(param_4 + 100),iStack_90,uStack_8c,
                        -(ulonglong)((ulonglong)*(uint *)(param_4 + 0x7c) != 0) &
                        (ulonglong)*(uint *)(param_4 + 0x7c) + 8);
        uVar7 = *(undefined4 *)(*param_2 + 0xcc);
      }
      fn_82D80CE8(param_4,uVar7);
    }
    iVar12 = KeTlsGetValue(lbl_8323B4A0);
    iVar9 = iStack_94;
    puVar4 = *(undefined4 **)(iVar12 + 4);
    if (puVar4 < *(undefined4 **)(iVar12 + 0xc)) {
      *puVar4 = &lbl_8202CF7C;
      uVar8 = TBLr;
      puVar4[1] = (int)uVar8;
      *(undefined4 **)(iVar12 + 4) = puVar4 + 3;
    }
    uStack_9c = -(uint)(iStack_a0 != iStack_94) & uStack_9c;
    piVar10 = (int *)fn_82CE5410();
    *piVar10 = iVar9;
    iVar9 = fn_82CE5410();
    uStack_9c = 0;
    if ((uStack_98 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar9 + 0x10) + 0x10))
                (*(int **)(iVar9 + 0x10),iStack_a0,uStack_98 & 0x3fffffff);
    }
    iVar9 = iStack_84;
    iStack_a0 = 0;
    uStack_98 = 0x80000000;
    uStack_8c = -(uint)(iStack_90 != iStack_84) & uStack_8c;
    piVar10 = (int *)fn_82CE5410();
    *piVar10 = iVar9;
    iVar9 = fn_82CE5410();
    uStack_8c = 0;
    if ((uStack_88 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar9 + 0x10) + 0x10))
                (*(int **)(iVar9 + 0x10),iStack_90,uStack_88 & 0x3fffffff,8);
    }
  }
  return;
}

