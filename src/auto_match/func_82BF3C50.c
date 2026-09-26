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
extern int fn_82BE8CE0();
extern int fn_82BEC770();
extern int fn_82BFA9C0();
extern int fn_82BFAB68();
extern int fn_82BFACA0();
extern unsigned int lbl_820EB7A0;


undefined4 * fn_82BF3C50(undefined4 *param_1)

{
  fn_82BE8CE0();
  *param_1 = &lbl_820EB7A0;
  fn_82BFACA0(param_1 + 2);
  param_1[5] = 0;
  fn_82BEC770(param_1 + 6);
  fn_82BFAB68(param_1 + 0xb,0xffffffff820eb788,1);
  fn_82BFA9C0(param_1 + 0x16);
  return param_1;
}

