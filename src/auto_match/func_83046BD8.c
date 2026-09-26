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
extern unsigned int uStack_b8;


undefined8 fn_83046BD8(int *param_1,uint *param_2,longlong param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar16;
  ulonglong uVar15;
  int iVar18;
  ulonglong uVar17;
  int iVar19;
  uint uVar22;
  uint uVar23;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  int iVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uint uVar32;
  uint uStack_b8;
  
  fVar10 = lbl_82057518;
  fVar9 = lbl_82002AE0;
  uVar28 = (ulonglong)*(uint *)(param_4 + 0x24);
  uVar5 = *(uint *)(param_4 + 0x20);
  uVar24 = (ulonglong)uVar5;
  uVar6 = *(uint *)(param_4 + 0x1c);
  trapWord(6,uVar28,0);
  uVar3 = *(ushort *)((int)param_1 + 0xe);
  uVar13 = (ulonglong)uVar3;
  uVar30 = param_3 - (ulonglong)uVar6;
  uVar27 = ((uVar28 - uVar24) + 0xffff & 0xffffffff) / uVar28;
  if ((uVar30 & 0xffffffff) < uVar27) {
    uVar27 = uVar30;
  }
  iVar26 = 0;
  uVar32 = 0;
  uVar7 = param_1[1];
  for (uVar22 = uVar7; uVar22 != 0; uVar22 = uVar22 - 1 & uVar22) {
    iVar26 = iVar26 + 1;
    uVar32 = uVar32 + 1;
  }
  uVar22 = 0;
  iVar12 = (*(int *)(param_4 + 0x18) + -1) * iVar26 + *param_1;
  if (uVar32 == 0) {
    uVar31 = (ulonglong)uStack_b8;
    uVar28 = uVar30;
  }
  else {
    uVar4 = *(ushort *)(param_2 + 3);
    uVar8 = *param_2;
    do {
      iVar29 = (uVar22 - 1) + iVar12 + 1;
      uVar14 = uVar22;
      if ((uVar7 & 8) != 0) {
        uVar16 = 0;
        for (uVar23 = uVar7 & 7; uVar23 != 0; uVar23 = uVar23 - 1 & uVar23) {
          uVar16 = uVar16 + 1;
        }
        if (uVar22 == uVar16) {
          iVar18 = 0;
          for (uVar14 = uVar7; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
            iVar18 = iVar18 + 1;
          }
          uVar14 = iVar18 - 1;
        }
        else if (uVar16 < uVar22) {
          uVar14 = uVar22 - 1;
        }
      }
      bVar1 = *(byte *)((uVar22 - 1) + param_4 + 1);
      lVar20 = ((longlong)(int)(uint)uVar4 * (longlong)(int)uVar14 + (ulonglong)uVar6 & 0x3fffffff)
               * 4 + (ulonglong)uVar8;
      uVar17 = (ulonglong)uVar5 & 0xffff;
      uVar25 = uVar24;
      uVar21 = (ulonglong)(uVar5 >> 0x10);
      if ((uVar27 & 0xffffffff) != 0) {
        bVar2 = *(byte *)(uVar32 + iVar29);
        uVar31 = uVar27;
        do {
          uVar25 = uVar28 + uVar25;
          iVar18 = (int)uVar17;
          uVar21 = (uVar25 & 0xffffffff) >> 0x10;
          uVar17 = uVar25 & 0xffff;
          *(float *)lVar20 =
               (float)(longlong)(int)(((uint)bVar2 - (uint)bVar1) * iVar18 + (uint)bVar1 * 0x10000)
               * fVar10 - fVar9;
          lVar20 = lVar20 + 4;
          uVar31 = uVar31 - 1;
        } while (uVar31 != 0);
      }
      trapWord(6,uVar28,0);
      uVar15 = (((uVar13 * 0x10000 - uVar25) + uVar28) - 1 & 0xffffffff) / uVar28;
      uVar31 = uVar30 - uVar27;
      if (uVar15 <= (uVar30 - uVar27 & 0xffffffff)) {
        uVar31 = uVar15;
      }
      if ((uVar31 & 0xffffffff) != 0) {
        lVar20 = lVar20 + -4;
        uVar15 = uVar31;
        do {
          iVar18 = iVar26 * (int)uVar21;
          bVar1 = *(byte *)(iVar18 + iVar29);
          uVar25 = uVar28 + uVar25;
          uVar21 = (uVar25 & 0xffffffff) >> 0x10;
          iVar19 = (int)uVar17;
          uVar17 = uVar25 & 0xffff;
          lVar20 = lVar20 + 4;
          *(float *)lVar20 =
               (float)(longlong)
                      (int)(((uint)*(byte *)(uVar32 + iVar29 + iVar18) - (uint)bVar1) * iVar19 +
                           (uint)bVar1 * 0x10000) * fVar10 - fVar9;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar32);
    uVar13 = (ulonglong)(uint)uVar3;
    uVar24 = uVar25;
    uVar28 = uVar30 & 0xffffffff;
  }
  uVar21 = (uVar24 & 0xffffffff) >> 0x10;
  if (uVar13 <= uVar21) {
    uVar21 = uVar13;
  }
  if ((uVar21 != 0) && (iVar29 = 0, uVar32 != 0)) {
    do {
      *(undefined1 *)(iVar29 + param_4) = *(undefined1 *)(iVar26 * (int)uVar21 + iVar12 + iVar29);
      iVar29 = iVar29 + 1;
      uVar32 = uVar32 - 1;
    } while (uVar32 != 0);
    uVar13 = (ulonglong)(uint)uVar3;
    uVar28 = uVar30 & 0xffffffff;
  }
  uVar31 = uVar31 + uVar27;
  *(int *)(param_4 + 0x20) = (int)uVar24 - (int)(uVar21 << 0x10);
  *(short *)((int)param_1 + 0xe) = *(short *)((int)param_1 + 0xe) - (short)uVar21;
  *(short *)((int)param_2 + 0xe) = (short)uVar31 + (short)*(undefined4 *)(param_4 + 0x1c);
  if (uVar21 == uVar13) {
    iVar26 = 0;
  }
  else {
    iVar26 = *(int *)(param_4 + 0x18) + (int)uVar21;
  }
  *(int *)(param_4 + 0x18) = iVar26;
  if ((uVar31 & 0xffffffff) == (uVar28 & 0xffffffff)) {
    uVar11 = 0x2d;
  }
  else {
    uVar11 = 0x2b;
    *(int *)(param_4 + 0x1c) = (int)uVar31 + *(int *)(param_4 + 0x1c);
  }
  return uVar11;
}

