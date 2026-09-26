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


void fn_82A46494(int param_1)

{
  int iVar1;
  int *in_r10;
  int iVar2;
  byte in_cr6;
  
  while (!(bool)(in_cr6 >> 1 & 1)) {
    iVar2 = in_r10[6];
    iVar1 = *(int *)(iVar2 + 4);
    *(int *)(iVar2 + 4) = *in_r10;
    *in_r10 = iVar2;
    in_r10[6] = iVar1;
    in_cr6 = (iVar1 == 0) << 1;
  }
  in_r10[8] = 0;
  in_r10[7] = 0;
  iVar2 = *(int *)(param_1 + 0x1b0);
  while (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x1b0);
    iVar2 = *(int *)(iVar1 + 4);
    *(int *)(iVar1 + 4) = *(int *)(param_1 + 0x198);
    *(int *)(param_1 + 0x198) = iVar1;
    *(int *)(param_1 + 0x1b0) = iVar2;
  }
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  return;
}

