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
extern int fn_8227CB30();
extern int fn_822997C8();
extern int fn_82299948();
extern int fn_8229A7B8();
extern int fn_8229CDE0();
extern int fn_822A0E10();
extern int fn_82359C18();
extern int fn_8265C9E0();
extern unsigned int lbl_821ABD7C;
extern unsigned int lbl_821ABD80;


undefined4 *
fn_822A08D0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,int param_6,undefined4 param_7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined **ppuStack_50;
  undefined4 *puStack_4c;
  undefined ***pppuStack_40;
  
  fn_8229A7B8();
  param_1[0xb] = param_5;
  param_1[0xc] = param_6;
  param_1[0xd] = param_7;
  *param_1 = &lbl_821ABD7C;
  uVar1 = fn_8265C9E0(0x1230);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82299948(uVar1,0,0);
  }
  param_1[0xe] = uVar2;
  iVar3 = fn_8265C9E0(0x1230);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_822997C8();
  }
  param_1[0xf] = uVar2;
  uVar1 = fn_8265C9E0(0x1230);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82299948(uVar1,4,0);
  }
  param_1[0x10] = uVar2;
  param_1[0x11] = 0;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x34] = 0;
  uVar1 = fn_8265C9E0(0x10);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_8229CDE0(uVar1,param_4,(param_6 != 0) + '\x03');
  }
  param_1[0x35] = uVar2;
  pppuStack_40 = &ppuStack_50;
  *(undefined2 *)(param_1 + 0x14) = 0;
  ppuStack_50 = &lbl_821ABD80;
  puStack_4c = param_1;
  fn_8227CB30((ulonglong)(uint)param_1[3] + 0x120,&ppuStack_50);
  fn_82359C18(&ppuStack_50);
  fn_822A0E10(param_1,1);
  return param_1;
}

