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
extern unsigned int *auStack_4c;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int uStack_50;


void fn_82300D30(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong lVar11;
  undefined4 auStack_78 [2];
  undefined4 auStack_70 [8];
  undefined4 uStack_50;
  undefined4 auStack_4c [15];
  
  auStack_70[0] = 3;
  auStack_70[2] = 5;
  auStack_70[4] = 4;
  lVar11 = 3;
  auStack_70[1] = 0x13;
  puVar9 = auStack_78;
  auStack_70[3] = 0x10;
  puVar7 = (undefined4 *)(param_1 + -4);
  auStack_70[5] = 0x11;
  do {
    puVar3 = puVar9 + 3;
    puVar9 = puVar9 + 2;
    uVar1 = *puVar9;
    puVar7[3] = *puVar3;
    puVar7 = puVar7 + 4;
    *puVar7 = uVar1;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  auStack_4c[0xc] = 4;
  auStack_4c[0xd] = 5;
  auStack_4c[5] = 6;
  auStack_4c[6] = 6;
  auStack_4c[1] = 0xf;
  auStack_4c[0] = 0xe;
  auStack_4c[3] = 0;
  uStack_50 = 2;
  auStack_4c[2] = 1;
  iVar5 = 0;
  auStack_4c[4] = 1;
  uVar8 = 0;
  auStack_4c[7] = 7;
  puVar9 = &uStack_50;
  auStack_4c[8] = 8;
  auStack_4c[9] = 2;
  auStack_4c[10] = 3;
  auStack_4c[0xb] = 7;
  do {
    uVar1 = *puVar9;
    iVar10 = 0;
    lVar11 = 2;
    do {
      iVar6 = uVar8 + iVar10;
      iVar4 = iVar5 + iVar10;
      iVar10 = iVar10 + 1;
      iVar4 = iVar4 * 0x10 + param_1;
      uVar2 = auStack_4c[iVar6];
      *(undefined4 *)(iVar4 + 0x3c) = uVar1;
      *(undefined4 *)(iVar4 + 0x38) = uVar2;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    uVar8 = uVar8 + 3;
    puVar9 = puVar9 + 3;
    iVar5 = iVar5 + 2;
  } while (uVar8 < 0xf);
  return;
}

