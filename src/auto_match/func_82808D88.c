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
extern int fn_8280DD78();
extern int fn_8280E418();
extern int fn_82F68CC0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_820145BC;
extern unsigned int lbl_82016290;


void fn_82808D88(undefined8 param_1,int *param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
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
  
  iVar7 = fn_82F6A548();
  puVar1 = *(uint **)(iVar7 + 100);
  uVar11 = 0;
  uVar2 = puVar1[2];
  uVar9 = (ulonglong)*puVar1;
  uVar3 = puVar1[1];
  uVar12 = (ulonglong)*(ushort *)((int)puVar1 + 0x32);
  lVar14 = (longlong)(int)(uint)*(byte *)(uVar2 + *param_2) * (longlong)(int)uVar3 + uVar9;
  lVar15 = (longlong)(int)(uint)*(byte *)(param_2[1] + uVar2) * (longlong)(int)uVar3 + uVar9;
  lVar16 = (longlong)(int)(uint)*(byte *)(param_2[2] + uVar2) * (longlong)(int)uVar3 + uVar9;
  lVar13 = (longlong)(int)(uint)*(byte *)(param_2[3] + uVar2) * (longlong)(int)uVar3 + uVar9;
  if (*(short *)(iVar7 + 0x48) != 0) {
    lVar6 = uVar12 * 4;
    dVar23 = (double)lbl_82005344;
    dVar24 = (double)lbl_82016290;
    dVar25 = (double)lbl_820145BC;
    dVar26 = (double)lbl_82002C5C;
    do {
      if ((*(int *)(iVar7 + 0x50) == 0) || (*(char *)(*(int *)(iVar7 + 0x50) + uVar11) != '\0')) {
        fn_8280DD78((double)*(float *)(iVar7 + 0x40),lVar15,lVar16,param_3);
        fn_8280E418(param_3,param_3);
        if (4 < uVar12) {
          lVar8 = uVar12 - 4;
          lVar10 = lVar16 + 0x10;
          iVar5 = (int)lVar16;
          do {
            pfVar4 = (float *)lVar10;
            dVar22 = (double)*(float *)(((int)lVar14 - iVar5) + (int)pfVar4);
            dVar17 = (double)*pfVar4;
            dVar20 = (double)(float)(dVar22 * dVar26);
            dVar21 = (double)(float)((double)*(float *)(((int)lVar13 - iVar5) + (int)pfVar4) *
                                    dVar26);
            dVar19 = (double)*(float *)(((int)lVar15 - iVar5) + (int)pfVar4);
            dVar18 = (double)*(float *)(iVar7 + 0x40);
            *(float *)(((int)param_3 - iVar5) + (int)pfVar4) =
                 (float)((double)(float)((double)(float)((double)((float)(dVar19 * dVar25 -
                                                                         (double)(float)(dVar17 * 
                                                  dVar25)) + (float)(dVar21 - dVar20)) * dVar18 +
                                                  (double)(-(float)(dVar19 * dVar24 - dVar22) +
                                                          (float)(dVar17 * dVar23 - dVar21))) *
                                         dVar18 + (double)(float)(dVar17 * dVar26 - dVar20)) *
                         dVar18 + dVar19);
            lVar10 = lVar10 + 4;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
      }
      else {
        fn_82F68CC0(param_3,*(undefined4 *)(iVar7 + 0x54),lVar6);
      }
      uVar11 = uVar11 + 1;
      param_3 = lVar6 + param_3;
      lVar14 = lVar6 + lVar14;
      lVar15 = lVar6 + lVar15;
      lVar16 = lVar6 + lVar16;
      lVar13 = lVar6 + lVar13;
    } while (uVar11 < *(ushort *)(iVar7 + 0x48));
  }
  fn_82F6A594();
  return;
}

