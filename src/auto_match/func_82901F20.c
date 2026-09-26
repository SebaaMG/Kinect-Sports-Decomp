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


undefined8
fn_82901F20(int param_1,int param_2,ulonglong param_3,ulonglong param_4,ulonglong param_5,
             longlong param_6,uint param_7,int *param_8)

{
  uint uVar1;
  ulonglong uVar2;
  bool bVar3;
  ulonglong uVar4;
  int iVar6;
  uint uVar7;
  longlong lVar5;
  int iVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 in_stack_00000054;
  undefined4 *in_stack_0000005c;
  
  lVar9 = (longlong)(int)param_3 * (longlong)(int)param_4;
  if (lVar9 != 0) {
    if ((param_2 == 2) && ((param_5 & 0x400) == 0)) {
      bVar3 = true;
      uVar4 = param_4;
      param_4 = param_3;
    }
    else {
      bVar3 = false;
      uVar4 = param_3;
    }
    uVar2 = (param_4 + 3 & 0xffffffff) >> 2;
    iVar10 = (int)uVar2 * (int)uVar4;
    if (param_7 < *(uint *)(*(int *)(param_1 + 8) + 4)) {
      iVar8 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + param_7 * 4);
    }
    else {
      iVar8 = 0;
    }
    if (iVar8 == 0) {
      return 0xffffffff80004005;
    }
    uVar1 = *(uint *)(iVar8 + 0x10);
    iVar6 = uVar1 + iVar10;
    *(int *)(iVar8 + 0x10) = iVar6;
    if ((*(uint *)(iVar8 + 4) & 0x40) != 0) {
      *(int *)(iVar8 + 8) = iVar6;
    }
    if ((uVar4 & 0xffffffff) != 0) {
      lVar15 = 0;
      lVar14 = 0;
      uVar11 = uVar4;
      lVar12 = param_6;
      do {
        uVar16 = 0;
        if ((param_4 & 0xffffffff) != 0) {
          lVar13 = lVar12;
          uVar17 = param_4;
          do {
            if (bVar3) {
              uVar7 = *(uint *)lVar13;
            }
            else {
              uVar7 = *(uint *)((int)((lVar14 + uVar16 & 0xffffffff) << 2) + (int)param_6);
            }
            if (uVar7 < *(uint *)(*(int *)(param_1 + 8) + 8)) {
              iVar8 = *(int *)(uVar7 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
            }
            else {
              iVar8 = 0;
            }
            if (iVar8 != 0) {
              uVar7 = (uint)uVar16 & 3;
              *(uint *)(iVar8 + 4) = param_7;
              *(uint *)(iVar8 + 0x10) = uVar7;
              lVar5 = ((uVar16 & 0xffffffff) >> 2) + lVar15 + (ulonglong)uVar1;
              *(undefined4 *)(iVar8 + 0x68) = in_stack_00000054;
              *(int *)(iVar8 + 0xc) = (int)lVar5;
              *(uint *)(iVar8 + 0x70) =
                   (int)((lVar5 - (ulonglong)uVar1 & 0xffffffff) << 2) + *param_8 + uVar7;
            }
            uVar16 = uVar16 + 1;
            lVar13 = (uVar4 & 0x3fffffff) * 4 + lVar13;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        uVar11 = uVar11 - 1;
        lVar12 = lVar12 + 4;
        lVar14 = lVar14 + param_4;
        lVar15 = lVar15 + uVar2;
      } while (uVar11 != 0);
    }
    *param_8 = iVar10 * 4 + *param_8;
  }
  if (in_stack_0000005c != (undefined4 *)0x0) {
    *in_stack_0000005c = (int)lVar9;
  }
  return 0;
}

