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
extern int fn_826BE148();
extern int fn_826C0278();
extern int fn_826C1018();
extern int fn_826C11C0();


void fn_826C23D0(int *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    lVar5 = 8;
  }
  else {
    if ((uint)(*piVar1 * 5) <= (uint)((piVar1[1] + 1) * 4)) goto LAB_826c242c;
    lVar5 = ((ulonglong)(uint)piVar1[1] + 1 & 0x7fffffff) << 1;
  }
  fn_826C11C0(param_1,param_2,lVar5);
LAB_826c242c:
  piVar1 = (int *)*param_1;
  param_4 = piVar1[1] & param_4;
  *piVar1 = *piVar1 + 1;
  iVar2 = *param_1;
  iVar7 = param_4 * 0x30 + iVar2;
  puVar9 = (uint *)(iVar7 + 8);
  uVar8 = param_4;
  if (*(int *)(iVar7 + 8) == -2) {
    *puVar9 = 0xffffffff;
    fn_826C0278(iVar7 + 0x10,param_3);
  }
  else {
    do {
      uVar8 = uVar8 + 1 & *(uint *)(iVar2 + 4);
      iVar6 = uVar8 * 0x30 + iVar2;
      iVar4 = iVar6 + 8;
    } while (*(int *)(iVar6 + 8) != -2);
    uVar3 = *(uint *)(*(int *)(iVar7 + 0x10) + 0xc) & *(uint *)(iVar2 + 4);
    if (uVar3 == param_4) {
      if (iVar4 != 0) {
        fn_826C1018(iVar4,puVar9);
      }
      fn_826BE148(iVar7 + 0x10,param_3);
      *puVar9 = uVar8;
    }
    else {
      while (iVar6 = uVar3 * 0x30 + iVar2, puVar10 = (uint *)(iVar6 + 8),
            *(uint *)(iVar6 + 8) != param_4) {
        uVar3 = *puVar10;
      }
      if (iVar4 != 0) {
        fn_826C1018(iVar4,puVar9);
      }
      *puVar10 = uVar8;
      fn_826BE148(iVar7 + 0x10,param_3);
      *puVar9 = 0xffffffff;
    }
  }
  return;
}

