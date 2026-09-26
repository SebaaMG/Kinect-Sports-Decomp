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
extern int fn_82BB1BE8();
extern int fn_82BC0928();
extern unsigned int lbl_820E3564;


undefined4 * fn_82BC1650(undefined4 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  fn_82BC0928();
  *param_1 = &lbl_820E3564;
  fn_82BB1BE8(*(undefined4 *)(param_4 + 0xab0),param_2);
  *(undefined1 *)((int)param_1 + 5) = 1;
  param_1[4] = (int)param_2;
  *(undefined1 *)((int)param_1 + 0x1d) = 1;
  *(undefined1 *)(param_1 + 7) = 1;
  return param_1;
}

