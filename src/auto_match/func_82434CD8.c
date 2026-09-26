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
extern int fn_8242E3E0();
extern int fn_82437F40();
extern int fn_8243E5C8();
extern unsigned int lbl_821CC160;


void fn_82434CD8(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  double dVar7;
  
  *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x148) = 0;
  fVar2 = lbl_821CC160;
  dVar7 = (double)lbl_821CC160;
  *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x14c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x1a8) = 0;
  *(float *)(*(int *)(param_1 + 0x40) + 0x18c) = fVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x204) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x168) =
       *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x164);
  iVar3 = *(int *)(**(int **)(param_1 + 0x40) + 0xa0);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0x40) != 1)) {
    iVar3 = fn_8242E3E0(**(undefined4 **)(param_1 + 0x40));
    if (iVar3 == 0) {
      *(int *)(*(int *)(param_1 + 0x40) + 0x154) = *(int *)(*(int *)(param_1 + 0x40) + 0x160) * 3;
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x15c) = 3;
      fn_82437F40(*(int *)(param_1 + 0x40) + 0x138,
                      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x154));
      fn_82437F40(*(int *)(param_1 + 0x40) + 0x138,
                      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x154));
    }
  }
  *(float *)(*(int *)(param_1 + 0x40) + 0x188) = (float)dVar7;
  fn_8243E5C8((ulonglong)*(uint *)(param_1 + 0x40) + 0x120);
  puVar4 = (uint *)(*(int *)(param_1 + 0x40) + 0x138);
  uVar6 = 0;
  if ((int)(*(int *)(*(int *)(param_1 + 0x40) + 0x13c) - *puVar4) / 0x18 != 0) {
    lVar5 = 0;
    do {
      fn_8243E5C8(lVar5 + (ulonglong)*puVar4);
      uVar6 = uVar6 + 1;
      puVar4 = (uint *)(*(int *)(param_1 + 0x40) + 0x138);
      lVar5 = lVar5 + 0x18;
    } while (uVar6 < (uint)((int)(*(int *)(*(int *)(param_1 + 0x40) + 0x13c) - *puVar4) / 0x18));
  }
  iVar3 = 0;
  lVar5 = 3;
  do {
    iVar1 = iVar3 + *(int *)(param_1 + 0x40);
    iVar3 = iVar3 + 0x2c;
    *(undefined4 *)(iVar1 + 0x3e4) = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

