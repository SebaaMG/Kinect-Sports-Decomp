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


void fn_826EBBE0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  
  *param_1 = *param_2;
  puVar6 = param_1 + 7;
  lVar7 = 9;
  puVar4 = param_2 + -8;
  puVar5 = param_2;
  do {
    uVar1 = puVar5[4];
    uVar2 = puVar5[3];
    uVar3 = puVar5[2];
    puVar4 = puVar4 + 9;
    puVar6[-6] = *puVar4;
    puVar6[-5] = uVar3;
    puVar6[-4] = uVar2;
    puVar6[-3] = uVar1;
    uVar1 = puVar5[8];
    uVar3 = *(undefined4 *)(((int)param_2 - (int)param_1) + (int)puVar6);
    uVar2 = puVar5[6];
    puVar6[-2] = puVar5[5];
    puVar6[-1] = uVar2;
    *puVar6 = uVar3;
    puVar6[1] = uVar1;
    puVar5 = puVar5 + 9;
    puVar6[2] = *puVar5;
    puVar6 = puVar6 + 9;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  param_1[0x52] = param_2[0x52];
  param_1[0x53] = param_2[0x53];
  param_1[0x54] = param_2[0x54];
  return;
}

