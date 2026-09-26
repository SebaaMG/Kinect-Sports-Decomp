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


void fn_82A775C0(int param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  int *piVar3;
  int iVar5;
  ulonglong uVar4;
  ulonglong uVar6;
  
  puVar1 = *(uint **)(param_1 + 0xb8);
  uVar6 = 0;
  if (puVar1 != (uint *)0x0) {
    if (puVar1[7] == 0xff) {
code_r0x82a77664:
      uVar6 = 0xffffffffffffffff;
      goto code_r0x82a77668;
    }
    uVar6 = ((longlong)(int)puVar1[7] * (longlong)*(int *)(param_1 + 0xc0) -
            (ulonglong)*(uint *)(param_1 + 0xbc)) + (ulonglong)puVar1[5] + (ulonglong)puVar1[4] +
            (ulonglong)*puVar1;
    if ((int)uVar6 == -1) goto code_r0x82a77668;
  }
  piVar3 = *(int **)(param_1 + 0xa8);
  while (piVar3 != (int *)0x0) {
    if (piVar3 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar3;
      piVar3 = (int *)piVar3[1];
    }
    if (*(int *)(iVar5 + 0x20) == 0xff) goto code_r0x82a77664;
    uVar6 = (longlong)*(int *)(iVar5 + 0x1c) * (longlong)*(int *)(iVar5 + 0x20) +
            (ulonglong)*(uint *)(iVar5 + 0x14) + uVar6;
  }
code_r0x82a77668:
  uVar4 = (longlong)(int)(uint)*(ushort *)(*(int *)(param_1 + 0x78) + 0xc) * (longlong)param_2;
  lVar2 = uVar4 - uVar6;
  if ((uVar4 & 0xffffffff) <= (uVar6 & 0xffffffff)) {
    lVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x82a77698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x108) + 0x18))(*(int **)(param_1 + 0x108),uVar6,lVar2);
  return;
}

