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
extern int fn_8268E320();
extern int fn_8268E408();
extern int fn_8268E490();
extern int fn_8268E570();
extern int fn_8268E5C8();
extern int fn_8268E620();
extern int fn_8268E6F0();


void fn_8268EAC0(uint *param_1,int param_2,int *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  
  uVar7 = param_1[1];
  if (param_4 < uVar7) {
    param_4 = uVar7;
  }
  if (param_5 < uVar7) {
    param_5 = uVar7;
  }
  puVar5 = param_1 + 4;
  uVar7 = (param_4 + param_5) - 1 & ~(param_5 - 1);
  piVar3 = (int *)fn_8268E6F0(puVar5,param_3);
  piVar6 = (int *)((int)param_3 + uVar7);
  piVar4 = (int *)fn_8268E620(puVar5,piVar6);
  if (((piVar3 == (int *)0x0) || (piVar3[8] != param_2)) ||
     ((int *)((piVar3[9] << (*param_1 & 0x3f)) + (int)piVar3) != param_3)) {
    piVar3 = (int *)0x0;
  }
  if (((piVar4 == (int *)0x0) || (piVar4[8] != param_2)) || (piVar4 != piVar6)) {
    piVar4 = (int *)0x0;
  }
  uVar1 = *param_1;
  param_3[8] = param_2;
  uVar7 = uVar7 >> (uVar1 & 0x3f);
  param_3[9] = uVar7;
  if (piVar3 != (int *)0x0) {
    uVar7 = piVar3[9] + uVar7;
    param_1[5] = param_1[5] - piVar3[9];
    piVar6 = (int *)*piVar3;
    if (piVar6 == piVar3) {
      fn_8268E490(param_1 + 3,piVar3);
    }
    else {
      piVar2 = (int *)piVar3[1];
      *piVar2 = (int)piVar6;
      piVar6[1] = (int)piVar2;
      fn_8268E408(param_1 + 3,piVar3);
    }
    fn_8268E5C8(puVar5,piVar3);
    param_3 = piVar3;
  }
  if (piVar4 != (int *)0x0) {
    uVar7 = piVar4[9] + uVar7;
    param_1[5] = param_1[5] - piVar4[9];
    piVar3 = (int *)*piVar4;
    if (piVar3 == piVar4) {
      fn_8268E490(param_1 + 3,piVar4);
    }
    else {
      piVar6 = (int *)piVar4[1];
      *piVar6 = (int)piVar3;
      piVar3[1] = (int)piVar6;
      fn_8268E408(param_1 + 3,piVar4);
    }
    fn_8268E5C8(puVar5,piVar4);
  }
  param_3[9] = uVar7;
  param_3[8] = param_2;
  fn_8268E570(param_1 + 3,param_3);
  fn_8268E320(puVar5,param_3);
  param_1[5] = uVar7 + param_1[5];
  return;
}

