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
extern unsigned int *auStack_c20;
extern int fn_82636758();
extern int fn_828F5688();
extern int fn_829370D8();
extern int fn_82A9A228();
extern int fn_82A9F198();
extern int fn_82F691F0();


undefined8
fn_8293F5D8(int *param_1,undefined8 param_2,int param_3,ulonglong param_4,int param_5,
             uint *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_c20 [3104];
  
  param_1[1] = (int)param_2;
  fn_828F5688(param_2,0);
  if (param_5 == 0) {
    param_5 = (int)param_2 + 0x18;
  }
  *param_1 = param_5;
  param_1[0x19] = param_3;
  param_1[0xc] = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = -1;
  param_1[0x4a] = 0;
  param_1[0x4b] = 1;
  fn_829370D8(param_1);
  param_1[0x4d] = 0;
  param_1[0x17] = 0;
  if ((param_4 & 1) == 0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  else {
    param_1[0x10] = 1;
    param_1[0x11] = 1;
  }
  if ((param_4 & 2) == 0) {
    param_1[0x12] = 0;
  }
  else {
    param_1[0x12] = 1;
  }
  if (param_1[0x4e] == 0) {
    iVar2 = fn_82636758();
    param_1[0x4e] = iVar2;
    if (iVar2 == 0) {
      return 0xffffffff8007000e;
    }
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  if (param_1[0x11] != 0) {
    param_1[0x18] = 4;
  }
  if ((param_6 == (uint *)0x0) || (iVar2 = 1, (*param_6 & 2) == 0)) {
    iVar2 = 0;
  }
  param_1[0x51] = iVar2;
  param_1[0x50] = 0;
  if ((iVar2 != 0) && (param_1[0x4f] == 0)) {
    uVar1 = param_6[5];
    param_1[0x4f] = uVar1;
    if (uVar1 == 0) {
      param_1[0x51] = 0;
    }
    else {
      fn_82A9A228();
      param_1[0x50] = 1;
      uVar3 = 0xffffffffffff0000;
      if (param_1[0x10] != 1) {
        uVar3 = 0xfffffffffffe0000;
      }
      fn_82A9F198(param_1[0x4f],0,uVar3 | 0x3fd);
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_c20,0,0xbdc);
}

