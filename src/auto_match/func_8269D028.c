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
extern int fn_8269B4A0();
extern int fn_8269DD58();


void fn_8269D028(int *param_1,undefined8 param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  
  fn_8269DD58();
  piVar6 = (int *)*param_1;
  param_4 = piVar6[1] & param_4;
  *piVar6 = *piVar6 + 1;
  iVar1 = *param_1;
  iVar7 = param_4 * 0xc + iVar1;
  iVar2 = *(int *)(iVar7 + 8);
  puVar10 = (uint *)(iVar7 + 8);
  uVar9 = param_4;
  if (iVar2 == -2) {
    *puVar10 = 0xffffffff;
    iVar1 = *param_3;
    *(int *)(iVar7 + 0xc) = iVar1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    *(undefined1 *)(iVar7 + 0x10) = *(undefined1 *)(param_3 + 1);
  }
  else {
    do {
      uVar9 = uVar9 + 1 & *(uint *)(iVar1 + 4);
      iVar5 = uVar9 * 0xc + iVar1;
      piVar6 = (int *)(iVar5 + 8);
    } while (*piVar6 != -2);
    piVar4 = (int *)(iVar7 + 0xc);
    uVar3 = *(uint *)(*(int *)(iVar7 + 0xc) + 0xc) & *(uint *)(iVar1 + 4);
    if (uVar3 == param_4) {
      if (piVar6 != (int *)0x0) {
        *piVar6 = iVar2;
        iVar1 = *piVar4;
        *(int *)(iVar5 + 0xc) = iVar1;
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
        *(undefined1 *)(iVar5 + 0x10) = *(undefined1 *)(iVar7 + 0x10);
      }
      fn_8269B4A0(piVar4,param_3);
      *puVar10 = uVar9;
    }
    else {
      while (puVar8 = (uint *)(uVar3 * 0xc + iVar1 + 8), *puVar8 != param_4) {
        uVar3 = *puVar8;
      }
      if (piVar6 != (int *)0x0) {
        *piVar6 = iVar2;
        iVar1 = *piVar4;
        *(int *)(iVar5 + 0xc) = iVar1;
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
        *(undefined1 *)(iVar5 + 0x10) = *(undefined1 *)(iVar7 + 0x10);
      }
      *puVar8 = uVar9;
      fn_8269B4A0(piVar4,param_3);
      *puVar10 = 0xffffffff;
    }
  }
  return;
}

