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
extern int fn_82BF40D0();
extern unsigned int lbl_820E9B40;


undefined4 * fn_82BE8A78(undefined4 *param_1)

{
  fn_82BF40D0();
  param_1[0x17] = 0;
  param_1[0x16] = 2;
  *param_1 = &lbl_820E9B40;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((int)param_1 + 0x62) = 0;
  *(undefined2 *)(param_1 + 0x19) = 0;
  return param_1;
}

