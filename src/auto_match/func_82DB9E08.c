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


void fn_82DB9E08(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  puVar3 = param_1 + 0x18;
  lVar5 = 7;
  param_1[3] = param_2[3];
  puVar4 = (undefined4 *)((uint)(param_2 + 4) & 0xfffffff0);
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar8 = puVar4[3];
  puVar1 = (undefined4 *)((uint)(param_1 + 4) & 0xfffffff0);
  *puVar1 = *puVar4;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  puVar4 = param_2 + 0x18;
  puVar1 = (undefined4 *)((uint)(param_2 + 8) & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(param_1 + 8) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  puVar1 = (undefined4 *)((uint)(param_2 + 0xc) & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(param_1 + 0xc) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  puVar1 = (undefined4 *)((uint)(param_2 + 0x10) & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(param_1 + 0x10) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar4 = param_2 + 0x1f;
  puVar3 = param_1 + 0x1f;
  lVar5 = 7;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar4 = param_2 + 0x26;
  puVar3 = param_1 + 0x26;
  lVar5 = 7;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar4 = param_2 + 0x2d;
  puVar3 = param_1 + 0x2d;
  lVar5 = 7;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar4 = param_2 + 0x34;
  puVar3 = param_1 + 0x34;
  lVar5 = 7;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar4 = param_2 + 0x3b;
  puVar3 = param_1 + 0x3b;
  lVar5 = 7;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  param_1[0x43] = param_2[0x43];
  param_1[0x44] = param_2[0x44];
  param_1[0x45] = param_2[0x45];
  param_1[0x46] = param_2[0x46];
  param_1[0x47] = param_2[0x47];
  param_1[0x48] = param_2[0x48];
  *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_2 + 0x49);
  *(undefined1 *)((int)param_1 + 0x125) = *(undefined1 *)((int)param_2 + 0x125);
  *(undefined1 *)((int)param_1 + 0x126) = *(undefined1 *)((int)param_2 + 0x126);
  *(undefined1 *)((int)param_1 + 0x127) = *(undefined1 *)((int)param_2 + 0x127);
  return;
}

