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
extern int fn_83039918();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8217C3B0;


undefined4 * fn_8301DFE0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  *param_1 = &lbl_8217C3B0;
  fn_83039918(param_1 + 4);
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  uVar1 = lbl_82002AE0;
  param_1[0x27] = 0;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = uVar1;
  param_1[0x20] = 0xffffffff;
  param_1[0x18] = 0;
  *(undefined2 *)((int)param_1 + 0x6e) = 0;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  param_1[0x1a] = 0x2b;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x21] = 1;
  param_1[0x29] = uVar1;
  param_1[0x22] = 0;
  *(undefined2 *)((int)param_1 + 0x96) = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  param_1[0x24] = 0x2b;
  *(undefined2 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0xffffffff;
  param_1[0x2a] = 0xffffffff;
  param_1[0x2b] = 1;
  return param_1;
}

