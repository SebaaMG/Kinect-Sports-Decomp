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


void fn_827F1BE8(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  uVar2 = param_1 + 3U & 0xfffffffc;
  puVar4 = (undefined4 *)(param_1 + 200);
  piVar3 = (int *)(uVar2 + 4);
  *(uint *)(param_1 + 0xc4) = uVar2;
  *(undefined4 **)(param_1 + 200) = puVar4;
  lVar5 = 0x10;
  do {
    *piVar3 = (int)(piVar3 + -4);
    piVar3[1] = (int)(piVar3 + 2);
    piVar3 = piVar3 + 3;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar1 = *(int *)(param_1 + 0xc4);
  *(int *)(param_1 + 0xcc) = iVar1 + 0xb4;
  *(int *)(param_1 + 0xd0) = iVar1;
  *(undefined4 *)(iVar1 + 4) = *puVar4;
  *(undefined4 *)(iVar1 + 0xbc) = *puVar4;
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0xc4);
  return;
}

