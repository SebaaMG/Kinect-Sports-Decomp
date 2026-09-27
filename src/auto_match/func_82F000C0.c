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
extern int fn_82EFF450();
extern unsigned int lbl_82006848;
extern float lbl_820116D8;


void fn_82F000C0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar8;
  longlong lVar7;
  longlong lVar9;
  ulonglong uVar10;
  
  iVar1 = *(int *)(param_1 + 0xaf0);
  uVar4 = (undefined4)
          ((((0x27 - (ulonglong)*(uint *)(*(int *)(param_1 + 0x1ebc) + 0x10) & 0xffffffff) >> 3) +
            (ulonglong)*(uint *)(*(int *)(param_1 + 0x1ebc) + 4) & 0xffffffff) << 3);
  *(undefined4 *)(param_1 + 0x1f08) = uVar4;
  if ((iVar1 == 1) || (*(longlong *)(param_1 + 0x2e0) == 1)) {
    *(undefined4 *)(param_1 + 0x1f0c) = uVar4;
  }
  uVar2 = *(uint *)(param_1 + 0x1f08);
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 0x1f58) = 0;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x1f44);
    if (*(int *)(param_1 + 0xb08) == 0) {
      iVar5 = *(int *)(param_1 + 0x76c0);
      if (iVar5 != 0) {
        uVar3 = *(uint *)(param_1 + 0x1f00);
        uVar6 = 1000;
        iVar8 = 1;
        do {
          iVar5 = iVar5 + -1;
          if (uVar3 < uVar6) goto LAB_82f00178;
          iVar8 = iVar8 * 2;
          uVar6 = (iVar8 + 10) * 100;
        } while (iVar5 != 0);
        if (uVar3 < uVar6) {
LAB_82f00178:
          uVar6 = uVar3;
        }
        iVar8 = (int)((double)((float)uVar6 * lbl_82006848) * *(double *)(param_1 + 0x1ed0) *
                     lbl_820116D8);
      }
    }
    else {
      iVar8 = *(int *)(param_1 + 0x1ec8) + uVar2;
    }
    uVar3 = *(uint *)(param_1 + 0x1ec8);
    uVar10 = (ulonglong)uVar3;
    uVar6 = *(uint *)(param_1 + 0x1f10);
    lVar9 = (uVar6 - uVar10) - (ulonglong)uVar2;
    if ((lVar9 < 0) ||
       ((((iVar1 != 1 && (iVar1 != 2)) && (iVar8 < (int)(uVar3 + uVar2))) ||
        (iVar5 = fn_82EFF450(param_1,uVar10 + uVar2), iVar5 == 0)))) {
      if ((*(int *)(param_1 + 0x1f38) == 0) ||
         ((*(int *)(param_1 + 0x1dac) != 1 && (*(int *)(param_1 + 0x1dac) != 0)))) {
        if (((iVar1 == 0) || (iVar1 == 4)) && ((-1 < (int)lVar9 && (iVar8 < (int)(uVar3 + uVar2)))))
        {
          *(int *)(param_1 + 0x76c0) = *(int *)(param_1 + 0x76c0) + 1;
          *(undefined4 *)(param_1 + 0x1f58) = 1;
          return;
        }
        *(undefined4 *)(param_1 + 0x76c0) = 0;
        *(undefined4 *)(param_1 + 0x1f58) = 1;
        return;
      }
      lVar7 = uVar10 + *(uint *)(param_1 + 0x1f08);
      *(undefined4 *)(param_1 + 0x1f58) = 0;
      lVar9 = (ulonglong)*(uint *)(param_1 + 0x1f10) - lVar7;
      *(int *)(param_1 + 0x1f08) = (int)lVar7;
      *(int *)(param_1 + 0x1f10) = (int)lVar9;
      if (lVar9 < 0) {
        *(undefined4 *)(param_1 + 0x1f10) = 0;
      }
      if (*(int *)(param_1 + 0x1f10) < *(int *)(param_1 + 0x1f14)) {
        *(int *)(param_1 + 0x1f14) = *(int *)(param_1 + 0x1f10);
      }
    }
    else {
      iVar1 = uVar3 + *(int *)(param_1 + 0x1f08);
      *(undefined4 *)(param_1 + 0x1f58) = 0;
      iVar8 = uVar6 - iVar1;
      *(int *)(param_1 + 0x1f08) = iVar1;
      *(int *)(param_1 + 0x1f10) = iVar8;
      if (iVar8 < *(int *)(param_1 + 0x1f14)) {
        *(int *)(param_1 + 0x1f14) = iVar8;
        *(undefined4 *)(param_1 + 0x76c0) = 0;
        *(int *)(param_1 + 0x890) = (iVar1 >> 3) + *(int *)(param_1 + 0x890);
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x76c0) = 0;
    *(int *)(param_1 + 0x890) = (*(int *)(param_1 + 0x1f08) >> 3) + *(int *)(param_1 + 0x890);
  }
  return;
}

