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
extern int fn_82F68CC0();


void fn_82A2CBB0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  
  uVar3 = *(uint *)(param_1 + 0x1c);
  uVar4 = *(uint *)(param_1 + 0x14);
  iVar5 = *(int *)(param_1 + 0x20);
  bVar13 = 0;
  uVar9 = uVar3 >> 0xc;
  uVar10 = uVar4 >> 0xc;
  if (*(int *)(param_1 + 0x28) == 0) {
    if (*(uint *)(param_1 + 0x2c) != uVar4) {
      if (*(uint *)(param_1 + 0x2c) + 0x1000 != uVar4) goto LAB_82a2cc30;
      iVar11 = *(int *)(param_1 + 0x24);
      iVar12 = iVar5 + uVar10 + -1;
      goto LAB_82a2cc24;
    }
  }
  else {
    if (uVar10 != 2) goto LAB_82a2cc30;
    iVar12 = *(int *)(param_1 + 0x24);
    iVar11 = iVar5 + 1;
LAB_82a2cc24:
    if (iVar11 != iVar12) goto LAB_82a2cc30;
  }
  bVar13 = 1;
LAB_82a2cc30:
  fn_82F68CC0(param_3,param_1 + 0x50,0x28);
  bVar1 = *(byte *)(param_1 + 0x35);
  bVar13 = (bVar13 | bVar1 & 0xfe) << 6;
  *(byte *)(param_3 + 0x28) = bVar13 | *(byte *)(param_3 + 0x28) & 0x3f;
  if ((param_2 == 0) || ((bVar1 & 8) == 0)) {
    *(byte *)(param_3 + 0x28) = bVar13 | *(byte *)(param_1 + 0x34) & 0x3f;
  }
  else {
    *(byte *)(param_3 + 0x28) = bVar13;
  }
  iVar11 = *(int *)(param_1 + 8);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = *(undefined4 *)(param_1 + 0x40);
  uVar8 = *(undefined4 *)(param_1 + 0x44);
  *(char *)(param_3 + 0x2a) = (char)(uVar9 >> 8);
  uVar2 = *(undefined2 *)(iVar11 + 0x36);
  *(byte *)(param_3 + 0x2b) = (byte)(uVar3 >> 0x1c);
  *(char *)(param_3 + 0x29) = (char)uVar9;
  *(char *)(param_3 + 0x2c) = (char)uVar10;
  *(char *)(param_3 + 0x2d) = (char)(uVar10 >> 8);
  *(byte *)(param_3 + 0x2e) = (byte)(uVar4 >> 0x1c);
  *(char *)(param_3 + 0x2f) = (char)iVar5;
  *(char *)(param_3 + 0x30) = (char)((uint)iVar5 >> 8);
  *(char *)(param_3 + 0x31) = (char)((uint)iVar5 >> 0x10);
  *(undefined2 *)(param_3 + 0x32) = uVar2;
  *(undefined4 *)(param_3 + 0x34) = uVar6;
  *(undefined4 *)(param_3 + 0x38) = uVar7;
  *(undefined4 *)(param_3 + 0x3c) = uVar8;
  return;
}

