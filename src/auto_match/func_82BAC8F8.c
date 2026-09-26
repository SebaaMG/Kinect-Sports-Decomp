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
extern int fn_82AB1538();
extern int fn_82BC7368();
extern unsigned int lbl_820E2FEC;


void fn_82BAC8F8(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = fn_82BC7368(*(undefined4 *)(param_1 + 0x70));
  uVar3 = fn_82BC7368(*(undefined4 *)(param_1 + 0x74));
  fn_82AB1538(uVar2,1,0xd,(ulonglong)*(uint *)(param_1 + 0x38) + 1);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  fn_82AB1538(uVar1,1,0xd,uVar3);
  fn_82AB1538(uVar1,0xe,3,0);
  fn_82AB1538(uVar1,0x11,5,param_2);
  fn_82AB1538(uVar1,0x16,1,0);
  fn_82AB1538(uVar1,0x17,0xc,0);
  fn_82AB1538(uVar1,0x23,2,0);
  fn_82AB1538(uVar1,0x25,6,0);
  fn_82AB1538(uVar1,0x2b,1,0);
  fn_82AB1538(uVar1,0x2c,1,0);
  fn_82AB1538(uVar1,0x2d,4,lbl_820E2FEC);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 6;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  return;
}

