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
extern int fn_826909B0();
extern int fn_82690A98();


void fn_82690F08(undefined8 param_1,longlong param_2,uint param_3,char param_4,char param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = (int)param_2;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xc);
  if (0x20 < uVar3) {
    uVar3 = *(uint *)(iVar1 + 0x10);
  }
  if (param_4 != '\0') {
    uVar4 = (uint)*(ushort *)(iVar1 + -2);
    if (0x20 < *(ushort *)(iVar1 + -2)) {
      uVar4 = *(uint *)(iVar1 + -8);
    }
    param_2 = param_2 - (ulonglong)(uVar4 << (param_3 & 0x3f));
    uVar4 = (uint)*(ushort *)((int)param_2 + 0xc);
    if (0x20 < uVar4) {
      uVar4 = *(uint *)((int)param_2 + 0x10);
    }
    uVar3 = uVar4 + uVar3;
    fn_82690A98(param_1,param_2);
  }
  if (param_5 != '\0') {
    uVar4 = (uint)*(ushort *)(iVar1 + 0xc);
    if (0x20 < *(ushort *)(iVar1 + 0xc)) {
      uVar4 = *(uint *)(iVar1 + 0x10);
    }
    iVar1 = (uVar4 << (param_3 & 0x3f)) + iVar1;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xc);
    if (0x20 < uVar4) {
      uVar4 = *(uint *)(iVar1 + 0x10);
    }
    uVar3 = uVar4 + uVar3;
    fn_82690A98(param_1);
  }
  iVar2 = (int)param_2;
  iVar1 = (uVar3 << (param_3 & 0x3f)) + iVar2;
  if (uVar3 < 0x21) {
    *(short *)(iVar1 + -2) = (short)uVar3;
    *(short *)(iVar2 + 0xc) = (short)uVar3;
  }
  else {
    *(undefined2 *)(iVar1 + -2) = 0x21;
    *(undefined2 *)(iVar2 + 0xc) = 0x21;
    *(uint *)(iVar1 + -8) = uVar3;
    *(uint *)(iVar2 + 0x10) = uVar3;
  }
  fn_826909B0(param_1,param_2);
  return;
}

