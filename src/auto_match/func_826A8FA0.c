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
extern unsigned int *auStack_20;
extern int fn_8267B890();
extern int fn_8267BDA8();
extern int fn_8267BE38();
extern unsigned int lbl_831E7E64;


void fn_826A8FA0(int *param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 auStack_20 [2];
  
  if ((param_3 & 0xffffffff) < 0x20) {
    param_3 = 0x20;
  }
  if ((param_3 & 0xffffffff) == 0) {
    uVar2 = 0;
    if (*param_1 != 0) {
      fn_8267BE38();
      *param_1 = 0;
    }
  }
  else {
    uVar2 = (uint)(param_3 + 0xf) & 0xfffffff0;
    if (*param_1 == 0) {
      auStack_20[0] = 2;
      iVar1 = fn_8267B890(lbl_831E7E64,(param_3 + 0xf & 0x3ffffff0) << 2,auStack_20);
    }
    else {
      iVar1 = fn_8267BDA8();
    }
    *param_1 = iVar1;
  }
  param_1[2] = uVar2;
  return;
}

