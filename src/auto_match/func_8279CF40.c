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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_82755510();
extern int fn_82794B88();
extern int fn_8279B4E0();
extern int fn_8279B858();
extern int fn_8279B930();
extern unsigned int lbl_8200571C;
extern unsigned int lbl_82005730;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;


/* WARNING: Removing unreachable block (ram,0x8279d2ac) */
/* WARNING: Removing unreachable block (ram,0x8279d2b8) */
/* WARNING: Removing unreachable block (ram,0x8279d2cc) */
/* WARNING: Removing unreachable block (ram,0x8279d2d0) */
/* WARNING: Removing unreachable block (ram,0x8279d2d8) */
/* WARNING: Removing unreachable block (ram,0x8279d2f8) */
/* WARNING: Removing unreachable block (ram,0x8279d304) */
/* WARNING: Removing unreachable block (ram,0x8279d318) */
/* WARNING: Removing unreachable block (ram,0x8279d31c) */
/* WARNING: Removing unreachable block (ram,0x8279d324) */
/* WARNING: Removing unreachable block (ram,0x8279d344) */
/* WARNING: Removing unreachable block (ram,0x8279d330) */
/* WARNING: Removing unreachable block (ram,0x8279d2e4) */
/* WARNING: Removing unreachable block (ram,0x8279d354) */

