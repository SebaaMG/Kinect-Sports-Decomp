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
extern int fn_8229F5A8();
extern int fn_822ABA88();
extern int fn_823C4DD0();
extern int fn_823CC298();
extern unsigned int lbl_821955D4;
extern unsigned int lbl_821CC160;


void fn_823D4908(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  int in_r0;
  int iVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  fn_8229F5A8(*(undefined4 *)(*(int *)(**(int **)(*param_1 + 0x4b0) + 0xd4) + 0xc));
  fVar3 = lbl_821CC160;
  iVar4 = *param_1;
  dVar7 = (double)lbl_821CC160;
  *(undefined4 *)(iVar4 + 0x1028) = 2;
  *(float *)(iVar4 + 0x1024) = fVar3;
  fn_823C4DD0();
  piVar1 = *(int **)(**(int **)(*param_1 + 8) + param_1[0x2c] * 4);
  iVar4 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),param_1[0x2d]);
  iVar4 = *(int *)(*(int *)(iVar4 + 0x24) + 0xf4);
  lVar6 = 2;
  iVar5 = iVar4 + 0x20;
  *(undefined4 *)(iVar4 + 0x10) = 0;
  do {
    puVar2 = (undefined4 *)(in_r0 + iVar5 & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
    iVar5 = iVar5 + 0x10;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(float *)(iVar4 + 100) = (float)dVar7;
  *(undefined4 *)(iVar4 + 0x54) = 1;
  *(undefined4 *)(iVar4 + 0x58) = 1;
  *(undefined4 *)(iVar4 + 0x5c) = lbl_821955D4;
  fn_823CC298(*(undefined4 *)(*param_1 + 0x4b8),7);
  return;
}

