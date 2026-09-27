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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_8245D538();
extern int fn_8245DE90();
extern int fn_824BF8A8();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83276594;


/* WARNING: Removing unreachable block (ram,0x824be9a8) */

void fn_824BE968(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong alStack_40;
  
  *(undefined4 *)(param_1 + 0xe4) = 0xb;
  *(undefined4 *)(param_1 + 0x54c) = 0;
  iVar1 = *(int *)(param_1 + 0xf4);
  if (iVar1 != *(int *)(param_1 + 0xf8)) {
    for (iVar5 = iVar1; iVar5 != *(int *)(param_1 + 0xf8); iVar5 = iVar5 + 8) {
    }
    *(int *)(param_1 + 0xf8) = iVar1;
  }
  uVar2 = *(uint *)(param_1 + 0xc0);
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      uVar6 = *(undefined4 *)(param_1 + 0x4fc);
      goto LAB_824bea28;
    }
    if (uVar2 < 3) {
      uVar6 = *(undefined4 *)(param_1 + 0x500);
      goto LAB_824bea28;
    }
    if (uVar2 < 5) {
      uVar6 = *(undefined4 *)(param_1 + 0x504);
      goto LAB_824bea28;
    }
  }
  uVar6 = *(undefined4 *)(param_1 + 0x4f8);
LAB_824bea28:
  alStack_40 = CONCAT44(uVar6,((uint)(alStack_40)));
  lVar3 = fn_8251F720(&alStack_40,0);
  uVar4 = fn_8251FBA8();
  lVar7 = lVar3;
  for (uVar4 = (uVar4 & 0xffffffff) >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    fn_824BF8A8(param_1 + 0xf4,lVar7);
    lVar7 = lVar7 + 8;
  }
  fn_8251FA58(lVar3);
  uVar2 = (uint)*(float *)(*(int *)(param_1 + 0xf8) + -4);
  alStack_40 = (longlong)(int)uVar2;
  if (lbl_83276594 == 0) {
    fn_8245D538();
  }
  fn_8245DE90(lbl_83276594,(ulonglong)uVar2 + 1);
  *(undefined4 *)(param_1 + 0xd8) = 1;
  *(undefined4 *)(param_1 + 0xdc) = lbl_821CC160;
  return;
}

