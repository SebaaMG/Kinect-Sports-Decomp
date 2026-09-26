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


void fn_827A5B10(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *param_2;
  iVar2 = 0;
  if (iVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  uVar3 = 0;
  do {
    if (*(int *)(iVar2 + iVar1 + 8) != -2) break;
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 0x14;
  } while (uVar3 <= *(uint *)(iVar1 + 4));
  *param_1 = param_2;
  param_1[1] = uVar3;
  return;
}

