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
extern unsigned int *auStack_70;
extern int fn_82281308();
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_8247C020();
extern int fn_8265C9E0();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern int iRam831d3c90;
extern unsigned int lbl_821A8C90;
extern unsigned int lbl_821CC160;
extern unsigned int uRam831d3c94;
extern unsigned int uRam831d3cac;


undefined4 *
fn_8247BB18(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_70 [112];
  
  param_1[5] = 0;
  *param_1 = &lbl_821A8C90;
  fn_82F68CC0(param_1 + 6,param_2,0x18);
  param_1[0xd] = param_4;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  fn_822C5B18(param_1 + 0x16,param_7);
  param_1[0x1d] = 0;
  param_1[0x1c] = param_8;
  uVar3 = *(undefined4 *)(param_3 + 0x8c8);
  param_1[0x1f] = lbl_821CC160;
  param_1[0x1e] = uVar3;
  param_1[1] = param_1;
  param_1[2] = fn_8247C020;
  param_1[3] = fn_82BA02A8;
  param_1[4] = fn_82BA02A8;
  uRam831d3c94 = *param_2;
  uRam831d3cac = param_2[1];
  iRam831d3c90 = param_3;
  lVar1 = fn_8265C9E0(0x68);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1[0x1c];
    uVar2 = fn_822C5B18(auStack_70,param_1 + 0x16);
    uVar3 = fn_82281308(lVar1,0xffffffff831d3c90,param_1,0,param_5,param_6,uVar2,uVar3);
  }
  param_1[5] = uVar3;
  fn_82359C18(param_7);
  return param_1;
}

