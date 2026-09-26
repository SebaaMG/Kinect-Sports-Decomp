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
extern int fn_82DBA1E0();
extern int fn_83088640();
extern int fn_83096038();
extern int fn_83096040();
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_8323B4A0;


void fn_82DB4D88(undefined8 param_1,int *param_2,ulonglong param_3,int param_4,int param_5,
                  int param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int aiStack_80 [32];
  
  if ((int)param_3 != 0) {
    iVar10 = KeTlsGetValue(lbl_8323B4A0);
    puVar4 = *(undefined4 **)(iVar10 + 4);
    if (puVar4 < *(undefined4 **)(iVar10 + 0xc)) {
      *puVar4 = "LtBroadPhase";
      puVar4[3] = "StGatherAabbs";
      uVar9 = TBLr;
      puVar4[1] = (int)uVar9;
      *(undefined4 **)(iVar10 + 4) = puVar4 + 4;
    }
    piVar11 = (int *)fn_82CE5410();
    iVar10 = *piVar11;
    *piVar11 = ((int)((param_3 & 0xffffffff) << 5) + 0x7fU & 0xffffff80) + iVar10;
    piVar11 = (int *)fn_82CE5410();
    iVar5 = *piVar11;
    lVar14 = param_3 - 1;
    *piVar11 = ((int)((param_3 & 0xffffffff) << 2) + 0x7fU & 0xffffff80) + iVar5;
    if (-1 < lVar14) {
      piVar11 = (int *)(iVar10 + -8);
      iVar12 = iVar5 - (int)param_2;
      do {
        iVar6 = *param_2;
        if (3 < (int)lVar14) {
          dataCacheBlockTouch((ulonglong)(uint)param_2[4] + 0x10);
        }
        *(int *)(iVar12 + (int)param_2) = iVar6 + 0x24;
        aiStack_80[0] = iVar6;
        if (*(uint *)(iVar6 + 0x40) < *(uint *)(iVar6 + 0x30)) {
          fn_82DBA1E0(*(undefined4 *)(param_4 + 0x78),aiStack_80,1);
        }
        bVar1 = *(byte *)(iVar6 + 0x3f);
        lVar14 = lVar14 + -1;
        param_2 = param_2 + 1;
        bVar2 = *(byte *)(iVar6 + 0x3e);
        bVar3 = *(byte *)(iVar6 + 0x3c);
        iVar7 = *(int *)(iVar6 + 0x38);
        uVar13 = (uint)bVar1;
        iVar8 = *(int *)(iVar6 + 0x30);
        piVar11[3] = *(int *)(iVar6 + 0x34) - ((uint)*(byte *)(iVar6 + 0x3d) << (bVar1 & 0x3f));
        piVar11[4] = iVar7 - ((uint)bVar2 << (bVar1 & 0x3f));
        piVar11[2] = iVar8 - ((uint)bVar3 << (uVar13 & 0x3f));
        bVar1 = *(byte *)(iVar6 + 0x4c);
        bVar2 = *(byte *)(iVar6 + 0x4e);
        iVar7 = *(int *)(iVar6 + 0x40);
        iVar8 = *(int *)(iVar6 + 0x48);
        piVar11[7] = ((uint)*(byte *)(iVar6 + 0x4d) << (uVar13 & 0x3f)) + *(int *)(iVar6 + 0x44);
        piVar11[6] = ((uint)bVar1 << (uVar13 & 0x3f)) + iVar7;
        piVar11 = piVar11 + 8;
        *piVar11 = ((uint)bVar2 << (uVar13 & 0x3f)) + iVar8;
      } while (-1 < lVar14);
    }
    iVar12 = KeTlsGetValue(lbl_8323B4A0);
    puVar4 = *(undefined4 **)(iVar12 + 4);
    if (puVar4 < *(undefined4 **)(iVar12 + 0xc)) {
      *puVar4 = "St3AxisSweep";
      uVar9 = TBLr;
      puVar4[1] = (int)uVar9;
      *(undefined4 **)(iVar12 + 4) = puVar4 + 3;
    }
    if (*(int *)(*(int *)(param_4 + 0x58) + 0x10) != 0) {
      fn_83096038();
    }
    (**(code **)(**(int **)(param_4 + 0x58) + 0x2c))
              (*(int **)(param_4 + 0x58),iVar5,iVar10,param_3,param_5,param_6);
    if (*(int *)(*(int *)(param_4 + 0x58) + 0x10) != 0) {
      fn_83096040();
    }
    piVar11 = (int *)fn_82CE5410();
    *piVar11 = iVar5;
    piVar11 = (int *)fn_82CE5410();
    *piVar11 = iVar10;
    if ((ulonglong)*(uint *)(param_5 + 4) + (ulonglong)*(uint *)(param_6 + 4) != 0) {
      iVar10 = KeTlsGetValue(lbl_8323B4A0);
      puVar4 = *(undefined4 **)(iVar10 + 4);
      if (puVar4 < *(undefined4 **)(iVar10 + 0xc)) {
        *puVar4 = "StRemoveDup";
        uVar9 = TBLr;
        puVar4[1] = (int)uVar9;
        *(undefined4 **)(iVar10 + 4) = puVar4 + 3;
      }
      fn_83088640(param_5,param_6);
    }
    iVar10 = KeTlsGetValue(lbl_8323B4A0);
    puVar4 = *(undefined4 **)(iVar10 + 4);
    if (puVar4 < *(undefined4 **)(iVar10 + 0xc)) {
      *puVar4 = &lbl_8202CF7C;
      uVar9 = TBLr;
      puVar4[1] = (int)uVar9;
      *(undefined4 **)(iVar10 + 4) = puVar4 + 3;
    }
  }
  return;
}

