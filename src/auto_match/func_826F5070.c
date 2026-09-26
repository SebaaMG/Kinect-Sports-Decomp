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
extern int fn_8267B890();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_82688058();
extern int fn_8268B330();
extern int fn_826F40E8();
extern unsigned int lbl_8200DB84;
extern unsigned int lbl_831E7E64;


undefined4 * fn_826F5070(undefined4 *param_1,int param_2,int *param_3,ulonglong param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  param_1[1] = 1;
  *param_1 = &lbl_8200DB84;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  fn_8268B330(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  if (param_2 != 0) {
    fn_8267C4C8(param_2);
  }
  if (param_1[0xf] != 0) {
    fn_8267C4F0();
  }
  param_1[0xf] = param_2;
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    fn_8267C4C8(iVar1);
  }
  if (param_1[0xe] != 0) {
    fn_8267C4F0();
  }
  param_1[0xe] = iVar1;
  if (param_3 == (int *)0x0) {
    param_3 = (int *)(param_2 + 8);
  }
  if ((param_4 & 0xffffffff) == 0) {
    uVar2 = fn_8267B890(lbl_831E7E64,0x2c,0);
    if ((uVar2 & 0xffffffff) != 0) {
      uVar3 = fn_82688058(uVar2,param_3);
    }
  }
  else {
    uVar2 = fn_8267B890(lbl_831E7E64,0x2c,0);
    if ((uVar2 & 0xffffffff) != 0) {
      uVar3 = fn_826F40E8(uVar2,param_4);
    }
  }
  if (param_1[2] != 0) {
    fn_8267C4F0();
  }
  param_1[2] = uVar3;
  uVar2 = (**(code **)(*param_3 + 0xc))(param_3,4);
  if (uVar2 != 0) {
    fn_8267C4C8(uVar2);
  }
  if (param_1[3] != 0) {
    fn_8267C4F0();
  }
  param_1[3] = (int)uVar2;
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8267C4F0(uVar2);
  }
  uVar2 = (**(code **)(*param_3 + 0xc))(param_3,0xd);
  if (uVar2 != 0) {
    fn_8267C4C8(uVar2);
  }
  if (param_1[4] != 0) {
    fn_8267C4F0();
  }
  param_1[4] = (int)uVar2;
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8267C4F0(uVar2);
  }
  uVar2 = (**(code **)(*param_3 + 0xc))(param_3,0xe);
  if (uVar2 != 0) {
    fn_8267C4C8(uVar2);
  }
  if (param_1[5] != 0) {
    fn_8267C4F0();
  }
  param_1[5] = (int)uVar2;
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8267C4F0(uVar2);
  }
  uVar2 = (**(code **)(*param_3 + 0xc))(param_3,0x12);
  if (uVar2 != 0) {
    fn_8267C4C8(uVar2);
  }
  if (param_1[7] != 0) {
    fn_8267C4F0();
  }
  param_1[7] = (int)uVar2;
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8267C4F0(uVar2);
  }
  uVar2 = (**(code **)(*param_3 + 0xc))(param_3,0x17);
  if (uVar2 != 0) {
    fn_8267C4C8(uVar2);
  }
  if (param_1[6] != 0) {
    fn_8267C4F0();
  }
  param_1[6] = (int)uVar2;
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8267C4F0(uVar2);
  }
  uVar2 = (**(code **)(*param_3 + 0xc))(param_3,1);
  if (uVar2 != 0) {
    fn_8267C4C8(uVar2);
  }
  if (param_1[8] != 0) {
    fn_8267C4F0();
  }
  param_1[8] = (int)uVar2;
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8267C4F0(uVar2);
  }
  uVar2 = (**(code **)(*param_3 + 0xc))(param_3,0x1d);
  if (uVar2 != 0) {
    fn_8267C4C8(uVar2);
  }
  if (param_1[9] != 0) {
    fn_8267C4F0();
  }
  param_1[9] = (int)uVar2;
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8267C4F0(uVar2);
  }
  uVar2 = (**(code **)(*param_3 + 0xc))(param_3,0x1e);
  if (uVar2 != 0) {
    fn_8267C4C8(uVar2);
  }
  if (param_1[10] != 0) {
    fn_8267C4F0();
  }
  param_1[10] = (int)uVar2;
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8267C4F0(uVar2);
  }
  uVar2 = (**(code **)(*param_3 + 0xc))(param_3,0x21);
  if (uVar2 != 0) {
    fn_8267C4C8(uVar2);
  }
  if (param_1[0xb] != 0) {
    fn_8267C4F0();
  }
  param_1[0xb] = (int)uVar2;
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8267C4F0(uVar2);
  }
  uVar2 = (**(code **)(*param_3 + 0xc))(param_3,0x23);
  if (uVar2 != 0) {
    fn_8267C4C8(uVar2);
  }
  if (param_1[0xc] != 0) {
    fn_8267C4F0();
  }
  param_1[0xc] = (int)uVar2;
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8267C4F0(uVar2);
  }
  uVar2 = (**(code **)(*param_3 + 0xc))(param_3,0x22);
  if (uVar2 != 0) {
    fn_8267C4C8(uVar2);
  }
  if (param_1[0xd] != 0) {
    fn_8267C4F0();
  }
  param_1[0xd] = (int)uVar2;
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8267C4F0(uVar2);
  }
  return param_1;
}