undefined8 fn_8279CF40(int *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar7;
  char cVar8;
  undefined8 uVar6;
  ulonglong uVar9;
  uint uVar11;
  longlong lVar10;
  uint uVar12;
  ushort *puVar13;
  ulonglong uVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  uVar4 = ZEXT48(&stack0x00000000);
  iVar7 = param_1[5];
  if (iVar7 != 0) {
    dVar20 = (double)lbl_821AAD20;
    if ((param_1[0xba] == 1) && (*(char *)(param_1 + 0xbd) != '\0')) {
      if ((param_1[0xa4] == 0) ||
         (bVar3 = false, *(uint *)(param_1[0xa4] + 4) <= (uint)param_1[0xa5])) {
        bVar3 = true;
      }
      if (!bVar3) {
        iVar7 = param_1[0x8c];
      }
      iVar7 = *(int *)(iVar7 + 0x14);
      uVar11 = param_1[0x2e];
      piVar1 = *(int **)(iVar7 + 0xc);
      lVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,0x2d);
      if (0 < lVar5) {
        (**(code **)(**(int **)(iVar7 + 0xc) + 0x28))();
      }
      uVar14 = uVar4 - 0x470;
      if (0x100 < uVar11 + 1) {
        iVar7 = fn_82794B88(*(undefined4 *)(*param_1 + 8));
        uVar14 = fn_8267B890(*(undefined4 *)(iVar7 + 0x1c),
                                   ((ulonglong)uVar11 + 1 & 0x3fffffff) << 2,0);
      }
      uVar11 = param_1[0x27];
      uVar12 = 0;
      if (uVar11 != 0) {
        iVar7 = param_1[0x25] + 2;
        do {
          if ((*(ushort *)(iVar7 + 2) & 0xf000) != 0) break;
          uVar12 = uVar12 + 1;
          iVar7 = iVar7 + 8;
        } while (uVar12 < uVar11);
      }
      uVar9 = 0;
      dVar17 = dVar20;
      if (uVar12 < uVar11) {
        iVar7 = uVar11 - uVar12;
        puVar13 = (ushort *)(uVar12 * 8 + param_1[0x25] + 2);
        do {
          lVar5 = (uVar9 & 0x3fffffff) * 4;
          *(float *)((int)lVar5 + (int)uVar14) = (float)dVar17;
          uVar11 = (uint)*puVar13;
          if ((puVar13[2] >> 6 & 1) != 0) {
            uVar11 = -(uint)*puVar13;
          }
          uVar2 = (ulonglong)(puVar13[1] >> 0xc);
          dVar17 = (double)(float)((double)(longlong)(int)uVar11 + dVar17);
          if ((1 < uVar2) && (uVar2 != 0)) {
            lVar10 = (uVar9 & 0x7fffffff) << 1;
            lVar5 = lVar5 + uVar14 + -4;
            uVar16 = uVar2;
            do {
              *(undefined2 *)((int)lVar10 + param_1[0x13e]) = 0xa0;
              lVar5 = lVar5 + 4;
              *(float *)lVar5 = (float)dVar20;
              lVar10 = lVar10 + 2;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          iVar7 = iVar7 + -1;
          uVar9 = uVar2 + uVar9;
          puVar13 = puVar13 + 4;
        } while (iVar7 != 0);
      }
      *(float *)((int)((uVar9 & 0xffffffff) << 2) + (int)uVar14) = (float)dVar17;
      piVar1 = *(int **)(*param_1 + 0x10);
      cVar8 = (**(code **)(*piVar1 + 4))(piVar1,*param_1,uVar4 - 0x560);
      if (cVar8 != '\0') {
        *(undefined1 *)(param_1 + 0xbb) = 0;
      }
      if ((uVar14 & 0xffffffff) != (uVar4 - 0x470 & 0xffffffff)) {
        fn_82794B88(*(undefined4 *)(*param_1 + 8));
        fn_8267BE38(uVar14);
      }
      uVar6 = fn_8279B4E0(uVar4 - 0x520);
      uVar6 = fn_8279B930(param_1 + 0x60,uVar6);
      fn_8279B930(param_1 + 0x35,uVar6);
      fn_8279B858(uVar4 - 0x520);
      if ((cVar8 != '\0') && (param_1[0xba] == 2)) {
        return 1;
      }
    }
    else if (param_1[0xba] == 2) {
      uVar6 = fn_8279B4E0(uVar4 - 0x520);
      fn_8279B930(param_1 + 0x8b,uVar6);
      fn_8279B858(uVar4 - 0x520);
      param_1[0xba] = 1;
    }
    if (*(char *)(param_1 + 0xbb) != '\0') {
      puVar15 = (undefined2 *)(param_1[0x27] * 8 + param_1[0x25]);
      puVar15[3] = 0;
      puVar15[2] = 0;
      dVar17 = lbl_82005730;
      dVar18 = (double)(float)param_1[8];
      if (dVar18 <= dVar20) {
        dVar18 = dVar18 - lbl_82005730;
      }
      else {
        dVar18 = dVar18 + lbl_82005730;
      }
      uVar11 = (uint)dVar18;
      iVar7 = param_1[4];
      if (iVar7 != 0) {
        if ((int)uVar11 < 0) {
          uVar11 = (uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f);
          *(ushort *)(iVar7 + 6) = *(ushort *)(iVar7 + 6) | 0x40;
        }
        else {
          *(ushort *)(iVar7 + 6) = *(ushort *)(iVar7 + 6) & 0xffbf;
        }
        *(short *)(iVar7 + 2) = (short)uVar11;
      }
      piVar1 = *(int **)(*(int *)(param_1[5] + 0x14) + 0xc);
      uVar6 = (**(code **)(*piVar1 + 0xc))(piVar1,0x2d);
      *puVar15 = (short)uVar6;
      puVar15[2] = puVar15[2] & 0xfff;
      fn_82755510((double)(float)param_1[0x149],puVar15);
      param_1[0x11] = param_1[0x148];
      piVar1 = *(int **)(*(int *)(param_1[5] + 0x14) + 0xc);
      dVar18 = (double)(**(code **)(*piVar1 + 0x20))(piVar1,uVar6);
      dVar19 = (double)(float)((double)(float)param_1[0x142] * dVar18);
      iVar7 = (**(code **)(**(int **)(param_1[0x140] + 0xc) + 0x30))
                        (*(int **)(param_1[0x140] + 0xc),uVar6,uVar4 - 0x530);
      dVar18 = (double)(*(float *)(iVar7 + 8) * (float)param_1[0x142] + lbl_8200571C);
      if (dVar18 <= dVar19) {
        dVar18 = dVar19;
      }
      if (dVar18 <= dVar20) {
        dVar18 = dVar18 - dVar17;
      }
      else {
        dVar18 = dVar18 + dVar17;
      }
      iVar7 = (int)dVar18;
      piVar1 = *(int **)(*(int *)(param_1[5] + 0x14) + 0xc);
      (**(code **)(*piVar1 + 0x28))(piVar1,uVar6);
      param_1[9] = iVar7;
      param_1[7] = (int)uVar6;
      param_1[0x2b] = 0;
      *(undefined1 *)(param_1 + 0xbb) = 0;
      param_1[4] = (int)puVar15;
      param_1[0x12] = param_1[0x148] + iVar7;
      param_1[8] = (int)(float)(longlong)iVar7;
      if ((param_1[0x25] == 0) || (bVar3 = false, (uint)param_1[0x28] <= (uint)param_1[0x27])) {
        bVar3 = true;
      }
      if (!bVar3) {
        param_1[0x27] = param_1[0x27] + 1;
      }
    }
  }
  return 0;
}

