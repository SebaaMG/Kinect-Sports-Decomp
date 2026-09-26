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


longlong fn_82BC59C8(int param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  lVar1 = 1;
  iVar3 = 0;
  uVar2 = 1;
  while( true ) {
    if (*(uint *)(*(int *)(param_1 + 0x3c) + 4) < uVar2) {
      return -1;
    }
    if (param_2 == *(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 8) + iVar3)) break;
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 4;
  }
  return lVar1;
}

