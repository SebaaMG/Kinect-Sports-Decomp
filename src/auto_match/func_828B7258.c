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
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_828B6B60();
extern int fn_828B9180();


void fn_828B7258(int param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined4 auStack_60 [24];
  
  iVar7 = param_2;
  while( true ) {
    iVar6 = (iVar7 + 1) * 2;
    if (param_3 <= iVar6) break;
    puVar4 = (undefined4 *)((iVar7 + 1) * 0x10 + param_1);
    uVar3 = puVar4[-2];
    dVar8 = (double)fn_828B9180(*puVar4);
    dVar9 = (double)fn_828B9180(uVar3);
    if (dVar9 < dVar8) {
      iVar6 = iVar6 + -1;
    }
    puVar5 = (undefined4 *)(iVar6 * 8 + param_1);
    puVar4 = (undefined4 *)(iVar7 * 8 + param_1);
    uVar2 = 0;
    uVar3 = 0;
    if (auStack_60 != puVar5) {
      uVar3 = puVar5[1];
      puVar5[1] = 0;
      uVar2 = *puVar5;
      *puVar5 = 0;
    }
    iVar1 = puVar4[1];
    puVar4[1] = uVar3;
    *puVar4 = uVar2;
    iVar7 = iVar6;
    if (iVar1 != 0) {
      fn_822315A0();
    }
  }
  if (iVar6 == param_3) {
    iVar6 = param_3 * 8 + param_1;
    puVar5 = (undefined4 *)(iVar6 + -8);
    puVar4 = (undefined4 *)(iVar7 * 8 + param_1);
    uVar2 = 0;
    uVar3 = 0;
    if (auStack_60 != puVar5) {
      uVar3 = *(undefined4 *)(iVar6 + -4);
      *(undefined4 *)(iVar6 + -4) = 0;
      uVar2 = *puVar5;
      *puVar5 = 0;
    }
    iVar7 = puVar4[1];
    puVar4[1] = uVar3;
    *puVar4 = uVar2;
    if (iVar7 != 0) {
      fn_822315A0();
    }
    iVar7 = param_3 + -1;
  }
  fn_828B6B60(param_1,iVar7,param_2,param_4,param_5);
  return;
}

