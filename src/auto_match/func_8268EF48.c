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


undefined8 fn_8268EF48(uint *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar6;
  undefined8 uVar5;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  
  puVar7 = param_1 + 4;
  piVar6 = (int *)fn_8268E6F0(puVar7,param_3);
  if ((((piVar6 == (int *)0x0) || (piVar6[8] != param_2)) || (param_3 < piVar6)) ||
     ((int *)((piVar6[9] << (*param_1 & 0x3f)) + (int)piVar6) <= param_3)) {
    uVar5 = 0;
  }
  else {
    puVar8 = param_1 + 3;
    param_1[5] = param_1[5] - piVar6[9];
    piVar1 = (int *)*piVar6;
    if (piVar1 == piVar6) {
      fn_8268E490(puVar8,piVar6);
    }
    else {
      piVar2 = (int *)piVar6[1];
      *piVar2 = (int)piVar1;
      piVar1[1] = (int)piVar2;
      fn_8268E408(puVar8,piVar6);
    }
    fn_8268E5C8(puVar7,piVar6);
    uVar3 = *param_1;
    uVar9 = ((piVar6[9] << (uVar3 & 0x3f)) - (int)param_3) + (int)piVar6;
    if (piVar6 < param_3) {
      piVar6[8] = param_2;
      iVar4 = (int)param_3 - (int)piVar6 >> (uVar3 & 0x3f);
      piVar6[9] = iVar4;
      fn_8268E570(puVar8,piVar6);
      fn_8268E320(puVar7,piVar6);
      param_1[5] = param_1[5] + iVar4;
      param_3[8] = param_2;
      param_3[9] = uVar9 >> (*param_1 & 0x3f);
    }
    uVar5 = 1;
    *(uint *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) - uVar9;
  }
  return uVar5;
}

