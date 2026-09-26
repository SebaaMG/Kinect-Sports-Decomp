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


void fn_82300E58(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  puVar2 = param_1 + -3;
  lVar3 = 3;
  do {
    puVar1 = puVar2 + 3;
    puVar2 = puVar2 + 4;
    *puVar2 = *puVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar2 = param_1 + 9;
  lVar3 = 5;
  do {
    puVar1 = puVar2 + 7;
    puVar2[4] = puVar2[3];
    puVar2 = puVar2 + 8;
    *puVar2 = *puVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *param_1 = *(undefined4 *)(param_2 + 0x1c);
  param_1[0xc] = *(undefined4 *)(param_2 + 0x14);
  param_1[0x10] = *(undefined4 *)(param_2 + 0x14);
  param_1[0x14] = *(undefined4 *)(param_2 + 0x18);
  param_1[0x18] = *(undefined4 *)(param_2 + 0x18);
  param_1[4] = *(undefined4 *)(param_2 + 0x20);
  param_1[8] = *(undefined4 *)(param_2 + 0x24);
  param_1[0x1c] = *(undefined4 *)(param_2 + 0x28);
  param_1[0x20] = *(undefined4 *)(param_2 + 0x28);
  param_1[0x24] = *(undefined4 *)(param_2 + 0x2c);
  param_1[0x28] = *(undefined4 *)(param_2 + 0x2c);
  param_1[0x2c] = *(undefined4 *)(param_2 + 0x30);
  param_1[0x30] = *(undefined4 *)(param_2 + 0x30);
  return;
}

