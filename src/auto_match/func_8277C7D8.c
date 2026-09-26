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


void fn_8277C7D8(int param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  float *pfVar16;
  float *pfVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  byte bVar26;
  
  uVar4 = *param_3;
  uVar22 = 0;
  uVar5 = *param_2;
  uVar23 = (ulonglong)*(uint *)(param_1 + 0x1b4);
  uVar7 = *(uint *)(*(int *)((uVar4 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1c0)) +
                   (uVar4 & 0xff) * 4);
  uVar8 = *(uint *)(*(int *)((uVar5 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1c0)) +
                   (uVar5 & 0xff) * 4);
  iVar6 = (uVar8 & 0x3ff) * 8;
  iVar9 = *(int *)((uVar8 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x110));
  pfVar16 = (float *)(*(int *)((uVar7 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x110)) +
                     (uVar7 & 0x3ff) * 8);
  fVar11 = *pfVar16 - *(float *)(iVar9 + iVar6);
  fVar1 = pfVar16[1] - *(float *)(iVar9 + iVar6 + 4);
  fVar11 = fVar1 * fVar1 + fVar11 * fVar11;
  uVar18 = (ulonglong)uVar4;
  uVar20 = (ulonglong)uVar5;
  if (uVar23 != 0) {
    do {
      uVar25 = uVar20 + 1;
      uVar24 = uVar18 + 1;
      if (uVar23 <= (uVar25 & 0xffffffff)) {
        uVar25 = uVar25 - uVar23;
      }
      if (uVar23 <= (uVar24 & 0xffffffff)) {
        uVar24 = uVar24 - uVar23;
      }
      iVar9 = *(int *)(param_1 + 0x1c0);
      iVar6 = *(int *)(param_1 + 0x110);
      uVar4 = *(uint *)(*(int *)(((uint)uVar20 >> 6 & 0x3fffffc) + iVar9) +
                       ((uint)((uVar20 & 0xffffffff) << 2) & 0x3fc));
      uVar5 = *(uint *)(*(int *)(((uint)uVar18 >> 6 & 0x3fffffc) + iVar9) +
                       ((uint)((uVar18 & 0xffffffff) << 2) & 0x3fc));
      uVar7 = *(uint *)(*(int *)(((uint)uVar25 >> 6 & 0x3fffffc) + iVar9) +
                       ((uint)((uVar25 & 0xffffffff) << 2) & 0x3fc));
      uVar8 = *(uint *)(*(int *)(((uint)uVar24 >> 6 & 0x3fffffc) + iVar9) +
                       ((uint)((uVar24 & 0xffffffff) << 2) & 0x3fc));
      iVar15 = (uVar7 & 0x3ff) * 8;
      iVar9 = *(int *)((uVar7 >> 8 & 0xfffffc) + iVar6);
      pfVar17 = (float *)(*(int *)((uVar4 >> 8 & 0xfffffc) + iVar6) + (uVar4 & 0x3ff) * 8);
      iVar10 = *(int *)((uVar8 >> 8 & 0xfffffc) + iVar6);
      pfVar16 = (float *)(*(int *)((uVar5 >> 8 & 0xfffffc) + iVar6) + (uVar5 & 0x3ff) * 8);
      iVar6 = (uVar8 & 0x3ff) * 8;
      fVar2 = *(float *)(iVar9 + iVar15);
      fVar3 = *(float *)(iVar10 + iVar6);
      fVar13 = fVar3 - *pfVar17;
      fVar12 = *pfVar16 - fVar2;
      fVar1 = *(float *)(iVar9 + iVar15 + 4);
      fVar3 = fVar3 - fVar2;
      fVar2 = *(float *)(iVar10 + iVar6 + 4);
      fVar14 = fVar2 - fVar1;
      fVar1 = pfVar16[1] - fVar1;
      fVar2 = fVar2 - pfVar17[1];
      fVar13 = fVar2 * fVar2 + fVar13 * fVar13;
      fVar1 = fVar1 * fVar1 + fVar12 * fVar12;
      fVar2 = fVar14 * fVar14 + fVar3 * fVar3;
      bVar26 = fVar1 < fVar13;
      if ((bool)bVar26) {
        fVar1 = fVar13;
      }
      if (fVar1 < fVar2) {
        bVar26 = 2;
        fVar1 = fVar2;
      }
      uVar19 = uVar18;
      uVar21 = uVar25;
      if (((bVar26 != 0) && (uVar19 = uVar24, uVar21 = uVar20, bVar26 != 1)) &&
         (uVar19 = uVar18, bVar26 < 3)) {
        uVar22 = uVar22 + 1;
        uVar19 = uVar24;
        uVar21 = uVar25;
      }
      if (fVar11 < fVar1) {
        *param_2 = (uint)uVar21;
        *param_3 = (uint)uVar19;
        fVar11 = fVar1;
      }
      uVar22 = uVar22 + 1;
      uVar18 = uVar19;
      uVar20 = uVar21;
    } while ((uVar22 & 0xffffffff) < uVar23);
  }
  return;
}

