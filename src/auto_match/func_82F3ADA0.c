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
extern int fn_82F3A790();
extern unsigned int lbl_82154B38;
extern unsigned int lbl_82154B3C;
extern unsigned int lbl_82154B40;
extern unsigned int lbl_82154B44;
extern unsigned int lbl_8215FDD0;
extern unsigned int lbl_82162C24;
extern unsigned int lbl_82162C2C;


undefined4 * fn_82F3ADA0(undefined4 *param_1)

{
  fn_82E58050();
  *param_1 = &lbl_82162C2C;
  param_1[1] = &lbl_8215FDD0;
  fn_82F3A790(param_1 + 0x12);
  param_1[0x12] = &lbl_82162C24;
  param_1[0x49a] = 0;
  param_1[2] = 1;
  param_1[4] = lbl_82154B38;
  param_1[5] = lbl_82154B3C;
  param_1[6] = lbl_82154B40;
  param_1[7] = lbl_82154B44;
  return param_1;
}

