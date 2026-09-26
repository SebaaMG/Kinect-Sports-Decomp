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
extern int fn_82F68CC0();


undefined8 fn_82BD4208(int param_1,longlong param_2,uint *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = 0;
  uVar3 = 0xffffffff8000000a;
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  piVar6 = *(int **)(param_1 + 0x34);
LAB_82bd42e8:
  if (piVar6 == (int *)0x0) {
    *(uint *)(*(int *)(param_1 + 0x20) + 0xec) =
         *(uint *)(*(int *)(param_1 + 0x20) + 0xec) & ~(1 << (**(uint **)(param_1 + 4) & 0x3f));
  }
  else {
    piVar1 = (int *)*piVar6;
    if (*piVar1 == 0) goto LAB_82bd42e4;
    lVar4 = (ulonglong)(uint)piVar1[3] - (ulonglong)(uint)piVar1[1];
    uVar8 = lVar4 + 2;
    if ((uVar8 & 0xffffffff) <= (*param_3 - uVar7 & 0xffffffff)) goto code_r0x82bd4278;
    if ((uVar7 & 0xffffffff) == 0) {
      uVar3 = 0xffffffff8007000e;
      uVar7 = uVar8;
    }
  }
  *param_3 = (uint)uVar7;
  return uVar3;
code_r0x82bd4278:
  fn_82F68CC0(uVar7 + param_2,(ulonglong)(uint)piVar1[2] + (ulonglong)(uint)piVar1[1] + -2,uVar8);
  uVar7 = uVar8 + uVar7;
  uVar3 = 0;
  if (param_4 != (int *)0x0) {
    *param_4 = *param_4 + 1;
  }
  iVar2 = *piVar6;
  uVar5 = *(uint *)(iVar2 + 0xc);
  uVar8 = (ulonglong)*(uint *)(iVar2 + 4) + lVar4;
  if ((uVar8 & 0xffffffff) < (ulonglong)uVar5) {
    uVar5 = (uint)uVar8;
  }
  *(uint *)(iVar2 + 4) = uVar5;
  if (uVar5 == ((undefined4 *)*piVar6)[3]) {
    *(undefined4 *)*piVar6 = 0;
LAB_82bd42e4:
    piVar6 = (int *)piVar6[1];
  }
  goto LAB_82bd42e8;
}

