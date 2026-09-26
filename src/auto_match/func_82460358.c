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
extern int fn_8246B2A8();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C6D70;


void fn_82460358(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 in_r0;
  int iVar5;
  int iVar6;
  uint uVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  iVar2 = *(int *)(param_1 + 0x50);
  uVar7 = 0;
  dVar8 = (double)lbl_821CC160;
  do {
    iVar6 = uVar7 * 0x40 + iVar2;
    iVar3 = *(int *)(iVar6 + 0x34);
    if (iVar3 != 0) {
      uVar1 = *(undefined4 *)(iVar6 + 0x30);
      puVar4 = (undefined4 *)(iVar6 + 0x20U & 0xfffffff0);
      uVar9 = *puVar4;
      uVar10 = puVar4[1];
      uVar11 = puVar4[2];
      uVar12 = puVar4[3];
      *(undefined4 *)(iVar3 + 0x30) = 0;
      *(undefined4 *)(iVar3 + 0x20) = uVar1;
      puVar4 = (undefined4 *)((int)in_r0 + iVar3 + 0x10 & 0xfffffff0);
      *puVar4 = uVar9;
      puVar4[1] = uVar10;
      puVar4[2] = uVar11;
      puVar4[3] = uVar12;
      puVar4 = (undefined4 *)(iVar3 + 0xa0U & 0xfffffff0);
      *puVar4 = uVar9;
      puVar4[1] = uVar10;
      puVar4[2] = uVar11;
      puVar4[3] = uVar12;
      *(float *)(iVar3 + 0xb8) = (float)dVar8;
      *(undefined4 *)(iVar3 + 0xb4) = uVar1;
      iVar5 = iVar2 + 0x94;
      *(float *)(iVar3 + 0xb0) = (float)dVar8;
      if (uVar7 != 0) {
        iVar5 = iVar2 + 0x90;
      }
      iVar3 = *(int *)(iVar6 + 0x34);
      *(undefined4 *)(iVar3 + 0x8c) = lbl_831C6D70;
      *(float *)(iVar3 + 0x90) = (float)dVar8;
      fn_8246B2A8(iVar3,iVar5);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 2);
  return;
}

