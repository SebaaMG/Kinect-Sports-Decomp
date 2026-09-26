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
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_82154B18;
extern unsigned int lbl_82154B1C;
extern unsigned int lbl_82154B20;
extern unsigned int lbl_82154B24;
extern unsigned int lbl_82154DB8;
extern unsigned int lbl_8215FDD0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * fn_82E5CD58(undefined4 *param_1)

{
  undefined4 uVar1;
  
  fn_82E58050();
  *param_1 = &lbl_82154DB8;
  param_1[1] = &lbl_8215FDD0;
  param_1[0x12] = lbl_8202E618;
  param_1[0x13] = lbl_8202E61C;
  param_1[0x14] = lbl_8202E620;
  param_1[0x15] = lbl_8202E624;
  param_1[0x16] = lbl_8202E618;
  param_1[0x17] = lbl_8202E61C;
  param_1[0x18] = lbl_8202E620;
  uVar1 = lbl_8202E624;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x19] = uVar1;
  param_1[4] = lbl_82154B18;
  param_1[5] = lbl_82154B1C;
  param_1[6] = lbl_82154B20;
  param_1[7] = lbl_82154B24;
  return param_1;
}

