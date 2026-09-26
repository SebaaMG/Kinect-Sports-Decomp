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


void fn_8308B0C0(int param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  short sVar3;
  ushort *puVar4;
  short *psVar5;
  uint uVar6;
  ushort uVar7;
  ushort uVar8;
  short *psVar9;
  
  iVar2 = *(int *)(param_1 + 0xa0);
  puVar4 = (ushort *)(param_2 * 0x10 + iVar2);
  uVar6 = (uint)puVar4[4];
  psVar9 = (short *)(uVar6 * 4 + *(int *)(param_1 + 0xac));
  psVar5 = psVar9 + -2;
  uVar8 = puVar4[4];
  if (*psVar9 == psVar9[-2]) {
    do {
      uVar7 = (ushort)uVar6;
      uVar1 = psVar5[1];
      uVar8 = uVar7;
      if (uVar1 <= param_2) break;
      uVar6 = uVar6 - 1;
      uVar8 = (ushort)uVar6;
      *(undefined4 *)psVar9 = *(undefined4 *)psVar5;
      *(ushort *)((uint)uVar1 * 0x10 + iVar2 + 8) = uVar7;
      psVar9 = psVar9 + -2;
      psVar5 = psVar5 + -2;
    } while (*psVar9 == *psVar5);
  }
  sVar3 = (short)param_2;
  psVar9[1] = sVar3;
  puVar4[4] = uVar8;
  uVar6 = (uint)puVar4[5];
  psVar9 = (short *)(uVar6 * 4 + *(int *)(param_1 + 0xac));
  psVar5 = psVar9 + -2;
  uVar8 = puVar4[5];
  if (*psVar9 == psVar9[-2]) {
    do {
      uVar7 = (ushort)uVar6;
      uVar1 = psVar5[1];
      uVar8 = uVar7;
      if (uVar1 <= param_2) break;
      uVar6 = uVar6 - 1;
      uVar8 = (ushort)uVar6;
      *(undefined4 *)psVar9 = *(undefined4 *)psVar5;
      *(ushort *)((uint)uVar1 * 0x10 + iVar2 + 10) = uVar7;
      psVar9 = psVar9 + -2;
      psVar5 = psVar5 + -2;
    } while (*psVar9 == *psVar5);
  }
  psVar9[1] = sVar3;
  puVar4[5] = uVar8;
  uVar6 = (uint)*puVar4;
  psVar5 = (short *)(uVar6 * 4 + *(int *)(param_1 + 0xb8));
  psVar9 = psVar5 + -2;
  uVar8 = *puVar4;
  if (*psVar5 == psVar5[-2]) {
    do {
      uVar7 = (ushort)uVar6;
      uVar1 = psVar9[1];
      uVar8 = uVar7;
      if (uVar1 <= param_2) break;
      uVar6 = uVar6 - 1;
      uVar8 = (ushort)uVar6;
      *(undefined4 *)psVar5 = *(undefined4 *)psVar9;
      *(ushort *)((uint)uVar1 * 0x10 + iVar2) = uVar7;
      psVar9 = psVar9 + -2;
      psVar5 = psVar5 + -2;
    } while (*psVar5 == *psVar9);
  }
  psVar5[1] = sVar3;
  *puVar4 = uVar8;
  uVar6 = (uint)puVar4[2];
  psVar5 = (short *)(uVar6 * 4 + *(int *)(param_1 + 0xb8));
  psVar9 = psVar5 + -2;
  uVar8 = puVar4[2];
  if (*psVar5 == psVar5[-2]) {
    do {
      uVar7 = (ushort)uVar6;
      uVar1 = psVar9[1];
      uVar8 = uVar7;
      if (uVar1 <= param_2) break;
      uVar6 = uVar6 - 1;
      uVar8 = (ushort)uVar6;
      *(undefined4 *)psVar5 = *(undefined4 *)psVar9;
      *(ushort *)((uint)uVar1 * 0x10 + iVar2 + 4) = uVar7;
      psVar9 = psVar9 + -2;
      psVar5 = psVar5 + -2;
    } while (*psVar5 == *psVar9);
  }
  psVar5[1] = sVar3;
  puVar4[2] = uVar8;
  uVar6 = (uint)puVar4[1];
  psVar5 = (short *)(uVar6 * 4 + *(int *)(param_1 + 0xc4));
  psVar9 = psVar5 + -2;
  uVar8 = puVar4[1];
  if (*psVar5 == psVar5[-2]) {
    do {
      uVar7 = (ushort)uVar6;
      uVar1 = psVar9[1];
      uVar8 = uVar7;
      if (uVar1 <= param_2) break;
      uVar6 = uVar6 - 1;
      uVar8 = (ushort)uVar6;
      *(undefined4 *)psVar5 = *(undefined4 *)psVar9;
      *(ushort *)((uint)uVar1 * 0x10 + iVar2 + 2) = uVar7;
      psVar9 = psVar9 + -2;
      psVar5 = psVar5 + -2;
    } while (*psVar5 == *psVar9);
  }
  psVar5[1] = sVar3;
  puVar4[1] = uVar8;
  uVar6 = (uint)puVar4[3];
  psVar5 = (short *)(uVar6 * 4 + *(int *)(param_1 + 0xc4));
  psVar9 = psVar5 + -2;
  uVar8 = puVar4[3];
  if (*psVar5 == psVar5[-2]) {
    do {
      uVar7 = (ushort)uVar6;
      uVar1 = psVar9[1];
      uVar8 = uVar7;
      if (uVar1 <= param_2) break;
      uVar6 = uVar6 - 1;
      uVar8 = (ushort)uVar6;
      *(undefined4 *)psVar5 = *(undefined4 *)psVar9;
      *(ushort *)((uint)uVar1 * 0x10 + iVar2 + 6) = uVar7;
      psVar9 = psVar9 + -2;
      psVar5 = psVar5 + -2;
    } while (*psVar5 == *psVar9);
  }
  psVar5[1] = sVar3;
  puVar4[3] = uVar8;
  return;
}

