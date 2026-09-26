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
extern int fn_82297930();
extern int fn_8265CA20();
extern int fn_82F68CC0();


ulonglong fn_82294850(int param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  
  if ((*(uint *)(param_1 + 0x40) & 8) != 0) {
    uVar1 = **(uint **)(param_1 + 0x24);
    if ((uVar1 != 0) && (uVar2 = *(uint *)(param_1 + 0x3c), uVar1 < uVar2)) {
      iVar3 = **(int **)(param_1 + 0x34);
      **(uint **)(param_1 + 0x24) = uVar2;
      **(int **)(param_1 + 0x34) = (int)((iVar3 * 2 + uVar1) - uVar2) >> 1;
    }
  }
  if ((param_2 & 0xffff) == 0xffff) {
    return 0;
  }
  uVar1 = **(uint **)(param_1 + 0x24);
  if ((uVar1 == 0) || (piVar4 = *(int **)(param_1 + 0x34), *piVar4 * 2 + uVar1 <= uVar1)) {
    if ((*(uint *)(param_1 + 0x40) & 2) == 0) {
      if (uVar1 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulonglong)
                 ((int)((**(int **)(param_1 + 0x34) * 2 - **(int **)(param_1 + 0x10)) + uVar1) >> 1)
        ;
      }
      uVar9 = (uVar10 & 0xffffffff) >> 1;
      if (0x1f < uVar9) goto joined_r0x82294960;
      uVar9 = 0x20;
      do {
        if ((uVar10 & 0xffffffff) <= (0x7fffffff - uVar9 & 0xffffffff)) break;
        uVar9 = uVar9 >> 1;
joined_r0x82294960:;} while (uVar9 != 0);
      if (uVar9 != 0) {
        uVar9 = uVar9 + uVar10;
        uVar7 = fn_82297930(uVar9,0);
        iVar3 = **(int **)(param_1 + 0x10);
        iVar11 = (int)uVar7;
        if (((uVar10 & 0xffffffff) == 0) ||
           (fn_82F68CC0(uVar7,iVar3,(uVar10 & 0x7fffffff) << 1), (uVar10 & 0xffffffff) == 0)) {
          *(int *)(param_1 + 0x3c) = iVar11;
          **(int **)(param_1 + 0x14) = iVar11;
          **(int **)(param_1 + 0x24) = iVar11;
          **(int **)(param_1 + 0x34) =
               (int)((uint)((uVar9 & 0xffffffff) << 1) | (uint)uVar9 >> 0x1f) >> 1;
          uVar1 = *(uint *)(param_1 + 0x40);
          **(int **)(param_1 + 0x10) = iVar11;
          piVar4 = *(int **)(param_1 + 0x20);
          if ((uVar1 & 4) != 0) goto LAB_82294a8c;
          iVar8 = 1;
          *piVar4 = iVar11;
LAB_82294a94:
          **(int **)(param_1 + 0x30) = iVar8;
        }
        else {
          *(int *)(param_1 + 0x3c) = (*(int *)(param_1 + 0x3c) - iVar3 >> 1) * 2 + iVar11;
          iVar8 = (**(int **)(param_1 + 0x24) - iVar3 >> 1) * 2 + iVar11;
          **(int **)(param_1 + 0x14) = (**(int **)(param_1 + 0x14) - iVar3 >> 1) * 2 + iVar11;
          **(int **)(param_1 + 0x24) = iVar8;
          **(int **)(param_1 + 0x34) = ((int)((uVar9 & 0xffffffff) << 1) - iVar8) + iVar11 >> 1;
          if ((*(uint *)(param_1 + 0x40) & 4) != 0) {
            **(int **)(param_1 + 0x10) = iVar11;
            piVar4 = *(int **)(param_1 + 0x20);
LAB_82294a8c:
            iVar8 = iVar11 >> 1;
            *piVar4 = 0;
            goto LAB_82294a94;
          }
          iVar8 = **(int **)(param_1 + 0x20);
          iVar5 = **(int **)(param_1 + 0x24);
          **(int **)(param_1 + 0x10) = iVar11;
          iVar11 = (iVar8 - iVar3 >> 1) * 2 + iVar11;
          **(int **)(param_1 + 0x20) = iVar11;
          **(int **)(param_1 + 0x30) = (iVar5 - iVar11) + 2 >> 1;
        }
        if ((*(uint *)(param_1 + 0x40) & 1) != 0) {
          fn_8265CA20(iVar3);
        }
        *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 1;
        **(int **)(param_1 + 0x34) = **(int **)(param_1 + 0x34) + -1;
        goto LAB_82294b14;
      }
    }
    param_2 = 0xffffffffffffffff;
  }
  else {
    *piVar4 = *piVar4 + -1;
LAB_82294b14:
    puVar6 = (undefined2 *)**(int **)(param_1 + 0x24);
    **(int **)(param_1 + 0x24) = (int)(puVar6 + 1);
    *puVar6 = (short)param_2;
  }
  return param_2;
}

