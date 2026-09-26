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
extern int fn_8275EB90();
extern unsigned int lbl_8201482C;


void fn_82760050(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  ushort *puVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint *puVar11;
  
  pbVar2 = *(byte **)(param_1 + 4);
  uVar4 = 1;
  puVar6 = (ushort *)0x0;
  puVar5 = (uint *)0x0;
  bVar1 = *pbVar2;
  if ((bVar1 & 1) == 0) {
    uVar10 = bVar1 >> 1 & 3;
    uVar3 = -(uint)((bVar1 & 8) != 0) & 2;
    iVar8 = uVar3 + 2;
    if ((bVar1 >> 1 & 3) == 0) {
      *(byte **)(param_1 + 4) = pbVar2 + 1;
      return;
    }
    uVar9 = (ulonglong)(bVar1 >> 4);
    puVar11 = (uint *)((((uint)(pbVar2 + uVar10) & ~(uVar10 - 1)) +
                        *(int *)(&lbl_8201482C + uVar10 * 4) * 3 + iVar8) - 1 & ~(uVar3 + 1));
    if (iVar8 == 2) {
      if (uVar9 == 0) {
        uVar9 = (ulonglong)*(ushort *)puVar11;
        puVar11 = (uint *)((int)puVar11 + 2);
      }
      uVar7 = (ulonglong)*(ushort *)(puVar11 + 1);
      puVar6 = (ushort *)((int)puVar11 + 6);
    }
    else {
      if (uVar9 == 0) {
        uVar9 = (ulonglong)*puVar11;
        puVar11 = puVar11 + 1;
      }
      uVar7 = (ulonglong)puVar11[2];
      puVar5 = puVar11 + 3;
    }
  }
  else {
    uVar9 = ((ulonglong)(bVar1 >> 1) & 3) + 1;
    uVar7 = (ulonglong)(bVar1 >> 3) & 0xf;
    puVar6 = (ushort *)(((uint)(pbVar2 + 5) & 0xfffffffe) + 4);
  }
  if (puVar6 == (ushort *)0x0) {
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      if (uVar4 == 0) {
        uVar7 = (ulonglong)*puVar5;
        puVar5 = puVar5 + 1;
        uVar4 = 1;
      }
      if ((uVar4 & uVar7) == 0) {
        puVar5 = puVar5 + 2;
      }
      else {
        puVar5 = puVar5 + 4;
      }
      uVar4 = (uVar4 & 0x7fffffff) << 1;
    }
    *(uint **)(param_1 + 4) = puVar5;
  }
  else {
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      if (0x8000 < uVar4) {
        uVar7 = (ulonglong)(short)*puVar6;
        puVar6 = puVar6 + 1;
        uVar4 = 1;
      }
      if ((uVar4 & uVar7) == 0) {
        puVar6 = puVar6 + 2;
      }
      else {
        puVar6 = puVar6 + 4;
      }
      uVar4 = (uVar4 & 0x7fffffff) << 1;
    }
    *(ushort **)(param_1 + 4) = puVar6;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  fn_8275EB90();
  return;
}

