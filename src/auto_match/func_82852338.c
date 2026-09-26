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


void fn_82852338(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (param_2 == (undefined4 *)(iVar1 + 0x40)) {
    return;
  }
  *(undefined4 *)(iVar1 + 0x40) = *param_2;
  *(undefined4 *)(iVar1 + 0x50) = param_2[4];
  *(undefined4 *)(iVar1 + 0x60) = param_2[8];
  *(undefined4 *)(iVar1 + 0x70) = param_2[0xc];
  *(undefined4 *)(iVar1 + 0x44) = param_2[1];
  *(undefined4 *)(iVar1 + 0x54) = param_2[5];
  *(undefined4 *)(iVar1 + 100) = param_2[9];
  *(undefined4 *)(iVar1 + 0x74) = param_2[0xd];
  *(undefined4 *)(iVar1 + 0x48) = param_2[2];
  *(undefined4 *)(iVar1 + 0x58) = param_2[6];
  *(undefined4 *)(iVar1 + 0x68) = param_2[10];
  *(undefined4 *)(iVar1 + 0x78) = param_2[0xe];
  *(undefined4 *)(iVar1 + 0x4c) = param_2[3];
  *(undefined4 *)(iVar1 + 0x5c) = param_2[7];
  *(undefined4 *)(iVar1 + 0x6c) = param_2[0xb];
  *(undefined4 *)(iVar1 + 0x7c) = param_2[0xf];
  return;
}

