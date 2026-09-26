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
extern int fn_82F68CC0();
extern int fn_82F691F0();


void fn_82ED3BC8(int param_1,ulonglong param_2,ulonglong param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar8;
  longlong lVar7;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  if ((((param_2 & 0xffffffff) != 0) && ((param_3 & 0xffffffff) != 0)) && ((int)param_4 != 0)) {
    uVar1 = *(uint *)(param_1 + 0xc);
    uVar11 = (ulonglong)uVar1;
    lVar6 = 2;
    uVar2 = *(uint *)(param_1 + 0x10);
    uVar4 = uVar1 >> 1;
    uVar3 = (ulonglong)uVar4;
    if ((*(int *)(param_1 + 0x38) != 0) && (3 < *(int *)(*(int *)(param_1 + 0x38) + 0x7b34))) {
      lVar6 = 4;
    }
    lVar9 = (longlong)(int)(uVar2 - 1) * (longlong)(int)uVar1 + lVar6 + param_2;
    if (0 < (longlong)((ulonglong)uVar2 - lVar6)) {
      fn_82F68CC0(lVar9,(longlong)((int)((ulonglong)uVar2 - lVar6) + -1) * (longlong)(int)uVar1 +
                         param_2,uVar11 - lVar6);
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar9 - lVar6,*(undefined1 *)lVar9,lVar6);
    }
    iVar8 = (int)lVar6;
    lVar9 = (longlong)iVar8 * (longlong)(int)uVar1 + param_2;
    if (iVar8 != 0) {
      do {
        fn_82F68CC0(param_2,lVar9,uVar11);
        lVar6 = lVar6 + -1;
        param_2 = param_2 + uVar11;
      } while (lVar6 != 0);
    }
    iVar8 = iVar8 >> 1;
    lVar12 = (longlong)iVar8;
    lVar7 = (ulonglong)(uVar2 >> 1) - lVar12;
    iVar5 = (int)lVar7;
    lVar9 = (longlong)(int)((uVar2 >> 1) - 1) * (longlong)(int)uVar4 + lVar12;
    lVar6 = (longlong)(iVar5 + -1) * (longlong)(int)uVar4;
    lVar10 = lVar9 + param_3;
    if (0 < lVar7) {
      fn_82F68CC0(lVar10,lVar6 + param_3,uVar3 - lVar12);
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar10 - lVar12,*(undefined1 *)lVar10,lVar12);
    }
    lVar10 = (longlong)iVar8 * (longlong)(int)uVar4 + param_3;
    lVar7 = lVar12;
    if (iVar8 != 0) {
      do {
        fn_82F68CC0(param_3,lVar10,uVar3);
        lVar7 = lVar7 + -1;
        param_3 = param_3 + uVar3;
      } while (lVar7 != 0);
    }
    lVar9 = lVar9 + param_4;
    if (0 < iVar5) {
      fn_82F68CC0(lVar9,lVar6 + param_4,uVar3 - lVar12);
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar9 - lVar12,*(undefined1 *)lVar9,lVar12);
    }
    lVar6 = (longlong)iVar8 * (longlong)(int)uVar4 + param_4;
    if (iVar8 != 0) {
      do {
        fn_82F68CC0(param_4,lVar6,uVar3);
        lVar12 = lVar12 + -1;
        param_4 = param_4 + uVar3;
      } while (lVar12 != 0);
    }
  }
  return;
}

