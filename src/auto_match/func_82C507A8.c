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


void fn_82C507A8(int param_1,int param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_2 + 0xfU & 0xfffffff0;
  uVar4 = param_3 + 0xfU & 0xfffffff0;
  if (*(int *)(param_1 + 0xf8c) == 0) {
    uVar2 = (int)uVar1 >> 1;
    uVar3 = (int)uVar4 >> 1;
  }
  else {
    uVar2 = (int)uVar1 >> 2;
    uVar3 = uVar4;
  }
  if (*(int *)(param_1 + 0x3cb0) == 7) {
    uVar4 = uVar4 + 0x1f & 0xffffffe0;
    uVar3 = (int)uVar4 >> 1;
  }
  *param_4 = uVar1;
  param_4[1] = uVar4;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  param_4[4] = 0x20;
  param_4[5] = 0x10;
  return;
}

