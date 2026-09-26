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
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_f0;
extern int fn_825404D0();
extern int fn_82555EA8();
extern int fn_82A1DD38();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8329EAD0;
extern unsigned int lbl_8329EAE0;
extern unsigned int lbl_8329EAF0;
extern unsigned int lbl_8329EB00;
extern unsigned int uRam8329eae4;
extern unsigned int uRam8329eae8;
extern unsigned int uRam8329eaec;
extern unsigned int uRam8329eaf4;
extern unsigned int uRam8329eaf8;
extern unsigned int uRam8329eafc;
extern unsigned int uRam8329eb04;
extern unsigned int uRam8329eb08;
extern unsigned int uRam8329eb0c;
extern unsigned int uStack_108;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_134;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_148;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_825B5AD8(int param_1,undefined4 *param_2,int param_3,undefined8 param_4,int param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 in_r0;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  longlong lVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [8];
  undefined4 uStack_108;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int *piStack_cc;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [144];
  
  fVar8 = lbl_821CC160;
  iVar17 = (int)in_r0;
  iVar2 = param_2[1];
  if (((((iVar2 != 8) && (iVar2 != 0x80)) && (iVar2 != 0x40)) &&
      ((iVar2 != 1 || (param_2[0x11] == 0)))) || (*(float *)(param_5 + 0xc) != lbl_821CC160)) {
    puVar20 = &uStack_c8;
    puVar19 = (undefined8 *)(param_3 + -8);
    lVar24 = 8;
    do {
      puVar19 = puVar19 + 1;
      puVar20 = puVar20 + 1;
      *puVar20 = *puVar19;
      uVar16 = uRam8329eb0c;
      uVar15 = uRam8329eb08;
      uVar14 = uRam8329eb04;
      uVar13 = lbl_8329EB00;
      uVar12 = uRam8329eafc;
      uVar11 = uRam8329eaf8;
      uVar10 = uRam8329eaf4;
      uVar9 = lbl_8329EAF0;
      uVar31 = uRam8329eaec;
      uVar30 = uRam8329eae8;
      uVar28 = uRam8329eae4;
      uVar26 = lbl_8329EAE0;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    if ((param_2[0x10] == 0) &&
       ((*(int *)(*(int *)(param_1 + 4) + 0x94) == 0 ||
        (*(int *)(*(int *)(param_1 + 4) + 0x90) == 0)))) {
      bVar7 = false;
    }
    else {
      puVar5 = (undefined4 *)((int)&lbl_8329EAD0 + iVar17 & 0xfffffff0);
      uVar25 = puVar5[1];
      uVar27 = puVar5[2];
      uVar29 = puVar5[3];
      bVar7 = true;
      puVar6 = (undefined4 *)((uint)(auStack_c0 + iVar17) & 0xfffffff0);
      *puVar6 = *puVar5;
      puVar6[1] = uVar25;
      puVar6[2] = uVar27;
      puVar6[3] = uVar29;
      puVar5 = (undefined4 *)((uint)(auStack_b0 + iVar17) & 0xfffffff0);
      *puVar5 = uVar26;
      puVar5[1] = uVar28;
      puVar5[2] = uVar30;
      puVar5[3] = uVar31;
      puVar5 = (undefined4 *)((uint)(auStack_a0 + iVar17) & 0xfffffff0);
      *puVar5 = uVar9;
      puVar5[1] = uVar10;
      puVar5[2] = uVar11;
      puVar5[3] = uVar12;
      puVar5 = (undefined4 *)((uint)(auStack_90 + iVar17) & 0xfffffff0);
      *puVar5 = uVar13;
      puVar5[1] = uVar14;
      puVar5[2] = uVar15;
      puVar5[3] = uVar16;
    }
    if (((iVar2 == 1) && ((float)param_2[0xd] != fVar8)) && (*(int *)(param_1 + 8) != 0)) {
      puVar20 = &uStack_148;
      lVar24 = 10;
      puVar19 = (undefined8 *)(param_2 + -2);
      uStack_108 = *(undefined4 *)((param_2[2] + 0x20) * 4 + *(int *)(param_1 + 4));
      do {
        puVar19 = puVar19 + 1;
        puVar20 = puVar20 + 1;
        *puVar20 = *puVar19;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      (**(code **)(**(int **)(param_1 + 8) + 4))
                (*(int **)(param_1 + 8),&puStack_140,auStack_c0,param_4,param_5,param_6,param_7);
    }
    else {
      piVar3 = (int *)param_2[0xe];
      iVar2 = param_2[2];
      if (piVar3 == (int *)0x0) {
        piVar3 = *(int **)((iVar2 + 0x20) * 4 + *(int *)(param_1 + 4));
      }
      iVar18 = *(int *)(param_1 + 4);
      if ((*(int *)(iVar18 + 0x1d8) != 0) && (piVar3 != (int *)0x0)) {
        if (bVar7) {
          iVar4 = piVar3[0x13];
        }
        else {
          iVar4 = *piVar3;
        }
        if (iVar4 != 0) {
          uVar1 = *(ushort *)(piVar3 + 2);
          uVar21 = 0;
          if (*(int *)(iVar18 + 0x1d8) != 0) {
            iVar22 = 0;
            do {
              if (*(int *)(iVar22 + *(int *)(iVar18 + 0x1dc)) != 0) {
                piVar23 = *(int **)((iVar2 + 0x20) * 4 + *(int *)(iVar22 + *(int *)(iVar18 + 0x1dc))
                                   );
                if (bVar7) {
                  iVar17 = piVar23[0x13];
                }
                else {
                  iVar17 = *piVar23;
                }
                if (iVar17 != 0) {
                  fn_82A1DD38(iVar17,iVar4,(ulonglong)uVar1 << 6);
                }
                piVar23 = *(int **)(*(int *)(iVar22 + *(int *)(iVar18 + 0x1dc)) + 0x1ac);
                (**(code **)(*piVar23 + 4))
                          (piVar23,param_2,auStack_c0,param_4,param_5,param_6,param_7);
              }
              iVar17 = (int)in_r0;
              uVar21 = uVar21 + 1;
              iVar22 = iVar22 + 4;
            } while (uVar21 < *(uint *)(iVar18 + 0x1d8));
          }
        }
      }
      piVar23 = (int *)0x0;
      if (piVar3 != (int *)0x0) {
        if ((param_2[0xe] == 0) || (param_2[0xf] == 0)) {
          piVar23 = piVar3 + 0x1d;
          if (!bVar7) {
            piVar23 = piVar3 + 3;
          }
        }
        else {
          piVar23 = piVar3 + 0x15;
          if (!bVar7) {
            piVar23 = piVar3 + 0xb;
          }
        }
      }
      if (param_2[8] == 0) {
        fn_82555EA8((ulonglong)*(uint *)(param_1 + 4) + 0x98,param_2);
      }
      iVar18 = (**(code **)(**(int **)(param_1 + 4) + 0x3c))();
      puStack_140 = auStack_c0;
      iVar2 = *(int *)(param_1 + 4);
      uStack_13c = (undefined4)param_4;
      uStack_130 = param_2[10] & 1;
      uStack_138 = (undefined4)param_6;
      uStack_134 = (undefined4)param_7;
      if ((param_2[10] & 2) == 0) {
        param_5 = iVar2 + 0x20;
      }
      iVar4 = *(int *)(iVar2 + 0x60);
      puVar5 = (undefined4 *)(iVar17 + param_5 & 0xfffffff0);
      uVar26 = puVar5[1];
      uVar28 = puVar5[2];
      uVar30 = puVar5[3];
      puVar6 = (undefined4 *)((uint)(auStack_120 + iVar17) & 0xfffffff0);
      *puVar6 = *puVar5;
      puVar6[1] = uVar26;
      puVar6[2] = uVar28;
      puVar6[3] = uVar30;
      if ((iVar4 != 0) || (uStack_12c = 0, (param_2[10] & 2) != 0)) {
        uStack_12c = 1;
      }
      if ((param_2[10] & 4) == 0) {
        uStack_e0 = *(undefined4 *)(iVar2 + 100);
      }
      else {
        uStack_e0 = param_2[9];
      }
      iVar4 = *(int *)(param_1 + 4);
      uStack_d0 = *(undefined4 *)(iVar18 + 0x20);
      puVar5 = (undefined4 *)(iVar17 + iVar2 + 0x20 & 0xfffffff0);
      uVar28 = puVar5[1];
      uVar30 = puVar5[2];
      uVar31 = puVar5[3];
      uVar26 = *param_2;
      puVar6 = (undefined4 *)((uint)(auStack_110 + iVar17) & 0xfffffff0);
      *puVar6 = *puVar5;
      puVar6[1] = uVar28;
      puVar6[2] = uVar30;
      puVar6[3] = uVar31;
      uStack_dc = *(undefined4 *)(iVar4 + 0x19c);
      uStack_d8 = *(undefined4 *)(iVar4 + 0x1a0);
      puVar5 = (undefined4 *)(iVar2 + 0x30U & 0xfffffff0);
      uVar28 = puVar5[1];
      uVar30 = puVar5[2];
      uVar31 = puVar5[3];
      uStack_d4 = *(undefined4 *)(iVar4 + 0x1a4);
      puVar6 = (undefined4 *)((uint)(auStack_100 + iVar17) & 0xfffffff0);
      *puVar6 = *puVar5;
      puVar6[1] = uVar28;
      puVar6[2] = uVar30;
      puVar6[3] = uVar31;
      puVar5 = (undefined4 *)(iVar2 + 0x50U & 0xfffffff0);
      uVar28 = puVar5[1];
      uVar30 = puVar5[2];
      uVar31 = puVar5[3];
      puVar6 = (undefined4 *)((uint)(auStack_f0 + iVar17) & 0xfffffff0);
      *puVar6 = *puVar5;
      puVar6[1] = uVar28;
      puVar6[2] = uVar30;
      puVar6[3] = uVar31;
      piStack_cc = piVar23;
      fn_825404D0(uVar26,iVar18,param_2,&puStack_140);
    }
  }
  return;
}

