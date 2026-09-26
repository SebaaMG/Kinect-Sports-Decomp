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
extern int fn_826CC3C8();
extern int fn_826CDA28();
extern int fn_826F6520();


void fn_826CE6B0(int *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined2 uVar2;
  uint uVar1;
  
  (**(code **)(*param_1 + 0x1c))(param_1,0xffffffff821cc86c);
  uVar2 = fn_826F6520(param_1);
  uVar1 = fn_826CC3C8(param_2,uVar2,0);
  if ((uVar1 == 0) || (uVar1 = -(uint)((*(byte *)(uVar1 + 0x35) & 2) == 0) & uVar1, uVar1 == 0)) {
    uVar1 = fn_826CDA28(param_2,uVar2);
    *(undefined1 *)(uVar1 + 0x34) = 0;
  }
  *(int **)(uVar1 + 0x30) = param_1;
  *(int **)(uVar1 + 0x2c) = param_1;
  *(int **)(uVar1 + 0x28) = param_1;
  *(int **)(uVar1 + 0x24) = param_1;
  *(int **)(uVar1 + 0x20) = param_1;
  *(int **)(uVar1 + 0x1c) = param_1;
  *(int **)(uVar1 + 0x18) = param_1;
  *(int **)(uVar1 + 0x14) = param_1;
  *(int **)(uVar1 + 0x10) = param_1;
  *(undefined4 *)(uVar1 + 8) = param_3;
  *(byte *)(uVar1 + 0x35) = *(byte *)(uVar1 + 0x35) | 1;
  return;
}

