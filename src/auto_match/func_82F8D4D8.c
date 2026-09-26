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


void fn_82F8D4D8(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 0x16bc);
  if ((int)uVar3 < 0xe) {
    *(uint *)(param_1 + 0x16bc) = uVar3 + 3;
    *(ushort *)(param_1 + 0x16b8) = (ushort)(2 << (uVar3 & 0x3f)) | *(ushort *)(param_1 + 0x16b8);
  }
  else {
    uVar3 = 2 << (uVar3 & 0x3f) | (uint)*(ushort *)(param_1 + 0x16b8);
    *(short *)(param_1 + 0x16b8) = (short)uVar3;
    *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar3;
    iVar4 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar4;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar4) = *(undefined1 *)(param_1 + 0x16b8);
    iVar4 = *(int *)(param_1 + 0x16bc);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16bc) = iVar4 + -0xd;
    *(short *)(param_1 + 0x16b8) = (short)(2 >> (0x10U - iVar4 & 0x3f));
  }
  uVar3 = *(uint *)(param_1 + 0x16bc);
  iVar4 = 0;
  if ((int)uVar3 < 10) {
    *(uint *)(param_1 + 0x16bc) = uVar3 + 7;
    *(ushort *)(param_1 + 0x16b8) = (ushort)(0 << (uVar3 & 0x3f)) | *(ushort *)(param_1 + 0x16b8);
  }
  else {
    uVar3 = 0 << (uVar3 & 0x3f) | (uint)*(ushort *)(param_1 + 0x16b8);
    *(short *)(param_1 + 0x16b8) = (short)uVar3;
    *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar3;
    iVar2 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar2;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar2) = *(undefined1 *)(param_1 + 0x16b8);
    iVar2 = *(int *)(param_1 + 0x16bc);
    *(int *)(param_1 + 0x16bc) = iVar2 + -9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(short *)(param_1 + 0x16b8) = (short)(0 >> (0x10U - iVar2 & 0x3f));
  }
  if (*(int *)(param_1 + 0x16bc) == 0x10) {
    *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         (char)*(undefined2 *)(param_1 + 0x16b8);
    iVar2 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar2;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar2) = *(undefined1 *)(param_1 + 0x16b8);
    *(undefined2 *)(param_1 + 0x16b8) = 0;
    *(undefined4 *)(param_1 + 0x16bc) = 0;
code_r0x82f8d65c:
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  else if (7 < *(int *)(param_1 + 0x16bc)) {
    *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         (char)*(undefined2 *)(param_1 + 0x16b8);
    *(int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + -8;
    *(ushort *)(param_1 + 0x16b8) = (ushort)*(byte *)(param_1 + 0x16b8);
    goto code_r0x82f8d65c;
  }
  uVar3 = *(uint *)(param_1 + 0x16bc);
  if ((int)((*(int *)(param_1 + 0x16b4) - uVar3) + 0xb) < 9) {
    if ((int)uVar3 < 0xe) {
      uVar1 = uVar3 + 3;
      *(ushort *)(param_1 + 0x16b8) = (ushort)(2 << (uVar3 & 0x3f)) | *(ushort *)(param_1 + 0x16b8);
    }
    else {
      uVar3 = 2 << (uVar3 & 0x3f) | (uint)*(ushort *)(param_1 + 0x16b8);
      *(short *)(param_1 + 0x16b8) = (short)uVar3;
      *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar3;
      iVar2 = *(int *)(param_1 + 0x14) + 1;
      *(int *)(param_1 + 0x14) = iVar2;
      *(undefined1 *)(*(int *)(param_1 + 8) + iVar2) = *(undefined1 *)(param_1 + 0x16b8);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      uVar1 = *(int *)(param_1 + 0x16bc) - 0xd;
      *(short *)(param_1 + 0x16b8) = (short)(2 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0x3f));
    }
    *(uint *)(param_1 + 0x16bc) = uVar1;
    if ((int)uVar1 < 10) {
      iVar2 = uVar1 + 7;
      *(ushort *)(param_1 + 0x16b8) = (ushort)(0 << (uVar1 & 0x3f)) | *(ushort *)(param_1 + 0x16b8);
    }
    else {
      uVar3 = 0 << (uVar1 & 0x3f) | (uint)*(ushort *)(param_1 + 0x16b8);
      *(short *)(param_1 + 0x16b8) = (short)uVar3;
      *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar3;
      iVar2 = *(int *)(param_1 + 0x14) + 1;
      *(int *)(param_1 + 0x14) = iVar2;
      *(undefined1 *)(*(int *)(param_1 + 8) + iVar2) = *(undefined1 *)(param_1 + 0x16b8);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      iVar2 = *(int *)(param_1 + 0x16bc) + -9;
      *(short *)(param_1 + 0x16b8) = (short)(0 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0x3f));
    }
    *(int *)(param_1 + 0x16bc) = iVar2;
    if (iVar2 == 0x10) {
      *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
           (char)*(undefined2 *)(param_1 + 0x16b8);
      iVar2 = *(int *)(param_1 + 0x14) + 1;
      *(int *)(param_1 + 0x14) = iVar2;
      *(undefined1 *)(*(int *)(param_1 + 8) + iVar2) = *(undefined1 *)(param_1 + 0x16b8);
      *(undefined2 *)(param_1 + 0x16b8) = 0;
    }
    else {
      if (iVar2 < 8) goto code_r0x82f8d7f8;
      *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
           (char)*(undefined2 *)(param_1 + 0x16b8);
      iVar4 = *(int *)(param_1 + 0x16bc) + -8;
      *(ushort *)(param_1 + 0x16b8) = (ushort)*(byte *)(param_1 + 0x16b8);
    }
    *(int *)(param_1 + 0x16bc) = iVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
code_r0x82f8d7f8:
  *(undefined4 *)(param_1 + 0x16b4) = 7;
  return;
}

