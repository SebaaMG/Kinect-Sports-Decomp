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
extern unsigned int iStack00000020;
extern unsigned int uStack00000024;


void fn_82E81948(int param_1,undefined8 param_2)

{
  int iVar1;
  int iStack00000020;
  undefined4 uStack00000024;
  
  *(undefined4 *)(param_1 + 0x888) = 0xffffffff;
  if (*(int *)(param_1 + 0xa0c) == 0) {
    iVar1 = *(int *)(param_1 + 0x1fac);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x888) = 0;
    }
    else if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x888) = 1;
    }
    else {
      *(uint *)(param_1 + 0x888) = ((uint)LZCOUNT(iVar1 + -2) >> 5) + 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x888) = 3;
  }
  if (*(int *)(param_1 + 0xb08) != 0) {
    *(undefined4 *)(param_1 + 0x888) = 1;
  }
  iStack00000020 = (int)((ulonglong)param_2 >> 0x20);
  if (iStack00000020 == 0) {
    return;
  }
  uStack00000024 = (undefined4)param_2;
  *(undefined4 *)(param_1 + 0x888) = uStack00000024;
  return;
}

