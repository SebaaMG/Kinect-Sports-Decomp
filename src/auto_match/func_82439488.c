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
extern int fn_822ABA88();
extern int fn_8242C410();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_82439488(undefined8 param_1)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar9 = 0;
  puVar1 = *(uint **)(*(int *)((int)param_1 + 0x40) + 0x208);
  uVar2 = *puVar1;
  if (uVar2 == 0) {
    uVar9 = puVar1[1];
  }
  else if (uVar2 == 1) {
    uVar9 = puVar1[2];
  }
  else if (uVar2 < 3) {
    uVar9 = puVar1[3];
  }
  else if (uVar2 == 3) {
    uVar9 = puVar1[4];
  }
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  lVar7 = 2;
  uVar8 = (ulonglong)*(uint *)(*(int *)((int)param_1 + 0x40) + 0x1d8);
  uVar5 = (ulonglong)
          (uint)(int)((float)(longlong)((*(int *)(uVar9 + 0xc) + 1) - *(int *)(uVar9 + 8)) *
                      ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) +
                     (float)(longlong)*(int *)(uVar9 + 8));
  iVar4 = fn_8242C410(uVar8);
  if (2 < iVar4) {
    lVar6 = 8;
    do {
      bVar10 = lVar7 - 2U < uVar5;
      piVar3 = *(int **)(**(int **)((int)uVar8 + 8) + (int)lVar6);
      iVar4 = fn_822ABA88(*(undefined4 *)(piVar3[4] * 4 + *piVar3),0);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 4;
      *(uint *)(*(int *)(iVar4 + 0x1a0) + 0x24) = -(uint)bVar10 & 1;
      uVar8 = (ulonglong)*(uint *)(*(int *)((int)param_1 + 0x40) + 0x1d8);
      iVar4 = fn_8242C410(uVar8);
    } while ((int)lVar7 < iVar4);
  }
  return;
}

