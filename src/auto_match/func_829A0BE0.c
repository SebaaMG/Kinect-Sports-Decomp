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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_8295D318();
extern int fn_82964628();
extern int fn_82975B00();
extern int fn_82F68CC0();
extern unsigned int lbl_82005710;


undefined8 fn_829A0BE0(int param_1)

{
  int *piVar1;
  int iVar3;
  undefined8 uVar2;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  ulonglong uVar8;
  int aiStack_80 [4];
  undefined4 auStack_70 [4];
  undefined4 auStack_60 [24];
  
  iVar3 = *(int *)(param_1 + 0x104);
  iVar4 = 0;
  piVar1 = *(int **)(iVar3 + 0x10);
  lVar7 = 4;
  uVar5 = (ulonglong)*(uint *)(iVar3 + 0xc);
  do {
    *(undefined4 *)((int)auStack_60 + iVar4) = *(undefined4 *)(*(int *)(iVar3 + 8) + 0xc);
    *(undefined4 *)((int)auStack_70 + iVar4) = *(undefined4 *)(*(int *)(iVar3 + 8) + 0x1c);
    iVar4 = iVar4 + 4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  iVar3 = *(int *)(*piVar1 * 4 + *(int *)(param_1 + 0x14));
  if (*(int *)(iVar3 + 4) == *(int *)(param_1 + 0x84)) {
    if (*(int *)(iVar3 + 0x6c) != 1) {
      fn_82975B00(param_1,*(undefined4 *)(*(int *)(param_1 + 0x104) + 0x3c),0x12cd,
                    0xffffffff82051870);
      return 0xffffffff80004005;
    }
    uVar8 = uVar5;
    if (uVar5 == 0) goto LAB_829a0d3c;
    do {
      *(undefined4 *)(*(int *)(*piVar1 * 4 + *(int *)(param_1 + 0x14)) + 0xc) = 0;
      *(undefined4 *)(*(int *)(*piVar1 * 4 + *(int *)(param_1 + 0x14)) + 4) =
           *(undefined4 *)(param_1 + 0x88);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (uVar5 != 0) {
    uVar8 = uVar5;
    uVar2 = lbl_82005710;
    piVar6 = piVar1;
    do {
      iVar3 = fn_82964628(uVar2,param_1,0,0,0);
      *(int *)(((int)aiStack_80 - (int)piVar1) + (int)piVar6) = iVar3;
      iVar3 = *(int *)(iVar3 * 4 + *(int *)(param_1 + 0x14));
      fn_82F68CC0(iVar3,*(undefined4 *)(*piVar6 * 4 + *(int *)(param_1 + 0x14)),0x80);
      uVar8 = uVar8 - 1;
      *(undefined4 *)(iVar3 + 0x3c) = 0;
      piVar6 = piVar6 + 1;
    } while (uVar8 != 0);
  }
LAB_829a0d3c:
  uVar8 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x104) + 8);
  uVar2 = fn_8295D318(param_1,8,aiStack_80,uVar5,uVar8,uVar8 + 0x10,0,2);
  if (-1 < (int)uVar2) {
    uVar2 = fn_8295D318(param_1,4,piVar1,uVar5,auStack_60,auStack_70,aiStack_80,uVar5);
  }
  return uVar2;
}

