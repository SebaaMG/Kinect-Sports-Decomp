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


void fn_8277DB10(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_2[1] == -1) {
    return;
  }
  if ((param_2[1] == *(int *)(param_1 + 0x164) + -1) && (*(int *)(param_1 + 0x164) != 0)) {
    *(int *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + -1;
  }
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_2[3] = 0xffffffff;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  if (uVar1 == 0xffffffff) {
    *param_2 = 0;
    return;
  }
  *(undefined4 *)
   (*(int *)((uVar1 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x170)) + (uVar1 & 0x3ff) * 8 + 4) = 0;
  return;
}

