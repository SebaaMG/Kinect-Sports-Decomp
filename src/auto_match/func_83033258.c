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
extern int fn_82FF5750();
extern int fn_8301B7B8();
extern int fn_83032D88();
extern int fn_8303D8C0();
extern unsigned int lbl_8217D044;
extern unsigned int lbl_832642F4;
extern unsigned int lbl_832642F8;


void fn_83033258(undefined4 *param_1)

{
  *param_1 = &lbl_8217D044;
  if ((param_1[8] != 0) && ((ulonglong)(uint)param_1[0x25] != 0)) {
    fn_82FF5750(lbl_832642F4,param_1[8],(ulonglong)(uint)param_1[0x25] + 4);
  }
  param_1[8] = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0x7f;
  if ((param_1[9] != 0) && ((ulonglong)(uint)param_1[0x25] != 0)) {
    fn_82FF5750(lbl_832642F4,param_1[9],(ulonglong)(uint)param_1[0x25] + 4);
  }
  param_1[9] = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xbf;
  if (param_1[0xb] != 0) {
    fn_8301B7B8(lbl_832642F8);
  }
  if ((int *)param_1[0x28] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x28] + 8))();
    param_1[0x28] = 0;
  }
  if ((int *)param_1[0x26] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x26] + 8))();
  }
  if (param_1[0xd] != 0) {
    fn_83032D88();
    param_1[0xd] = 0;
  }
  fn_8303D8C0(param_1);
  return;
}

