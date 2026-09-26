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
extern int fn_826A9470();
extern int fn_826AE688();
extern int fn_826B1F88();


void fn_826AF920(int *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  
  fn_826B1F88();
  piVar5 = (int *)*param_1;
  param_4 = piVar5[1] & param_4;
  *piVar5 = *piVar5 + 1;
  iVar1 = *param_1;
  iVar6 = param_4 * 0x14 + iVar1;
  iVar2 = *(int *)(iVar6 + 8);
  puVar8 = (uint *)(iVar6 + 8);
  uVar7 = param_4;
  if (iVar2 == -2) {
    *puVar8 = 0xffffffff;
    fn_826AE688(iVar6 + 0xc,param_3);
  }
  else {
    do {
      uVar7 = uVar7 + 1 & *(uint *)(iVar1 + 4);
      iVar4 = uVar7 * 0x14 + iVar1;
      piVar5 = (int *)(iVar4 + 8);
    } while (*piVar5 != -2);
    iVar9 = iVar6 + 0xc;
    uVar3 = *(uint *)(*(int *)(iVar6 + 0xc) + 0xc) & *(uint *)(iVar1 + 4);
    if (uVar3 == param_4) {
      if (piVar5 != (int *)0x0) {
        *piVar5 = iVar2;
        fn_826AE688(iVar4 + 0xc,iVar9);
      }
      fn_826A9470(iVar9,param_3);
      *puVar8 = uVar7;
    }
    else {
      while (iVar6 = uVar3 * 0x14 + iVar1, puVar10 = (uint *)(iVar6 + 8),
            *(uint *)(iVar6 + 8) != param_4) {
        uVar3 = *puVar10;
      }
      if (piVar5 != (int *)0x0) {
        *piVar5 = iVar2;
        fn_826AE688(iVar4 + 0xc,iVar9);
      }
      *puVar10 = uVar7;
      fn_826A9470(iVar9,param_3);
      *puVar8 = 0xffffffff;
    }
  }
  return;
}

