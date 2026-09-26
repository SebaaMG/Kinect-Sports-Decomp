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
extern int fn_826A9520();
extern int fn_826AE688();
extern int fn_826AE870();
extern int fn_826B1E20();


void fn_826B1FD0(int *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  
  piVar6 = (int *)*param_1;
  if (piVar6 == (int *)0x0) {
    lVar4 = 8;
  }
  else {
    if ((uint)(*piVar6 * 5) <= (uint)((piVar6[1] + 1) * 4)) goto LAB_826b202c;
    lVar4 = ((ulonglong)(uint)piVar6[1] + 1 & 0x7fffffff) << 1;
  }
  fn_826B1E20(param_1,param_2,lVar4);
LAB_826b202c:
  piVar6 = (int *)*param_1;
  param_4 = piVar6[1] & param_4;
  *piVar6 = *piVar6 + 1;
  iVar1 = *param_1;
  iVar7 = param_4 * 0x14 + iVar1;
  iVar2 = *(int *)(iVar7 + 8);
  puVar9 = (uint *)(iVar7 + 8);
  uVar8 = param_4;
  if (iVar2 == -2) {
    *puVar9 = 0xffffffff;
    fn_826AE870(iVar7 + 0xc,param_3);
  }
  else {
    do {
      uVar8 = uVar8 + 1 & *(uint *)(iVar1 + 4);
      iVar5 = uVar8 * 0x14 + iVar1;
      piVar6 = (int *)(iVar5 + 8);
    } while (*piVar6 != -2);
    iVar10 = iVar7 + 0xc;
    uVar3 = *(uint *)(*(int *)(iVar7 + 0xc) + 0xc) & *(uint *)(iVar1 + 4);
    if (uVar3 == param_4) {
      if (piVar6 != (int *)0x0) {
        *piVar6 = iVar2;
        fn_826AE688(iVar5 + 0xc,iVar10);
      }
      fn_826A9520(iVar10,param_3);
      *puVar9 = uVar8;
    }
    else {
      while (iVar7 = uVar3 * 0x14 + iVar1, puVar11 = (uint *)(iVar7 + 8),
            *(uint *)(iVar7 + 8) != param_4) {
        uVar3 = *puVar11;
      }
      if (piVar6 != (int *)0x0) {
        *piVar6 = iVar2;
        fn_826AE688(iVar5 + 0xc,iVar10);
      }
      *puVar11 = uVar8;
      fn_826A9520(iVar10,param_3);
      *puVar9 = 0xffffffff;
    }
  }
  return;
}

