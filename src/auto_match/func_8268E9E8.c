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
extern int fn_8268E320();
extern int fn_8268E570();


void fn_8268E9E8(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_2 + 0x14);
  iVar2 = *(int *)(param_2 + 0x10);
  uVar3 = *param_1;
  *(int *)(iVar2 + 0x20) = param_2;
  uVar1 = uVar1 >> (uVar3 & 0x3f);
  *(uint *)(iVar2 + 0x24) = uVar1;
  fn_8268E570(param_1 + 3,iVar2);
  fn_8268E320(param_1 + 4,iVar2);
  param_1[5] = param_1[5] + uVar1;
  return;
}

