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
extern int fn_82CAB2D8();
extern unsigned int iStack00000024;
extern unsigned int uStack_ac;


void fn_82CAB478(byte *param_1,uint param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  int iStack00000024;
  byte *pbStack_b0;
  uint uStack_ac;
  
  uVar4 = param_3 + 10 >> 3;
  lVar30 = (longlong)(int)uVar4;
  pbStack_b0 = param_1 + param_2 * -5;
  uVar28 = ((ulonglong)uVar4 & 0x7fffffff) << 1;
  uStack_ac = 8;
  pbVar21 = param_1 + -param_2;
  pbVar19 = param_1 + (param_2 & 0x7fffffff) * -2;
  pbVar20 = param_1 + param_2 * 3;
  pbVar18 = param_1 + param_2 * -3;
  pbVar17 = param_1 + (param_2 & 0x3fffffff) * -4;
  iStack00000024 = param_3;
  do {
    uVar11 = (ulonglong)*pbVar18;
    uVar24 = (ulonglong)*pbVar17;
    uVar25 = (ulonglong)*pbVar19;
    uVar12 = (ulonglong)*pbVar21;
    bVar1 = *param_1;
    uVar27 = (ulonglong)bVar1;
    uVar23 = (ulonglong)*pbVar20;
    bVar2 = param_1[param_2];
    uVar26 = (ulonglong)bVar2;
    bVar3 = (param_1 + param_2)[param_2];
    uVar29 = (ulonglong)bVar3;
    uVar22 = uVar12 - uVar27;
    lVar15 = ((-((ulonglong)(uVar28 < (uVar11 - uVar25) + lVar30) - 1) -
              ((ulonglong)(uVar28 < (uVar24 - uVar11) + lVar30) - 1)) -
             ((ulonglong)(uVar28 < (uVar25 - uVar12) + lVar30) - 1)) -
             ((ulonglong)(uVar28 < uVar22 + lVar30) - 1);
    if (lVar15 != 0) {
      lVar15 = ((((-((ulonglong)(uVar28 < (*pbStack_b0 - uVar24) + lVar30) - 1) -
                  ((ulonglong)(uVar28 < (uVar23 - pbVar20[param_2]) + lVar30) - 1)) -
                 ((ulonglong)(uVar28 < (uVar29 - uVar23) + lVar30) - 1)) -
                ((ulonglong)(uVar28 < ((uint)bVar2 - (uint)bVar3) + uVar4) - 1)) -
               ((ulonglong)(uVar28 < (uVar27 - uVar26) + lVar30) - 1)) + lVar15;
    }
    if (((int)lVar15 < 6) ||
       (iVar10 = fn_82CAB2D8(uVar24,uVar11,uVar25,uVar12,uVar27,uVar26,uVar29,uVar23), iVar10 == 0
       )) {
      uVar8 = (uint)uVar22;
      iVar10 = (int)(((uVar25 - uVar26) + 2 & 0xffffffff) << 1) -
               (uVar8 + (int)((uVar22 & 0xffffffff) << 2));
      uVar5 = iVar10 >> 3;
      uVar6 = iVar10 >> 0x1f;
      lVar15 = (longlong)(int)(uVar5 ^ uVar6) - (longlong)(int)uVar6;
      if ((int)lVar15 < iStack00000024) {
        iVar13 = (int)(((uVar24 - uVar12) + 2 & 0xffffffff) << 1) +
                 (int)(uVar25 - uVar11) + (int)((uVar25 - uVar11 & 0xffffffff) << 2);
        iVar10 = (int)(((uVar27 - uVar23) + 2 & 0xffffffff) << 1) +
                 (int)(uVar29 - uVar26) + (int)((uVar29 - uVar26 & 0xffffffff) << 2);
        uVar6 = iVar10 >> 0x1f;
        uVar7 = iVar13 >> 0x1f;
        lVar16 = (longlong)(int)(iVar10 >> 3 ^ uVar6) - (longlong)(int)uVar6;
        lVar14 = (longlong)(int)(iVar13 >> 3 ^ uVar7) - (longlong)(int)uVar7;
        if ((int)lVar14 < (int)lVar16) {
          lVar16 = lVar14;
        }
        uVar11 = lVar15 - lVar16;
        if ((0 < (longlong)uVar11) && ((int)(uVar5 ^ uVar8) < 0)) {
          iVar10 = (int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) >> 1;
          iVar13 = (int)uVar11 + (int)((uVar11 & 0xffffffff) << 2) >> 3;
          if (iVar10 < iVar13) {
            iVar13 = iVar10;
          }
          bVar2 = (char)(uVar22 >> 0x18) >> 7;
          cVar9 = (bVar2 ^ (byte)iVar13) - bVar2;
          *pbVar21 = (char)uVar12 - cVar9;
          *param_1 = cVar9 + bVar1;
        }
      }
    }
    else {
      iVar13 = (int)((uVar29 + uVar11 & 0xffffffff) << 1);
      iVar10 = (int)(uVar29 + uVar11);
      param_1[(param_2 & 0x7fffffff) * -2] =
           (byte)((int)(uVar11 + uVar25) + (int)((uVar11 + uVar25 & 0xffffffff) << 1) + iVar10 + 4
                 >> 3);
      param_1[param_2] = (byte)((int)(((uint)bVar3 + (uint)bVar2) * 3 + iVar10 + 4) >> 3);
      *pbVar21 = (byte)((int)uVar12 + (int)((uVar12 & 0xffffffff) << 1) + iVar13 + (int)uVar11 + 4
                       >> 3);
      *param_1 = (byte)((int)((uint)bVar1 + (uint)bVar1 * 2 + iVar13 + (uint)bVar3 + 4) >> 3);
    }
    uVar11 = (ulonglong)uStack_ac;
    param_1 = param_1 + 1;
    pbVar20 = pbVar20 + 1;
    pbStack_b0 = pbStack_b0 + 1;
    uStack_ac = (uint)(uVar11 - 1);
    pbVar21 = pbVar21 + 1;
    pbVar19 = pbVar19 + 1;
    pbVar18 = pbVar18 + 1;
    pbVar17 = pbVar17 + 1;
  } while (uVar11 - 1 != 0);
  return;
}

