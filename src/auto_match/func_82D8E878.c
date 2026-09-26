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


void fn_82D8E878(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_2 + 0x30) == 0) {
    return;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - *(int *)(param_3 + 4);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - *(int *)(param_3 + 8);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - *(int *)(param_3 + 0xc);
  iVar1 = *(int *)(param_2 + 0x30);
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  uVar3 = *(undefined4 *)(param_3 + 8);
  *(short *)(iVar1 + 0x14) = *(short *)(iVar1 + 0x14) - (short)*(undefined4 *)(param_3 + 4);
  *(short *)(iVar1 + 0x16) = *(short *)(iVar1 + 0x16) - (short)uVar3;
  *(short *)(iVar1 + 0x18) = *(short *)(iVar1 + 0x18) - (short)uVar2;
  return;
}

