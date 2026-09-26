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
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


undefined8 fn_824FB970(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0xba4) = *(undefined4 *)(param_2 + 0x5bc);
  *(undefined4 *)(param_1 + 0xba8) = *(undefined4 *)(param_2 + 0x5c0);
  uVar3 = lbl_821CC160;
  *(undefined4 *)(param_1 + 0xbac) = *(undefined4 *)(param_2 + 0x5c4);
  uVar2 = lbl_821CA460;
  *(undefined4 *)(param_1 + 0xbb0) = *(undefined4 *)(param_2 + 0x5c8);
  *(undefined4 *)(param_1 + 0xbb4) = *(undefined4 *)(param_2 + 0x5cc);
  uVar1 = lbl_821917C0;
  *(undefined4 *)(param_1 + 3000) = *(undefined4 *)(param_2 + 0x5d0);
  *(undefined4 *)(param_1 + 0xb64) = uVar2;
  *(undefined4 *)(param_1 + 0xb68) = uVar3;
  *(undefined4 *)(param_1 + 0xb60) = 0x4d697850;
  *(undefined4 *)(param_1 + 0xb74) = uVar3;
  *(undefined4 *)(param_1 + 0xb6c) = 0x20;
  *(undefined4 *)(param_1 + 0xb70) = uVar1;
  *(undefined4 *)(param_1 + 0xb78) = 0;
  *(undefined4 *)(param_1 + 0xb80) = uVar1;
  *(undefined4 *)(param_1 + 0xb7c) = 0x40;
  *(undefined4 *)(param_1 + 0xb84) = 0;
  *(undefined4 *)(param_1 + 0xb90) = 0;
  *(undefined4 *)(param_1 + 0xb94) = 0;
  *(undefined4 *)(param_1 + 0xb88) = 0;
  *(undefined4 *)(param_1 + 0xb8c) = 0;
  *(undefined4 *)(param_1 + 0xba0) = uVar3;
  *(undefined4 *)(param_1 + 0xb78) = 1;
  *(undefined1 *)(param_1 + 0xb9c) = 0;
  return 1;
}

