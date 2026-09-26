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
extern int fn_8273E5C8();
extern int fn_8273E680();
extern int fn_8273E6E0();
extern int fn_8273F198();


void fn_8273F468(int *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  
  piVar5 = (int *)*param_1;
  if (piVar5 == (int *)0x0) {
    lVar3 = 8;
  }
  else {
    if ((uint)(*piVar5 * 5) <= (uint)((piVar5[1] + 1) * 4)) goto LAB_8273f4c4;
    lVar3 = ((ulonglong)(uint)piVar5[1] + 1 & 0x7fffffff) << 1;
  }
  fn_8273F198(param_1,param_2,lVar3);
LAB_8273f4c4:
  piVar5 = (int *)*param_1;
  param_4 = piVar5[1] & param_4;
  *piVar5 = *piVar5 + 1;
  iVar1 = *param_1;
  iVar6 = param_4 * 0x10 + iVar1;
  iVar2 = *(int *)(iVar6 + 8);
  puVar9 = (uint *)(iVar6 + 8);
  uVar8 = param_4;
  if (iVar2 == -2) {
    *puVar9 = 0xffffffff;
    fn_8273E6E0(iVar6 + 0xc,param_3);
  }
  else {
    do {
      uVar8 = uVar8 + 1 & *(uint *)(iVar1 + 4);
      iVar4 = uVar8 * 0x10 + iVar1;
      piVar5 = (int *)(iVar4 + 8);
    } while (*piVar5 != -2);
    iVar10 = iVar6 + 0xc;
    uVar7 = *(uint *)(*(int *)(iVar6 + 0xc) + 0xc) & *(uint *)(iVar1 + 4);
    if (uVar7 == param_4) {
      if (piVar5 != (int *)0x0) {
        *piVar5 = iVar2;
        fn_8273E680(iVar4 + 0xc,iVar10);
      }
      fn_8273E5C8(iVar10,param_3);
      *puVar9 = uVar8;
    }
    else {
      while (iVar6 = uVar7 * 0x10 + iVar1, puVar11 = (uint *)(iVar6 + 8),
            *(uint *)(iVar6 + 8) != param_4) {
        uVar7 = *puVar11;
      }
      if (piVar5 != (int *)0x0) {
        *piVar5 = iVar2;
        fn_8273E680(iVar4 + 0xc,iVar10);
      }
      *puVar11 = uVar8;
      fn_8273E5C8(iVar10,param_3);
      *puVar9 = 0xffffffff;
    }
  }
  return;
}

