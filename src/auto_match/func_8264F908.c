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
extern int fn_82645110();


void fn_8264F908(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x38) < uVar2) {
    uVar2 = fn_82645110(param_1);
  }
  *(uint *)(uVar2 + 4) = *(uint *)(param_1 + 0x325c) | 0xc0062d00;
  *(uint *)(uVar2 + 8) = param_2 * 6 & 0x7ffU | 0x10000;
  *(undefined4 *)(uVar2 + 0xc) = *param_3;
  uVar1 = param_3[1];
  *(uint *)(uVar2 + 0x10) =
       ((uVar1 >> 0x14) + 0x200 & 0x1000) + (uVar1 & 0x1ffff000) | uVar1 & 0xfff;
  *(undefined4 *)(uVar2 + 0x14) = param_3[2];
  *(undefined4 *)(uVar2 + 0x18) = param_3[3];
  *(undefined4 *)(uVar2 + 0x1c) = param_3[4];
  uVar1 = param_3[5];
  *(uint *)(uVar2 + 0x20) =
       ((uVar1 >> 0x14) + 0x200 & 0x1000) + (uVar1 & 0x1ffff000) | uVar1 & 0xfff;
  *(uint **)(param_1 + 0x30) = (uint *)(uVar2 + 0x20);
  return;
}

