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
extern int fn_82769F00();
extern int fn_8276B498();


void fn_8276D930(int *param_1,undefined8 param_2,undefined4 *param_3,uint param_4)

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
    if ((uint)(*piVar1 * 5) <= (uint)((piVar1[1] + 1) * 4)) goto LAB_8276d98c;
    lVar5 = ((ulonglong)(uint)piVar1[1] + 1 & 0x7fffffff) << 1;
  }
  fn_8276B498(param_1,param_2,lVar5);
LAB_8276d98c:
  piVar1 = (int *)*param_1;
  param_4 = piVar1[1] & param_4;
  *piVar1 = *piVar1 + 1;
  iVar2 = *param_1;
  iVar6 = param_4 * 0x14 + iVar2;
  puVar9 = (uint *)(iVar6 + 8);
  uVar8 = param_4;
  if (*(int *)(iVar6 + 8) == -2) {
    *puVar9 = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)*param_3;
    fn_826D6238(iVar6 + 0x14,param_3[1]);
  }
  else {
    do {
      uVar8 = *(uint *)(iVar2 + 4) & uVar8 + 1;
      iVar7 = uVar8 * 0x14 + iVar2;
      iVar4 = iVar7 + 8;
    } while (*(int *)(iVar7 + 8) != -2);
    uVar3 = *(uint *)(iVar6 + 0xc);
    if (uVar3 == param_4) {
      if (iVar4 != 0) {
        fn_82769F00(iVar4,puVar9);
      }
      *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)*param_3;
      fn_826D6290(iVar6 + 0x14,param_3[1]);
      *puVar9 = uVar8;
    }
    else {
      while (iVar7 = uVar3 * 0x14 + iVar2, puVar10 = (uint *)(iVar7 + 8),
            *(uint *)(iVar7 + 8) != param_4) {
        uVar3 = *puVar10;
      }
      if (iVar4 != 0) {
        fn_82769F00(iVar4,puVar9);
      }
      *puVar10 = uVar8;
      *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)*param_3;
      fn_826D6290(iVar6 + 0x14,param_3[1]);
      *puVar9 = 0xffffffff;
    }
  }
  *(uint *)(iVar6 + 0xc) = param_4;
  return;
}

