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


void fn_82CD8A98(int param_1,int param_2,int param_3,int param_4,ulonglong param_5,
                  ulonglong param_6,int param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  int in_stack_00000064;
  
  lVar13 = (param_5 & 0xffff) * 0x10000;
  lVar11 = (param_6 & 0xffff) * 0x10000;
  uVar22 = lVar13 - 0x10000;
  uVar12 = (ulonglong)in_stack_00000054 - 1;
  uVar21 = lVar11 - 0x10000;
  uVar1 = (int)uVar22 / (int)uVar12;
  uVar20 = (ulonglong)in_stack_0000005c - 1;
  uVar2 = (int)uVar21 / (int)uVar20;
  puVar16 = (uint *)(param_1 + -2);
  trapWord(6,uVar12,0);
  uVar24 = ((longlong)((int)uVar2 >> 4) + (ulonglong)((int)uVar2 < 0 && (uVar2 & 0xf) != 0) + lVar11
           ) - 0x8000;
  trapWord(6,uVar20,0);
  trapWord(5,uVar12 & ~(((uVar22 & 0x7fffffff) << 1 | (uVar22 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,uVar20 & ~(((uVar21 & 0x7fffffff) << 1 | (uVar21 & 0xffffffff) >> 0x1f) - 1),0xffff);
  iVar18 = ((int)uVar1 >> 4) + (uint)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + (int)lVar13 + -0x8000;
  if (((uint)puVar16 & 3) == 0) {
    iVar17 = 0x8000;
    if (0x7fff < (int)uVar24) {
      uVar12 = uVar24;
      do {
        iVar14 = 0x8000;
        if (0x7fff < iVar18) {
          iVar19 = (iVar17 >> 0x11) * param_8;
          iVar25 = (iVar17 >> 0x10) * param_7 + param_2;
          iVar23 = ((int)(iVar17 + uVar2) >> 0x10) * param_7 + param_2;
          puVar15 = puVar16;
          do {
            iVar6 = iVar14 >> 0x10;
            iVar26 = iVar14 + uVar1;
            iVar7 = iVar14 >> 0x11;
            iVar14 = uVar1 * 2 + iVar14;
            bVar3 = *(byte *)(iVar23 + iVar6);
            iVar26 = iVar26 >> 0x10;
            iVar8 = (uint)*(byte *)(iVar19 + param_4 + iVar7) * 0x1000000;
            iVar7 = (uint)*(byte *)(iVar19 + iVar7 + param_3) * 0x100;
            bVar4 = *(byte *)(iVar23 + iVar26);
            *puVar15 = (uint)*(byte *)(iVar25 + iVar26) + iVar7 |
                       (uint)*(byte *)(iVar25 + iVar6) * 0x10000 + iVar8;
            *(uint *)(in_stack_00000064 * 2 + (int)puVar15) =
                 (uint)bVar4 + iVar7 | (uint)bVar3 * 0x10000 + iVar8;
            puVar15 = puVar15 + -1;
          } while (iVar14 <= iVar18);
          uVar12 = uVar24 & 0xffffffff;
        }
        iVar17 = uVar2 * 2 + iVar17;
        puVar16 = puVar16 + in_stack_00000064;
      } while (iVar17 <= (int)uVar12);
    }
  }
  else {
    iVar17 = 0x8000;
    if (0x7fff < (int)uVar24) {
      uVar12 = uVar24;
      do {
        iVar14 = 0x8000;
        if (0x7fff < iVar18) {
          iVar19 = (iVar17 >> 0x11) * param_8;
          iVar25 = (iVar17 >> 0x10) * param_7 + param_2;
          iVar23 = ((int)(iVar17 + uVar2) >> 0x10) * param_7 + param_2;
          puVar15 = puVar16;
          do {
            iVar6 = iVar14 >> 0x10;
            iVar26 = iVar14 + uVar1;
            iVar7 = iVar14 >> 0x11;
            iVar14 = uVar1 * 2 + iVar14;
            bVar3 = *(byte *)(iVar23 + iVar6);
            iVar26 = iVar26 >> 0x10;
            sVar10 = (ushort)*(byte *)(iVar19 + param_4 + iVar7) * 0x100;
            sVar9 = (ushort)*(byte *)(iVar19 + iVar7 + param_3) * 0x100;
            bVar4 = *(byte *)(iVar25 + iVar26);
            bVar5 = *(byte *)(iVar23 + iVar26);
            *(ushort *)((int)puVar15 + 2) = (ushort)*(byte *)(iVar25 + iVar6) + sVar9;
            *(ushort *)((int)puVar15 + in_stack_00000064 * 2 + 2) = (ushort)bVar3 + sVar9;
            *(ushort *)puVar15 = (ushort)bVar4 + sVar10;
            *(ushort *)(in_stack_00000064 * 2 + (int)puVar15) = (ushort)bVar5 + sVar10;
            puVar15 = puVar15 + -1;
          } while (iVar14 <= iVar18);
          uVar12 = uVar24 & 0xffffffff;
        }
        iVar17 = uVar2 * 2 + iVar17;
        puVar16 = puVar16 + in_stack_00000064;
      } while (iVar17 <= (int)uVar12);
    }
  }
  return;
}

