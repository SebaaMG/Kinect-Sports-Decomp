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
#define ZEXT48(x) ((U64)((U32)(x)))


void fn_82A27010(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  byte bVar1;
  byte bVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined2 uVar10;
  ulonglong uVar11;
  uint *puVar12;
  
  iVar4 = (int)param_2;
  bVar1 = *(byte *)(iVar4 + 4);
  iVar5 = (int)param_1;
  uVar9 = (ulonglong)*(ushort *)(iVar4 + 2);
  bVar2 = *(byte *)(iVar4 + 5);
  iVar4 = *(int *)((bVar1 + 0x18) * 4 + iVar5);
  *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + (int)param_3;
  do {
    uVar10 = (undefined2)uVar9;
    puVar6 = (undefined2 *)param_2;
    if ((param_3 & 0xffffffff) == 0) {
      if ((bVar2 & 0x10) != 0) {
        return;
      }
      puVar6[1] = uVar10;
      return;
    }
    if ((param_3 & 0xffffffff) < 0xf001) {
      uVar9 = param_3 & 0xffff;
      *(byte *)((int)puVar6 + 5) = bVar2;
    }
    else {
      uVar9 = 0xfffffffffffff000;
      if ((param_3 & 0xffffffff) == 0xf001) {
        uVar9 = 0xffffffffffffeff0;
      }
      *(undefined1 *)((int)puVar6 + 5) = 0;
    }
    uVar7 = uVar9 & 0xffff;
    puVar6[1] = uVar10;
    *(byte *)(puVar6 + 2) = bVar1;
    *puVar6 = (short)uVar9;
    *(byte *)((int)puVar6 + 5) = *(byte *)((int)puVar6 + 5) & 0xf8;
    if (uVar7 < 0x80) {
      uVar11 = (uVar7 + 0x30) * 8 + param_1;
      puVar12 = (uint *)uVar11;
      if ((ulonglong)*puVar12 == (uVar11 & 0xffffffff)) {
        iVar8 = ((int)(uVar7 >> 5) + 0x58) * 4;
        *(uint *)(iVar8 + iVar5) = 1 << ((uint)uVar7 & 0x1f) | *(uint *)(iVar8 + iVar5);
      }
    }
    else {
      for (puVar12 = *(uint **)(iVar5 + 0x180);
          ((param_1 + 0x180U & 0xffffffff) != ZEXT48(puVar12) && (*(ushort *)(puVar12 + -2) < uVar7)
          ); puVar12 = (uint *)*puVar12) {
      }
    }
    puVar3 = (uint *)puVar12[1];
    *(uint **)(puVar6 + 4) = puVar12;
    param_3 = param_3 - uVar7;
    *(uint **)(puVar6 + 6) = puVar3;
    param_2 = (uVar9 & 0xffff) * 0x10 + param_2;
    *puVar3 = (uint)(puVar6 + 4);
    puVar12[1] = (uint)(puVar6 + 4);
  } while ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(iVar4 + 0x2c));
  return;
}

