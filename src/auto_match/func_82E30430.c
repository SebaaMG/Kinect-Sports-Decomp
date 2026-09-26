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
extern int fn_82E2DEC8();
extern int fn_82E2FB40();
extern int fn_82E50EA0();
extern int fn_82E569B0();
extern unsigned int lbl_8214C818;
extern unsigned int lbl_8214C830;
extern unsigned int lbl_82154D80;


void fn_82E30430(undefined4 *param_1)

{
  *param_1 = &lbl_8214C830;
  param_1[0x13] = &lbl_8214C818;
  fn_82E2FB40();
  if ((int *)param_1[0x76] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x76] + 8))();
    param_1[0x76] = 0;
  }
  if ((int *)param_1[0x24] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x24] + 8))();
    param_1[0x24] = 0;
  }
  param_1[0x5b] = &lbl_82154D80;
  if (param_1[0x5c] == 0) {
    fn_82E569B0(param_1 + 0x5b,0);
  }
  param_1[0x40] = &lbl_82154D80;
  if (param_1[0x41] == 0) {
    fn_82E569B0(param_1 + 0x40,0);
  }
  param_1[0x25] = &lbl_82154D80;
  if (param_1[0x26] == 0) {
    fn_82E569B0(param_1 + 0x25,0);
  }
  fn_82E50EA0(param_1 + 0x15);
  fn_82E2DEC8(param_1);
  return;
}

