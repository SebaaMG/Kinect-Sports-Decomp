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


void fn_82968610(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  while( true ) {
    iVar1 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x14));
    if (*(int *)(iVar1 + 0x38) != -1) {
      iVar1 = *(int *)(*(int *)(iVar1 + 0x38) * 4 + *(int *)(param_1 + 0x14));
    }
    iVar2 = *(int *)(*(int *)(iVar1 + 4) * 4 + *(int *)(param_1 + 0x10));
    if (param_3 < *(uint *)(iVar1 + 0x54)) {
      *(uint *)(iVar1 + 0x54) = param_3;
    }
    if (*(uint *)(iVar1 + 0x58) < param_3) {
      *(uint *)(iVar1 + 0x58) = param_3;
    }
    *(int *)(iVar1 + 0x5c) = *(int *)(iVar1 + 0x5c) + 1;
    if (*(int *)(iVar1 + 8) == -1) break;
    if (param_3 < *(uint *)(iVar2 + 0x28)) {
      *(uint *)(iVar2 + 0x28) = param_3;
    }
    if (*(uint *)(iVar2 + 0x2c) < param_3) {
      *(uint *)(iVar2 + 0x2c) = param_3;
    }
    *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + 1;
    param_2 = *(int *)(iVar1 + 8);
  }
  return;
}

