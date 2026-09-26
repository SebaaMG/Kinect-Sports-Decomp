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


void fn_82CA3A98(undefined8 param_1,int param_2,int param_3,undefined1 *param_4,int param_5,
                  int param_6,int param_7,int param_8)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  param_3 = param_3 + 2;
  param_2 = param_2 + 4;
  lVar5 = 0x10;
  do {
    puVar4 = (undefined1 *)(param_2 + -9);
    puVar3 = (undefined1 *)(param_3 + -3);
    lVar6 = 4;
    puVar2 = param_4;
    do {
      puVar4[5] = puVar3[1];
      puVar4[7] = puVar3[2];
      puVar4[9] = puVar3[3];
      puVar3 = puVar3 + 4;
      puVar4[0xb] = *puVar3;
      uVar1 = *puVar2;
      puVar4[10] = uVar1;
      puVar4[6] = uVar1;
      uVar1 = puVar2[param_5 - (int)param_4];
      puVar2 = puVar2 + 1;
      puVar4[0xc] = uVar1;
      puVar4 = puVar4 + 8;
      *puVar4 = uVar1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar5 = lVar5 + -1;
    param_2 = param_2 + param_8;
    param_3 = param_3 + param_6;
    param_4 = param_4 + param_7;
    param_5 = param_5 + param_7;
  } while (lVar5 != 0);
  return;
}

