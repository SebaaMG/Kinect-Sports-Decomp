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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82057518;


undefined8 fn_83047608(int *param_1,int *param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float *pfVar14;
  uint uVar17;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar19;
  ulonglong uVar18;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  float *pfVar23;
  float *pfVar24;
  ulonglong uVar25;
  int iVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  int iVar30;
  ulonglong uVar31;
  uint uVar32;
  int iVar34;
  ulonglong uVar33;
  int iVar35;
  uint uVar36;
  
  fVar12 = lbl_82057518;
  fVar11 = lbl_82002AE0;
  uVar36 = 0;
  uVar3 = *(ushort *)((int)param_1 + 0xe);
  pfVar14 = (float *)(param_3 - *(int *)(param_4 + 0x1c));
  uVar5 = *(uint *)(param_4 + 0x20);
  uVar20 = (ulonglong)uVar5;
  for (uVar19 = param_1[1]; uVar19 != 0; uVar19 = uVar19 - 1 & uVar19) {
    uVar36 = uVar36 + 1;
  }
  uVar10 = *(int *)(param_4 + 0x24) << 10;
  uVar27 = 0;
  iVar26 = *(int *)(param_4 + 0x28) - *(int *)(param_4 + 0x24);
  uVar19 = *(uint *)(param_4 + 0x2c);
  uVar25 = (ulonglong)uVar19;
  uVar6 = *(uint *)(param_4 + 0x30);
  uVar31 = (ulonglong)uVar6;
  iVar21 = (*(int *)(param_4 + 0x18) + -1) * uVar36 + *param_1;
  uVar17 = uVar19;
  pfVar24 = pfVar14;
  pfVar23 = pfVar14;
  if (uVar36 != 0) {
    uVar7 = param_1[1];
    uVar9 = (ulonglong)(uVar5 >> 0x10);
    uVar4 = *(ushort *)(param_2 + 3);
    iVar8 = *param_2;
    uVar28 = (ulonglong)uVar3 - 1;
    do {
      uVar20 = (ulonglong)uVar5;
      iVar30 = (uVar27 - 1) + iVar21 + 1;
      uVar17 = uVar27;
      if ((uVar7 & 8) != 0) {
        uVar32 = 0;
        for (uVar22 = param_1[1] & 7; uVar22 != 0; uVar22 = uVar22 - 1 & uVar22) {
          uVar32 = uVar32 + 1;
        }
        if (uVar27 == uVar32) {
          iVar34 = 0;
          for (uVar17 = param_1[1]; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
            iVar34 = iVar34 + 1;
          }
          uVar17 = iVar34 - 1;
        }
        else if (uVar32 < uVar27) {
          uVar17 = uVar27 - 1;
        }
      }
      bVar2 = *(byte *)((uVar27 - 1) + param_4 + 1);
      trapWord(6,uVar31,0);
      pfVar23 = (float *)((uVar4 * uVar17 + *(int *)(param_4 + 0x1c)) * 4 + iVar8);
      uVar17 = (int)pfVar14 * 4 >> 2;
      uVar15 = (0x400 - uVar25 & 0xffffffff) / uVar31;
      uVar29 = (longlong)(int)uVar17;
      if (uVar15 <= uVar17) {
        uVar29 = uVar15;
      }
      uVar15 = uVar9;
      uVar18 = uVar25;
      uVar33 = (ulonglong)uVar5 & 0xffff;
      pfVar24 = pfVar23;
      if (uVar9 == 0) {
        uVar16 = (longlong)iVar26 * (longlong)(int)uVar19 + (ulonglong)uVar10;
        do {
          uVar1 = uVar29 & 0xffffffff;
          uVar29 = uVar29 - 1;
          if (uVar1 == 0) break;
          uVar16 = (longlong)iVar26 * (longlong)(int)uVar6 + uVar16;
          iVar34 = (int)uVar33;
          uVar20 = ((uVar16 & 0xffffffff) >> 10) + uVar20;
          uVar15 = (uVar20 & 0xffffffff) >> 0x10;
          uVar18 = uVar31 + uVar18;
          uVar33 = uVar20 & 0xffff;
          *pfVar24 = (float)(longlong)
                            (int)(((uint)*(byte *)(uVar36 + iVar30) - (uint)bVar2) * iVar34 +
                                 (uint)bVar2 * 0x10000) * fVar12 - fVar11;
          pfVar24 = pfVar24 + 1;
        } while (uVar15 == 0);
      }
      uVar17 = (uint)uVar18;
      trapWord(6,uVar31,0);
      uVar22 = (int)pfVar23 + ((int)pfVar14 * 4 - (int)pfVar24) >> 2;
      uVar16 = (0x400 - uVar18 & 0xffffffff) / uVar31;
      uVar29 = (longlong)(int)uVar22;
      if (uVar16 <= uVar22) {
        uVar29 = uVar16;
      }
      if (uVar15 <= (uVar28 & 0xffffffff)) {
        uVar16 = (longlong)iVar26 * (longlong)(int)uVar17 + (ulonglong)uVar10;
        do {
          uVar17 = (uint)uVar18;
          uVar1 = uVar29 & 0xffffffff;
          uVar29 = uVar29 - 1;
          if (uVar1 == 0) break;
          iVar34 = uVar36 * (int)uVar15;
          bVar2 = *(byte *)(iVar34 + iVar30);
          uVar16 = uVar16 + (longlong)iVar26 * (longlong)(int)uVar6;
          uVar20 = ((uVar16 & 0xffffffff) >> 10) + uVar20;
          uVar18 = uVar31 + uVar18;
          uVar17 = (uint)uVar18;
          iVar35 = (int)uVar33;
          uVar15 = (uVar20 & 0xffffffff) >> 0x10;
          uVar33 = uVar20 & 0xffff;
          *pfVar24 = (float)(longlong)
                            (int)(((uint)*(byte *)(uVar36 + iVar34 + iVar30) - (uint)bVar2) * iVar35
                                 + (uint)bVar2 * 0x10000) * fVar12 - fVar11;
          pfVar24 = pfVar24 + 1;
        } while (uVar15 <= (uVar28 & 0xffffffff));
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 < uVar36);
  }
  uVar31 = (ulonglong)uVar3;
  uVar25 = (uVar20 & 0xffffffff) >> 0x10;
  *(uint *)(param_4 + 0x2c) = uVar17;
  if (uVar31 <= uVar25) {
    uVar25 = uVar31;
  }
  if ((uVar25 != 0) && (iVar26 = 0, uVar36 != 0)) {
    iVar8 = uVar36 * (int)uVar25;
    do {
      *(undefined1 *)(iVar26 + param_4) = *(undefined1 *)(iVar8 + iVar21 + iVar26);
      iVar26 = iVar26 + 1;
      uVar36 = uVar36 - 1;
    } while (uVar36 != 0);
  }
  pfVar24 = (float *)((int)pfVar24 - (int)pfVar23 >> 2);
  *(int *)(param_4 + 0x20) = (int)uVar20 - (int)(uVar25 << 0x10);
  *(short *)((int)param_1 + 0xe) = *(short *)((int)param_1 + 0xe) - (short)uVar25;
  *(short *)((int)param_2 + 0xe) = (short)pfVar24 + (short)*(undefined4 *)(param_4 + 0x1c);
  if (uVar25 == uVar31) {
    iVar21 = 0;
  }
  else {
    iVar21 = *(int *)(param_4 + 0x18) + (int)uVar25;
  }
  *(int *)(param_4 + 0x18) = iVar21;
  if (pfVar24 == pfVar14) {
    uVar13 = 0x2d;
  }
  else {
    uVar13 = 0x2b;
    *(int *)(param_4 + 0x1c) = (int)pfVar24 + *(int *)(param_4 + 0x1c);
  }
  return uVar13;
}

