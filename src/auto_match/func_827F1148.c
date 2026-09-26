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
extern int fn_827F4100();
extern int fn_827F4248();
extern unsigned int lbl_8201DD0C;


undefined4 * fn_827F1148(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  fn_827F4248(param_1,param_1 + 0x3d,param_3,0,0);
  *(undefined2 *)(param_1 + 0x38) = 0;
  *param_1 = &lbl_8201DD0C;
  *(undefined2 *)((int)param_1 + 0xe2) = 0;
  *(undefined2 *)(param_1 + 0x39) = 0;
  *(undefined2 *)((int)param_1 + 0xe6) = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  *(undefined2 *)((int)param_1 + 0xea) = 0;
  *(undefined2 *)(param_1 + 0x3b) = 0;
  *(undefined2 *)((int)param_1 + 0xee) = 0;
  param_1[0x3c] = 0xffff;
  fn_827F4100(param_1 + 0x3d,param_2);
  *(undefined1 *)(param_1 + 0x62) = 0;
  return param_1;
}

