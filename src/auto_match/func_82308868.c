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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_822BD278();
extern int fn_822C4448();
extern int fn_822C8C08();
extern int fn_822C8C60();
extern int fn_822CB020();
extern int fn_82308BF0();
extern int fn_82308D48();
extern int fn_824CD030();
extern int fn_825275B0();
extern int fn_8255A070();
extern int fn_82F64C68();
extern unsigned int lbl_821955D4;
extern unsigned int lbl_821CC160;


void fn_82308868(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  int in_r0;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  longlong lVar11;
  double dVar12;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [96];
  
  iVar1 = *(int *)(param_1 + 0x44);
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x24);
  iVar9 = ((uint)LZCOUNT(iVar2) >> 5 ^ 1) + 1;
  if (iVar9 != *(int *)(param_1 + 0x40)) {
    *(int *)(param_1 + 0x40) = iVar9;
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (iVar2 != 0) {
      iVar9 = *(int *)(iVar2 + 0xf4);
      if (iVar9 != 0) {
        *(undefined4 *)(iVar9 + 0x10) = 0;
        iVar8 = iVar9 + 0x20;
        lVar11 = 2;
        do {
          puVar10 = (undefined4 *)(in_r0 + iVar8 & 0xfffffff0);
          *puVar10 = in_register_000104d0;
          puVar10[1] = in_register_000104d4;
          puVar10[2] = in_register_000104d8;
          puVar10[3] = in_vr77;
          iVar8 = iVar8 + 0x10;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        *(undefined4 *)(iVar9 + 0x54) = 1;
        *(undefined4 *)(iVar9 + 0x58) = 1;
        uVar4 = lbl_821CC160;
        *(undefined4 *)(iVar9 + 0x5c) = lbl_821955D4;
        *(undefined4 *)(iVar9 + 100) = uVar4;
      }
    }
  }
  iVar9 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0x20);
  puVar10 = (undefined4 *)(iVar9 + 4);
  if (0xf < *(uint *)(iVar9 + 0x18)) {
    puVar10 = (undefined4 *)*puVar10;
  }
  iVar9 = fn_82F64C68(puVar10,0xffffffff821af0f4);
  if ((iVar9 == 0) ||
     (bVar5 = true, *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0x28) != 0)) {
    bVar5 = false;
  }
  if ((*(int *)(param_1 + 0x40) != 1) && (*(int *)(param_1 + 0x40) == 2)) {
    iVar9 = fn_824CD030(iVar2);
    if (iVar9 == 0) {
      if (!bVar5) {
        piVar3 = *(int **)(*(int *)(param_1 + 0xc) + 0x168);
        if (piVar3 != (int *)0x0) {
          uVar4 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x114);
          lVar11 = (**(code **)(*piVar3 + 8))(piVar3);
          fn_822CB020(auStack_70,lVar11 + 0xf0);
          lVar11 = (**(code **)(*piVar3 + 8))(piVar3);
          fn_822BD278(auStack_60,lVar11 + 0x144);
          fn_822C8C60(uVar4,1,0);
        }
      }
    }
    else {
      if (!bVar5) {
        fn_82308BF0(param_1);
      }
      fn_82308D48(param_1);
    }
  }
  if (((iVar2 == 0) || (*(int *)(param_1 + 0x44) == 0)) || (bVar6 = true, iVar1 != 0)) {
    bVar6 = false;
  }
  if (((*(int *)(param_1 + 0x48) != 0) && (!bVar5)) || (bVar6)) {
    if (iVar2 != 0) {
      if (bVar6) {
        fn_822C4448(auStack_70,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                          1,1);
        dVar12 = (double)fn_8255A070();
        iVar1 = *(int *)(param_1 + 0xc);
        uVar7 = 0xffffffff821ace70;
        *(float *)(iVar1 + 0x254) = (float)dVar12;
        *(undefined4 *)(iVar1 + 600) = 1;
      }
      else {
        iVar1 = *(int *)(param_1 + 0xc);
        uVar7 = 0xffffffff821aca94;
      }
      fn_822C8C08(*(undefined4 *)(iVar1 + 0x114),uVar7);
    }
    if (!bVar6) {
      iVar1 = *(int *)(param_1 + 0x10);
      if (*(int *)(iVar1 + 0x42c) != 2) {
        fn_825275B0(*(undefined4 *)(iVar1 + 0xe10));
      }
      *(undefined4 *)(iVar1 + 0x42c) = 2;
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}

