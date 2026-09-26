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
extern int fn_82686FA0();


void fn_82686A80(int *param_1,undefined8 param_2,uint *param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  
  piVar4 = (int *)*param_1;
  if (piVar4 == (int *)0x0) {
    lVar2 = 8;
  }
  else {
    if ((uint)(*piVar4 * 5) <= (uint)((piVar4[1] + 1) * 4)) goto LAB_82686adc;
    lVar2 = ((ulonglong)(uint)piVar4[1] + 1 & 0x7fffffff) << 1;
  }
  fn_82686FA0(param_1,param_2,lVar2);
LAB_82686adc:
  piVar4 = (int *)*param_1;
  param_4 = piVar4[1] & param_4;
  *piVar4 = *piVar4 + 1;
  iVar6 = (param_4 + 1) * 8;
  iVar1 = *param_1;
  puVar5 = (uint *)(iVar6 + iVar1);
  iVar6 = *(int *)(iVar6 + iVar1);
  uVar3 = param_4;
  if (iVar6 == -2) {
    *puVar5 = 0xffffffff;
    uVar8 = *param_3;
  }
  else {
    do {
      uVar3 = uVar3 + 1 & *(uint *)(iVar1 + 4);
      piVar4 = (int *)((uVar3 + 1) * 8 + iVar1);
    } while (*piVar4 != -2);
    uVar8 = (puVar5[1] >> 6 ^ puVar5[1]) & *(uint *)(iVar1 + 4);
    if (uVar8 != param_4) {
      while (puVar7 = (uint *)((uVar8 + 1) * 8 + iVar1), *puVar7 != param_4) {
        uVar8 = *puVar7;
      }
      if (piVar4 != (int *)0x0) {
        *piVar4 = iVar6;
        piVar4[1] = puVar5[1];
      }
      *puVar7 = uVar3;
      uVar3 = *param_3;
      *puVar5 = 0xffffffff;
      puVar5[1] = uVar3;
      return;
    }
    if (piVar4 != (int *)0x0) {
      *piVar4 = iVar6;
      piVar4[1] = puVar5[1];
    }
    uVar8 = *param_3;
    *puVar5 = uVar3;
  }
  puVar5[1] = uVar8;
  return;
}

