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
extern int fn_82A2C1E8();
extern int fn_82F68CC0();


int fn_82A2C3E8(int param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  
  iVar11 = fn_82A2C1E8(param_2);
  if (iVar11 != 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x36);
    *(undefined1 *)(iVar11 + 0x34) = *(undefined1 *)(param_1 + 0x34);
    *(undefined2 *)(iVar11 + 0x36) = uVar1;
    fn_82F68CC0(iVar11 + 0x50,param_1 + 0x50);
    if ((*(byte *)(param_1 + 0x35) & 2) != 0) {
      *(byte *)(iVar11 + 0x35) = *(byte *)(iVar11 + 0x35) | 2;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = *(undefined4 *)(param_1 + 0x1c);
    uVar5 = *(undefined4 *)(param_1 + 0x40);
    uVar6 = *(undefined4 *)(param_1 + 0x44);
    uVar7 = *(undefined4 *)(param_1 + 0x24);
    uVar8 = *(undefined4 *)(param_1 + 0x28);
    uVar9 = *(undefined4 *)(param_1 + 0x2c);
    uVar10 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(iVar11 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(iVar11 + 0x14) = uVar2;
    *(undefined4 *)(iVar11 + 0x18) = uVar3;
    *(undefined4 *)(iVar11 + 0x1c) = uVar4;
    *(undefined4 *)(iVar11 + 0x40) = uVar5;
    *(undefined4 *)(iVar11 + 0x44) = uVar6;
    *(undefined4 *)(iVar11 + 0x24) = uVar7;
    *(undefined4 *)(iVar11 + 0x28) = uVar8;
    *(undefined4 *)(iVar11 + 0x2c) = uVar9;
    *(undefined4 *)(iVar11 + 0x30) = uVar10;
    *(int *)(iVar11 + 0xc) = param_1;
    *(int *)(param_1 + 0xc) = iVar11;
  }
  return iVar11;
}

