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
extern int fn_825B47E8();
extern int fn_82811500();
extern int fn_828116B8();


void fn_825B4B38(uint *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar8;
  longlong lVar7;
  ulonglong uVar9;
  longlong lVar10;
  
  do {
    uVar5 = 0x1000;
    uVar6 = 0;
    uVar9 = (param_2 - (ulonglong)param_1[3] & 0xffffffff) >> 0xc;
    if (*param_1 != 0) {
      iVar8 = 0;
      do {
        iVar2 = fn_828116B8(*(undefined4 *)(iVar8 + param_1[7] + 8),uVar9);
        if (iVar2 != 0) break;
        uVar6 = uVar6 + 1;
        uVar5 = (uVar5 & 0x7fffffff) << 1;
        uVar9 = uVar9 >> 1;
        iVar8 = iVar8 + 0xc;
      } while (uVar6 < *param_1);
    }
    iVar8 = uVar6 * 0xc;
    fn_82811500(*(undefined4 *)(param_1[7] + iVar8 + 8),uVar9);
    if ((uVar9 & 1) == 0) {
      lVar3 = uVar9 + 1;
      lVar7 = uVar5 + param_2;
      lVar10 = param_2;
    }
    else {
      lVar7 = param_2 - uVar5;
      lVar3 = uVar9 - 1;
      lVar10 = lVar7;
    }
    if (uVar6 == *param_1 - 1) {
LAB_825b4c5c:
      fn_825B47E8(param_1[7] + iVar8,param_2);
      param_1[4] = param_1[4] - (int)uVar5;
      return;
    }
    iVar2 = fn_828116B8(*(undefined4 *)(param_1[7] + iVar8 + 8),lVar3);
    if (iVar2 != 0) goto LAB_825b4c5c;
    iVar2 = *(int *)lVar7;
    piVar1 = (int *)((int *)lVar7)[1];
    piVar4 = (int *)(param_1[7] + iVar8);
    if (iVar2 == 0) {
      piVar4[1] = (int)piVar1;
    }
    else {
      *(int **)(iVar2 + 4) = piVar1;
    }
    if (piVar1 != (int *)0x0) {
      *piVar1 = iVar2;
    }
    *piVar4 = *piVar4 + -1;
    param_1[4] = param_1[4] + (int)uVar5;
    param_2 = lVar10;
  } while( true );
}

