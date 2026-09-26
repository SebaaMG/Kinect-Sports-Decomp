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
extern int fn_829410A8();
extern int fn_82941178();
extern int fn_8295EF20();


void fn_82942290(int *param_1)

{
  int iVar1;
  
  if (param_1[param_1[0x1c4] + 0x1a3] == 0) {
    param_1[0x182] = param_1[0x182] + -1;
    iVar1 = fn_82941178(param_1);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_829410A8(param_1,0xffffffff82034898);
  }
  else {
    if (param_1[param_1[0x1c4] + 0x1a3] != 1) goto LAB_82942318;
    param_1[0x1c5] = param_1[0x1c5] + -1;
    param_1[0x182] = param_1[0x182] + -1;
    iVar1 = fn_82941178();
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_829410A8(param_1,0xffffffff82034898);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = (**(code **)(*param_1 + 0x220))(param_1);
  }
  if (iVar1 < 0) {
    return;
  }
LAB_82942318:
  param_1[0x1c4] = param_1[0x1c4] + -1;
  fn_8295EF20(param_1);
  return;
}

