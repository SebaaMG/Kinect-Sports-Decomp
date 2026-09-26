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
extern int fn_82B86888();


void fn_82B86A10(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  uint auStack_30 [4];
  undefined1 auStack_20 [32];
  
  iVar5 = (int)param_2;
  uVar8 = 0;
  auStack_30[0] = 0;
  if (iVar5 != 0) {
    puVar6 = auStack_30 + 3;
    piVar7 = (int *)(param_3 + -4);
    do {
      uVar4 = uVar8 >> 3 & 0x1ffffffc;
      puVar2 = (uint *)(piVar7 + 1);
      piVar7 = piVar7 + 2;
      iVar1 = *piVar7;
      uVar3 = uVar8 & 0x1f;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar2;
      uVar8 = uVar8 + 2;
      *(uint *)((int)auStack_30 + uVar4) = iVar1 << uVar3 | *(uint *)((int)auStack_30 + uVar4);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  fn_82B86888(param_1,iVar5,auStack_20,0);
  return;
}

