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
extern int fn_82E50EA0();
extern int fn_82E569B0();
extern int fn_82E64F20();
extern unsigned int lbl_82154D80;
extern unsigned int lbl_8215505C;
extern unsigned int lbl_8215507C;


void fn_82E65010(undefined4 *param_1)

{
  *param_1 = &lbl_8215507C;
  param_1[1] = &lbl_8215505C;
  if ((int *)param_1[0x12] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x12] + 8))();
    param_1[0x12] = 0;
  }
  fn_82E64F20(param_1);
  param_1[0x13] = &lbl_82154D80;
  if (param_1[0x14] == 0) {
    fn_82E569B0(param_1 + 0x13,0);
  }
  fn_82E50EA0(param_1 + 3);
  return;
}

