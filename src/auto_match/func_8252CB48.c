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


void fn_8252CB48(int param_1,int param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(code **)(param_1 + 0x924) != (code *)0x0) {
    (**(code **)(param_1 + 0x924))(param_1,param_3,param_4);
  }
  if (*(int *)(param_1 + 0x8c0) != 0) {
    uVar2 = (uint)((param_3 & 0xffffffff) << 2) & 0x3fc;
    iVar3 = *(int *)(param_1 + 0x8c0) + 0xd0;
    iVar1 = (int)uVar2 >> 3;
    iVar4 = param_2 * 0x20 + iVar1 + iVar3;
    uVar2 = uVar2 + iVar1 * -8;
    *(byte *)(iVar4 + 4) =
         *(byte *)(iVar4 + 4) & ~(byte)(0xf << (uVar2 & 0x3f)) |
         (byte)(((uint)param_4 & 0xff) << (uVar2 & 0x3f));
    *(undefined4 *)((param_2 + 0x11) * 4 + iVar3) = 1;
  }
  return;
}

