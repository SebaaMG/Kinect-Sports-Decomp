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
extern unsigned int lbl_82152F14;
extern unsigned int lbl_82154978;
extern unsigned int lbl_8215497C;
extern unsigned int lbl_82154980;
extern unsigned int lbl_82154984;
extern unsigned int lbl_82154B98;
extern unsigned int lbl_82154B9C;
extern unsigned int lbl_82154BA0;
extern unsigned int lbl_82154BA4;
extern unsigned int lbl_8215FD40;
extern unsigned int lbl_8215FDD0;


undefined4 * fn_82EE4E58(undefined4 *param_1)

{
  undefined4 uVar1;
  
  fn_82E58050();
  *param_1 = &lbl_8215FD40;
  param_1[1] = &lbl_8215FDD0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined2 *)((int)param_1 + 0x56) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x12] = &lbl_82152F14;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[2] = 1;
  param_1[4] = lbl_82154978;
  param_1[5] = lbl_8215497C;
  param_1[6] = lbl_82154980;
  uVar1 = lbl_82154984;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[7] = uVar1;
  param_1[0x25] = lbl_82154B98;
  param_1[0x26] = lbl_82154B9C;
  param_1[0x27] = lbl_82154BA0;
  param_1[0x28] = lbl_82154BA4;
  return param_1;
}

