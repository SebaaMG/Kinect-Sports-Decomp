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
extern unsigned int lbl_82154B08;
extern unsigned int lbl_82154B0C;
extern unsigned int lbl_82154B10;
extern unsigned int lbl_82154B14;
extern unsigned int lbl_8215FDA0;
extern unsigned int lbl_8215FDD0;
extern unsigned int lbl_82162C1C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * fn_82EE6550(undefined4 *param_1)

{
  fn_82E58050();
  *param_1 = &lbl_8215FDA0;
  param_1[1] = &lbl_8215FDD0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((int)param_1 + 0x5e) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x12] = &lbl_82162C1C;
  param_1[2] = 1;
  param_1[4] = lbl_82154B08;
  param_1[5] = lbl_82154B0C;
  param_1[6] = lbl_82154B10;
  param_1[7] = lbl_82154B14;
  return param_1;
}

