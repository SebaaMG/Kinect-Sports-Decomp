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


void fn_83067240(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_2 = *param_1;
  uVar1 = *param_2;
  param_2[1] = param_1[1];
  uVar2 = param_2[1];
  param_2[2] = param_1[2];
  uVar3 = param_2[2];
  param_2[0x12] = param_1[3];
  uVar4 = param_2[0x12];
  param_2[0x13] = param_1[4];
  uVar5 = param_2[0x13];
  uVar6 = param_1[5];
  param_2[0xc] = uVar1;
  param_2[0x14] = uVar6;
  uVar6 = param_2[0x14];
  param_2[0x15] = uVar1;
  param_2[9] = uVar1;
  param_2[0xf] = uVar4;
  param_2[6] = uVar4;
  param_2[3] = uVar4;
  param_2[0x10] = uVar2;
  param_2[0xd] = uVar2;
  param_2[4] = uVar2;
  param_2[0x16] = uVar5;
  param_2[10] = uVar5;
  param_2[7] = uVar5;
  param_2[0xb] = uVar3;
  param_2[8] = uVar3;
  param_2[5] = uVar3;
  param_2[0x17] = uVar6;
  param_2[0x11] = uVar6;
  param_2[0xe] = uVar6;
  return;
}

