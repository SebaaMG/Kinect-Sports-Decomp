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
extern int fn_82B47660();


longlong fn_82B4C110(int *param_1,int param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *param_1;
  uVar2 = *(undefined4 *)(iVar1 + 4);
  uVar3 = *(undefined4 *)(iVar1 + 8);
  fn_82B47660(iVar1,(longlong)param_1[2] * (longlong)param_2 + param_3);
  uVar4 = *(uint *)(iVar1 + 8);
  uVar5 = *(uint *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = uVar2;
  *(undefined4 *)(iVar1 + 8) = uVar3;
  return ((ulonglong)uVar4 + 2 & 0x1fffffff) * 8 + (ulonglong)uVar5;
}

