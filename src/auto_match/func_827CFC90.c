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


void fn_827CFC90(int param_1,int param_2,int *param_3,int param_4,longlong param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  int *piVar12;
  ulonglong uVar13;
  
  param_5 = param_5 + -1;
  uVar4 = *(uint *)(param_1 + 0x1c);
  iVar5 = *(int *)(*(int *)(param_1 + 0x150) + 8);
  if (-1 < param_5) {
    param_4 = param_4 << 2;
    piVar12 = (int *)(param_2 + -4);
    do {
      piVar12 = piVar12 + 1;
      piVar6 = (int *)(param_4 + *param_3);
      puVar11 = *(undefined1 **)(param_4 + param_3[1]);
      piVar7 = (int *)(param_3[2] + param_4);
      param_4 = param_4 + 4;
      if ((ulonglong)uVar4 != 0) {
        pbVar10 = (byte *)(*piVar12 + -1);
        iVar8 = *piVar6 - (int)puVar11;
        iVar9 = *piVar7 - (int)puVar11;
        uVar13 = (ulonglong)uVar4;
        do {
          bVar1 = pbVar10[1];
          bVar2 = pbVar10[2];
          pbVar10 = pbVar10 + 3;
          bVar3 = *pbVar10;
          puVar11[iVar8] =
               (char)((uint)(*(int *)((bVar3 + 0x200) * 4 + iVar5) +
                             *(int *)((bVar2 + 0x100) * 4 + iVar5) +
                            *(int *)((uint)bVar1 * 4 + iVar5)) >> 0x10);
          *puVar11 = (char)((uint)(*(int *)((bVar3 + 0x500) * 4 + iVar5) +
                                   *(int *)((bVar2 + 0x400) * 4 + iVar5) +
                                  *(int *)((bVar1 + 0x300) * 4 + iVar5)) >> 0x10);
          puVar11[iVar9] =
               (char)((uint)(*(int *)((bVar3 + 0x700) * 4 + iVar5) +
                             *(int *)((bVar2 + 0x600) * 4 + iVar5) +
                            *(int *)((bVar1 + 0x500) * 4 + iVar5)) >> 0x10);
          puVar11 = puVar11 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      param_5 = param_5 + -1;
    } while (-1 < param_5);
  }
  return;
}

