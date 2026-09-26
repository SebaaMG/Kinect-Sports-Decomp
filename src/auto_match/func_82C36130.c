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
extern int fn_82C3F478();


void fn_82C36130(undefined4 *param_1,longlong param_2,int param_3,longlong param_4,
                  longlong param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  iVar4 = (int)param_2;
  uVar1 = *(uint *)(iVar4 + 0x1c8);
  uVar7 = (ulonglong)uVar1;
  uVar2 = *param_1;
  uVar3 = *(uint *)(iVar4 + 0x1c4);
  uVar9 = (ulonglong)uVar3;
  if (-1 < (int)uVar1) {
    lVar6 = (longlong)((int)*(short *)(param_3 + 0x76) >> 1);
    if ((int)uVar3 < (int)uVar1) {
      uVar8 = lVar6 + uVar7;
      iVar5 = (int)uVar8;
      *(int *)(iVar4 + 0x1c4) = iVar5 - *(short *)(param_3 + 0x76);
      if (*(short *)(param_3 + 0x76) < iVar5) {
        uVar8 = (longlong)*(short *)(param_3 + 0x76);
      }
      goto LAB_82c361b0;
    }
    uVar7 = lVar6 + uVar7;
    if ((int)uVar3 < (int)uVar7) {
      uVar9 = uVar7;
    }
  }
  uVar7 = uVar9;
  *(int *)(iVar4 + 0x1c4) = (int)uVar7 - (int)*(short *)(param_3 + 0x76);
  uVar8 = uVar7;
  uVar9 = uVar7;
  if ((int)*(short *)(param_3 + 0x76) < (int)uVar7) {
    uVar7 = (ulonglong)*(short *)(param_3 + 0x76);
    uVar8 = uVar7;
    uVar9 = uVar7;
  }
LAB_82c361b0:
  if (*(int *)(iVar4 + 0x1c4) < 0) {
    *(undefined4 *)(iVar4 + 0x1c4) = 0;
  }
  lVar6 = (longlong)*(short *)(iVar4 + 0xb6) + -1;
  if (-1 < lVar6) {
    lVar10 = lVar6 * 0x38 + param_2 + 200;
    do {
      if (0 < (int)uVar9) {
        fn_82C3F478(uVar2,lVar10,1);
        (*(code *)param_1[0x35])(uVar2,lVar10,param_4,uVar9);
        fn_82C3F478(uVar2,lVar10,0);
      }
      if ((int)uVar9 < (int)uVar7) {
        (*(code *)param_1[0x35])(uVar2,lVar10,(uVar9 & 0x3fffffff) * 4 + param_4,uVar7 - uVar9);
      }
      if ((int)uVar7 < (int)uVar8) {
        fn_82C3F478(uVar2,lVar10,1);
        (*(code *)param_1[0x35])(uVar2,lVar10,(uVar7 & 0x3fffffff) * 4 + param_4,uVar8 - uVar7);
        fn_82C3F478(uVar2,lVar10,0);
      }
      if ((int)uVar8 < (int)param_5) {
        (*(code *)param_1[0x35])(uVar2,lVar10,(uVar8 & 0x3fffffff) * 4 + param_4,param_5 - uVar8);
      }
      lVar6 = lVar6 + -1;
      lVar10 = lVar10 + -0x38;
    } while (-1 < lVar6);
  }
  return;
}

