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
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern int fn_82FFE0F0();
extern unsigned int uStack_34;


int fn_83015740(int param_1,longlong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined1 in_vs32 [16];
  undefined1 in_vs39 [16];
  undefined4 in_register_000103f0;
  undefined4 uStack_34;
  undefined4 auStack_30 [4];
  undefined1 auStack_20 [16];
  
  iVar2 = fn_82FFE0F0(param_2 + 4,param_3);
  puVar3 = (undefined4 *)(param_1 + -4);
  lVar5 = 6;
  if (iVar2 == 0) {
    puVar4 = &uStack_34;
    altv300_21(in_vs32,in_vs39);
    puVar1 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f0;
    puVar1[2] = in_register_000103f0;
    puVar1[3] = in_register_000103f0;
    puVar1 = (undefined4 *)((int)auStack_30 + in_r0 & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f0;
    puVar1[2] = in_register_000103f0;
    puVar1[3] = in_register_000103f0;
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  else {
    puVar4 = (undefined4 *)(iVar2 + 4);
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return param_1;
}

