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
extern int fn_82D83DA8();
extern int fn_82D83E20();
extern unsigned int lbl_82141EE8;
extern unsigned int lbl_82141F04;
extern unsigned int lbl_821421D4;
extern unsigned int lbl_821421EC;
extern unsigned int lbl_82142208;


undefined4 * fn_82DB3180(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  param_1[3] = 0;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[4] = 0;
  param_1[5] = &lbl_82141EE8;
  param_1[6] = &lbl_82141F04;
  param_1[7] = param_2;
  param_1[6] = &lbl_821421D4;
  *param_1 = &lbl_82142208;
  param_1[5] = &lbl_821421EC;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined1 *)((int)param_1 + 0x21) = param_3;
  param_1[2] = 0;
  fn_82D83DA8(param_1[7],param_1 + 5);
  fn_82D83E20(param_1[7],param_1 + 6);
  return param_1;
}

