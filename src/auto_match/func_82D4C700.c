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
extern unsigned int lbl_8213691C;


void fn_82D4C700(undefined4 *param_1,int param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar3 = (int)param_3;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = &lbl_8213691C;
  param_1[2] = 0;
  param_1[3] = 0x16;
  if (0 < iVar3) {
    puVar4 = param_1 + 8;
    do {
      puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      param_2 = param_2 + 0x10;
      puVar2 = (undefined4 *)(in_r0 + (int)puVar4 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      puVar4 = puVar4 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  param_1[4] = iVar3;
  return;
}

