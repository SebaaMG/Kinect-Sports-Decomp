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
extern int fn_8269DDA0();
extern int fn_8269F140();
extern int fn_8269FC20();
extern int fn_826A0C18();


void fn_826A0DD8(int *param_1,undefined8 param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  
  piVar9 = (int *)*param_1;
  if (piVar9 == (int *)0x0) {
    lVar5 = 8;
  }
  else {
    if ((uint)(*piVar9 * 5) <= (uint)((piVar9[1] + 1) * 4)) goto LAB_826a0e34;
    lVar5 = ((ulonglong)(uint)piVar9[1] + 1 & 0x7fffffff) << 1;
  }
  fn_826A0C18(param_1,param_2,lVar5);
LAB_826a0e34:
  piVar9 = (int *)*param_1;
  param_4 = piVar9[1] & param_4;
  *piVar9 = *piVar9 + 1;
  iVar1 = *param_1;
  iVar7 = param_4 * 0x24 + iVar1;
  iVar2 = *(int *)(iVar7 + 8);
  puVar12 = (uint *)(iVar7 + 8);
  uVar10 = param_4;
  if (iVar2 == -2) {
    *puVar12 = 0xffffffff;
    fn_8269F140(iVar7 + 0x10,param_3);
  }
  else {
    do {
      uVar10 = *(uint *)(iVar1 + 4) & uVar10 + 1;
      iVar8 = uVar10 * 0x24 + iVar1;
      piVar9 = (int *)(iVar8 + 8);
    } while (*piVar9 != -2);
    uVar3 = *(uint *)(iVar7 + 0xc);
    if (uVar3 == param_4) {
      if (piVar9 != (int *)0x0) {
        *piVar9 = iVar2;
        *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar7 + 0xc);
        fn_8269FC20(iVar8 + 0x10,iVar7 + 0x10);
      }
      puVar4 = (undefined4 *)*param_3;
      *(undefined4 *)(iVar7 + 0x10) = *puVar4;
      *(undefined4 *)(iVar7 + 0x14) = puVar4[1];
      *(undefined4 *)(iVar7 + 0x18) = puVar4[2];
      *(undefined4 *)(iVar7 + 0x1c) = puVar4[3];
      fn_8269DDA0(iVar7 + 0x20,param_3[1]);
      *puVar12 = uVar10;
    }
    else {
      while (iVar6 = uVar3 * 0x24 + iVar1, puVar11 = (uint *)(iVar6 + 8),
            *(uint *)(iVar6 + 8) != param_4) {
        uVar3 = *puVar11;
      }
      if (piVar9 != (int *)0x0) {
        *piVar9 = iVar2;
        *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar7 + 0xc);
        fn_8269FC20(iVar8 + 0x10,iVar7 + 0x10);
      }
      *puVar11 = uVar10;
      puVar4 = (undefined4 *)*param_3;
      *(undefined4 *)(iVar7 + 0x10) = *puVar4;
      *(undefined4 *)(iVar7 + 0x14) = puVar4[1];
      *(undefined4 *)(iVar7 + 0x18) = puVar4[2];
      *(undefined4 *)(iVar7 + 0x1c) = puVar4[3];
      fn_8269DDA0(iVar7 + 0x20,param_3[1]);
      *puVar12 = 0xffffffff;
    }
  }
  *(uint *)(iVar7 + 0xc) = param_4;
  return;
}

