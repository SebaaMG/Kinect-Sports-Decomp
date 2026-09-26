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
extern int fn_8223C258();
extern int fn_8265CA20();
extern int fn_82F68CC0();


undefined8 fn_8223D178(int param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int *piVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  
  if ((*(uint *)(param_1 + 0x40) & 8) != 0) {
    uVar1 = **(uint **)(param_1 + 0x24);
    if ((uVar1 != 0) && (uVar2 = *(uint *)(param_1 + 0x3c), uVar1 < uVar2)) {
      iVar3 = **(int **)(param_1 + 0x34);
      **(uint **)(param_1 + 0x24) = uVar2;
      **(int **)(param_1 + 0x34) = (iVar3 + uVar1) - uVar2;
    }
  }
  if ((int)param_2 == -1) {
    return 0;
  }
  uVar1 = **(uint **)(param_1 + 0x24);
  if ((uVar1 == 0) || (piVar8 = *(int **)(param_1 + 0x34), uVar1 + *piVar8 <= uVar1)) {
    if ((*(uint *)(param_1 + 0x40) & 2) == 0) {
      if (uVar1 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = ((ulonglong)**(uint **)(param_1 + 0x34) - (ulonglong)**(uint **)(param_1 + 0x10)) +
                 (ulonglong)uVar1;
      }
      uVar7 = (uVar10 & 0xffffffff) >> 1;
      if (0x1f < uVar7) goto joined_r0x8223d280;
      uVar7 = 0x20;
      do {
        if ((uVar10 & 0xffffffff) <= (0x7fffffff - uVar7 & 0xffffffff)) break;
        uVar7 = uVar7 >> 1;
joined_r0x8223d280:;} while (uVar7 != 0);
      if (uVar7 != 0) {
        uVar6 = fn_8223C258(uVar7 + uVar10,0);
        iVar3 = **(int **)(param_1 + 0x10);
        iVar11 = (int)uVar6;
        iVar9 = (int)(uVar7 + uVar10);
        if (((uVar10 & 0xffffffff) == 0) ||
           (fn_82F68CC0(uVar6,iVar3,uVar10), (uVar10 & 0xffffffff) == 0)) {
          *(int *)(param_1 + 0x3c) = iVar11;
          **(int **)(param_1 + 0x14) = iVar11;
          **(int **)(param_1 + 0x24) = iVar11;
          **(int **)(param_1 + 0x34) = iVar9;
          uVar1 = *(uint *)(param_1 + 0x40);
          **(int **)(param_1 + 0x10) = iVar11;
          piVar8 = *(int **)(param_1 + 0x20);
          if ((uVar1 & 4) != 0) goto LAB_8223d38c;
          *piVar8 = iVar11;
          **(undefined4 **)(param_1 + 0x30) = 1;
        }
        else {
          *(int *)(param_1 + 0x3c) = (*(int *)(param_1 + 0x3c) - iVar3) + iVar11;
          iVar5 = (**(int **)(param_1 + 0x24) - iVar3) + iVar11;
          **(int **)(param_1 + 0x14) = (**(int **)(param_1 + 0x14) - iVar3) + iVar11;
          **(int **)(param_1 + 0x24) = iVar5;
          **(int **)(param_1 + 0x34) = (iVar11 - iVar5) + iVar9;
          if ((*(uint *)(param_1 + 0x40) & 4) == 0) {
            iVar9 = **(int **)(param_1 + 0x24);
            iVar5 = **(int **)(param_1 + 0x20);
            **(int **)(param_1 + 0x10) = iVar11;
            iVar11 = (iVar5 - iVar3) + iVar11;
            **(int **)(param_1 + 0x20) = iVar11;
            **(int **)(param_1 + 0x30) = (iVar9 - iVar11) + 1;
          }
          else {
            **(int **)(param_1 + 0x10) = iVar11;
            piVar8 = *(int **)(param_1 + 0x20);
LAB_8223d38c:
            *piVar8 = 0;
            **(int **)(param_1 + 0x30) = iVar11;
          }
        }
        if ((*(uint *)(param_1 + 0x40) & 1) != 0) {
          fn_8265CA20(iVar3);
        }
        *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 1;
        **(int **)(param_1 + 0x34) = **(int **)(param_1 + 0x34) + -1;
        puVar4 = (undefined1 *)**(int **)(param_1 + 0x24);
        **(int **)(param_1 + 0x24) = (int)(puVar4 + 1);
        goto LAB_8223d414;
      }
    }
    param_2 = 0xffffffffffffffff;
  }
  else {
    *piVar8 = *piVar8 + -1;
    puVar4 = (undefined1 *)**(int **)(param_1 + 0x24);
    **(int **)(param_1 + 0x24) = (int)(puVar4 + 1);
LAB_8223d414:
    *puVar4 = (char)param_2;
  }
  return param_2;
}

