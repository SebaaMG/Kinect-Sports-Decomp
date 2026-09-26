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
extern unsigned int *auStack_10;


byte fn_82E731F8(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  uint auStack_10 [4];
  
  auStack_10[0] = 0;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1d8) + 0x10))
                    (*(int **)(param_1 + 0x1d8),*(undefined2 *)(param_2 + 0x20),
                     *(undefined1 *)(param_2 + 0x22),*(undefined4 *)(param_2 + 0x34),auStack_10);
  if (iVar1 < 0) {
    bVar2 = 1;
  }
  else {
    bVar2 = -(auStack_10[0] < 0x11) & 1;
  }
  return bVar2;
}

