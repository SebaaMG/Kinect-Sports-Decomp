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
extern int fn_8268E6F0();


void fn_8268EE18(uint *param_1,int param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  
  puVar5 = param_1 + 4;
  iVar7 = *(int *)(param_2 + 0x10) + *(int *)(param_2 + 0x14);
  piVar3 = (int *)fn_8268E6F0(puVar5,iVar7 + -1);
  if (((piVar3 == (int *)0x0) || (piVar3[8] != param_2)) ||
     ((piVar3[9] << (*param_1 & 0x3f)) + (int)piVar3 != iVar7)) {
    uVar4 = *param_1;
    *(int *)(iVar7 + 0x20) = param_2;
    uVar4 = param_3 >> (uVar4 & 0x3f);
    *(uint *)(iVar7 + 0x24) = uVar4;
    fn_8268E570(param_1 + 3,iVar7);
    fn_8268E320(puVar5,iVar7);
    uVar4 = param_1[5] + uVar4;
  }
  else {
    puVar6 = param_1 + 3;
    param_1[5] = param_1[5] - piVar3[9];
    piVar1 = (int *)*piVar3;
    if (piVar1 == piVar3) {
      fn_8268E490(puVar6,piVar3);
    }
    else {
      piVar2 = (int *)piVar3[1];
      *piVar2 = (int)piVar1;
      piVar1[1] = (int)piVar2;
      fn_8268E408(puVar6,piVar3);
    }
    fn_8268E5C8(puVar5,piVar3);
    uVar4 = *param_1;
    piVar3[8] = param_2;
    iVar7 = (param_3 >> (uVar4 & 0x3f)) + piVar3[9];
    piVar3[9] = iVar7;
    fn_8268E570(puVar6,piVar3);
    fn_8268E320(puVar5,piVar3);
    uVar4 = param_1[5] + iVar7;
  }
  param_1[5] = uVar4;
  *(uint *)(param_2 + 0x14) = param_3 + *(int *)(param_2 + 0x14);
  return;
}

