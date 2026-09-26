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


longlong fn_82E74FF8(int param_1,int *param_2)

{
  longlong lVar1;
  uint auStack_20 [4];
  
  if (*(int *)(param_1 + 0x68) == 0) {
    lVar1 = 1;
  }
  else {
    auStack_20[0] = 0;
    (**(code **)(*param_2 + 0xb4))(param_2,auStack_20);
    if (*(int *)(param_1 + 0x78) != 0) {
      auStack_20[0] = *(int *)(*(int *)(param_1 + 0x78) + 0x2c) + auStack_20[0];
    }
    trapWord(6,(ulonglong)*(uint *)(param_1 + 0x6c),0);
    lVar1 = (ulonglong)auStack_20[0] / (ulonglong)*(uint *)(param_1 + 0x6c) + 1;
  }
  return lVar1;
}

