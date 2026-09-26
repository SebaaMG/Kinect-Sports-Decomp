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
#define NAN(x) ((x) != (x))
extern unsigned int fStack_48;
extern int fn_822AA718();
extern int fn_823C4D40();
extern int fn_823CE438();
extern int fn_823CEF08();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


bool fn_823C34A0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  bool bVar12;
  int in_r0;
  int iVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float afStack_50 [2];
  float fStack_48;
  
  iVar13 = *(int *)(param_1 + 0xe10);
  fVar5 = *(float *)(iVar13 + 0xa8) * *(float *)(iVar13 + 0x8bc);
  fVar6 = *(float *)(iVar13 + 0xa0) * *(float *)(iVar13 + 0x8bc);
  dVar15 = (double)lbl_821CC160;
  fVar1 = *(float *)(iVar13 + 0x280);
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
  puVar7 = (undefined4 *)(iVar13 + 0x50U & 0xfffffff0);
  fVar16 = (float)puVar7[1];
  fVar17 = (float)puVar7[2];
  uVar18 = puVar7[3];
  puVar8 = (undefined4 *)((int)afStack_50 + in_r0 & 0xfffffff0);
  *puVar8 = *puVar7;
  puVar8[1] = fVar16;
  puVar8[2] = fVar17;
  puVar8[3] = uVar18;
  fVar2 = *(float *)(iVar4 + 0x38);
  fVar3 = *(float *)(iVar4 + 0x18);
  dVar14 = (double)(fVar6 - fVar5);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar14 < dVar15) << 2) | (uint)(NAN(dVar14) || NAN(dVar15)) << 2)) <
      0.0) {
    fVar6 = fVar5;
  }
  fVar6 = fVar6 * fVar1;
  fVar1 = fVar3;
  if (fVar3 <= fVar2) {
    fVar1 = fVar2;
    fVar2 = fVar3;
  }
  if ((fStack_48 < fVar2 - fVar6) || (bVar12 = true, fVar1 + fVar6 <= fStack_48)) {
    bVar12 = false;
  }
  if (!bVar12) {
    iVar13 = fn_823C4D40(param_1);
    fn_822AA718(afStack_50,*(undefined4 *)(**(int **)(param_1 + 8) + iVar13 * 4));
    uVar9 = (int)afStack_50 + in_r0 & 0xfffffff0;
    uVar10 = in_r0 + *(int *)(*(int *)(param_1 + 0x1c) + 4) & 0xfffffff0;
    fVar1 = *(float *)(uVar9 + 4) * (fVar16 - *(float *)(uVar10 + 4)) + 0.0 +
            *(float *)(uVar9 + 8) * (fVar17 - *(float *)(uVar10 + 8));
    pfVar11 = (float *)((int)afStack_50 + in_r0 & 0xfffffff0);
    *pfVar11 = fVar1;
    pfVar11[1] = fVar1;
    pfVar11[2] = fVar1;
    pfVar11[3] = fVar1;
    *(undefined1 *)(param_1 + 0xd51) = 0;
    *(undefined1 *)(param_1 + 0xd52) = 0;
    *(undefined1 *)(param_1 + 0xd50) = 0;
    if ((double)afStack_50[0] <= dVar15) {
      fn_823CE438(param_1,iVar13 == 0);
    }
    else {
      fn_823CEF08();
    }
  }
  return !bVar12;
}

