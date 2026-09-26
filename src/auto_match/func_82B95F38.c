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
extern int fn_828F0E90();
extern int fn_82B8FDD0();


void fn_82B95F38(int param_1,int param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    param_4 = fn_82B8FDD0(param_1,param_4);
  }
  uVar2 = 0;
  lVar1 = (longlong)*(int *)(param_1 + 0x60) * (longlong)param_2 +
          (longlong)*(int *)(param_1 + 100) * (longlong)param_3 +
          (ulonglong)*(uint *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x68) != 0) {
    do {
      fn_828F0E90(lVar1,2,param_4,4,1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 2;
      param_4 = param_4 + 0x10;
    } while (uVar2 < *(uint *)(param_1 + 0x68));
  }
  return;
}

