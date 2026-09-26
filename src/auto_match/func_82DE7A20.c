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
extern unsigned int *auStack_a4;
extern unsigned int fStack_b8;
extern unsigned int fStack_cc;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D8BD00();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;


void fn_82DE7A20(undefined8 param_1,ulonglong param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  double dVar12;
  double extraout_f1;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float afStack_e0 [5];
  float fStack_cc;
  float fStack_b8;
  undefined1 *puStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  undefined1 auStack_a4 [164];
  
  piVar3 = (int *)fn_82F6A548();
  puStack_b0 = auStack_a4;
  uStack_ac = 0;
  uStack_a8 = 0x80000010;
  lVar5 = 0;
  uVar10 = (ulonglong)(uint)piVar3[1] - 1;
  dVar14 = extraout_f1;
  if (-1 < (longlong)uVar10) {
    lVar9 = (uVar10 & 0x3fffffff) << 2;
    do {
      iVar4 = *piVar3;
      iVar2 = *(int *)((int)lVar9 + iVar4);
      uVar7 = *(uint *)(iVar2 + 0x14);
      if ((ulonglong)uVar7 == (param_2 & 0xffffffff)) {
        uVar7 = *(uint *)(iVar2 + 0x18);
LAB_82de7a9c:
        if (uVar7 != 0) {
          iVar8 = piVar3[1] + -1;
          piVar3[1] = iVar8;
          if (iVar8 != (int)uVar10) {
            *(undefined4 *)((int)lVar9 + iVar4) = *(undefined4 *)(iVar8 * 4 + iVar4);
          }
          iVar4 = fn_82CE5410();
          if (uStack_ac == (uStack_a8 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar4 + 0x10),&puStack_b0,4);
          }
          *(int *)(puStack_b0 + uStack_ac * 4) = iVar2;
          lVar5 = (ulonglong)uStack_ac + 1;
          uStack_ac = (uint)lVar5;
        }
      }
      else if ((ulonglong)*(uint *)(iVar2 + 0x18) == (param_2 & 0xffffffff)) goto LAB_82de7a9c;
      uVar10 = uVar10 - 1;
      lVar9 = lVar9 + -4;
    } while (-1 < (longlong)uVar10);
  }
  uVar10 = lVar5 - 1;
  dVar18 = (double)lbl_821AAD20;
  dVar13 = dVar18;
  dVar19 = dVar18;
  if (-1 < (longlong)uVar10) {
    lVar5 = (uVar10 & 0x3fffffff) << 2;
    dVar16 = dVar18;
    do {
      uVar6 = (ulonglong)*(uint *)(*(int *)(puStack_b0 + (int)lVar5) + 0x14);
      if (uVar6 == (param_2 & 0xffffffff)) {
        uVar6 = (ulonglong)*(uint *)(*(int *)(puStack_b0 + (int)lVar5) + 0x18);
      }
      dVar13 = (double)((int (*)())fn_82DE7A20)(dVar14,piVar3,uVar6);
      uVar10 = uVar10 - 1;
      dVar19 = (double)(float)(dVar13 + dVar19);
      lVar5 = lVar5 + -4;
      if ((float)(dVar13 - dVar16) < 0.0) {
        dVar13 = dVar16;
      }
      dVar16 = dVar13;
    } while (-1 < (longlong)uVar10);
  }
  cVar1 = *(char *)((int)param_2 + 0xe8);
  if ((cVar1 == '\x05') || (bVar11 = false, cVar1 == '\x04')) {
    bVar11 = true;
  }
  if (!bVar11) {
    (**(code **)(*(int *)((int)param_2 + 0xe0) + 0x14))(param_2 + 0xe0,afStack_e0);
    dVar12 = (double)fStack_cc;
    bVar11 = dVar19 != dVar18;
    dVar16 = (double)fStack_b8;
    dVar15 = (double)afStack_e0[0];
    dVar17 = dVar12;
    if ((float)(dVar12 - dVar16) < 0.0) {
      dVar17 = dVar16;
    }
    dVar18 = dVar15;
    if ((float)(dVar15 - dVar17) < 0.0) {
      dVar18 = dVar17;
    }
    if (bVar11) {
      dVar17 = (double)(float)(dVar18 * dVar14);
      dVar14 = dVar17;
      if ((float)(dVar19 - dVar17) < 0.0) {
        dVar14 = dVar19;
      }
      if ((float)(dVar14 - dVar13) < 0.0) {
        dVar14 = dVar13;
      }
      if ((float)(dVar15 - dVar14) < 0.0) {
        dVar15 = dVar14;
      }
      afStack_e0[0] = (float)dVar15;
      if ((float)(dVar12 - dVar14) < 0.0) {
        dVar12 = dVar14;
      }
      fStack_cc = (float)dVar12;
      if ((float)(dVar16 - dVar14) < 0.0) {
        dVar16 = dVar14;
      }
      fStack_b8 = (float)dVar16;
      fn_82D8BD00(param_2,afStack_e0);
      dVar13 = (double)(float)(dVar18 + dVar19);
      if ((float)(dVar17 - (double)(float)(dVar18 + dVar19)) < 0.0) {
        dVar13 = dVar17;
      }
      if ((float)(dVar13 - dVar14) < 0.0) {
        dVar13 = dVar14;
      }
      iVar4 = fn_82CE5410();
      uStack_ac = 0;
      if ((uStack_a8 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
                  (*(int **)(iVar4 + 0x10),puStack_b0,uStack_a8 & 0x3fffffff,4);
      }
      fn_82F6A594(dVar13);
      return;
    }
  }
  iVar4 = fn_82CE5410();
  uStack_ac = 0;
  if ((uStack_a8 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),puStack_b0,uStack_a8 & 0x3fffffff,4);
  }
  fn_82F6A594(dVar18);
  return;
}

