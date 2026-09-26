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
extern int fn_82A512B8();
extern int fn_82A5A1A8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82089758;
extern unsigned int lbl_82089788;
extern unsigned int lbl_820897F8;


undefined4 * fn_82A44520(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_82A512B8(param_1 + 1,param_2,0,0);
  *param_1 = &lbl_820897F8;
  param_1[0x24] = 0;
  param_1[1] = &lbl_82089788;
  param_1[0x23] = &lbl_82089758;
  param_1[0x25] = 0;
  param_1[0x26] = param_1 + 0x27;
  param_1[0x2e] = 1;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  uVar2 = lbl_82002AE0;
  param_1[0x27] = 0;
  iVar1 = param_1[0x26];
  *(undefined4 *)(iVar1 + 8) = param_1[0x25];
  param_1[0x25] = iVar1 + 4;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = uVar2;
  param_1[0x31] = param_3;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  fn_82A5A1A8(param_1 + 0x39);
  return param_1;
}

