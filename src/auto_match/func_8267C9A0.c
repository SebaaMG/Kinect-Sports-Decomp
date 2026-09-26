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


void fn_8267C9A0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (iVar1 == param_2) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  if (*(int *)(param_2 + 8) == 0) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 4);
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 8) + 4) = *(undefined4 *)(param_2 + 4);
  }
  if (*(int *)(param_2 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 4) + 8) = *(undefined4 *)(param_2 + 8);
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 8);
  return;
}

