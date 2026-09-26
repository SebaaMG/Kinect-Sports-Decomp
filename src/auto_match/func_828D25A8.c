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
extern int fn_82230218();
extern int fn_823AA970();
extern int fn_8240D928();
extern int fn_8289DB80();
extern int fn_828AEBB8();
extern int fn_828BDDA0();
extern int fn_82A4AAA8();
extern int fn_82F68CC0();
extern unsigned int lbl_82025A10;
extern unsigned int lbl_82025A18;


undefined4 * fn_828D25A8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  fn_828BDDA0();
  param_1[0x20] = param_2;
  *param_1 = &lbl_82025A18;
  param_1[0x14] = &lbl_82025A10;
  param_1[0x32] = 0;
  param_1[0x33] = 0xf;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  uVar1 = fn_828AEBB8(param_3);
  fn_82F68CC0(param_1 + 0x21,uVar1,0x24);
  uVar2 = fn_8240D928(param_3);
  param_1[0x2a] = uVar2;
  uVar2 = fn_823AA970(param_3);
  param_1[0x2b] = uVar2;
  iVar3 = fn_82A4AAA8(param_3);
  *(bool *)(param_1 + 0x2c) = iVar3 == 1;
  param_1[0x2d] = *(undefined4 *)(param_3 + 0x10);
  uVar1 = fn_8289DB80(param_3);
  fn_82230218(param_1 + 0x2e,uVar1,0,0xffffffffffffffff);
  return param_1;
}

