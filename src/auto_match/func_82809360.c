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
extern int fn_82A1DDC0();
extern int fn_82F68B4C();
extern int fn_82F68B58();
extern int fn_82F68CC0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_820145BC;
extern unsigned int lbl_82016290;


void fn_82809360(int param_1,int *param_2,longlong param_3)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  float *pfVar9;
  longlong lVar7;
  longlong lVar8;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar15;
  longlong lVar14;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  puVar3 = *(uint **)(param_1 + 100);
  dataCacheBlockTouch((ulonglong)*puVar3 + 0x80);
  dataCacheBlockTouch((ulonglong)puVar3[1] + 0x80 + (ulonglong)*puVar3);
  dataCacheBlockTouch(((ulonglong)puVar3[1] + 0x40 & 0x7fffffff) * 2 + (ulonglong)*puVar3);
  dataCacheBlockTouch((ulonglong)puVar3[1] * 3 + 0x80 + (ulonglong)*puVar3);
  if (*(char *)(param_1 + 0x47) == '\x02') {
    puVar3 = *(uint **)(param_1 + 100);
    uVar1 = *(ushort *)((int)puVar3 + 0x32);
    fn_82A1DDC0(param_3,(longlong)(int)(uint)*(byte *)(puVar3[2] + param_2[1]) *
                              (longlong)(int)puVar3[1] + (ulonglong)*puVar3,puVar3[0xe]);
    lVar13 = 0;
    uVar15 = 0;
    if (*(short *)(param_1 + 0x48) != 0) {
      lVar14 = (ulonglong)uVar1 * 4;
      do {
        if ((*(int *)(param_1 + 0x50) != 0) &&
           (*(char *)(*(int *)(param_1 + 0x50) + uVar15) == '\0')) {
          fn_82A1DDC0(lVar13 + param_3,*(undefined4 *)(param_1 + 0x54),lVar14);
        }
        uVar15 = uVar15 + 1;
        lVar13 = lVar14 + lVar13;
      } while (uVar15 < *(ushort *)(param_1 + 0x48));
    }
  }
  else if (*(char *)(param_1 + 0x47) == '\x06') {
    if (puVar3[0xf] == 1) {
      fn_82F68B58();
      return;
    }
    puVar3 = *(uint **)(param_1 + 100);
    uVar15 = 0;
    uVar11 = (ulonglong)*(ushort *)((int)puVar3 + 0x32);
    lVar14 = (longlong)(int)(uint)*(byte *)(param_2[1] + puVar3[2]) * (longlong)(int)puVar3[1] +
             (ulonglong)*puVar3;
    lVar13 = (longlong)(int)(uint)*(byte *)(param_2[2] + puVar3[2]) * (longlong)(int)puVar3[1] +
             (ulonglong)*puVar3;
    if (*(short *)(param_1 + 0x48) != 0) {
      lVar12 = uVar11 * 4;
      do {
        if ((*(int *)(param_1 + 0x50) == 0) ||
           (*(char *)(*(int *)(param_1 + 0x50) + uVar15) != '\0')) {
          if (uVar11 != 0) {
            lVar7 = lVar14;
            uVar16 = uVar11;
            do {
              pfVar9 = (float *)lVar7;
              *(float *)(((int)param_3 - (int)lVar14) + (int)pfVar9) =
                   (*(float *)(((int)lVar13 - (int)lVar14) + (int)pfVar9) - *pfVar9) *
                   *(float *)(param_1 + 0x40) + *pfVar9;
              lVar7 = lVar7 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
        }
        else {
          fn_82F68CC0(param_3,*(undefined4 *)(param_1 + 0x54),lVar12);
        }
        uVar15 = uVar15 + 1;
        param_3 = lVar12 + param_3;
        lVar14 = lVar12 + lVar14;
        lVar13 = lVar12 + lVar13;
      } while (uVar15 < *(ushort *)(param_1 + 0x48));
    }
  }
  else {
    if (puVar3[0xf] == 1) {
      fn_82F68B4C();
      return;
    }
    iVar6 = fn_82F6A548();
    puVar3 = *(uint **)(iVar6 + 100);
    uVar10 = 0;
    uVar15 = puVar3[2];
    uVar11 = (ulonglong)*puVar3;
    uVar2 = puVar3[1];
    uVar16 = (ulonglong)*(ushort *)((int)puVar3 + 0x32);
    lVar12 = (longlong)(int)(uint)*(byte *)(uVar15 + *param_2) * (longlong)(int)uVar2 + uVar11;
    lVar14 = (longlong)(int)(uint)*(byte *)(param_2[1] + uVar15) * (longlong)(int)uVar2 + uVar11;
    lVar7 = (longlong)(int)(uint)*(byte *)(param_2[2] + uVar15) * (longlong)(int)uVar2 + uVar11;
    lVar13 = (longlong)(int)(uint)*(byte *)(param_2[3] + uVar15) * (longlong)(int)uVar2 + uVar11;
    if (*(short *)(iVar6 + 0x48) != 0) {
      lVar5 = uVar16 * 4;
      dVar23 = (double)lbl_82005344;
      dVar24 = (double)lbl_82016290;
      dVar25 = (double)lbl_820145BC;
      dVar26 = (double)lbl_82002C5C;
      do {
        if ((*(int *)(iVar6 + 0x50) == 0) || (*(char *)(*(int *)(iVar6 + 0x50) + uVar10) != '\0')) {
          if (uVar16 != 0) {
            iVar4 = (int)lVar7;
            lVar8 = lVar7;
            uVar11 = uVar16;
            do {
              pfVar9 = (float *)lVar8;
              dVar22 = (double)*(float *)(((int)lVar12 - iVar4) + (int)pfVar9);
              dVar17 = (double)*pfVar9;
              dVar20 = (double)(float)(dVar22 * dVar26);
              dVar21 = (double)(float)((double)*(float *)(((int)lVar13 - iVar4) + (int)pfVar9) *
                                      dVar26);
              dVar19 = (double)*(float *)(((int)lVar14 - iVar4) + (int)pfVar9);
              dVar18 = (double)*(float *)(iVar6 + 0x40);
              *(float *)(((int)param_3 - iVar4) + (int)pfVar9) =
                   (float)((double)(float)((double)(float)((double)((float)(dVar19 * dVar25 -
                                                                           (double)(float)(dVar17 * 
                                                  dVar25)) + (float)(dVar21 - dVar20)) * dVar18 +
                                                  (double)(-(float)(dVar19 * dVar24 - dVar22) +
                                                          (float)(dVar17 * dVar23 - dVar21))) *
                                           dVar18 + (double)(float)(dVar17 * dVar26 - dVar20)) *
                           dVar18 + dVar19);
              lVar8 = lVar8 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        else {
          fn_82F68CC0(param_3,*(undefined4 *)(iVar6 + 0x54),lVar5);
        }
        uVar10 = uVar10 + 1;
        param_3 = lVar5 + param_3;
        lVar12 = lVar5 + lVar12;
        lVar14 = lVar5 + lVar14;
        lVar7 = lVar5 + lVar7;
        lVar13 = lVar5 + lVar13;
      } while (uVar10 < *(ushort *)(iVar6 + 0x48));
    }
    fn_82F6A594();
  }
  return;
}

