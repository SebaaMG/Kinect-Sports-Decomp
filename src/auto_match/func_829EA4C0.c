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
extern int fn_829E9FF8();


void fn_829EA4C0(int param_1,ulonglong param_2,longlong param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  iVar7 = 0;
  iVar2 = (int)param_3;
  if (0 < iVar2) {
    iVar8 = 0;
    lVar9 = param_3;
    do {
      *(undefined4 *)(iVar8 + *(int *)(param_1 + 0x174)) = 0;
      iVar8 = iVar8 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0x158) - *(int *)(param_1 + 0x154) >> 2 != 0) {
    iVar8 = 0;
    iVar3 = 0;
    do {
      iVar5 = 0;
      if (0 < iVar2) {
        uVar6 = param_2;
        do {
          if ((int)uVar6 == *(int *)(*(int *)(param_1 + 0x154) + iVar3)) {
            uVar6 = uVar6 - param_2;
            if ((longlong)uVar6 < 0) {
              uVar6 = *(uint *)(param_1 + 4) + uVar6;
            }
            *(uint *)(*(int *)(param_1 + 0x174) + (int)((uVar6 & 0xffffffff) << 2)) =
                 *(int *)(*(int *)(param_1 + 0x14c) + 0x24) * uVar4 +
                 *(int *)(*(int *)(param_1 + 0x14c) + 0x28);
            break;
          }
          uVar6 = uVar6 + 1;
          iVar5 = iVar5 + 1;
          uVar6 = (ulonglong)(*(uint *)(param_1 + 4) >> 0x1f) -
                  (((uVar6 & 0xffffffff) >> 0x1f) + (ulonglong)(uVar6 < *(uint *)(param_1 + 4))) &
                  uVar6;
        } while (iVar5 < iVar2);
      }
      if (iVar5 == iVar2) {
        *(short *)(*(int *)(param_1 + 0x164) + iVar8) = (short)uVar4;
        iVar8 = iVar8 + 2;
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar4 < (uint)(*(int *)(param_1 + 0x158) - *(int *)(param_1 + 0x154) >> 2));
  }
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar2 + *(int *)(param_1 + 0x174)) == 0) {
        sVar1 = *(short *)(*(int *)(param_1 + 0x164) + iVar7);
        iVar8 = (int)param_2;
        *(int *)(*(int *)(param_1 + 0x154) + sVar1 * 4) = iVar8;
        *(int *)(iVar2 + *(int *)(param_1 + 0x174)) =
             *(int *)(*(int *)(param_1 + 0x14c) + 0x24) * (int)sVar1 +
             *(int *)(*(int *)(param_1 + 0x14c) + 0x28);
        uVar6 = (ulonglong)*(uint *)(iVar2 + *(int *)(param_1 + 0x174));
        fn_829E9FF8(param_1,(longlong)*(int *)(param_4 + 0x24) * (longlong)iVar8 +
                              (ulonglong)*(uint *)(param_4 + 0x28),param_1 + 0x5c,
                      *(undefined4 *)(param_1 + 0x134),*(undefined4 *)(param_1 + 0x130),uVar6);
        lVar9 = ((longlong)*(int *)(param_1 + 0x134) * (longlong)*(int *)(param_1 + 0x20) &
                0x3fffffffU) * 4 + uVar6;
        fn_829E9FF8(param_1,(longlong)*(int *)(param_1 + 0x138) *
                              (longlong)*(int *)(param_4 + 0x1c) +
                              (longlong)*(int *)(param_4 + 0x24) * (longlong)iVar8 +
                              (ulonglong)*(uint *)(param_4 + 0x28),param_1 + 0x7c,
                      *(undefined4 *)(param_1 + 0x13c),*(undefined4 *)(param_1 + 0x140),lVar9);
        fn_829E9FF8(param_1,(longlong)*(int *)(param_4 + 0x24) * (longlong)iVar8 +
                              (ulonglong)*(uint *)(param_4 + 0x28),param_1 + 0x94,
                      *(undefined4 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x144),
                      ((longlong)*(int *)(param_1 + 0x13c) * (longlong)*(int *)(param_1 + 0x20) &
                      0x3fffffffU) * 4 + lVar9);
        iVar7 = iVar7 + 2;
      }
      param_2 = param_2 + 1;
      iVar2 = iVar2 + 4;
      param_3 = param_3 + -1;
      param_2 = (ulonglong)(*(uint *)(param_1 + 4) >> 0x1f) -
                (((param_2 & 0xffffffff) >> 0x1f) + (ulonglong)(param_2 < *(uint *)(param_1 + 4))) &
                param_2;
    } while (param_3 != 0);
  }
  return;
}

