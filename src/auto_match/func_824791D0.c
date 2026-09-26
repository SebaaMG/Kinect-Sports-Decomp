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
extern unsigned int *auStack_60;
extern int fn_82281308();
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_824794A0();
extern int fn_8265C9E0();
extern int fn_82BA02A8();
extern int iRam831d3c30;
extern unsigned int lbl_821A8C90;
extern unsigned int uRam831d3c34;
extern unsigned int uRam831d3c4c;


undefined4 *
fn_824791D0(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_60 [96];
  
  *param_1 = &lbl_821A8C90;
  param_1[5] = 0;
  param_1[6] = *param_2;
  param_1[7] = param_2[1];
  param_1[8] = param_2[2];
  param_1[9] = param_4;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  fn_822C5B18(param_1 + 0xe,param_6);
  param_1[0x14] = param_7;
  param_1[0x15] = 0;
  param_1[0x16] = *(undefined4 *)(param_3 + 0x8c8);
  param_1[1] = param_1;
  param_1[2] = fn_824794A0;
  param_1[3] = fn_82BA02A8;
  param_1[4] = fn_82BA02A8;
  uRam831d3c34 = *param_2;
  uRam831d3c4c = param_2[1];
  iRam831d3c30 = param_3;
  lVar1 = fn_8265C9E0(0x68);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1[0x14];
    uVar2 = fn_822C5B18(auStack_60,param_1 + 0xe);
    uVar3 = fn_82281308(lVar1,0xffffffff831d3c30,param_1,0,param_5,0,uVar2,uVar3);
  }
  param_1[5] = uVar3;
  fn_82359C18(param_6);
  return param_1;
}

