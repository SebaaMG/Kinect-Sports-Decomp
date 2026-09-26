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
extern int fn_822CFA38();
extern unsigned int lbl_83265A28;


void fn_822D14B8(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar4;
  longlong lVar3;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x14);
  uVar5 = 0;
  uVar2 = (uint)((ulonglong)LZCOUNT(*(undefined4 *)(*(uint *)(param_1 + 0x14) + 0x2c)) >> 3) & 4;
  piVar1 = *(int **)(**(int **)(*(int *)(param_1 + 0x10) + 8) + uVar2);
  uVar8 = *(uint *)(piVar1[4] * 4 + *piVar1);
  uVar7 = (ulonglong)uVar8;
  if (*(int *)(uVar8 + 8) != 1) {
    iVar4 = fn_822ABA88(uVar7,0);
    uVar8 = (uint)(*(int *)(iVar4 + 0x24) != 0);
    iVar4 = fn_822ABA88(uVar7,1);
    if (uVar8 == (*(int *)(iVar4 + 0x24) != 0)) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      uVar5 = (-lbl_83265A28 & ~lbl_83265A28) >> 0x1f;
    }
    else if (uVar8 == 0) {
      lVar3 = fn_822CFA38(uVar6,7);
      uVar5 = (uint)(lVar3 != 0);
    }
    else {
      iVar4 = fn_822CFA38(uVar6,7);
      uVar5 = (uint)(iVar4 == 0);
    }
    piVar1 = *(int **)(**(int **)(*(int *)(param_1 + 0x10) + 8) + uVar2);
  }
  fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),uVar5);
  return;
}

