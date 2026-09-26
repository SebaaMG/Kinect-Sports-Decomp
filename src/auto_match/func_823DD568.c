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
extern float fRam831d19d4;
extern int fn_822ABA88();
extern int fn_8249ABC0();
extern unsigned int lbl_82192480;
extern unsigned int lbl_821CC160;


void fn_823DD568(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  float fVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar10;
  ulonglong uVar9;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  
  uVar15 = *(uint *)(param_1 + 8);
  uVar11 = (ulonglong)uVar15;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  uVar2 = lbl_821CC160;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0xdc) = uVar2;
  if ((*(float *)(uVar15 + 0x47c) < *(float *)(uVar15 + 0x474)) &&
     (fVar5 = *(float *)(uVar15 + 0xe40) + lbl_82192480, *(float *)(uVar15 + 0xe40) = fVar5,
     fRam831d19d4 < fVar5)) {
    *(float *)(uVar15 + 0xe40) = fRam831d19d4;
  }
  uVar1 = *(uint *)(uVar15 + 8);
  uVar12 = (ulonglong)uVar1;
  iVar13 = *(int *)(uVar15 + 0xeec);
  uVar6 = -(uint)(*(int *)(uVar15 + 0xee8) != 0) & 7;
  iVar14 = 0;
  iVar10 = 0;
  *(uint *)(uVar1 + 0x8dbc) = uVar6;
  lVar7 = uVar12 + 0x8db0;
  *(uint *)(uVar1 + 0x8db4) = iVar13 + uVar6;
  do {
    if ((iVar14 == 0) || (iVar14 == 2)) {
LAB_823dd658:
      lVar7 = lVar7 + 4;
      iVar14 = iVar14 + 1;
    }
    else {
      if ((iVar10 != *(int *)(uVar15 + 0xeec)) && (iVar10 != 0)) {
        iVar13 = iVar10 + uVar6;
        iVar10 = iVar10 + 1;
        *(int *)((int)lVar7 + 4) = iVar13;
        goto LAB_823dd658;
      }
      iVar10 = iVar10 + 1;
    }
    if (6 < iVar14) {
      uVar15 = -(uint)(*(int *)(uVar15 + 0xee8) != 1) & 7;
      *(uint *)((iVar14 + 0x236d) * 4 + uVar1) = uVar15 + 1;
      *(uint *)((iVar14 + 0x236e) * 4 + uVar1) = uVar15;
      *(uint *)((iVar14 + 0x236f) * 4 + uVar1) = uVar15 + 2;
      *(uint *)((iVar14 + 0x2370) * 4 + uVar1) = uVar15 + 3;
      *(uint *)((iVar14 + 0x2371) * 4 + uVar1) = uVar15 + 4;
      *(uint *)((iVar14 + 0x2372) * 4 + uVar1) = uVar15 + 5;
      lVar7 = 0;
      *(uint *)((iVar14 + 0x2373) * 4 + uVar1) = uVar15 + 6;
      do {
        uVar8 = 0;
        piVar3 = *(int **)((int)lVar7 + *(int *)uVar12);
        uVar9 = ZEXT48(piVar3);
        if (*(int *)(*(int *)(piVar3[4] * 4 + *piVar3) + 8) != 0) {
          do {
            iVar13 = fn_822ABA88();
            *(undefined4 *)(iVar13 + 0x200) = 0;
            uVar8 = uVar8 + 1;
          } while ((uVar8 & 0xffffffff) <
                   (ulonglong)*(uint *)(*(int *)(((int *)uVar9)[4] * 4 + *(int *)uVar9) + 8));
        }
        lVar7 = lVar7 + 4;
      } while ((int)lVar7 < 8);
      piVar4 = *(int **)(*(int *)((int)uVar11 + 0xee8) * 4 + *(int *)((int)uVar11 + 0x20));
      piVar3 = (int *)*piVar4;
      if (piVar4[1] - (int)piVar3 >> 2 != 0) {
        uVar2 = *(undefined4 *)(*piVar3 + 0x28);
        iVar13 = fn_8249ABC0();
        *(undefined4 *)(iVar13 + 0x114) = uVar2;
      }
      return;
    }
  } while( true );
}

