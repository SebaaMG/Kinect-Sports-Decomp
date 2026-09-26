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


void fn_82D9D820(int param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((int)(param_2 + param_3) <= (int)param_2) {
    return;
  }
  lVar3 = (param_2 + param_3) - param_2;
  iVar4 = (int)param_2 << 4;
  do {
    puVar1 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    param_4 = param_4 + 0x10;
    puVar2 = (undefined4 *)(iVar4 + *(int *)(param_1 + 0x28) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    iVar4 = iVar4 + 0x10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

