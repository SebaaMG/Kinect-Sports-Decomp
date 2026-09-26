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
extern unsigned int *auStack_30;


undefined8 fn_82E5E628(int *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint auStack_30 [12];
  
  if (param_1 == (int *)0x0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    auStack_30[0] = 0;
    uVar3 = (**(code **)(*param_1 + 0x1c))(param_1,0xffffffff8214c720,auStack_30);
    uVar1 = (int)((uVar3 & 0xffffffff) >> 0x1f) - 1U & auStack_30[0];
    auStack_30[0] = uVar1 | 0x80000000;
    if (param_2 == 0) {
      auStack_30[0] = uVar1 & 0x7fffffff;
    }
    uVar2 = (**(code **)(*param_1 + 0x54))(param_1,0xffffffff8214c720);
  }
  return uVar2;
}

