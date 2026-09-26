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
extern int fn_82E58050();
extern int fn_82E5AEC8();
extern unsigned int lbl_820F8F08;
extern unsigned int lbl_820F8F0C;
extern unsigned int lbl_820F8F10;
extern unsigned int lbl_820F8F14;
extern unsigned int lbl_82154D88;
extern unsigned int lbl_8215FDD0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * fn_82E5B058(undefined4 *param_1)

{
  undefined4 uVar1;
  
  fn_82E58050();
  *param_1 = &lbl_82154D88;
  param_1[1] = &lbl_8215FDD0;
  fn_82E5AEC8(param_1 + 0x23);
  fn_82E5AEC8(param_1 + 0x3e);
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[4] = lbl_820F8F08;
  param_1[5] = lbl_820F8F0C;
  param_1[6] = lbl_820F8F10;
  uVar1 = lbl_820F8F14;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined2 *)((int)param_1 + 0x7a) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0;
  param_1[7] = uVar1;
  return param_1;
}

