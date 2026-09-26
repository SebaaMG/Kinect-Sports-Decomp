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
extern unsigned int lbl_8208E088;


undefined8 fn_83047248(int *param_1,int *param_2,int param_3,ushort *param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  float fVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar16;
  ulonglong uVar15;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  float *pfVar22;
  float *pfVar23;
  ulonglong uVar24;
  int iVar25;
  uint uVar26;
  ushort *puVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  float *pfVar32;
  ulonglong uVar33;
  int iVar34;
  int iVar35;
  
  fVar8 = lbl_8208E088;
  uVar31 = (ulonglong)*(ushort *)((int)param_1 + 0xe);
  uVar29 = 0;
  param_3 = param_3 - *(int *)(param_4 + 0xe);
  uVar3 = *(uint *)(param_4 + 0x10);
  uVar18 = (ulonglong)uVar3;
  pfVar32 = (float *)(uint)*(ushort *)((int)param_1 + 0xe);
  for (uVar16 = param_1[1]; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
    uVar29 = uVar29 + 1;
  }
  uVar7 = *(int *)(param_4 + 0x12) << 10;
  uVar26 = 0;
  iVar25 = *(int *)(param_4 + 0x14) - *(int *)(param_4 + 0x12);
  uVar16 = *(uint *)(param_4 + 0x16);
  uVar24 = (ulonglong)uVar16;
  uVar4 = *(uint *)(param_4 + 0x18);
  uVar30 = (ulonglong)uVar4;
  iVar19 = (int)uVar29;
  iVar35 = (*(int *)(param_4 + 0xc) * 2 + -2) * iVar19 + *param_1;
  pfVar22 = pfVar32;
  if ((uVar29 & 0xffffffff) != 0) {
    uVar5 = param_1[1];
    uVar1 = *(ushort *)(param_2 + 3);
    uVar6 = (ulonglong)(uVar3 >> 0x10);
    iVar10 = *param_2;
    puVar27 = param_4;
    do {
      iVar20 = iVar35 - (int)param_4;
      uVar18 = (ulonglong)uVar3;
      uVar33 = (ulonglong)(uVar3 & 0xffff);
      uVar21 = uVar26;
      if ((uVar5 & 8) != 0) {
        uVar11 = 0;
        for (uVar17 = param_1[1] & 7; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
          uVar11 = uVar11 + 1;
        }
        if (uVar26 == uVar11) {
          iVar34 = 0;
          for (uVar21 = param_1[1]; uVar21 != 0; uVar21 = uVar21 - 1 & uVar21) {
            iVar34 = iVar34 + 1;
          }
          uVar21 = iVar34 - 1;
        }
        else if (uVar11 < uVar26) {
          uVar21 = uVar26 - 1;
        }
      }
      uVar2 = *puVar27;
      trapWord(6,uVar30,0);
      pfVar22 = (float *)((uVar1 * uVar21 + *(int *)(param_4 + 0xe)) * 4 + iVar10);
      uVar21 = param_3 * 4 >> 2;
      uVar13 = (0x400 - uVar24 & 0xffffffff) / uVar30;
      uVar28 = (longlong)(int)uVar21;
      if (uVar13 <= uVar21) {
        uVar28 = uVar13;
      }
      uVar13 = uVar6;
      uVar15 = uVar24;
      pfVar23 = pfVar22;
      if (uVar6 == 0) {
        uVar14 = (longlong)iVar25 * (longlong)(int)uVar16 + (ulonglong)uVar7;
        do {
          uVar12 = uVar28 & 0xffffffff;
          uVar28 = uVar28 - 1;
          if (uVar12 == 0) break;
          uVar14 = (longlong)iVar25 * (longlong)(int)uVar4 + uVar14;
          uVar15 = uVar30 + uVar15;
          uVar18 = ((uVar14 & 0xffffffff) >> 10) + uVar18;
          uVar13 = (uVar18 & 0xffffffff) >> 0x10;
          iVar34 = (int)uVar33;
          uVar33 = uVar18 & 0xffff;
          *pfVar23 = (float)(longlong)
                            (int)(((int)*(short *)((int)puVar27 +
                                                  (int)((uVar29 & 0xffffffff) << 1) + iVar20) -
                                  (int)(short)uVar2) * iVar34 + (uint)uVar2 * 0x10000) * fVar8;
          pfVar23 = pfVar23 + 1;
        } while (uVar13 == 0);
      }
      uVar17 = (uint)uVar15;
      trapWord(6,uVar30,0);
      uVar21 = (int)pfVar22 + (param_3 * 4 - (int)pfVar23) >> 2;
      uVar14 = (0x400 - uVar15 & 0xffffffff) / uVar30;
      uVar28 = (longlong)(int)uVar21;
      if (uVar14 <= uVar21) {
        uVar28 = uVar14;
      }
      if (uVar13 <= (uVar31 - 1 & 0xffffffff)) {
        uVar14 = (longlong)iVar25 * (longlong)(int)uVar17 + (ulonglong)uVar7;
        do {
          uVar17 = (uint)uVar15;
          uVar12 = uVar28 & 0xffffffff;
          uVar28 = uVar28 - 1;
          if (uVar12 == 0) break;
          uVar12 = (longlong)iVar19 * (longlong)(int)uVar13;
          uVar14 = uVar14 + (longlong)iVar25 * (longlong)(int)uVar4;
          uVar15 = uVar30 + uVar15;
          uVar17 = (uint)uVar15;
          uVar2 = *(ushort *)((int)puVar27 + (int)((uVar12 & 0xffffffff) << 1) + iVar20);
          uVar18 = ((uVar14 & 0xffffffff) >> 10) + uVar18;
          uVar13 = (uVar18 & 0xffffffff) >> 0x10;
          iVar34 = (int)uVar33;
          uVar33 = uVar18 & 0xffff;
          *pfVar23 = (float)(longlong)
                            (int)(((int)*(short *)((int)puVar27 +
                                                  (int)((uVar29 + uVar12 & 0xffffffff) << 1) +
                                                  iVar20) - (int)(short)uVar2) * iVar34 +
                                 (uint)uVar2 * 0x10000) * fVar8;
          pfVar23 = pfVar23 + 1;
        } while (uVar13 <= (uVar31 - 1 & 0xffffffff));
      }
      uVar26 = uVar26 + 1;
      puVar27 = puVar27 + 1;
    } while ((ulonglong)uVar26 < (uVar29 & 0xffffffff));
    uVar31 = ZEXT48(pfVar32);
    uVar16 = uVar17;
    pfVar32 = pfVar23;
  }
  uVar24 = (uVar18 & 0xffffffff) >> 0x10;
  *(uint *)(param_4 + 0x16) = uVar16;
  if (uVar31 <= uVar24) {
    uVar24 = uVar31;
  }
  if ((uVar24 != 0) && (iVar25 = 0, (uVar29 & 0xffffffff) != 0)) {
    puVar27 = param_4 + -1;
    do {
      iVar10 = iVar19 * (int)uVar24 + iVar25;
      iVar25 = iVar25 + 1;
      puVar27 = puVar27 + 1;
      *puVar27 = *(ushort *)(iVar10 * 2 + iVar35);
      uVar29 = uVar29 - 1;
    } while (uVar29 != 0);
  }
  iVar25 = (int)pfVar32 - (int)pfVar22 >> 2;
  *(int *)(param_4 + 0x10) = (int)uVar18 - (int)(uVar24 << 0x10);
  *(short *)((int)param_1 + 0xe) = *(short *)((int)param_1 + 0xe) - (short)uVar24;
  *(short *)((int)param_2 + 0xe) = (short)iVar25 + (short)*(undefined4 *)(param_4 + 0xe);
  if (uVar24 == uVar31) {
    iVar19 = 0;
  }
  else {
    iVar19 = *(int *)(param_4 + 0xc) + (int)uVar24;
  }
  *(int *)(param_4 + 0xc) = iVar19;
  if (iVar25 == param_3) {
    uVar9 = 0x2d;
  }
  else {
    uVar9 = 0x2b;
    *(int *)(param_4 + 0xe) = iVar25 + *(int *)(param_4 + 0xe);
  }
  return uVar9;
}

