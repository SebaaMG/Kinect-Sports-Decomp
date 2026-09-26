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


void fn_82CD9078(uint *param_1,int param_2,int param_3,int param_4,ulonglong param_5,
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
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  int in_stack_00000064;
  
  lVar12 = (param_5 & 0xffff) * 0x10000;
  lVar10 = (param_6 & 0xffff) * 0x10000;
  uVar20 = lVar12 - 0x10000;
  uVar11 = (ulonglong)in_stack_00000054 - 1;
  uVar19 = lVar10 - 0x10000;
  uVar1 = (int)uVar20 / (int)uVar11;
  uVar18 = (ulonglong)in_stack_0000005c - 1;
  uVar2 = (int)uVar19 / (int)uVar18;
  uVar22 = ((longlong)((int)uVar2 >> 4) + (ulonglong)((int)uVar2 < 0 && (uVar2 & 0xf) != 0) + lVar10
           ) - 0x8000;
  trapWord(6,uVar11,0);
  trapWord(6,uVar18,0);
  trapWord(5,uVar11 & ~(((uVar20 & 0x7fffffff) << 1 | (uVar20 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,uVar18 & ~(((uVar19 & 0x7fffffff) << 1 | (uVar19 & 0xffffffff) >> 0x1f) - 1),0xffff);
  iVar16 = ((int)uVar1 >> 4) + (uint)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + (int)lVar12 + -0x8000;
  iVar15 = 0x8000;
  if (((uint)param_1 & 3) == 0) {
    if (0x7fff < (int)uVar22) {
      uVar11 = uVar22;
      do {
        iVar13 = 0x8000;
        if (0x7fff < iVar16) {
          iVar17 = (iVar15 >> 0x11) * param_8;
          iVar23 = (iVar15 >> 0x10) * param_7 + param_2;
          iVar21 = ((int)(iVar15 + uVar2) >> 0x10) * param_7 + param_2;
          puVar14 = param_1;
          do {
            iVar8 = iVar13 >> 0x10;
            iVar24 = iVar13 + uVar1;
            iVar9 = iVar13 >> 0x11;
            iVar13 = uVar1 * 2 + iVar13;
            bVar3 = *(byte *)(iVar21 + iVar8);
            iVar24 = iVar24 >> 0x10;
            bVar4 = *(byte *)(iVar17 + iVar9 + param_3);
            iVar9 = (uint)*(byte *)(iVar17 + param_4 + iVar9) * 0x10000;
            bVar5 = *(byte *)(iVar21 + iVar24);
            *puVar14 = (uint)*(byte *)(iVar23 + iVar24) * 0x1000000 + iVar9 |
                       (uint)*(byte *)(iVar23 + iVar8) * 0x100 + (uint)bVar4;
            *(uint *)(in_stack_00000064 * 2 + (int)puVar14) =
                 (uint)bVar5 * 0x1000000 + iVar9 | (uint)bVar3 * 0x100 + (uint)bVar4;
            puVar14 = puVar14 + 1;
          } while (iVar13 <= iVar16);
          uVar11 = uVar22 & 0xffffffff;
        }
        iVar15 = uVar2 * 2 + iVar15;
        param_1 = param_1 + in_stack_00000064;
      } while (iVar15 <= (int)uVar11);
    }
  }
  else if (0x7fff < (int)uVar22) {
    uVar11 = uVar22;
    do {
      iVar13 = 0x8000;
      if (0x7fff < iVar16) {
        iVar17 = (iVar15 >> 0x11) * param_8;
        iVar23 = (iVar15 >> 0x10) * param_7 + param_2;
        iVar21 = ((int)(iVar15 + uVar2) >> 0x10) * param_7 + param_2;
        puVar14 = param_1;
        do {
          iVar8 = iVar13 >> 0x10;
          iVar24 = iVar13 + uVar1;
          iVar9 = iVar13 >> 0x11;
          iVar13 = uVar1 * 2 + iVar13;
          bVar3 = *(byte *)(iVar21 + iVar8);
          bVar4 = *(byte *)(iVar17 + param_4 + iVar9);
          bVar5 = *(byte *)(iVar17 + iVar9 + param_3);
          iVar24 = iVar24 >> 0x10;
          bVar6 = *(byte *)(iVar23 + iVar24);
          bVar7 = *(byte *)(iVar21 + iVar24);
          *(ushort *)puVar14 = (ushort)*(byte *)(iVar23 + iVar8) * 0x100 + (ushort)bVar4;
          *(ushort *)(in_stack_00000064 * 2 + (int)puVar14) = (ushort)bVar3 * 0x100 + (ushort)bVar4;
          *(ushort *)((int)puVar14 + 2) = (ushort)bVar6 * 0x100 + (ushort)bVar5;
          *(ushort *)(in_stack_00000064 * 2 + 2 + (int)puVar14) =
               (ushort)bVar7 * 0x100 + (ushort)bVar5;
          puVar14 = puVar14 + 1;
        } while (iVar13 <= iVar16);
        uVar11 = uVar22 & 0xffffffff;
      }
      iVar15 = uVar2 * 2 + iVar15;
      param_1 = param_1 + in_stack_00000064;
    } while (iVar15 <= (int)uVar11);
  }
  return;
}

