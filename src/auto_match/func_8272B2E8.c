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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_82681B80();
extern int fn_82681E98();
extern int fn_82693A98();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_8269F500();
extern int fn_826BD6B0();
extern int fn_82724A80();
extern int fn_8272AAE8();
extern int fn_8272B1F8();
extern int fn_82760448();
extern int fn_82761DE8();
extern int fn_82765CA0();
extern int fn_82765D90();
extern int fn_8279C508();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int iStack_88;
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int lbl_8200571C;
extern unsigned int lbl_82005728;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_84;


void fn_8272B2E8(undefined8 param_1,int param_2,undefined8 param_3,ulonglong param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int *piVar7;
  longlong lVar4;
  longlong lVar5;
  char cVar11;
  ulonglong uVar6;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 *puStack_e0;
  int *piStack_dc;
  longlong lStack_d8;
  undefined1 auStack_d0 [16];
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined1 auStack_b0 [40];
  int iStack_88;
  undefined1 uStack_84;
  
  piVar7 = (int *)fn_82F6A540();
  if (((param_4 & 0xffffffff) == 0) || (*(char *)param_4 != '\x06')) goto LAB_8272b984;
  lVar4 = fn_82696958(param_4,*(undefined4 *)(param_2 + 0x18));
  auStack_d0[0] = 0;
  lVar5 = fn_8272AAE8(piVar7[0x28]);
  if (lVar5 != 0) {
    iStack_88 = 0;
    lVar4 = lVar4 + 0x10;
    cVar11 = fn_82681B80(lVar4,(ulonglong)*(uint *)(param_2 + 0x18) + 0x78,0xffffffff820113b4,
                               auStack_d0);
    if (cVar11 == '\0') {
      iVar8 = piVar7[0x20];
      if (iVar8 == 0) {
        iVar8 = fn_8269F500(piVar7);
      }
      if (iVar8 == 0) {
        iVar8 = (**(code **)(*piVar7 + 0x58))(piVar7);
        iVar8 = *(int *)(iVar8 + 0x78);
      }
      uVar12 = 0xffffffff82011210;
LAB_8272b958:
      fn_82681E98(piVar7 + 3,uVar12,**(undefined4 **)(iVar8 + 8),param_3);
    }
    else {
      fn_82696D38(&puStack_e0,auStack_d0,*(undefined4 *)(param_2 + 0x18),0xffffffffffffffff,0)
      ;
      uVar6 = fn_82693A98(&puStack_e0);
      if (0x12 < (uVar6 & 0xffffffff)) {
        uVar6 = 0x13;
      }
      fn_826BD6B0(auStack_b0,*puStack_e0,uVar6 + 1);
      uStack_84 = (undefined1)uVar6;
      if ((uVar6 & 0xff) < 0x10) {
        uVar3 = puStack_e0[2];
        puStack_e0[2] = (int)((ulonglong)uVar3 - 1);
        if ((ulonglong)uVar3 - 1 == 0) {
          fn_826944C8(puStack_e0);
        }
        dVar18 = (double)lbl_821AAD20;
        iVar8 = 0;
        dVar13 = dVar18;
        cVar11 = fn_82681B80(lVar4,(ulonglong)*(uint *)(param_2 + 0x18) + 0x78,
                                   0xffffffff8201133c,auStack_d0);
        if (((cVar11 == '\0') ||
            (iVar9 = fn_82696958(auStack_d0,*(undefined4 *)(param_2 + 0x18)), iVar9 == 0)) ||
           (iVar10 = (**(code **)(*(int *)(iVar9 + 0x10) + 8))(iVar9 + 0x10), iVar10 != 0x1a)) {
LAB_8272b5f8:
          iVar8 = piVar7[0x20];
          if (iVar8 == 0) {
            iVar8 = fn_8269F500(piVar7);
          }
          if (iVar8 == 0) {
            iVar8 = (**(code **)(*piVar7 + 0x58))(piVar7);
            iVar8 = *(int *)(iVar8 + 0x78);
          }
          uVar12 = 0xffffffff82011280;
          goto LAB_8272b958;
        }
        iVar9 = *(int *)(iVar9 + 0x30);
        uVar6 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x18) + 0x78) + 0x288)
                                  ,0x7c,0);
        if ((uVar6 & 0xffffffff) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = fn_82765CA0(uVar6,0x1ff8);
        }
        fn_82765D90(uVar6,iVar9,1);
        (**(code **)(**(int **)(iVar9 + 0xc) + 0x14))(&iStack_c0);
        dVar16 = (double)(longlong)((iStack_b4 - iStack_bc) * 0x14);
        lStack_d8 = (longlong)((iStack_b8 - iStack_c0) * 0x14);
        dVar15 = (double)lStack_d8;
        if ((dVar15 == dVar13) || (dVar16 == dVar13)) {
          iVar8 = piVar7[0x20];
          if (iVar8 == 0) {
            iVar8 = fn_8269F500(piVar7);
          }
          if (iVar8 == 0) {
            iVar8 = (**(code **)(*piVar7 + 0x58))(piVar7);
            iVar8 = *(int *)(iVar8 + 0x78);
          }
          fn_82681E98(piVar7 + 3,0xffffffff820112e8,**(undefined4 **)(iVar8 + 8),param_3);
          if ((uVar6 & 0xffffffff) == 0) goto LAB_8272b96c;
        }
        else {
          if ((uVar6 & 0xffffffff) == 0) goto LAB_8272b5f8;
          dVar13 = dVar15;
          dVar17 = dVar16;
          cVar11 = fn_82681B80(lVar4,(ulonglong)*(uint *)(param_2 + 0x18) + 0x78,
                                     0xffffffff8200eaf0,auStack_d0);
          dVar19 = lbl_82005728;
          if (cVar11 != '\0') {
            dVar13 = (double)fn_826972E0(auStack_d0,*(undefined4 *)(param_2 + 0x18));
            dVar13 = (double)(float)(dVar13 * dVar19);
          }
          cVar11 = fn_82681B80(lVar4,(ulonglong)*(uint *)(param_2 + 0x18) + 0x78,
                                     0xffffffff8200eae8,auStack_d0);
          if (cVar11 != '\0') {
            dVar16 = (double)fn_826972E0(auStack_d0,*(undefined4 *)(param_2 + 0x18));
            dVar16 = (double)(float)(dVar16 * dVar19);
          }
          cVar11 = fn_82681B80(lVar4,(ulonglong)*(uint *)(param_2 + 0x18) + 0x78,
                                     0xffffffff82011274,auStack_d0);
          if (cVar11 != '\0') {
            dVar18 = (double)fn_826972E0(auStack_d0,*(undefined4 *)(param_2 + 0x18));
            dVar18 = (double)(float)(dVar18 * dVar19);
          }
          cVar11 = fn_82681B80(lVar4,(ulonglong)*(uint *)(param_2 + 0x18) + 0x78,
                                     0xffffffff82011268,auStack_d0);
          if (cVar11 == '\0') {
            dVar14 = dVar17 - (double)lbl_8200571C;
          }
          else {
            dVar14 = (double)fn_826972E0(auStack_d0,*(undefined4 *)(param_2 + 0x18));
            dVar14 = dVar14 * dVar19;
          }
          dVar19 = (double)(float)dVar14;
          cVar11 = fn_82681B80(lVar4,(ulonglong)*(uint *)(param_2 + 0x18) + 0x78,
                                     0xffffffff82011264,auStack_d0);
          if (cVar11 != '\0') {
            fn_82696D38(&piStack_dc,auStack_d0,*(undefined4 *)(param_2 + 0x18),
                              0xffffffffffffffff,0);
            uVar3 = piStack_dc[2];
            iVar8 = *piStack_dc;
            piStack_dc[2] = (int)((ulonglong)uVar3 - 1);
            if ((ulonglong)uVar3 - 1 == 0) {
              fn_826944C8(piStack_dc);
            }
          }
          iVar9 = fn_8267B890(*(undefined4 *)
                                     (*(int *)(*(int *)(param_2 + 0x18) + 0x78) + 0x288),0x38,0);
          if (iVar9 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = fn_82724A80();
          }
          if (iStack_88 != 0) {
            fn_8267C498();
          }
          iStack_88 = iVar9;
          fn_82760448(uVar6);
          if (*(int *)(iVar9 + 8) != 0) {
            fn_82761DE8();
          }
          *(int *)(iVar9 + 8) = (int)uVar6;
          *(int *)(iStack_88 + 0x10) = (int)dVar18;
          *(int *)(iStack_88 + 0x14) = (int)dVar19;
          *(int *)(iStack_88 + 0x18) = (int)(longlong)dVar13;
          *(int *)(iStack_88 + 0x1c) = (int)(longlong)dVar16;
          if (iVar8 != 0) {
            fn_8272B1F8(piVar7,iVar8,iStack_88);
          }
          fVar1 = (float)(dVar13 / dVar15);
          fVar2 = (float)(dVar16 / dVar17);
          *(float *)(iStack_88 + 0x28) = (float)((double)*(float *)(iStack_88 + 0x28) - dVar18);
          *(float *)(iStack_88 + 0x34) = (float)((double)*(float *)(iStack_88 + 0x34) - dVar19);
          *(float *)(iStack_88 + 0x24) = fVar1 * *(float *)(iStack_88 + 0x24);
          *(float *)(iStack_88 + 0x20) = *(float *)(iStack_88 + 0x20) * fVar1;
          *(float *)(iStack_88 + 0x28) = fVar1 * *(float *)(iStack_88 + 0x28);
          *(float *)(iStack_88 + 0x2c) = fVar2 * *(float *)(iStack_88 + 0x2c);
          *(float *)(iStack_88 + 0x30) = fVar2 * *(float *)(iStack_88 + 0x30);
          *(float *)(iStack_88 + 0x34) = fVar2 * *(float *)(iStack_88 + 0x34);
          fn_8279C508(lVar5,auStack_b0);
          *(byte *)(piVar7[0x28] + 0x13f) = *(byte *)(piVar7[0x28] + 0x13f) | 2;
          iVar8 = (**(code **)(*piVar7 + 0x40))(piVar7);
          if (iVar8 != 0) {
            *(uint *)(iVar8 + 0xb00) = *(uint *)(iVar8 + 0xb00) | 0x400;
          }
        }
        fn_82761DE8(uVar6);
      }
      else {
        iVar8 = piVar7[0x20];
        if (iVar8 == 0) {
          iVar8 = fn_8269F500(piVar7);
        }
        if (iVar8 == 0) {
          iVar8 = (**(code **)(*piVar7 + 0x58))(piVar7);
          iVar8 = *(int *)(iVar8 + 0x78);
        }
        fn_82681E98(piVar7 + 3,0xffffffff82011348,**(undefined4 **)(iVar8 + 8),param_3);
        uVar3 = puStack_e0[2];
        puStack_e0[2] = (int)((ulonglong)uVar3 - 1);
        if ((ulonglong)uVar3 - 1 == 0) {
          fn_826944C8(puStack_e0);
        }
      }
    }
LAB_8272b96c:
    if (iStack_88 != 0) {
      fn_8267C498();
    }
  }
  fn_82696330(auStack_d0);
LAB_8272b984:
  fn_82F6A58C();
  return;
}

