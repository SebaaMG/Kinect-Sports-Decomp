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
extern int fn_82F68CC0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_820145BC;
extern unsigned int lbl_82016290;


void fn_82808C10(undefined8 param_1,int *param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  iVar7 = fn_82F6A548();
  puVar1 = *(uint **)(iVar7 + 100);
  uVar11 = 0;
  uVar2 = puVar1[2];
  uVar8 = (ulonglong)*puVar1;
  uVar3 = puVar1[1];
  uVar10 = (ulonglong)*(ushort *)((int)puVar1 + 0x32);
  lVar14 = (longlong)(int)(uint)*(byte *)(uVar2 + *param_2) * (longlong)(int)uVar3 + uVar8;
  lVar13 = (longlong)(int)(uint)*(byte *)(param_2[1] + uVar2) * (longlong)(int)uVar3 + uVar8;
  lVar15 = (longlong)(int)(uint)*(byte *)(param_2[2] + uVar2) * (longlong)(int)uVar3 + uVar8;
  lVar12 = (longlong)(int)(uint)*(byte *)(param_2[3] + uVar2) * (longlong)(int)uVar3 + uVar8;
  if (*(short *)(iVar7 + 0x48) != 0) {
    lVar6 = uVar10 * 4;
    dVar22 = (double)lbl_82005344;
    dVar23 = (double)lbl_82016290;
    dVar24 = (double)lbl_820145BC;
    dVar25 = (double)lbl_82002C5C;
    do {
      if ((*(int *)(iVar7 + 0x50) == 0) || (*(char *)(*(int *)(iVar7 + 0x50) + uVar11) != '\0')) {
        if (uVar10 != 0) {
          iVar5 = (int)lVar15;
          lVar9 = lVar15;
          uVar8 = uVar10;
          do {
            pfVar4 = (float *)lVar9;
            dVar21 = (double)*(float *)(((int)lVar14 - iVar5) + (int)pfVar4);
            dVar16 = (double)*pfVar4;
            dVar19 = (double)(float)(dVar21 * dVar25);
            dVar20 = (double)(float)((double)*(float *)(((int)lVar12 - iVar5) + (int)pfVar4) *
                                    dVar25);
            dVar18 = (double)*(float *)(((int)lVar13 - iVar5) + (int)pfVar4);
            dVar17 = (double)*(float *)(iVar7 + 0x40);
            *(float *)(((int)param_3 - iVar5) + (int)pfVar4) =
                 (float)((double)(float)((double)(float)((double)((float)(dVar18 * dVar24 -
                                                                         (double)(float)(dVar16 * 
                                                  dVar24)) + (float)(dVar20 - dVar19)) * dVar17 +
                                                  (double)(-(float)(dVar18 * dVar23 - dVar21) +
                                                          (float)(dVar16 * dVar22 - dVar20))) *
                                         dVar17 + (double)(float)(dVar16 * dVar25 - dVar19)) *
                         dVar17 + dVar18);
            lVar9 = lVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
      }
      else {
        fn_82F68CC0(param_3,*(undefined4 *)(iVar7 + 0x54),lVar6);
      }
      uVar11 = uVar11 + 1;
      param_3 = lVar6 + param_3;
      lVar14 = lVar6 + lVar14;
      lVar13 = lVar6 + lVar13;
      lVar15 = lVar6 + lVar15;
      lVar12 = lVar6 + lVar12;
    } while (uVar11 < *(ushort *)(iVar7 + 0x48));
  }
  fn_82F6A594();
  return;
}

