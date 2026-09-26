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
extern int fn_8265CA20();
extern int fn_8288BD00();
extern int fn_82F622A8();
extern int fn_82F63CA0();


void fn_828D5B78(int param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar3;
  longlong lVar2;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int iVar9;
  
  uVar6 = (ulonglong)*(uint *)(param_1 + 8);
  if ((param_2 & 0xffffffff) <= (0x4ec4ec4 - uVar6 & 0xffffffff)) {
    uVar5 = (ulonglong)(*(uint *)(param_1 + 8) >> 1);
    if (uVar5 < 8) {
      uVar5 = 8;
    }
    if (((param_2 & 0xffffffff) < uVar5) && (uVar6 <= (0x4ec4ec4 - uVar5 & 0xffffffff))) {
      param_2 = uVar5;
    }
    uVar1 = *(uint *)(param_1 + 0xc);
    uVar5 = (ulonglong)uVar1;
    iVar3 = fn_8288BD00(param_1 + 0x15,uVar6 + param_2);
    iVar9 = uVar1 * 4;
    iVar4 = iVar9 + *(int *)(param_1 + 4);
    lVar8 = ((ulonglong)(uint)((*(int *)(param_1 + 8) * 4 - iVar4) + *(int *)(param_1 + 4) >> 2) &
            0x3fffffff) * 4;
    lVar2 = fn_82F63CA0(iVar9 + iVar3,iVar4,lVar8);
    lVar2 = lVar2 + lVar8;
    if ((param_2 & 0xffffffff) < uVar5) {
      lVar8 = (param_2 & 0x3fffffff) * 4;
      fn_82F63CA0(lVar2,*(undefined4 *)(param_1 + 4),((int)lVar8 >> 2) << 2);
      lVar8 = lVar8 + (ulonglong)*(uint *)(param_1 + 4);
      iVar9 = ((int)((iVar9 - (int)lVar8) + *(uint *)(param_1 + 4)) >> 2) * 4;
      iVar4 = fn_82F63CA0(iVar3,lVar8,iVar9);
      if ((param_2 & 0xffffffff) != 0) {
        puVar7 = (undefined4 *)(iVar4 + iVar9 + -4);
        uVar6 = param_2;
        do {
          puVar7 = puVar7 + 1;
          *puVar7 = 0;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    else {
      uVar6 = param_2 - uVar5;
      iVar9 = (iVar9 >> 2) * 4;
      iVar4 = fn_82F63CA0(lVar2,*(undefined4 *)(param_1 + 4),iVar9);
      if ((uVar6 & 0xffffffff) != 0) {
        puVar7 = (undefined4 *)(iVar4 + iVar9 + -4);
        do {
          puVar7 = puVar7 + 1;
          *puVar7 = 0;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (uVar5 != 0) {
        puVar7 = (undefined4 *)(iVar3 + -4);
        do {
          puVar7 = puVar7 + 1;
          *puVar7 = 0;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    if (*(int *)(param_1 + 4) != 0) {
      fn_8265CA20();
    }
    *(int *)(param_1 + 4) = iVar3;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (int)param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F622A8(0xffffffff821a8018);
}

