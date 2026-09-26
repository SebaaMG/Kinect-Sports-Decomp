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
extern int fn_827F3A60();
extern int fn_827F3BA8();
extern int fn_827F3BD8();
extern int fn_827F3C28();
extern int fn_827F3C30();
extern int fn_827F3C48();
extern int fn_827F3EB0();
extern int fn_827F69E0();
extern int fn_82F68CC0();


void fn_827F5458(int *param_1)

{
  bool bVar1;
  ushort uVar2;
  short sVar9;
  int iVar7;
  int iVar8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar10;
  
  sVar9 = fn_827F3C30();
  if (sVar9 == 1) {
    fn_827F3C48(param_1,0);
    iVar7 = fn_827F3BD8();
    iVar8 = fn_827F3BA8(param_1);
    if (iVar8 == iVar7) {
      return;
    }
    fn_827F3C48(param_1,0);
    uVar3 = fn_827F3A60();
    fn_827F3C48(param_1,0);
    uVar4 = fn_827F3BD8();
    uVar5 = fn_827F3BA8(param_1);
    fn_82F68CC0(uVar5,uVar4,uVar3);
    return;
  }
  iVar7 = fn_827F3EB0(param_1);
  if (iVar7 != 0) {
    fn_827F3C48(param_1,1);
    uVar3 = fn_827F3C28();
    lVar6 = fn_827F69E0(uVar3,0);
    *(byte *)(param_1 + 0x37) = *(byte *)(param_1 + 0x37) & 0xbf | (lVar6 != 0) << 6;
  }
  uVar2 = *(ushort *)(param_1 + 8);
  if (uVar2 == 0) {
    if (param_1[0x10] == 0) {
      if (param_1[0xf] == 0) {
        pcVar10 = *(code **)(*param_1 + 0x1c);
      }
      else {
        pcVar10 = *(code **)(*param_1 + 0x20);
      }
    }
    else if (param_1[0xf] == 0) {
      pcVar10 = *(code **)(*param_1 + 0x14);
    }
    else {
      pcVar10 = *(code **)(*param_1 + 0x18);
    }
    goto LAB_827f56a0;
  }
  if (uVar2 == 1) {
    if (param_1[0x10] != 0) {
      if (param_1[0xf] == 0) {
        pcVar10 = *(code **)(*param_1 + 0x24);
      }
      else {
        pcVar10 = *(code **)(*param_1 + 0x28);
      }
      goto LAB_827f56a0;
    }
    bVar1 = param_1[0xf] == 0;
    iVar7 = *param_1;
  }
  else {
    if (uVar2 < 3) {
      iVar7 = *param_1;
      if ((*(byte *)(param_1 + 0x37) & 0x40) == 0) {
        if (param_1[0xf] != 0) {
          pcVar10 = *(code **)(iVar7 + 0x40);
        }
        else {
          pcVar10 = *(code **)(iVar7 + 0x3c);
        }
      }
      else if (param_1[0xf] != 0) {
        pcVar10 = *(code **)(iVar7 + 0x38);
      }
      else {
        pcVar10 = *(code **)(iVar7 + 0x34);
      }
      goto LAB_827f56a0;
    }
    if (uVar2 != 3) {
      if (uVar2 < 5) {
        if (param_1[0xf] == 0) {
          pcVar10 = *(code **)(*param_1 + 0x4c);
        }
        else {
          pcVar10 = *(code **)(*param_1 + 0x50);
        }
      }
      else {
        if (uVar2 != 5) {
          return;
        }
        if (param_1[0xf] == 0) {
          pcVar10 = *(code **)(*param_1 + 0x54);
        }
        else {
          pcVar10 = *(code **)(*param_1 + 0x58);
        }
      }
      goto LAB_827f56a0;
    }
    bVar1 = param_1[0xf] == 0;
    iVar7 = *param_1;
    if ((*(byte *)(param_1 + 0x37) & 0x40) == 0) {
      if (bVar1) {
        pcVar10 = *(code **)(iVar7 + 0x44);
      }
      else {
        pcVar10 = *(code **)(iVar7 + 0x48);
      }
      goto LAB_827f56a0;
    }
  }
  if (bVar1) {
    pcVar10 = *(code **)(iVar7 + 0x2c);
  }
  else {
    pcVar10 = *(code **)(iVar7 + 0x30);
  }
LAB_827f56a0:
  (*pcVar10)(param_1);
  return;
}

