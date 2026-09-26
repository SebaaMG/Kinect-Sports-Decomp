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


void fn_82653510(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x5e90) != 0) {
    *(undefined4 *)(param_1 + 0x5e8c) = 1;
    sync(1);
    *(undefined8 *)(*(int *)(param_1 + 0x5e90) + 0x220) = 0xffffffffffffffff;
  }
  if (*(int *)(param_1 + 0x5ea8) == 0) {
    return;
  }
  iVar2 = 0;
  iVar3 = 0;
  lVar4 = 0x3f;
  do {
    iVar1 = *(int *)(param_1 + 0x5eb0) + iVar3;
    iVar3 = iVar3 + 0x14;
    *(uint *)(iVar2 + *(int *)(param_1 + 0x5ea8)) =
         *(int *)(iVar1 + 4) * 0x30000 + 0x10000U | 0xc0001000;
    iVar2 = iVar2 + 0x80;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  sync(0);
  iVar2 = 0;
  lVar4 = 0x3f;
  do {
    iVar3 = iVar2 + *(int *)(param_1 + 0x5ea8);
    iVar2 = iVar2 + 0x80;
    *(undefined4 *)(iVar3 + 0x6c) = 0xffffffff;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  sync(0);
  return;
}

