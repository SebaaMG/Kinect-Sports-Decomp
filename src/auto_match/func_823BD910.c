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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8223C610();
extern int fn_823BE0B8();
extern int fn_828E5538();
extern int fn_82F622E0();


void fn_823BD910(int param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 in_r0;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 in_register_00010010;
  undefined4 uVar14;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  fn_823BE0B8(param_2);
  uVar11 = in_vr1;
  uVar12 = in_register_00010018;
  uVar13 = in_register_00010014;
  uVar14 = in_register_00010010;
  dVar10 = (double)fn_828E5538(param_2,0xb,4);
  fn_823BE0B8(param_2);
  iVar5 = (int)in_r0;
  if (param_3 == 0) {
    lVar6 = 0x14;
    do {
      (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_2,auStack_50);
      iVar5 = (int)in_r0;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  else {
    puVar2 = (undefined4 *)(param_3 + 0x10U & 0xfffffff0);
    *puVar2 = in_register_00010010;
    puVar2[1] = in_register_00010014;
    puVar2[2] = in_register_00010018;
    puVar2[3] = in_vr1;
    *(float *)(param_3 + 0x1c) = (float)dVar10;
    puVar2 = (undefined4 *)(param_3 + 0x20U & 0xfffffff0);
    *puVar2 = uVar14;
    puVar2[1] = uVar13;
    puVar2[2] = uVar12;
    puVar2[3] = uVar11;
    (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_2,param_3 + 0x30);
    (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_2,param_3 + 0x40);
    (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_2,param_3 + 0x50);
    (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_2,param_3 + 0x60);
    (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_2,param_3 + 0x70);
    (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_2,param_3 + 0x80);
    (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_2,param_3 + 0x90);
    (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_2,param_3 + 0xa0);
    (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_2,param_3 + 0xb0);
    (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_2,param_3 + 0xc0);
    (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_2,param_3 + 0xd0);
    (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_2,param_3 + 0xe0);
    (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_2,param_3 + 0xf0);
    (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_2,param_3 + 0x100);
    (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_2,param_3 + 0x110);
    (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_2,param_3 + 0x120);
    (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_2,param_3 + 0x130);
    (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_2,param_3 + 0x140);
    (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_2,param_3 + 0x150);
    (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_2,param_3 + 0x160);
  }
  lVar6 = fn_8223C610(param_2,1,0,0);
  if (param_3 != 0) {
    *(char *)(param_3 + 0x170) = '\x01' - (lVar6 == 0);
  }
  (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(*(int **)(param_1 + 0xc),param_2,auStack_60);
  if (param_3 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = param_3 + 400;
    puVar2 = (undefined4 *)((uint)(auStack_60 + iVar5) & 0xfffffff0);
    uVar11 = puVar2[1];
    uVar12 = puVar2[2];
    uVar13 = puVar2[3];
    puVar3 = (undefined4 *)(param_3 + 0x180U & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar11;
    puVar3[2] = uVar12;
    puVar3[3] = uVar13;
  }
  (**(code **)(**(int **)(param_1 + 0x10) + 0x14))(*(int **)(param_1 + 0x10),param_2,iVar7);
  uVar9 = 0;
  do {
    lVar6 = fn_8223C610(param_2,1,0,0);
    if (param_3 != 0) {
      if (0x13 < uVar9) {
                    /* WARNING: Subroutine does not return */
        fn_82F622E0(0xffffffff821b5f00);
      }
      uVar4 = uVar9 >> 3 & 0x1ffffffc;
      uVar8 = 1 << (uVar9 & 0x1f);
      uVar1 = *(uint *)(uVar4 + param_3 + 0x194);
      if (lVar6 == 0) {
        uVar8 = uVar1 & ~uVar8;
      }
      else {
        uVar8 = uVar8 | uVar1;
      }
      *(uint *)(uVar4 + param_3 + 0x194) = uVar8;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x14);
  return;
}

