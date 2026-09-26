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


void fn_8307FE60(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = param_1[3] + -1 >> 5;
  iVar1 = iVar3 * 4;
  uVar5 = param_1[3] + iVar3 * -0x20;
  if (0x1f < (int)uVar5) {
    return;
  }
  uVar2 = -1 << (uVar5 & 0x3f);
  uVar5 = *(uint *)(iVar1 + *param_1);
  uVar4 = uVar5 & ~uVar2;
  if (param_2 != 0) {
    uVar4 = uVar5 | uVar2;
  }
  *(uint *)(iVar1 + *param_1) = uVar4;
  return;
}

