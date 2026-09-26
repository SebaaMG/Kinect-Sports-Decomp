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
extern int fn_82689F98();
extern int fn_8268A100();
extern int fn_8268A530();


void fn_8268A690(int *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  
  piVar8 = (int *)*param_1;
  if (piVar8 == (int *)0x0) {
    lVar4 = 8;
  }
  else {
    if ((uint)(*piVar8 * 5) <= (uint)((piVar8[1] + 1) * 4)) goto LAB_8268a6ec;
    lVar4 = ((ulonglong)(uint)piVar8[1] + 1 & 0x7fffffff) << 1;
  }
  fn_8268A530(param_1,param_2,lVar4);
LAB_8268a6ec:
  piVar8 = (int *)*param_1;
  param_4 = piVar8[1] & param_4;
  *piVar8 = *piVar8 + 1;
  iVar1 = *param_1;
  iVar6 = param_4 * 0x18 + iVar1;
  iVar2 = *(int *)(iVar6 + 8);
  puVar11 = (uint *)(iVar6 + 8);
  uVar9 = param_4;
  if (iVar2 == -2) {
    *puVar11 = 0xffffffff;
    fn_82689F98(iVar6 + 0x10,param_3);
  }
  else {
    do {
      uVar9 = *(uint *)(iVar1 + 4) & uVar9 + 1;
      iVar7 = uVar9 * 0x18 + iVar1;
      piVar8 = (int *)(iVar7 + 8);
    } while (*piVar8 != -2);
    uVar3 = *(uint *)(iVar6 + 0xc);
    if (uVar3 == param_4) {
      if (piVar8 != (int *)0x0) {
        *piVar8 = iVar2;
        *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar6 + 0xc);
        fn_82689F98(iVar7 + 0x10,iVar6 + 0x10);
      }
      fn_8268A100(iVar6 + 0x10,param_3);
      *puVar11 = uVar9;
    }
    else {
      while (iVar5 = uVar3 * 0x18 + iVar1, puVar10 = (uint *)(iVar5 + 8),
            *(uint *)(iVar5 + 8) != param_4) {
        uVar3 = *puVar10;
      }
      if (piVar8 != (int *)0x0) {
        *piVar8 = iVar2;
        *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar6 + 0xc);
        fn_82689F98(iVar7 + 0x10,iVar6 + 0x10);
      }
      *puVar10 = uVar9;
      fn_8268A100(iVar6 + 0x10,param_3);
      *puVar11 = 0xffffffff;
    }
  }
  *(uint *)(iVar6 + 0xc) = param_4;
  return;
}

