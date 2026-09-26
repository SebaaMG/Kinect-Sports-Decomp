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
extern int fn_82A4F4E0();
extern int fn_82A772B8();
extern int fn_82A776F0();
extern int fn_82A780C8();
extern int fn_82A819E0();
extern unsigned int lbl_820A6CC4;


void fn_82A78268(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x2e];
  *param_1 = &lbl_820A6CC4;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x24) == 0) {
      fn_82A4F4E0();
    }
    else {
      *(undefined4 *)(iVar1 + 0x24) = 0;
    }
  }
  while (iVar1 = fn_82A776F0(param_1 + 0x21), iVar1 != 0) {
    if (*(int *)(iVar1 + 0x24) == 0) {
      fn_82A4F4E0();
    }
    else {
      *(undefined4 *)(iVar1 + 0x24) = 0;
    }
  }
  if ((int *)param_1[0x3f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3f] + 0x24))();
  }
  fn_82A772B8(param_1 + 0x3f);
  fn_82A772B8(param_1 + 0x40);
  if (param_1[0x1e] != 0) {
    fn_82A4F4E0();
    param_1[0x1e] = 0;
  }
  *param_1 = 0;
  fn_82A780C8(param_1 + 0x21);
  fn_82A819E0(param_1);
  return;
}

