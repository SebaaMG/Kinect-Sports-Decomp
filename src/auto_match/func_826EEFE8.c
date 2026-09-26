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
extern int fn_826EED50();
extern int fn_826EEDE0();
extern int fn_8277B988();
extern int fn_82782E48();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_8200D8E0;
extern unsigned int lbl_82021540;
extern unsigned int lbl_821AAD20;


undefined4 * fn_826EEFE8(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = &lbl_8200D8E0;
  param_1[1] = 1;
  uVar1 = lbl_82002AE0;
  param_1[2] = lbl_82002AE0;
  uVar2 = lbl_8200D8DC;
  param_1[3] = lbl_8200D8DC;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar3 = lbl_821AAD20;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = uVar1;
  param_1[0xe] = 0x80000001;
  param_1[0x10] = uVar1;
  param_1[0xd] = 0x7fffffff;
  param_1[0x11] = uVar3;
  param_1[0x12] = uVar3;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = uVar1;
  param_1[0x15] = uVar2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x21] = uVar1;
  param_1[0x22] = uVar1;
  param_1[0x1e] = 0;
  param_1[0x23] = uVar3;
  param_1[0x1f] = 0x7fffffff;
  param_1[0x24] = uVar3;
  param_1[0x20] = 0x80000001;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x26] = uVar1;
  param_1[0x27] = uVar1;
  param_1[0x28] = 3;
  uVar1 = lbl_82021540;
  param_1[0x29] = 2;
  param_1[0x2b] = uVar1;
  param_1[0x2a] = 2;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  fn_826EEDE0(param_1 + 0x31);
  fn_826EED50(param_1 + 0xa6);
  fn_82782E48(param_1 + 0xc2);
  fn_8277B988(param_1 + 0xe6,param_2,0,0);
  param_1[0xeb] = 0;
  param_1[0xec] = 0x10000;
  return param_1;
}

