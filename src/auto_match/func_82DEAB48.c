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
extern int fn_82CE5458();
extern int fn_82CEA280();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82131F88;


void fn_82DEAB48(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte abStack_30 [4];
  float afStack_2c [11];
  
  iVar1 = *param_2;
  iVar2 = iVar1;
  for (iVar3 = *(int *)(iVar1 + 0xc); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
    iVar1 = iVar2;
    iVar2 = iVar3;
  }
  iVar1 = *(int *)(iVar1 + 4);
  if (*(int *)(param_1 + 8) + 0x10 != iVar2) {
    iVar1 = param_2[1];
    iVar2 = iVar1;
    for (iVar3 = *(int *)(iVar1 + 0xc); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
      iVar1 = iVar2;
      iVar2 = iVar3;
    }
    iVar1 = *(int *)(iVar1 + 4);
  }
  uVar4 = 0;
  abStack_30[0] = 0;
  if (iVar1 != -1) {
    abStack_30[0] = fn_82CEA280(param_1 + 0x14,iVar1,0);
    uVar4 = (uint)abStack_30[0];
  }
  if (uVar4 == 0) {
    abStack_30[0] = *(byte *)(param_1 + 0xc);
    uVar4 = (uint)abStack_30[0];
    if (uVar4 == 0xff) {
      return;
    }
  }
  if (uVar4 != 0) {
    iVar1 = param_2[9];
    afStack_2c[0] =
         *(float *)((*(uint *)(iVar1 + 0x5c) ^ *(uint *)(iVar1 + 0x58) ^ *(uint *)(param_1 + 8)) +
                   0x9c);
    if (afStack_2c[0] != lbl_82002AE0) {
      afStack_2c[0] = *(float *)(&lbl_82131F88 + uVar4 * 4) / afStack_2c[0];
      fn_82CE5458(abStack_30,afStack_2c);
      uVar4 = (uint)abStack_30[0];
      if (uVar4 == 0) {
        uVar4 = 1;
      }
    }
    iVar2 = param_2[6];
    if ((*(byte *)(iVar2 + 0xe) == 0) || (uVar4 < *(byte *)(iVar2 + 0xe))) {
      *(char *)(iVar2 + 0xe) = (char)uVar4;
      *(byte *)(iVar2 + 0xf) = *(byte *)(iVar2 + 0xf) & 0xfd;
      iVar2 = param_2[6];
      if (*(int *)(iVar1 + 0x58) == *(int *)(param_1 + 8)) {
        *(byte *)(iVar2 + 0xf) = *(byte *)(iVar2 + 0xf) & 0xfb;
      }
      else {
        *(byte *)(iVar2 + 0xf) = *(byte *)(iVar2 + 0xf) | 4;
      }
    }
  }
  return;
}

