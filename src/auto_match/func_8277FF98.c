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
extern int fn_8277BB80();
extern int fn_8277D1C8();
extern int fn_8277F4F0();
extern int fn_8277F5D8();
extern int fn_8277F650();
extern int fn_82F68CC0();
extern unsigned int iStack_a4;
extern unsigned int iStack_d4;
extern unsigned int iStack_e0;
extern unsigned int iStack_ec;
extern unsigned int iStack_f0;
extern unsigned int uStack_100;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_fc;


void fn_8277FF98(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  char cVar10;
  uint uVar11;
  uint *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  bool bVar18;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int iStack_f0;
  int iStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  int iStack_d4;
  undefined1 uStack_d0;
  uint *puStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined4 *puStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  int iStack_a4;
  undefined1 uStack_a0;
  
  iVar1 = *(int *)(param_2 + 4);
  puVar12 = (uint *)(param_1 + 0x144);
  iStack_f0 = param_1 + 0x128;
  iVar2 = *(int *)(iVar1 + 0x14);
  iVar3 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)(iVar1 + 0x14) = 0;
  puStack_b0 = &uStack_100;
  iStack_ec = *(int *)(param_3 + 0x10);
  uStack_fc = *(undefined4 *)(param_2 + 4);
  uStack_100 = *(undefined4 *)(iVar2 + 8);
  uStack_e8 = *(uint *)(param_3 + 0x14);
  uStack_b8 = *(uint *)(iVar2 + 0x14);
  uStack_bc = *(uint *)(iVar2 + 0x10);
  uStack_e4 = *(undefined4 *)(param_3 + 0xc);
  uStack_b4 = *(undefined4 *)(iVar2 + 0xc);
  uStack_dc = *(uint *)(param_3 + 8);
  bVar18 = uStack_b8 < uStack_e8;
  iStack_d4 = *(int *)(param_3 + 4);
  uStack_ac = *(uint *)(iVar2 + 8);
  iStack_a4 = *(int *)(iVar2 + 4);
  uStack_d8 = *(uint *)(iStack_ec * 0xc + *(int *)(param_1 + 0x128) + 8);
  uStack_a8 = *(uint *)(*(int *)((uStack_bc >> 2 & 0x3ffffffc) + *(int *)(param_1 + 0x150)) +
                       (uStack_bc & 0xf) * 8);
  uStack_a0 = 1;
  uStack_d0 = 1;
  iStack_e0 = param_2;
  puStack_c0 = puVar12;
  while( true ) {
    uVar8 = uStack_a8;
    uVar15 = uStack_ac;
    puVar4 = puStack_b0;
    uVar17 = uStack_b8;
    iVar7 = iStack_d4;
    uVar6 = uStack_d8;
    uVar11 = uStack_dc;
    iVar1 = iStack_e0;
    uVar14 = (ulonglong)uStack_ac;
    uVar13 = (ulonglong)uStack_a8;
    if (((uVar14 == uVar13) && ((uStack_dc == 0xffffffff || (uStack_d8 == 0xffffffff)))) ||
       ((uStack_dc == uStack_d8 && ((uStack_ac == 0xffffffff || (uStack_a8 == 0xffffffff)))))) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if ((!bVar5) && ((uVar14 != uVar13 || (uStack_dc != uStack_d8)))) {
      if (iStack_a4 != iVar3) {
        fn_8277F650(param_1,puStack_b0,iVar3);
        uVar16 = puVar4[1];
        if (uVar15 != 0xffffffff) {
          fn_8277F4F0(param_1,uVar16,uVar14 | 0x40000000);
        }
        if (uVar8 != 0xffffffff) {
          fn_8277F4F0(param_1,uVar16,CONCAT44(uVar8,uVar8) & 0xffffffffbfffffff);
        }
      }
      uVar16 = puVar4[1];
      if (uVar11 != 0xffffffff) {
        fn_8277F4F0(param_1,uVar16,uVar11 | 0x40000000);
      }
      if (uVar6 != 0xffffffff) {
        fn_8277F4F0(param_1,uVar16,CONCAT44(uVar6,uVar6) & 0xffffffffbfffffff);
      }
      *(undefined4 *)(iVar1 + 4) = puVar4[1];
    }
    if ((iVar7 != iVar3) || (*(int *)(iVar1 + 4) == 0)) {
      if (*(char *)(*(int *)(param_1 + 0x24) + iVar7) == '\0') {
        *(undefined4 *)(iVar1 + 4) = 0;
      }
      else {
        fn_8277F650(param_1,iVar1,iVar7);
        uVar16 = *(undefined4 *)(iVar1 + 4);
        if (uVar11 != 0xffffffff) {
          fn_8277F4F0(param_1,uVar16,uVar11 | 0x40000000);
        }
        if (uVar6 != 0xffffffff) {
          fn_8277F4F0(param_1,uVar16,CONCAT44(uVar6,uVar6) & 0xffffffffbfffffff);
        }
      }
    }
    if (uVar17 == (-(uint)bVar18 & 1)) break;
    fn_8277D1C8(&puStack_c0,0xffffffff8277ba68);
    fn_8277BB80(&iStack_f0,0xffffffff8277ba88);
  }
  if (uVar8 != 0xffffffff) {
    uVar14 = uVar13;
  }
  if ((uStack_e8 != 0) && ((int)uVar14 != -1)) {
    uVar13 = 0;
    fn_8277D1C8(&puStack_c0,0xffffffff8277ba68);
    fn_8277BB80(&iStack_f0,0xffffffff8277ba88);
    puVar4 = puStack_b0;
    uVar11 = uStack_a8;
    uVar6 = uStack_ac;
    if ((puStack_b0[1] != 0) && (*(int *)(puStack_b0[1] + 0x10) == iVar3)) {
      uVar13 = fn_8277F5D8(param_1,iVar3);
      fn_82F68CC0(uVar13,puVar4[1],0x18);
      puVar4 = (undefined4 *)puVar4[1];
      *puVar4 = 0;
      puVar4[1] = 0xffffffff;
      puVar4[2] = 0xffffffff;
      puVar4[3] = 0xffffffff;
      puVar4[4] = iVar3;
      puVar4[5] = 0;
      uVar11 = uStack_a8;
      uVar6 = uStack_ac;
    }
    do {
      uVar15 = uStack_d8;
      uVar17 = uStack_dc;
      iVar1 = iStack_e0;
      if (uStack_e8 == 0) {
        *(int *)(iStack_e0 + 4) = (int)uVar13;
        if ((uVar13 & 0xffffffff) == 0) {
          uVar9 = fn_8277F5D8(param_1,iVar3);
          *(int *)(iVar1 + 4) = (int)uVar9;
          if (uVar6 != 0xffffffff) {
            fn_8277F4F0(param_1,uVar9,uVar6 | 0x40000000);
          }
          if (uVar11 != 0xffffffff) {
            fn_8277F4F0(param_1,uVar9,CONCAT44(uVar11,uVar11) & 0xffffffffbfffffff);
          }
        }
        uVar17 = uStack_dc;
        uVar16 = *(undefined4 *)(iVar1 + 4);
        uVar15 = uStack_d8;
        if (uStack_dc != 0xffffffff) {
          fn_8277F4F0(param_1,uVar16,uStack_dc | 0x40000000);
          uVar15 = uStack_d8;
        }
LAB_827803ac:
        if (uVar15 != 0xffffffff) {
          fn_8277F4F0(param_1,uVar16,CONCAT44(uVar15,uVar15) & 0xffffffffbfffffff);
        }
      }
      else if (uStack_dc != uStack_d8) {
        fn_8277F650(param_1,iStack_e0,iVar3);
        uVar16 = *(undefined4 *)(iVar1 + 4);
        fn_8277F4F0(param_1,uVar16,uVar14 | 0x40000000);
        fn_8277F4F0(param_1,uVar16,uVar14 << 0x20 | uVar14 & 0xffffffffbfffffff);
        uVar16 = *(undefined4 *)(iVar1 + 4);
        if (uVar17 != 0xffffffff) {
          fn_8277F4F0(param_1,uVar16,uVar17 | 0x40000000);
        }
        goto LAB_827803ac;
      }
      if ((iStack_d4 != iVar3) || (*(int *)(iVar1 + 4) == 0)) {
        if (*(char *)(*(int *)(param_1 + 0x24) + iStack_d4) == '\0') {
          *(undefined4 *)(iVar1 + 4) = 0;
        }
        else {
          fn_8277F650(param_1,iVar1);
          uVar16 = *(undefined4 *)(iVar1 + 4);
          if (uVar17 != 0xffffffff) {
            fn_8277F4F0(param_1,uVar16,uVar17 | 0x40000000);
          }
          if (uVar15 != 0xffffffff) {
            fn_8277F4F0(param_1,uVar16,CONCAT44(uVar15,uVar15) & 0xffffffffbfffffff);
          }
        }
      }
      cVar10 = fn_8277BB80(&iStack_f0,0xffffffff8277ba88);
    } while (cVar10 != '\0');
  }
  uVar11 = *(int *)(param_1 + 0x134) - 1;
  if (iVar2 == *(int *)((uVar11 >> 2 & 0x3ffffffc) + *(int *)(param_1 + 0x140)) +
               (uVar11 & 0xf) * 0x1c) {
    if (*(uint *)(iVar2 + 0x10) < *puVar12) {
      *puVar12 = *(uint *)(iVar2 + 0x10);
    }
    if (*(int *)(param_1 + 0x134) != 0) {
      *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + -1;
    }
  }
  *(undefined4 *)(param_3 + 0x14) = 0;
  return;
}

