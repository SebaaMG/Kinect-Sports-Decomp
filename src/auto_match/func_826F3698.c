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
extern int fn_82686E80();
extern int fn_8268B330();
extern unsigned int lbl_8200C938;


undefined4 * fn_826F3698(undefined4 *param_1,int param_2)

{
  fn_82686E80();
  *param_1 = &lbl_8200C938;
  fn_8268B330(param_1 + 7);
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 0x14);
  *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)(param_2 + 0x16);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  return param_1;
}

