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


void fn_82D98290(undefined8 param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *param_3;
  uVar2 = *(undefined4 *)(param_2 + 0x54);
  uVar3 = *(undefined4 *)(param_2 + 0x50);
  uVar4 = *(undefined4 *)(param_2 + 0x48);
  *(undefined1 *)(iVar1 + 3) = 1;
  *(short *)(iVar1 + 6) = (short)uVar2;
  *(short *)(iVar1 + 4) = (short)uVar3;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = uVar4;
  *(undefined1 *)(iVar1 + 1) = 8;
  *param_3 = iVar1 + 0x10;
  return;
}

