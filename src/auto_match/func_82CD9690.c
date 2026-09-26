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


void fn_82CD9690(int param_1,int param_2,int param_3,int param_4,ulonglong param_5,
                  ulonglong param_6,int param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  int in_stack_00000064;
  
  lVar11 = (param_5 & 0xffff) * 0x10000;
  lVar10 = (param_6 & 0xffff) * 0x10000;
  uVar21 = lVar11 - 0x10000;
  uVar20 = (ulonglong)in_stack_00000054 - 1;
  uVar19 = lVar10 - 0x10000;
  uVar1 = (int)uVar21 / (int)uVar20;
  uVar18 = (ulonglong)in_stack_0000005c - 1;
  uVar2 = (int)uVar19 / (int)uVar18;
  puVar14 = (uint *)(param_1 + -2);
  uVar23 = ((longlong)((int)uVar2 >> 4) + (ulonglong)((int)uVar2 < 0 && (uVar2 & 0xf) != 0) + lVar10
           ) - 0x8000;
  trapWord(6,uVar20,0);
  trapWord(6,uVar18,0);
  trapWord(5,uVar20 & ~(((uVar21 & 0x7fffffff) << 1 | (uVar21 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,uVar18 & ~(((uVar19 & 0x7fffffff) << 1 | (uVar19 & 0xffffffff) >> 0x1f) - 1),0xffff);
  iVar16 = ((int)uVar1 >> 4) + (uint)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + (int)lVar11 + -0x8000;
  iVar15 = 0x8000;
  if (((uint)puVar14 & 3) == 0) {
    if (0x7fff < (int)uVar23) {
      uVar18 = uVar23;
      do {
        iVar12 = 0x8000;
        if (0x7fff < iVar16) {
          iVar17 = (iVar15 >> 0x11) * param_8;
          iVar24 = (iVar15 >> 0x10) * param_7 + param_2;
          iVar22 = ((int)(iVar15 + uVar2) >> 0x10) * param_7 + param_2;
          puVar13 = puVar14;
          do {
            iVar8 = iVar12 >> 0x10;
            iVar25 = iVar12 + uVar1;
            iVar9 = iVar12 >> 0x11;
            iVar12 = uVar1 * 2 + iVar12;
            bVar3 = *(byte *)(iVar22 + iVar8);
            iVar25 = iVar25 >> 0x10;
            bVar4 = *(byte *)(iVar17 + iVar9 + param_3);
            iVar9 = (uint)*(byte *)(iVar17 + param_4 + iVar9) * 0x10000;
            bVar5 = *(byte *)(iVar22 + iVar25);
            *puVar13 = (uint)*(byte *)(iVar24 + iVar25) * 0x100 + (uint)bVar4 |
                       (uint)*(byte *)(iVar24 + iVar8) * 0x1000000 + iVar9;
            *(uint *)(in_stack_00000064 * 2 + (int)puVar13) =
                 (uint)bVar5 * 0x100 + (uint)bVar4 | (uint)bVar3 * 0x1000000 + iVar9;
            puVar13 = puVar13 + -1;
          } while (iVar12 <= iVar16);
          uVar18 = uVar23 & 0xffffffff;
        }
        iVar15 = uVar2 * 2 + iVar15;
        puVar14 = puVar14 + in_stack_00000064;
      } while (iVar15 <= (int)uVar18);
    }
  }
  else if (0x7fff < (int)uVar23) {
    uVar18 = uVar23;
    do {
      iVar12 = 0x8000;
      if (0x7fff < iVar16) {
        iVar17 = (iVar15 >> 0x11) * param_8;
        iVar24 = (iVar15 >> 0x10) * param_7 + param_2;
        iVar22 = ((int)(iVar15 + uVar2) >> 0x10) * param_7 + param_2;
        puVar13 = puVar14;
        do {
          iVar8 = iVar12 >> 0x10;
          iVar25 = iVar12 + uVar1;
          iVar9 = iVar12 >> 0x11;
          iVar12 = uVar1 * 2 + iVar12;
          bVar3 = *(byte *)(iVar22 + iVar8);
          bVar4 = *(byte *)(iVar17 + param_4 + iVar9);
          iVar25 = iVar25 >> 0x10;
          bVar5 = *(byte *)(iVar17 + iVar9 + param_3);
          bVar6 = *(byte *)(iVar24 + iVar25);
          bVar7 = *(byte *)(iVar22 + iVar25);
          *(ushort *)((int)puVar13 + 2) = (ushort)*(byte *)(iVar24 + iVar8) * 0x100 + (ushort)bVar5;
          *(ushort *)((int)puVar13 + in_stack_00000064 * 2 + 2) =
               (ushort)bVar3 * 0x100 + (ushort)bVar5;
          *(ushort *)puVar13 = (ushort)bVar6 * 0x100 + (ushort)bVar4;
          *(ushort *)(in_stack_00000064 * 2 + (int)puVar13) = (ushort)bVar7 * 0x100 + (ushort)bVar4;
          puVar13 = puVar13 + -1;
        } while (iVar12 <= iVar16);
        uVar18 = uVar23 & 0xffffffff;
      }
      iVar15 = uVar2 * 2 + iVar15;
      puVar14 = puVar14 + in_stack_00000064;
    } while (iVar15 <= (int)uVar18);
  }
  return;
}

