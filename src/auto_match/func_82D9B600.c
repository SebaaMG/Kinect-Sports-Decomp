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
extern unsigned int *auStack_10;


void fn_82D9B600(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_r0;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_10 [16];
  
  uVar1 = *(undefined4 *)(param_1 + 0xc0);
  uVar2 = *(undefined4 *)(param_1 + 0xc4);
  uVar3 = *(undefined4 *)(param_1 + 200);
  puVar4 = (undefined4 *)((uint)(auStack_10 + in_r0) & 0xfffffff0);
  uVar5 = *puVar4;
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar8 = puVar4[3];
  puVar4 = (undefined4 *)(in_r0 + (int)param_2 & 0xfffffff0);
  *puVar4 = uVar5;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  puVar4 = (undefined4 *)((uint)(param_2 + 4) & 0xfffffff0);
  *puVar4 = uVar5;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  puVar4 = (undefined4 *)((uint)(param_2 + 8) & 0xfffffff0);
  *puVar4 = uVar5;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  *param_2 = uVar1;
  param_2[5] = uVar2;
  param_2[10] = uVar3;
  return;
}

