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


void fn_82B23050(uint *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *param_1 & 3;
  if (((*param_1 & 3) == 0) || ((param_1[1] & 3) == 0)) {
    uVar6 = 0;
  }
  if ((uint)param_2 < 2) {
    return;
  }
  param_2 = param_2 + -1;
  uVar5 = 2;
  do {
    uVar1 = uVar5 & 0x1f;
    puVar4 = (uint *)((uVar5 >> 3 & 0x1ffffffc) + (int)param_1);
    uVar3 = (2 << (uVar5 + 1 & 0x1f)) - 1U & -1 << uVar1;
    uVar2 = (*puVar4 & uVar3) >> uVar1;
    if ((uVar2 == 0) || ((puVar4[1] & uVar3) >> uVar1 == 0)) {
      uVar2 = 0;
    }
    if ((uVar6 == 0) || (uVar2 == 0)) {
      uVar6 = 0;
    }
    uVar5 = uVar5 + 2;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

