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


void fn_82CD8D08(longlong param_1,int param_2,int param_3,int param_4,ulonglong param_5,
                  ulonglong param_6,int param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  short sVar10;
  short sVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  ulonglong uVar26;
  int iVar27;
  ulonglong uVar28;
  int iVar29;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  uint in_stack_0000006c;
  
  uVar28 = (ulonglong)in_stack_0000005c;
  lVar14 = (param_6 & 0xffff) * 0x10000;
  uVar16 = lVar14 - 0x10000;
  uVar13 = uVar28 - 1;
  uVar1 = (int)uVar16 / (int)uVar13;
  uVar26 = (param_5 & 0xffff) * 0x10000 - 0x10000;
  uVar24 = (ulonglong)in_stack_00000054 - 1;
  uVar19 = param_1 - 2;
  trapWord(6,uVar13,0);
  uVar12 = ((longlong)((int)uVar1 >> 4) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + lVar14
           ) - 0x8000;
  iVar2 = (int)uVar26 / (int)uVar24;
  trapWord(6,uVar24,0);
  trapWord(5,uVar24 & ~(((uVar26 & 0x7fffffff) << 1 | (uVar26 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,uVar13 & ~(((uVar16 & 0x7fffffff) << 1 | (uVar16 & 0xffffffff) >> 0x1f) - 1),0xffff);
  if ((uVar19 & 3) == 0) {
    iVar20 = 0x8000;
    if (0 < (int)in_stack_00000054) {
      uVar13 = uVar12;
      uVar22 = 0;
      do {
        iVar18 = 0x8000;
        uVar17 = uVar22 + 0x10;
        uVar21 = uVar17;
        if ((int)in_stack_00000054 < (int)uVar17) {
          uVar21 = in_stack_00000054;
        }
        if (0x8000 < (int)uVar13) {
          do {
            iVar27 = (iVar18 >> 0x10) * param_7 + param_2;
            iVar25 = ((int)(iVar18 + uVar1) >> 0x10) * param_7 + param_2;
            if ((int)uVar22 < (int)uVar21) {
              iVar23 = (iVar18 >> 0x11) * param_8;
              lVar14 = (ulonglong)((uVar21 - uVar22) - 1 >> 1) + 1;
              iVar15 = iVar20;
              do {
                iVar6 = iVar15 >> 0x10;
                iVar29 = iVar15 + iVar2;
                iVar7 = iVar15 >> 0x11;
                iVar15 = iVar2 * 2 + iVar15;
                iVar29 = iVar29 >> 0x10;
                iVar8 = (uint)*(byte *)(iVar23 + param_4 + iVar7) * 0x1000000;
                bVar3 = *(byte *)(iVar29 + iVar27);
                iVar7 = (uint)*(byte *)(iVar23 + iVar7 + param_3) * 0x100;
                bVar4 = *(byte *)(iVar29 + iVar25);
                *(uint *)uVar19 =
                     (uint)*(byte *)(iVar6 + iVar27) * 0x10000 + iVar8 |
                     (uint)*(byte *)(iVar6 + iVar25) + iVar7;
                *(uint *)((int)(uint *)uVar19 + in_stack_0000006c * 2) =
                     (uint)bVar3 * 0x10000 + iVar8 | (uint)bVar4 + iVar7;
                uVar19 = uVar19 + ((ulonglong)in_stack_0000006c & 0x3fffffff) * 4;
                lVar14 = lVar14 + -1;
              } while (lVar14 != 0);
              uVar13 = uVar12 & 0xffffffff;
            }
            iVar18 = iVar18 + uVar1 + uVar1;
            uVar19 = (-((longlong)(int)(uVar21 - uVar22) * (longlong)(int)in_stack_0000006c) - 2U &
                     0x7fffffff) * 2 + uVar19;
          } while (iVar18 < (int)uVar13);
        }
        iVar20 = iVar20 + iVar2 * 0x10;
        uVar19 = uVar19 + (((ulonglong)in_stack_0000006c & 0xfffffff) * 0x10 + uVar28 & 0x7fffffff)
                          * 2;
        uVar22 = uVar17;
      } while ((int)uVar17 < (int)in_stack_00000054);
    }
  }
  else {
    iVar20 = 0x8000;
    if (0 < (int)in_stack_00000054) {
      uVar13 = uVar12;
      uVar22 = 0;
      do {
        iVar18 = 0x8000;
        uVar17 = uVar22 + 0x10;
        uVar21 = uVar17;
        if ((int)in_stack_00000054 < (int)uVar17) {
          uVar21 = in_stack_00000054;
        }
        if (0x8000 < (int)uVar13) {
          do {
            iVar27 = (iVar18 >> 0x10) * param_7 + param_2;
            iVar25 = ((int)(iVar18 + uVar1) >> 0x10) * param_7 + param_2;
            if ((int)uVar22 < (int)uVar21) {
              iVar23 = (iVar18 >> 0x11) * param_8;
              lVar14 = (ulonglong)((uVar21 - uVar22) - 1 >> 1) + 1;
              iVar15 = iVar20;
              do {
                iVar6 = iVar15 >> 0x10;
                iVar29 = iVar15 + iVar2;
                iVar7 = iVar15 >> 0x11;
                psVar9 = (short *)uVar19;
                bVar3 = *(byte *)(iVar6 + iVar27);
                iVar15 = iVar2 * 2 + iVar15;
                iVar29 = iVar29 >> 0x10;
                sVar10 = (ushort)*(byte *)(iVar23 + param_4 + iVar7) * 0x100;
                sVar11 = (ushort)*(byte *)(iVar23 + iVar7 + param_3) * 0x100;
                bVar4 = *(byte *)(iVar29 + iVar25);
                bVar5 = *(byte *)(iVar29 + iVar27);
                *psVar9 = (ushort)*(byte *)(iVar6 + iVar25) + sVar10;
                psVar9[1] = (ushort)bVar3 + sVar11;
                psVar9[in_stack_0000006c] = (ushort)bVar4 + sVar10;
                uVar19 = uVar19 + ((ulonglong)in_stack_0000006c & 0x3fffffff) * 4;
                psVar9[in_stack_0000006c + 1] = (ushort)bVar5 + sVar11;
                lVar14 = lVar14 + -1;
              } while (lVar14 != 0);
              uVar13 = uVar12 & 0xffffffff;
            }
            iVar18 = iVar18 + uVar1 + uVar1;
            uVar19 = (-((longlong)(int)(uVar21 - uVar22) * (longlong)(int)in_stack_0000006c) - 2U &
                     0x7fffffff) * 2 + uVar19;
          } while (iVar18 < (int)uVar13);
        }
        iVar20 = iVar20 + iVar2 * 0x10;
        uVar19 = uVar19 + (((ulonglong)in_stack_0000006c & 0xfffffff) * 0x10 + uVar28 & 0x7fffffff)
                          * 2;
        uVar22 = uVar17;
      } while ((int)uVar17 < (int)in_stack_00000054);
    }
  }
  return;
}

