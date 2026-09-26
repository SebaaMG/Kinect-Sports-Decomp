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
extern unsigned int *auStack_30;
extern int fn_826824B0();
extern int fn_82699740();
extern int fn_8269A458();
extern int fn_8269AE88();
extern int fn_826A1050();
extern int fn_826B1560();
extern int fn_82715660();
extern int fn_827167C8();
extern unsigned int lbl_8200F7F8;
extern unsigned int lbl_8200F84C;
extern unsigned int lbl_8200F858;


undefined4 *
fn_82716FF0(undefined4 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 auStack_30 [12];
  
  auStack_30[0] = *param_5;
  fn_826A1050(param_1,param_3,param_4,auStack_30);
  param_1[0x27] = param_2;
  param_1[0x28] = 0;
  *param_1 = &lbl_8200F858;
  param_1[3] = &lbl_8200F84C;
  param_1[0x1a] = &lbl_8200F7F8;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  fn_82715660(param_1,*(undefined4 *)(param_2 + 0x30));
  if (*(char *)(param_1[0x27] + 0x14) == '\0') {
    uVar4 = param_1[0x23] & 0xffffdfff;
  }
  else {
    uVar4 = param_1[0x23] | 0x2000;
  }
  param_1[0x23] = uVar4;
  fn_82699740(param_1 + 0x29,*(undefined4 *)(param_1[0x27] + 0x1c));
  uVar1 = fn_8269A458(param_1);
  uVar2 = fn_8269AE88(param_1);
  iVar3 = fn_826B1560(uVar2,uVar1,9);
  if (iVar3 != 0) {
    *(uint *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1U & 0x8fffffff;
  }
  if (param_1[0x1b] != 0) {
    fn_826824B0();
  }
  param_1[0x1b] = iVar3;
  fn_827167C8(param_1);
  return param_1;
}

