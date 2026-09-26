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


void fn_82D3BD38(int param_1,int param_2,longlong param_3,int param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_3 + -1 < 0) {
    return;
  }
  puVar4 = (ushort *)(param_2 + -2);
  do {
    puVar4 = puVar4 + 1;
    uVar1 = *puVar4;
    puVar2 = (undefined4 *)(param_1 + 0x20 + (uint)uVar1 & 0xfffffff0);
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    puVar3 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    puVar3[3] = uVar7;
    *(uint *)(param_4 + 0xc) = uVar1 | 0x3f000000;
    param_4 = param_4 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}

