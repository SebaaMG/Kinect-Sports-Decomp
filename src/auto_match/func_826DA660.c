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
extern int fn_826D6238();
extern int fn_826D6290();
extern int fn_826D7A48();
extern int fn_826D9928();


void fn_826DA660(int *param_1,undefined8 param_2,undefined4 *param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    lVar4 = 8;
  }
  else {
    if ((uint)(*piVar1 * 5) <= (uint)((piVar1[1] + 1) * 4)) goto LAB_826da6bc;
    lVar4 = ((ulonglong)(uint)piVar1[1] + 1 & 0x7fffffff) << 1;
  }
  fn_826D9928(param_1,param_2,lVar4);
LAB_826da6bc:
  piVar1 = (int *)*param_1;
  param_4 = piVar1[1] & param_4;
  *piVar1 = *piVar1 + 1;
  iVar2 = *param_1;
  iVar6 = param_4 * 0x10 + iVar2;
  puVar9 = (uint *)(iVar6 + 8);
  uVar8 = param_4;
  if (*(int *)(iVar6 + 8) == -2) {
    *puVar9 = 0xffffffff;
    *(undefined4 *)(iVar6 + 0xc) = *param_3;
    fn_826D6238(iVar6 + 0x10,param_3 + 1);
  }
  else {
    do {
      uVar8 = uVar8 + 1 & *(uint *)(iVar2 + 4);
      iVar5 = uVar8 * 0x10 + iVar2;
      iVar3 = iVar5 + 8;
    } while (*(int *)(iVar5 + 8) != -2);
    uVar7 = (*(uint *)(iVar6 + 0xc) >> 8 ^ *(uint *)(iVar6 + 0xc)) & *(uint *)(iVar2 + 4);
    if (uVar7 == param_4) {
      if (iVar3 != 0) {
        fn_826D7A48(iVar3,puVar9);
      }
      *(undefined4 *)(iVar6 + 0xc) = *param_3;
      fn_826D6290(iVar6 + 0x10,param_3 + 1);
      *puVar9 = uVar8;
    }
    else {
      while (iVar5 = uVar7 * 0x10 + iVar2, puVar10 = (uint *)(iVar5 + 8),
            *(uint *)(iVar5 + 8) != param_4) {
        uVar7 = *puVar10;
      }
      if (iVar3 != 0) {
        fn_826D7A48(iVar3,puVar9);
      }
      *puVar10 = uVar8;
      *(undefined4 *)(iVar6 + 0xc) = *param_3;
      fn_826D6290(iVar6 + 0x10,param_3 + 1);
      *puVar9 = 0xffffffff;
    }
  }
  return;
}

