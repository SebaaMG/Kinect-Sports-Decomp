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


ulonglong fn_82CD8730(ulonglong param_1,int param_2,int param_3,int param_4,ulonglong param_5,
                       ulonglong param_6,int param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  short *psVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  uint in_stack_0000006c;
  
  uVar25 = (ulonglong)in_stack_0000005c;
  lVar11 = (param_6 & 0xffff) * 0x10000;
  uVar14 = lVar11 - 0x10000;
  uVar10 = uVar25 - 1;
  uVar9 = (param_5 & 0xffff) * 0x10000 - 0x10000;
  uVar1 = (int)uVar14 / (int)uVar10;
  uVar23 = (ulonglong)in_stack_00000054 - 1;
  uVar14 = ((uVar14 & 0x7fffffff) << 1 | (uVar14 & 0xffffffff) >> 0x1f) - 1;
  trapWord(6,uVar10,0);
  uVar20 = ((longlong)((int)uVar1 >> 4) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + lVar11
           ) - 0x8000;
  iVar2 = (int)uVar9 / (int)uVar23;
  trapWord(6,uVar23,0);
  trapWord(5,uVar23 & ~(((uVar9 & 0x7fffffff) << 1 | (uVar9 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,uVar10 & ~uVar14,0xffff);
  if ((param_1 & 3) == 0) {
    iVar17 = 0x8000;
    if (0 < (int)in_stack_00000054) {
      uVar9 = uVar20;
      uVar19 = 0;
      do {
        iVar13 = 0x8000;
        uVar15 = uVar19 + 0x10;
        uVar18 = uVar15;
        if ((int)in_stack_00000054 < (int)uVar15) {
          uVar18 = in_stack_00000054;
        }
        if (0x8000 < (int)uVar9) {
          do {
            iVar22 = (int)(iVar13 + uVar1) >> 0x10;
            uVar14 = (ulonglong)iVar22;
            iVar24 = (iVar13 >> 0x10) * param_7 + param_2;
            iVar22 = iVar22 * param_7 + param_2;
            if ((int)uVar19 < (int)uVar18) {
              iVar21 = (iVar13 >> 0x11) * param_8;
              lVar11 = (ulonglong)((uVar18 - uVar19) - 1 >> 1) + 1;
              iVar12 = iVar17;
              do {
                iVar6 = iVar12 >> 0x10;
                iVar26 = iVar12 + iVar2;
                iVar7 = iVar12 >> 0x11;
                iVar12 = iVar2 * 2 + iVar12;
                iVar26 = iVar26 >> 0x10;
                bVar3 = *(byte *)(iVar21 + iVar7 + param_3);
                iVar7 = (uint)*(byte *)(iVar21 + param_4 + iVar7) * 0x1000000;
                bVar4 = *(byte *)(iVar26 + iVar22);
                uVar14 = (ulonglong)*(byte *)(iVar26 + iVar24) + (ulonglong)bVar3 * 0x100;
                *(uint *)param_1 =
                     (uint)*(byte *)(iVar6 + iVar22) * 0x10000 + iVar7 |
                     (uint)*(byte *)(iVar6 + iVar24) + (uint)bVar3 * 0x100;
                *(uint *)((int)(uint *)param_1 + in_stack_0000006c * 2) =
                     (uint)bVar4 * 0x10000 + iVar7 | (uint)uVar14;
                param_1 = param_1 + ((ulonglong)in_stack_0000006c & 0x3fffffff) * 4;
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
              uVar9 = uVar20 & 0xffffffff;
            }
            iVar13 = iVar13 + uVar1 + uVar1;
            param_1 = (2U - (longlong)(int)(uVar18 - uVar19) * (longlong)(int)in_stack_0000006c &
                      0x7fffffff) * 2 + param_1;
          } while (iVar13 < (int)uVar9);
        }
        param_1 = (((ulonglong)in_stack_0000006c & 0xfffffff) * 0x10 - uVar25 & 0x7fffffff) * 2 +
                  param_1;
        iVar17 = iVar17 + iVar2 * 0x10;
        uVar19 = uVar15;
      } while ((int)uVar15 < (int)in_stack_00000054);
    }
  }
  else {
    iVar17 = 0x8000;
    if (0 < (int)in_stack_00000054) {
      uVar9 = uVar20;
      uVar19 = 0;
      do {
        iVar13 = 0x8000;
        uVar15 = uVar19 + 0x10;
        uVar18 = uVar15;
        if ((int)in_stack_00000054 < (int)uVar15) {
          uVar18 = in_stack_00000054;
        }
        if (0x8000 < (int)uVar9) {
          do {
            uVar14 = (ulonglong)(iVar13 >> 0x11);
            iVar24 = (iVar13 >> 0x10) * param_7 + param_2;
            iVar22 = ((int)(iVar13 + uVar1) >> 0x10) * param_7 + param_2;
            if ((int)uVar19 < (int)uVar18) {
              iVar21 = (iVar13 >> 0x11) * param_8;
              lVar11 = (ulonglong)((uVar18 - uVar19) - 1 >> 1) + 1;
              iVar12 = iVar17;
              do {
                iVar6 = iVar12 >> 0x10;
                iVar26 = iVar12 + iVar2;
                iVar7 = iVar12 >> 0x11;
                iVar12 = iVar2 * 2 + iVar12;
                bVar3 = *(byte *)(iVar6 + iVar22);
                iVar26 = iVar26 >> 0x10;
                bVar4 = *(byte *)(iVar26 + iVar24);
                bVar5 = *(byte *)(iVar26 + iVar22);
                sVar8 = (ushort)*(byte *)(iVar21 + param_4 + iVar7) * 0x100;
                uVar14 = (ulonglong)*(byte *)(iVar21 + iVar7 + param_3) << 8;
                psVar16 = (short *)param_1;
                *psVar16 = (ushort)*(byte *)(iVar6 + iVar24) + sVar8;
                psVar16[1] = (ushort)bVar3 + (short)uVar14;
                psVar16[in_stack_0000006c] = (ushort)bVar4 + sVar8;
                psVar16[in_stack_0000006c + 1] = (ushort)bVar5 + (short)uVar14;
                param_1 = param_1 + ((ulonglong)in_stack_0000006c & 0x3fffffff) * 4;
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
              uVar9 = uVar20 & 0xffffffff;
            }
            iVar13 = iVar13 + uVar1 + uVar1;
            param_1 = (2U - (longlong)(int)(uVar18 - uVar19) * (longlong)(int)in_stack_0000006c &
                      0x7fffffff) * 2 + param_1;
          } while (iVar13 < (int)uVar9);
        }
        iVar17 = iVar17 + iVar2 * 0x10;
        param_1 = (((ulonglong)in_stack_0000006c & 0xfffffff) * 0x10 - uVar25 & 0x7fffffff) * 2 +
                  param_1;
        uVar19 = uVar15;
      } while ((int)uVar15 < (int)in_stack_00000054);
    }
  }
  return uVar14;
}

