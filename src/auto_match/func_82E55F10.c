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
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82F68CC0();
extern int fn_82F691F0();


undefined8 fn_82E55F10(int param_1,short param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (0x7e < *(uint *)(param_1 + 0x5c)) {
    return 0xffffffffc00d36b2;
  }
  fn_82E50CB8(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0x5c);
  uVar3 = 0;
  if (uVar1 != 0) {
    iVar4 = 0;
    do {
      if (param_2 == *(short *)(iVar4 + *(int *)(param_1 + 100))) {
        uVar5 = 0xffffffff80070057;
        goto LAB_82e56060;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 2;
    } while (uVar3 < *(uint *)(param_1 + 0x5c));
  }
  if (*(uint *)(param_1 + 0x60) <= uVar1) {
    uVar6 = (ulonglong)(uVar1 * 3 >> 1);
    if (9 < uVar6) {
      uVar6 = 10;
    }
    lVar2 = uVar6 << 1;
    if (0x7fffffff < uVar6) {
      lVar2 = -1;
    }
    lVar2 = fn_82E50BE8(lVar2,0,0,0,0);
    if (lVar2 == 0) {
      uVar5 = 0xffffffff8007000e;
      goto LAB_82e56060;
    }
    fn_82F68CC0(lVar2,*(undefined4 *)(param_1 + 100),*(int *)(param_1 + 0x5c) << 1);
    uVar1 = *(uint *)(param_1 + 0x5c);
    if (uVar1 < uVar6) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(((ulonglong)uVar1 & 0x7fffffff) * 2 + lVar2,0,(uVar6 - uVar1 & 0x7fffffff) << 1);
    }
    if (*(int *)(param_1 + 100) != 0) {
      fn_82E4FE40();
    }
    *(int *)(param_1 + 100) = (int)lVar2;
    *(int *)(param_1 + 0x60) = (int)uVar6;
  }
  *(short *)(*(int *)(param_1 + 100) + *(int *)(param_1 + 0x5c) * 2) = param_2;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
LAB_82e56060:
  fn_82E50F10(param_1 + 8);
  return uVar5;
}

