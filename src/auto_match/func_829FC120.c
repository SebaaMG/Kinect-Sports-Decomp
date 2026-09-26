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


void fn_829FC120(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  uVar4 = 0;
  do {
    iVar8 = *(int *)(param_1 + 0x4b6d0) + uVar4;
    uVar1 = *(ushort *)(iVar8 + 4);
    *(ushort *)(iVar8 + 6) = uVar1;
    uVar7 = (uint)*(ushort *)(iVar8 + 0x14);
    if ((uint)uVar1 < (uint)*(ushort *)(iVar8 + 0x14)) {
      uVar7 = (uint)uVar1;
    }
    *(short *)(iVar8 + 6) = (short)uVar7;
    if (*(ushort *)(iVar8 + -0x4fc) <= uVar7) {
      uVar7 = (uint)*(ushort *)(iVar8 + -0x4fc);
    }
    *(short *)(iVar8 + 6) = (short)uVar7;
    if (*(ushort *)(iVar8 + -0x4ec) <= uVar7) {
      uVar7 = (uint)*(ushort *)(iVar8 + -0x4ec);
    }
    *(short *)(iVar8 + 6) = (short)uVar7;
    if (*(ushort *)(iVar8 + 0x504) <= uVar7) {
      uVar7 = (uint)*(ushort *)(iVar8 + 0x504);
    }
    *(short *)(iVar8 + 6) = (short)uVar7;
    if (*(ushort *)(iVar8 + 0x514) <= uVar7) {
      uVar7 = (uint)*(ushort *)(iVar8 + 0x514);
    }
    *(short *)(iVar8 + 6) = (short)uVar7;
    if ((int)(uVar1 - uVar7) < 200) {
      *(ushort *)(iVar8 + 6) = uVar1;
    }
    lVar10 = 0x4e;
    iVar2 = iVar8 + 0x510;
    iVar3 = iVar8 + -0x4f0;
    do {
      iVar5 = iVar3;
      iVar6 = iVar2;
      iVar9 = iVar8;
      uVar1 = *(ushort *)(iVar9 + 0x14);
      *(ushort *)(iVar9 + 0x16) = uVar1;
      uVar7 = (uint)*(ushort *)(iVar9 + 0x24);
      if ((uint)uVar1 < (uint)*(ushort *)(iVar9 + 0x24)) {
        uVar7 = (uint)uVar1;
      }
      *(short *)(iVar9 + 0x16) = (short)uVar7;
      if (*(ushort *)(iVar9 + 4) <= uVar7) {
        uVar7 = (uint)*(ushort *)(iVar9 + 4);
      }
      *(short *)(iVar9 + 0x16) = (short)uVar7;
      if (*(ushort *)(iVar5 + 4) <= uVar7) {
        uVar7 = (uint)*(ushort *)(iVar5 + 4);
      }
      *(short *)(iVar9 + 0x16) = (short)uVar7;
      if (*(ushort *)(iVar5 + 0x14) <= uVar7) {
        uVar7 = (uint)*(ushort *)(iVar5 + 0x14);
      }
      *(short *)(iVar9 + 0x16) = (short)uVar7;
      if (*(ushort *)(iVar5 + -0xc) <= uVar7) {
        uVar7 = (uint)*(ushort *)(iVar5 + -0xc);
      }
      *(short *)(iVar9 + 0x16) = (short)uVar7;
      if (*(ushort *)(iVar6 + 4) <= uVar7) {
        uVar7 = (uint)*(ushort *)(iVar6 + 4);
      }
      *(short *)(iVar9 + 0x16) = (short)uVar7;
      if (*(ushort *)(iVar6 + 0x14) <= uVar7) {
        uVar7 = (uint)*(ushort *)(iVar6 + 0x14);
      }
      *(short *)(iVar9 + 0x16) = (short)uVar7;
      if (*(ushort *)(iVar6 + -0xc) <= uVar7) {
        uVar7 = (uint)*(ushort *)(iVar6 + -0xc);
      }
      *(short *)(iVar9 + 0x16) = (short)uVar7;
      if ((int)(uVar1 - uVar7) < 200) {
        *(ushort *)(iVar9 + 0x16) = uVar1;
      }
      lVar10 = lVar10 + -1;
      iVar8 = iVar9 + 0x10;
      iVar2 = iVar6 + 0x10;
      iVar3 = iVar5 + 0x10;
    } while (lVar10 != 0);
    uVar1 = *(ushort *)(iVar9 + 0x24);
    *(ushort *)(iVar9 + 0x26) = uVar1;
    uVar7 = (uint)*(ushort *)(iVar9 + 0x14);
    if ((uint)uVar1 < (uint)*(ushort *)(iVar9 + 0x14)) {
      uVar7 = (uint)uVar1;
    }
    *(short *)(iVar9 + 0x26) = (short)uVar7;
    if (*(ushort *)(iVar5 + 0x14) <= uVar7) {
      uVar7 = (uint)*(ushort *)(iVar5 + 0x14);
    }
    *(short *)(iVar9 + 0x26) = (short)uVar7;
    if (*(ushort *)(iVar5 + 4) <= uVar7) {
      uVar7 = (uint)*(ushort *)(iVar5 + 4);
    }
    *(short *)(iVar9 + 0x26) = (short)uVar7;
    if (*(ushort *)(iVar6 + 0x14) <= uVar7) {
      uVar7 = (uint)*(ushort *)(iVar6 + 0x14);
    }
    *(short *)(iVar9 + 0x26) = (short)uVar7;
    if (*(ushort *)(iVar6 + 4) <= uVar7) {
      uVar7 = (uint)*(ushort *)(iVar6 + 4);
    }
    *(short *)(iVar9 + 0x26) = (short)uVar7;
    if ((int)(uVar1 - uVar7) < 200) {
      *(ushort *)(iVar9 + 0x26) = uVar1;
    }
    uVar4 = uVar4 + 0x500;
  } while (uVar4 < 0x12c00);
  return;
}

