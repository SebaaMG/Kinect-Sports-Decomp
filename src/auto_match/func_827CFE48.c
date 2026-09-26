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


void fn_827CFE48(int param_1,int param_2,int *param_3,int param_4,longlong param_5)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  byte *pbVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  int *piVar16;
  ulonglong uVar17;
  
  param_5 = param_5 + -1;
  uVar1 = *(uint *)(param_1 + 0x1c);
  iVar2 = *(int *)(*(int *)(param_1 + 0x150) + 8);
  if (-1 < param_5) {
    param_4 = param_4 << 2;
    piVar16 = (int *)(param_2 + -4);
    do {
      piVar16 = piVar16 + 1;
      puVar15 = *(undefined1 **)(param_4 + *param_3);
      piVar3 = (int *)(param_4 + param_3[1]);
      piVar4 = (int *)(param_3[2] + param_4);
      piVar5 = (int *)(param_4 + param_3[3]);
      param_4 = param_4 + 4;
      if ((ulonglong)uVar1 != 0) {
        puVar14 = (undefined1 *)(*piVar16 + -1);
        iVar11 = *piVar5 - (int)puVar15;
        iVar12 = *piVar3 - (int)puVar15;
        iVar13 = *piVar4 - (int)puVar15;
        uVar17 = (ulonglong)uVar1;
        do {
          pbVar6 = puVar14 + 2;
          lVar7 = -(ulonglong)(byte)puVar14[1];
          pbVar8 = puVar14 + 3;
          puVar14 = puVar14 + 4;
          lVar9 = -(ulonglong)*pbVar6;
          lVar10 = -(ulonglong)*pbVar8;
          puVar15[iVar11] = *puVar14;
          *puVar15 = (char)((uint)(*(int *)((int)((lVar10 + 0x2ffU & 0xffffffff) << 2) + iVar2) +
                                   *(int *)((int)((lVar9 + 0x1ffU & 0xffffffff) << 2) + iVar2) +
                                  *(int *)((int)((lVar7 + 0xffU & 0xffffffff) << 2) + iVar2)) >>
                           0x10);
          puVar15[iVar12] =
               (char)((uint)(*(int *)((int)((lVar10 + 0x5ffU & 0xffffffff) << 2) + iVar2) +
                             *(int *)((int)((lVar9 + 0x4ffU & 0xffffffff) << 2) + iVar2) +
                            *(int *)((int)((lVar7 + 0x3ffU & 0xffffffff) << 2) + iVar2)) >> 0x10);
          puVar15[iVar13] =
               (char)((uint)(*(int *)((int)((lVar10 + 0x7ffU & 0xffffffff) << 2) + iVar2) +
                             *(int *)((int)((lVar9 + 0x6ffU & 0xffffffff) << 2) + iVar2) +
                            *(int *)((int)((lVar7 + 0x5ffU & 0xffffffff) << 2) + iVar2)) >> 0x10);
          puVar15 = puVar15 + 1;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      param_5 = param_5 + -1;
    } while (-1 < param_5);
  }
  return;
}

