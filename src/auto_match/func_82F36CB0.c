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
extern int fn_82F36C18();
extern unsigned int lbl_82154AD8;
extern unsigned int lbl_82154ADC;
extern unsigned int lbl_82154AE0;
extern unsigned int lbl_82154AE4;
extern unsigned int lbl_8215FE18;
extern unsigned int lbl_8215FE94;
extern unsigned int lbl_82162BB0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * fn_82F36CB0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  fn_82F36C18();
  *param_1 = &lbl_8215FE18;
  param_1[1] = &lbl_8215FE94;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((int)param_1 + 0x6e) = 0;
  param_1[0x17] = &lbl_82162BB0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  *(undefined1 *)((int)param_1 + 0xda) = 0;
  param_1[0x32] = &lbl_82162BB0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x12] = 1;
  param_1[0x13] = 1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[4] = lbl_82154AD8;
  param_1[5] = lbl_82154ADC;
  param_1[6] = lbl_82154AE0;
  uVar1 = lbl_82154AE4;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[0x4d] = 0;
  *(undefined2 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  param_1[7] = uVar1;
  return param_1;
}

