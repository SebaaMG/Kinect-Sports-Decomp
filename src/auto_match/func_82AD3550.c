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


int fn_82AD3550(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 4);
  iVar3 = iVar2 + 1;
  *(int *)(param_1 + 8) = iVar3;
  iVar2 = iVar2 * 0x24 + uVar1 + 0x10;
  if (iVar3 != *(int *)(uVar1 + 8)) {
    return iVar2;
  }
  uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 4) = -(uint)((uVar1 & 1) == 0) & uVar1;
  return iVar2;
}

