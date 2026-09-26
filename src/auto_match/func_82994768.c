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
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82964628();
extern int fn_82BA02A8();
extern unsigned int lbl_82005710;


longlong fn_82994768(int param_1,int *param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar4;
  longlong lVar3;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined8 uVar9;
  int aiStack_50 [20];
  
  uVar7 = 0;
  uVar5 = 0;
  if (*(uint *)(param_1 + 8) != 0) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(iVar4 + *(int *)(param_1 + 0x14));
      if ((*(int *)(param_1 + 0x88) == *(int *)(iVar1 + 4)) &&
         (uVar6 = (ulonglong)*(uint *)(iVar1 + 0xc), (uVar7 & 0xffffffff) <= uVar6)) {
        uVar7 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar5 < *(uint *)(param_1 + 8));
  }
  uVar6 = 0;
  piVar8 = aiStack_50;
  uVar9 = lbl_82005710;
  do {
    iVar4 = fn_82964628(uVar9,param_1,*(undefined4 *)(param_1 + 0x88),uVar7,uVar6);
    *piVar8 = iVar4;
    if (iVar4 == -1) goto LAB_82994830;
    uVar6 = uVar6 + 1;
    piVar8 = piVar8 + 1;
  } while ((uVar6 & 0xffffffff) < 4);
  iVar4 = fn_82963998(0x74);
  if (iVar4 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = fn_829632A0();
  }
  *param_2 = (int)uVar7;
  if ((uVar7 & 0xffffffff) == 0) {
LAB_82994830:
    lVar3 = -0x7ff8fff2;
  }
  else {
    lVar3 = fn_82963A30(uVar7,param_3 & 0xffffffff000fffff | 0x10000000,param_3,param_3,0);
    if ((lVar3 < 0) || (lVar3 = fn_829632F0(*param_2,*(undefined4 *)(param_1 + 0x104)), lVar3 < 0))
    {
      iVar4 = *param_2;
      if (iVar4 != 0) {
        fn_82BA02A8(iVar4);
        fn_829639F0(iVar4);
      }
    }
    else {
      if ((param_3 & 0xffffffff) != 0) {
        iVar4 = 0;
        do {
          uVar2 = *(undefined4 *)((int)aiStack_50 + iVar4);
          *(undefined4 *)(*(int *)(*param_2 + 8) + iVar4) = uVar2;
          *(undefined4 *)(*(int *)(*param_2 + 0x10) + iVar4) =
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + iVar4);
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + iVar4) = uVar2;
          iVar4 = iVar4 + 4;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
      lVar3 = 0;
    }
  }
  return lVar3;
}

