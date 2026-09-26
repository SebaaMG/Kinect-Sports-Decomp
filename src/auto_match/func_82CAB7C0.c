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


void fn_82CAB7C0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  byte bVar12;
  longlong lVar13;
  byte bVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  byte *pbVar27;
  
  uVar3 = param_3 + 10 >> 3;
  lVar25 = (longlong)(int)uVar3;
  pbVar27 = (byte *)(param_1 + -5);
  lVar17 = 8;
  uVar24 = ((ulonglong)uVar3 & 0x7fffffff) << 1;
  do {
    uVar21 = (ulonglong)pbVar27[3];
    uVar10 = (ulonglong)pbVar27[4];
    uVar9 = (ulonglong)pbVar27[2];
    uVar19 = (ulonglong)pbVar27[1];
    bVar12 = pbVar27[5];
    uVar22 = (ulonglong)bVar12;
    bVar1 = pbVar27[6];
    uVar23 = (ulonglong)bVar1;
    bVar2 = pbVar27[7];
    uVar26 = (ulonglong)bVar2;
    uVar20 = (ulonglong)pbVar27[8];
    uVar18 = uVar10 - uVar22;
    lVar15 = ((-((ulonglong)(uVar24 < (uVar9 - uVar21) + lVar25) - 1) -
              ((ulonglong)(uVar24 < (uVar21 - uVar10) + lVar25) - 1)) -
             ((ulonglong)(uVar24 < (uVar19 - uVar9) + lVar25) - 1)) -
             ((ulonglong)(uVar24 < uVar18 + lVar25) - 1);
    if (lVar15 != 0) {
      lVar15 = ((((-((ulonglong)(uVar24 < (*pbVar27 - uVar19) + lVar25) - 1) -
                  ((ulonglong)(uVar24 < (uVar20 - pbVar27[9]) + lVar25) - 1)) -
                 ((ulonglong)(uVar24 < (uVar26 - uVar20) + lVar25) - 1)) -
                ((ulonglong)(uVar24 < (uVar23 - uVar26) + lVar25) - 1)) -
               ((ulonglong)(uVar24 < (uVar22 - uVar23) + lVar25) - 1)) + lVar15;
    }
    if ((int)lVar15 < 6) {
LAB_82cab970:
      uVar6 = (uint)uVar18;
      iVar8 = (int)(((uVar21 - uVar23) + 2 & 0xffffffff) << 1) -
              (uVar6 + (int)((uVar18 & 0xffffffff) << 2));
      uVar3 = iVar8 >> 3;
      uVar4 = iVar8 >> 0x1f;
      lVar15 = (longlong)(int)(uVar3 ^ uVar4) - (longlong)(int)uVar4;
      if ((int)lVar15 < param_3) {
        iVar11 = (int)(((uVar19 - uVar10) + 2 & 0xffffffff) << 1) +
                 (int)(uVar21 - uVar9) + (int)((uVar21 - uVar9 & 0xffffffff) << 2);
        iVar8 = (int)(((uVar22 - uVar20) + 2 & 0xffffffff) << 1) +
                (int)(uVar26 - uVar23) + (int)((uVar26 - uVar23 & 0xffffffff) << 2);
        uVar4 = iVar8 >> 0x1f;
        uVar5 = iVar11 >> 0x1f;
        lVar16 = (longlong)(int)(iVar8 >> 3 ^ uVar4) - (longlong)(int)uVar4;
        lVar13 = (longlong)(int)(iVar11 >> 3 ^ uVar5) - (longlong)(int)uVar5;
        if ((int)lVar13 < (int)lVar16) {
          lVar16 = lVar13;
        }
        uVar9 = lVar15 - lVar16;
        if ((0 < (longlong)uVar9) && ((int)(uVar3 ^ uVar6) < 0)) {
          iVar8 = (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) >> 1;
          iVar11 = (int)uVar9 + (int)((uVar9 & 0xffffffff) << 2) >> 3;
          if (iVar8 < iVar11) {
            iVar11 = iVar8;
          }
          bVar1 = (char)(uVar18 >> 0x18) >> 7;
          cVar7 = (bVar1 ^ (byte)iVar11) - bVar1;
          bVar14 = (char)uVar10 - cVar7;
          bVar12 = cVar7 + bVar12;
          goto LAB_82caba54;
        }
      }
    }
    else {
      iVar8 = fn_82CAB2D8(uVar19,uVar9,uVar21,uVar10,uVar22,uVar23,uVar26,uVar20);
      if (iVar8 == 0) goto LAB_82cab970;
      iVar11 = (int)((uVar26 + uVar9 & 0xffffffff) << 1);
      iVar8 = (int)(uVar26 + uVar9);
      pbVar27[3] = (byte)((int)(uVar21 + uVar9) + (int)((uVar21 + uVar9 & 0xffffffff) << 1) + iVar8
                          + 4 >> 3);
      bVar14 = (byte)((int)uVar10 + (int)((uVar10 & 0xffffffff) << 1) + iVar11 + (int)uVar9 + 4 >> 3
                     );
      bVar12 = (byte)((int)((uint)bVar12 + (uint)bVar12 * 2 + iVar11 + (uint)bVar2 + 4) >> 3);
      pbVar27[6] = (byte)((int)(((uint)bVar2 + (uint)bVar1) * 3 + iVar8 + 4) >> 3);
LAB_82caba54:
      pbVar27[5] = bVar12;
      pbVar27[4] = bVar14;
    }
    lVar17 = lVar17 + -1;
    pbVar27 = pbVar27 + param_2;
    if (lVar17 == 0) {
      return;
    }
  } while( true );
}

