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
extern int fn_82F691F0();
extern int fn_82F6A544();
extern int fn_82F6A590();


void fn_82C18678(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float *pfVar19;
  int *piVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  float *pfVar24;
  
  piVar20 = (int *)fn_82F6A544();
  iVar23 = piVar20[0x5a];
  if (piVar20[0x58] != 0) {
    if (piVar20[0x6a] != 0) {
      iVar23 = 6;
    }
    iVar21 = (int)param_3;
    if ((*(ushort *)(*piVar20 + 0x22) == 6) && (iVar23 == 2)) {
      lVar22 = 0;
      pfVar19 = *(float **)piVar20[0x5d];
      pfVar24 = (float *)((undefined4 *)piVar20[0x5d])[1];
      fVar1 = *pfVar19;
      fVar2 = pfVar19[1];
      fVar3 = pfVar19[2];
      fVar4 = pfVar19[3];
      fVar5 = pfVar19[4];
      fVar6 = pfVar19[5];
      fVar7 = *pfVar24;
      fVar8 = pfVar24[1];
      fVar9 = pfVar24[2];
      fVar10 = pfVar24[3];
      fVar11 = pfVar24[4];
      fVar12 = pfVar24[5];
      if (3 < iVar21) {
        do {
          pfVar19 = (float *)param_2;
          fVar13 = pfVar19[4];
          fVar14 = pfVar19[5];
          fVar15 = pfVar19[3];
          fVar16 = pfVar19[2];
          fVar17 = pfVar19[1];
          fVar18 = *pfVar19;
          pfVar24 = (float *)param_4;
          *pfVar24 = fVar18 * fVar1 +
                     fVar17 * fVar2 +
                     fVar16 * fVar3 + fVar15 * fVar4 + fVar14 * fVar6 + fVar13 * fVar5;
          pfVar24[1] = fVar18 * fVar7 +
                       fVar17 * fVar8 +
                       fVar16 * fVar9 + fVar15 * fVar10 + fVar14 * fVar12 + fVar13 * fVar11;
          fVar13 = pfVar19[0xb];
          fVar14 = pfVar19[9];
          fVar15 = pfVar19[8];
          fVar16 = pfVar19[10];
          fVar17 = pfVar19[6];
          fVar18 = pfVar19[7];
          pfVar24[2] = fVar17 * fVar1 +
                       fVar18 * fVar2 +
                       fVar15 * fVar3 + fVar14 * fVar4 + fVar13 * fVar6 + fVar16 * fVar5;
          pfVar24[3] = fVar17 * fVar7 +
                       fVar18 * fVar8 +
                       fVar15 * fVar9 + fVar14 * fVar10 + fVar13 * fVar12 + fVar16 * fVar11;
          fVar13 = pfVar19[0x11];
          fVar14 = pfVar19[0xf];
          fVar15 = pfVar19[0xe];
          fVar16 = pfVar19[0x10];
          fVar17 = pfVar19[0xc];
          fVar18 = pfVar19[0xd];
          pfVar24[4] = fVar17 * fVar1 +
                       fVar18 * fVar2 +
                       fVar15 * fVar3 + fVar14 * fVar4 + fVar13 * fVar6 + fVar16 * fVar5;
          pfVar24[5] = fVar17 * fVar7 +
                       fVar18 * fVar8 +
                       fVar15 * fVar9 + fVar14 * fVar10 + fVar13 * fVar12 + fVar16 * fVar11;
          fVar13 = pfVar19[0x17];
          fVar14 = pfVar19[0x15];
          fVar15 = pfVar19[0x14];
          fVar16 = pfVar19[0x16];
          fVar17 = pfVar19[0x12];
          fVar18 = pfVar19[0x13];
          param_2 = param_2 + 0x60;
          pfVar24[6] = fVar17 * fVar1 +
                       fVar18 * fVar2 +
                       fVar15 * fVar3 + fVar14 * fVar4 + fVar13 * fVar6 + fVar16 * fVar5;
          pfVar24[7] = fVar17 * fVar7 +
                       fVar18 * fVar8 +
                       fVar15 * fVar9 + fVar14 * fVar10 + fVar13 * fVar12 + fVar16 * fVar11;
          lVar22 = lVar22 + 4;
          param_4 = param_4 + 0x20;
        } while ((int)lVar22 < iVar21 + -3);
      }
      if ((int)lVar22 < iVar21) {
        param_3 = param_3 - lVar22;
        param_2 = param_2 + -4;
        param_4 = param_4 + -4;
        do {
          iVar23 = (int)param_2;
          fVar13 = *(float *)(iVar23 + 0x14);
          fVar14 = *(float *)(iVar23 + 4);
          fVar15 = *(float *)(iVar23 + 8);
          fVar16 = *(float *)(iVar23 + 0xc);
          fVar17 = *(float *)(iVar23 + 0x10);
          param_2 = param_2 + 0x18;
          fVar18 = *(float *)param_2;
          *(float *)((int)param_4 + 4) =
               fVar14 * fVar1 +
               fVar15 * fVar2 + fVar16 * fVar3 + fVar17 * fVar4 + fVar18 * fVar6 + fVar13 * fVar5;
          param_4 = param_4 + 8;
          *(float *)param_4 =
               fVar14 * fVar7 +
               fVar15 * fVar8 + fVar16 * fVar9 + fVar17 * fVar10 + fVar18 * fVar12 + fVar13 * fVar11
          ;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
        fn_82F6A590(0);
        return;
      }
    }
    else if ((int)(uint)*(ushort *)(*piVar20 + 0x22) < iVar23) {
      if (-1 < iVar21 + -1) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(piVar20[0x60],0,iVar23 << 2);
      }
    }
    else if (0 < iVar21) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(piVar20[0x60],0,iVar23 << 2);
    }
  }
  fn_82F6A590(0);
  return;
}

