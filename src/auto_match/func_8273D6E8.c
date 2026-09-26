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
extern int fn_8273D3D0();


void fn_8273D6E8(int *param_1,undefined8 param_2,undefined4 *param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  int iVar11;
  uint *puVar12;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    lVar4 = 8;
  }
  else {
    if ((uint)(*piVar1 * 5) <= (uint)((piVar1[1] + 1) * 4)) goto LAB_8273d744;
    lVar4 = ((ulonglong)(uint)piVar1[1] + 1 & 0x7fffffff) << 1;
  }
  fn_8273D3D0(param_1,param_2,lVar4);
LAB_8273d744:
  piVar1 = (int *)*param_1;
  param_4 = piVar1[1] & param_4;
  *piVar1 = *piVar1 + 1;
  iVar2 = *param_1;
  iVar11 = param_4 * 0xc + iVar2;
  puVar12 = (uint *)(iVar11 + 8);
  uVar3 = *puVar12;
  uVar5 = param_4;
  if (uVar3 == 0xfffffffe) {
    *puVar12 = 0xffffffff;
    *(undefined4 *)(iVar11 + 0xc) = *param_3;
    uVar10 = param_3[1];
  }
  else {
    do {
      uVar5 = uVar5 + 1 & *(uint *)(iVar2 + 4);
      iVar6 = uVar5 * 0xc + iVar2;
      puVar7 = (uint *)(iVar6 + 8);
    } while (*puVar7 != 0xfffffffe);
    uVar8 = *(uint *)(iVar11 + 0xc) & *(uint *)(iVar2 + 4);
    if (uVar8 != param_4) {
      while (puVar9 = (uint *)(uVar8 * 0xc + iVar2 + 8), *puVar9 != param_4) {
        uVar8 = *puVar9;
      }
      if (puVar7 != (uint *)0x0) {
        *puVar7 = uVar3;
        *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar11 + 0xc);
        *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar11 + 0x10);
      }
      *puVar9 = uVar5;
      *(undefined4 *)(iVar11 + 0xc) = *param_3;
      uVar10 = param_3[1];
      *puVar12 = 0xffffffff;
      *(undefined4 *)(iVar11 + 0x10) = uVar10;
      return;
    }
    if (puVar7 != (uint *)0x0) {
      *puVar7 = uVar3;
      *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar11 + 0xc);
      *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar11 + 0x10);
    }
    *(undefined4 *)(iVar11 + 0xc) = *param_3;
    uVar10 = param_3[1];
    *puVar12 = uVar5;
  }
  *(undefined4 *)(iVar11 + 0x10) = uVar10;
  return;
}

