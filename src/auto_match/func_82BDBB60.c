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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A1EFC0();


undefined8 fn_82BDBB60(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar8 = 0;
  uVar5 = 0;
  if (uVar1 != 0) {
    piVar6 = (int *)(param_1 + 0x50);
    uVar9 = uVar8;
    do {
      uVar8 = (ulonglong)*(uint *)(*(int *)(*piVar6 + 0x18) + 0x18);
      if (uVar8 < uVar9) {
        uVar8 = uVar9;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 1;
      uVar9 = uVar8;
    } while (uVar5 < uVar1);
  }
  uVar5 = 0;
  if (uVar1 != 0) {
    piVar6 = (int *)(param_1 + 0x50);
    do {
      uVar1 = *(uint *)(*(int *)(*piVar6 + 0x18) + 0x14);
      trapWord(6,(ulonglong)uVar1,0);
      if (uVar8 != (longlong)(int)((uVar8 & 0xffffffff) / (ulonglong)uVar1) * (longlong)(int)uVar1)
      {
        uVar8 = (longlong)(int)uVar1 * (longlong)(int)uVar8;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x88));
  }
  iVar7 = *(int *)(param_1 + 8);
  lVar10 = (longlong)(int)uVar8 * (longlong)(int)uVar2;
  if (iVar7 == 0) {
    uVar3 = fn_8265C940(lVar10,0x608a2002);
    *(undefined4 *)(param_1 + 8) = uVar3;
    uVar3 = fn_8265C940((ulonglong)uVar2 * 0x1c,0x618a0009);
    *(undefined4 *)(param_1 + 0x84) = uVar3;
    iVar4 = fn_8265C940(uVar2 << 3,0x618a0003);
    iVar7 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 0x60) = iVar4;
    if (((iVar7 == 0) || (*(int *)(param_1 + 0x84) == 0)) || (iVar4 == 0)) {
      if (*(int *)(param_1 + 0x60) != 0) {
        fn_8265C990(*(int *)(param_1 + 0x60),0x618a0003);
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
      if (*(int *)(param_1 + 0x84) != 0) {
        fn_8265C990(*(int *)(param_1 + 0x84),0x618a0009);
        *(undefined4 *)(param_1 + 0x84) = 0;
      }
      if (*(int *)(param_1 + 8) != 0) {
        fn_8265C990(*(int *)(param_1 + 8),0x608a2002);
        *(undefined4 *)(param_1 + 8) = 0;
      }
      return 0xffffffff8007000e;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(iVar7,0,lVar10);
}

