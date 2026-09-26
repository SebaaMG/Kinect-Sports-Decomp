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


void fn_8268E408(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 != 0) {
    if (param_2 == *param_1) {
      *param_1 = param_3;
    }
    else {
      *(int *)((4 - (uint)(param_2 == *(int *)(iVar1 + 0xc))) * 4 + iVar1) = param_3;
    }
    if (param_3 != 0) {
      *(int *)(param_3 + 8) = iVar1;
      iVar1 = *(int *)(param_2 + 0xc);
      if (iVar1 != 0) {
        *(int *)(param_3 + 0xc) = iVar1;
        *(int *)(iVar1 + 8) = param_3;
      }
      iVar1 = *(int *)(param_2 + 0x10);
      if (iVar1 != 0) {
        *(int *)(param_3 + 0x10) = iVar1;
        *(int *)(iVar1 + 8) = param_3;
      }
    }
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  return;
}

