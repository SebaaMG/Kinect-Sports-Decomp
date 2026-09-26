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


void fn_82EF7480(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  param_1[2] = uVar1;
  *param_1 = uVar1;
  uVar1 = param_2[1];
  param_1[3] = uVar1;
  param_1[1] = uVar1;
  uVar1 = *(undefined4 *)((int)param_2 + param_3);
  param_1[6] = uVar1;
  param_1[4] = uVar1;
  uVar1 = *(undefined4 *)((int)param_2 + param_3 + 4);
  param_1[7] = uVar1;
  param_1[5] = uVar1;
  param_2 = (undefined4 *)((int)param_2 + param_3 * 2);
  uVar1 = *param_2;
  param_1[10] = uVar1;
  param_1[8] = uVar1;
  uVar1 = param_2[1];
  param_1[0xb] = uVar1;
  param_1[9] = uVar1;
  param_2 = (undefined4 *)((int)param_2 + param_3);
  uVar1 = *param_2;
  param_1[0xe] = uVar1;
  param_1[0xc] = uVar1;
  uVar1 = param_2[1];
  param_1[0xf] = uVar1;
  param_1[0xd] = uVar1;
  param_2 = (undefined4 *)((int)param_2 + param_3);
  uVar1 = *param_2;
  param_1[0x12] = uVar1;
  param_1[0x10] = uVar1;
  uVar1 = param_2[1];
  param_1[0x13] = uVar1;
  param_1[0x11] = uVar1;
  param_2 = (undefined4 *)((int)param_2 + param_3);
  uVar1 = *param_2;
  param_1[0x16] = uVar1;
  param_1[0x14] = uVar1;
  uVar1 = param_2[1];
  param_1[0x17] = uVar1;
  param_1[0x15] = uVar1;
  param_2 = (undefined4 *)((int)param_2 + param_3);
  uVar1 = *param_2;
  param_1[0x1a] = uVar1;
  param_1[0x18] = uVar1;
  uVar1 = param_2[1];
  param_1[0x1b] = uVar1;
  param_1[0x19] = uVar1;
  uVar1 = *(undefined4 *)((int)param_2 + param_3);
  param_1[0x1e] = uVar1;
  param_1[0x1c] = uVar1;
  uVar1 = ((undefined4 *)((int)param_2 + param_3))[1];
  param_1[0x1f] = uVar1;
  param_1[0x1d] = uVar1;
  return;
}

