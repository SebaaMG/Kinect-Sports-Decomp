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
extern unsigned int *auStack_e0;
extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82D899D8();
extern int fn_82DA6530();
extern int fn_82DA6A58();
extern int fn_82DA6BA8();
extern int fn_82DACA10();
extern int fn_82DAD7D0();
extern int fn_82DAFAD0();
extern int fn_82DB0088();
extern int fn_83080B30();
extern int fn_83088518();
extern unsigned int iStack_a4;
extern unsigned int iStack_b0;
extern unsigned int iStack_b4;
extern unsigned int iStack_c0;
extern unsigned int iStack_c4;
extern unsigned int iStack_d0;
extern float lbl_82002C5C;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d6;
extern unsigned int uStack_d8;


void fn_82D856F0(int param_1,int *param_2,ulonglong param_3,int param_4)

{
  int *piVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  ushort uVar10;
  ushort uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_e0 [4];
  int *piStack_dc;
  undefined2 uStack_d8;
  undefined1 uStack_d6;
  struct { int first; uint second; } stack_pair_d0;

  uint uStack_c8;
  int iStack_c4;
  struct { int first; uint second; } stack_pair_c0;

  uint uStack_b8;
  int iStack_b4;
  int iStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  int iStack_a4;

  uVar9 = (uint)param_3;
  if (uVar9 != 0) {
    if (*(int *)(param_1 + 0x94) == 0) {
      iVar4 = KeTlsGetValue(lbl_8323B4A0);
      puVar6 = *(undefined4 **)(iVar4 + 4);
      if (puVar6 < *(undefined4 **)(iVar4 + 0xc)) {
        *puVar6 = "LtAddEntities";
        puVar6[3] = "Stinit";
        uVar2 = TBLr;
        puVar6[1] = (int)uVar2;
        *(undefined4 **)(iVar4 + 4) = puVar6 + 4;
      }
      iStack_b0 = 0;
      uStack_ac = 0;
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
      uStack_a8 = 0x80000000;
      piVar5 = (int *)fn_82CE5410();
      uVar14 = uVar9 | 0x80000000;
      iStack_b0 = *piVar5;
      *piVar5 = ((int)((param_3 & 0xffffffff) << 2) + 0x7fU & 0xffffff80) + iStack_b0;
      stack_pair_d0.first = 0;
      stack_pair_d0.second = 0;
      uStack_c8 = 0x80000000;
      uStack_a8 = uVar14;
      iStack_a4 = iStack_b0;
      piVar5 = (int *)fn_82CE5410();
      stack_pair_d0.first = *piVar5;
      bVar3 = false;
      *piVar5 = ((int)((param_3 & 0xffffffff) << 5) + 0x7fU & 0xffffff80) + stack_pair_d0.first;
      uStack_c8 = uVar14;
      iStack_c4 = stack_pair_d0.first;
      if (*(char *)(param_1 + 200) == '\0') {
        puVar6 = (undefined4 *)**(int **)(param_1 + 0x28);
        uVar14 = puVar6[0x13];
        iVar4 = fn_82CE5410();
        iVar8 = (int)(uVar14 + param_3);
        if ((int)(puVar6[0x14] & 0x3fffffff) < iVar8) {
          lVar12 = ((ulonglong)(uint)puVar6[0x14] & 0x3fffffff) << 1;
          if ((int)lVar12 <= iVar8) {
            lVar12 = uVar14 + param_3;
          }
          fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),puVar6 + 0x12,lVar12,4);
        }
      }
      else {
        iVar4 = fn_82CE5410();
        iVar4 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x6c);
        *(undefined2 *)(iVar4 + 4) = 0x6c;
        puVar6 = (undefined4 *)fn_82DB0088(iVar4,param_1);
        *(byte *)((int)puVar6 + 0x25) = *(byte *)((int)puVar6 + 0x25) & 0x3f | 0x40;
        if (param_4 == 1) {
          *(short *)(puVar6 + 8) = (short)*(undefined4 *)(param_1 + 0x2c);
          *(byte *)((int)puVar6 + 0x26) = *(byte *)((int)puVar6 + 0x26) & 0xf | 0x50;
        }
        else {
          *(short *)(puVar6 + 8) = (short)*(undefined4 *)(param_1 + 0x38);
          *(byte *)((int)puVar6 + 0x26) = *(byte *)((int)puVar6 + 0x26) & 0xf;
        }
      }
      dVar15 = (double)(*(float *)(*(int *)(param_1 + 0x78) + 8) * lbl_82002C5C);
      if (0 < (int)uVar9) {
        dVar16 = (double)lbl_821AAD20;
        uVar13 = param_3;
        piVar5 = param_2;
        do {
          piVar1 = (int *)*piVar5;
          iVar4 = *(int *)(param_1 + 0x108) + 1;
          *(int *)(param_1 + 0x108) = iVar4;
          piVar1[0x35] = iVar4;
          fn_82CE4040(piVar1);
          if (piVar1[6] == 0) {
            iVar4 = (**(code **)(*piVar1 + 0x10))(piVar1);
            piVar1[6] = iVar4;
          }
          fn_83080B30(dVar16,dVar16);
          piVar1[2] = param_1;
          *(undefined2 *)((int)piVar1 + 0xea) = 0;
          *(undefined2 *)(piVar1 + 0x3b) = 0;
          uVar10 = (ushort)*(byte *)(param_1 + 0x306);
          uVar11 = (ushort)*(byte *)(param_1 + 0x305);
          if ((*(byte *)(param_1 + 0x307) & 3) < (*(byte *)((int)piVar1 + 0xe9) & 3)) {
            uVar11 = ~uVar11;
          }
          if (*(byte *)(param_1 + 0x307) < *(byte *)((int)piVar1 + 0xe9)) {
            uVar10 = ~uVar10;
          }
          *(ushort *)(piVar1 + 0x3b) = *(ushort *)(piVar1 + 0x3b) & 0x3fff | uVar10 << 0xe;
          *(ushort *)((int)piVar1 + 0xea) = *(ushort *)((int)piVar1 + 0xea) & 0x3fff | uVar11 << 0xe
          ;
          if (*(char *)(piVar1 + 0x3a) == '\x05') {
            puVar7 = *(undefined4 **)(param_1 + 0x20);
          }
          else {
            bVar3 = true;
            puVar7 = puVar6;
          }
          fn_82DAFAD0(puVar7,piVar1);
          iVar4 = piVar1[4];
          piVar1[0xc] = 1;
          piVar1[0x10] = 0;
          if (iVar4 != 0) {
            stack_pair_d0.second = stack_pair_d0.second + 1;
            (**(code **)(*(int *)piVar1[4] + 0x1c))(dVar15,(int *)piVar1[4],piVar1[6]);
            *(int **)(uStack_ac * 4 + iStack_b0) = piVar1 + 9;
            uStack_ac = uStack_ac + 1;
            fn_82D899D8(piVar1,param_1,iVar4);
          }
          uVar13 = uVar13 - 1;
          piVar5 = piVar5 + 1;
        } while (uVar13 != 0);
      }
      if (*(char *)(param_1 + 200) != '\0') {
        if (bVar3) {
          piVar5 = (int *)(param_1 + 0x28);
          *(char *)(puVar6 + 9) = (char)*(undefined4 *)(*(int *)puVar6[0x12] + 0xd4);
          if (param_4 != 1) {
            piVar5 = (int *)(param_1 + 0x34);
          }
          iVar4 = fn_82CE5410();
          if (piVar5[1] == (piVar5[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar4 + 0x10),piVar5,4);
          }
          *(undefined4 **)(piVar5[1] * 4 + *piVar5) = puVar6;
          piVar5[1] = piVar5[1] + 1;
        }
        else {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
      stack_pair_c0.first = 0;
      stack_pair_c0.second = 0;
      uStack_b8 = 0x80000000;
      uVar14 = *(uint *)(param_1 + 0x338);
      piVar5 = (int *)fn_82CE5410();
      uStack_b8 = uVar14 | 0x80000000;
      stack_pair_c0.first = *piVar5;
      *piVar5 = (uVar14 * 8 + 0x7f & 0xffffff80) + stack_pair_c0.first;
      iStack_b4 = stack_pair_c0.first;
      iVar4 = KeTlsGetValue(lbl_8323B4A0);
      puVar6 = *(undefined4 **)(iVar4 + 4);
      if (puVar6 < *(undefined4 **)(iVar4 + 0xc)) {
        *puVar6 = "StBroadphase";
        uVar2 = TBLr;
        puVar6[1] = (int)uVar2;
        *(undefined4 **)(iVar4 + 4) = puVar6 + 3;
      }
      (**(code **)(**(int **)(param_1 + 0x58) + 0x18))
                (*(int **)(param_1 + 0x58),&iStack_b0,&stack_pair_d0.first,&stack_pair_c0.first);
      iVar4 = KeTlsGetValue(lbl_8323B4A0);
      puVar6 = *(undefined4 **)(iVar4 + 4);
      if (puVar6 < *(undefined4 **)(iVar4 + 0xc)) {
        *puVar6 = "StCreateAgents";
        uVar2 = TBLr;
        puVar6[1] = (int)uVar2;
        *(undefined4 **)(iVar4 + 4) = puVar6 + 3;
      }
      fn_83088518(*(undefined4 *)(param_1 + 100),stack_pair_c0.first,stack_pair_c0.second);
      iVar4 = KeTlsGetValue(lbl_8323B4A0);
      puVar6 = *(undefined4 **)(iVar4 + 4);
      if (puVar6 < *(undefined4 **)(iVar4 + 0xc)) {
        *puVar6 = "StAddedCb";
        uVar2 = TBLr;
        puVar6[1] = (int)uVar2;
        *(undefined4 **)(iVar4 + 4) = puVar6 + 3;
      }
      if (0 < (int)uVar9) {
        param_2 = param_2 + -1;
        do {
          param_2 = param_2 + 1;
          iVar4 = *param_2;
          fn_82DAD7D0(param_1,iVar4);
          fn_82DACA10(iVar4);
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
      lVar12 = (ulonglong)*(uint *)(param_1 + 0x94) - 1;
      *(int *)(param_1 + 0x94) = (int)lVar12;
      if ((lVar12 == 0) && (*(char *)(param_1 + 0x9c) == '\0')) {
        if (*(int *)(param_1 + 0x8c) != 0) {
          *(undefined4 *)(param_1 + 0x8c) = 0;
          fn_82DA6BA8(*(undefined4 *)(param_1 + 0x88));
        }
        if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0x90) != 0)) {
          *(undefined4 *)(param_1 + 0x90) = 0;
          fn_82DA6A58(*(undefined4 *)(param_1 + 0x88));
        }
      }
      iVar8 = KeTlsGetValue(lbl_8323B4A0);
      iVar4 = iStack_b4;
      puVar6 = *(undefined4 **)(iVar8 + 4);
      if (puVar6 < *(undefined4 **)(iVar8 + 0xc)) {
        *puVar6 = &lbl_8202CF7C;
        uVar2 = TBLr;
        puVar6[1] = (int)uVar2;
        *(undefined4 **)(iVar8 + 4) = puVar6 + 3;
      }
      stack_pair_c0.second = -(uint)(stack_pair_c0.first != iStack_b4) & stack_pair_c0.second;
      piVar5 = (int *)fn_82CE5410();
      *piVar5 = iVar4;
      iVar4 = fn_82CE5410();
      stack_pair_c0.second = 0;
      if ((uStack_b8 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
                  (*(int **)(iVar4 + 0x10),stack_pair_c0.first,uStack_b8 & 0x3fffffff);
      }
      iVar4 = iStack_c4;
      stack_pair_c0.first = 0;
      uStack_b8 = 0x80000000;
      stack_pair_d0.second = -(uint)(stack_pair_d0.first != iStack_c4) & stack_pair_d0.second;
      piVar5 = (int *)fn_82CE5410();
      *piVar5 = iVar4;
      iVar4 = fn_82CE5410();
      stack_pair_d0.second = 0;
      if ((uStack_c8 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
                  (*(int **)(iVar4 + 0x10),stack_pair_d0.first,uStack_c8 & 0x3fffffff);
      }
      iVar4 = iStack_a4;
      stack_pair_d0.first = 0;
      uStack_c8 = 0x80000000;
      uStack_ac = -(uint)(iStack_b0 != iStack_a4) & uStack_ac;
      piVar5 = (int *)fn_82CE5410();
      *piVar5 = iVar4;
      iVar4 = fn_82CE5410();
      uStack_ac = 0;
      if ((uStack_a8 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
                  (*(int **)(iVar4 + 0x10),iStack_b0,uStack_a8 & 0x3fffffff,4);
      }
    }
    else {
      uStack_d8 = (undefined2)param_3;
      auStack_e0[0] = 6;
      uStack_d6 = (undefined1)param_4;
      piStack_dc = param_2;
      fn_82DA6530(*(undefined4 *)(param_1 + 0x88),auStack_e0);
    }
  }
  return;
}
