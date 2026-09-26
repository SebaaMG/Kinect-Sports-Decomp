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
extern unsigned int *auStack_a4;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822C1730();
extern int fn_822C18B8();
extern int fn_82381BC0();
extern int fn_8243DAE0();
extern int fn_82535298();
extern int fn_82536070();
extern int fn_82536288();
extern int fn_82552720();
extern int fn_82552C78();
extern int fn_8255ACE0();
extern int fn_82560100();
extern unsigned int iStack_100;
extern unsigned int iStack_120;
extern unsigned int iStack_fc;
extern unsigned int lbl_82196320;
extern unsigned int lbl_821CC160;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;


void fn_8243D2D8(int param_1,undefined4 param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  int iVar6;
  undefined8 in_r0;
  undefined1 *puVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 in_register_00010440;
  undefined4 in_register_00010444;
  undefined4 in_register_00010448;
  undefined4 in_vr68;
  undefined4 uStack0000001c;
  int iStack_120;
  int aiStack_11c [3];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  int iStack_100;
  int iStack_fc;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [28];
  undefined1 auStack_a4 [164];
  
  puVar8 = *(uint **)(param_1 + 4);
  uVar10 = 0;
  if ((int)(puVar8[1] - *puVar8) / 0x30 != 0) {
    lVar11 = 0;
    dVar13 = (double)lbl_821CC160;
    uStack0000001c = param_2;
    do {
      fn_8243DAE0(&iStack_100,lVar11 + (ulonglong)*puVar8 + 0x1c,&stack0x0000001c);
      iVar6 = iStack_fc;
      if (((param_3 & 0xffffffff) == 0) || (bVar5 = true, (param_4 & 0xffffffff) == 0)) {
        bVar5 = false;
      }
      aiStack_11c[0] = iStack_100;
      while (aiStack_11c[0] != iVar6) {
        iVar1 = *(int *)(aiStack_11c[0] + 0x10);
        uVar2 = *(uint *)(iVar1 + 0x30);
        if (uVar2 == 0) {
          piVar9 = (int *)(iVar1 + 0x38);
          if (piVar9 == (int *)0x0) {
            bVar12 = false;
          }
          else {
            bVar12 = *piVar9 != 0;
          }
          if (bVar12) {
            iStack_120 = *piVar9;
LAB_8243d574:
            iStack_120 = fn_82535298(&iStack_120,
                                           *(undefined4 *)
                                            (*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x84c),
                                           0xffffffff83296bc0,0xffffffff83296bd0);
            fn_82536288(&iStack_120);
          }
        }
        else if (uVar2 == 1) {
          if (bVar5) {
            uVar14 = in_vr68;
            uVar15 = in_register_00010448;
            uVar16 = in_register_00010444;
            uVar17 = in_register_00010440;
            fn_8255ACE0(param_4);
            iVar3 = *(int *)(iVar1 + 0x38);
            puVar4 = (undefined4 *)((uint)(auStack_e0 + (int)in_r0) & 0xfffffff0);
            *puVar4 = in_register_00010440;
            puVar4[1] = in_register_00010444;
            puVar4[2] = in_register_00010448;
            puVar4[3] = in_vr68;
            in_vr68 = uVar14;
            in_register_00010448 = uVar15;
            in_register_00010444 = uVar16;
            in_register_00010440 = uVar17;
            if (iVar3 != 0) {
              fn_82560100(dVar13,*(undefined4 *)(*(int *)(param_1 + 4) + 0x10),iVar1 + 0x38,
                                param_3);
              in_vr68 = uVar14;
              in_register_00010448 = uVar15;
              in_register_00010444 = uVar16;
              in_register_00010440 = uVar17;
            }
          }
        }
        else if (uVar2 < 3) {
          piVar9 = (int *)(iVar1 + 0x38);
          if (piVar9 == (int *)0x0) {
            bVar12 = false;
          }
          else {
            bVar12 = *piVar9 != 0;
          }
          if (bVar12) {
            if ((param_4 & 0xffffffff) == 0) {
              puVar7 = (undefined1 *)0x0;
            }
            else {
              puVar4 = (undefined4 *)((uint)(&lbl_82196320 + (int)in_r0) & 0xfffffff0);
              uVar14 = *puVar4;
              uVar15 = puVar4[1];
              uVar16 = puVar4[2];
              uVar17 = puVar4[3];
              fn_8255ACE0(param_4);
              puVar7 = auStack_f0;
              puVar4 = (undefined4 *)((uint)(auStack_f0 + (int)in_r0) & 0xfffffff0);
              *puVar4 = uVar14;
              puVar4[1] = uVar15;
              puVar4[2] = uVar16;
              puVar4[3] = uVar17;
            }
            fn_82552720((ulonglong)*(uint *)(*(int *)(param_1 + 4) + 0x10) + 0x84c,
                              (ulonglong)*(uint *)(iVar1 + 0x3c) * 0xc +
                              (ulonglong)*(uint *)(*(int *)(param_1 + 4) + 0x14),piVar9,0,0,param_3,
                              puVar7);
          }
        }
        else if (uVar2 == 3) {
          piVar9 = (int *)(iVar1 + 0x38);
          if (piVar9 == (int *)0x0) {
            bVar12 = false;
          }
          else {
            bVar12 = *piVar9 != 0;
          }
          if (bVar12) {
            if (*(int *)(iVar1 + 0x9c) != 0) {
              fn_82536070(iVar1 + 0x3c,iVar1 + 0x6c);
              iStack_120 = *piVar9;
              goto LAB_8243d574;
            }
            uStack_110 = 0;
            uStack_10c = 0;
            uStack_108 = 0;
            fn_82230110(auStack_c0,iVar1 + 0x3c);
            fn_82230110(auStack_a4,iVar1 + 0x6c);
            fn_822C1730(&uStack_110,auStack_c0);
            fn_82230300(auStack_a4,1,0);
            fn_82230300(auStack_c0,1,0);
            if ((param_4 & 0xffffffff) != 0) {
              puVar4 = (undefined4 *)((uint)(&lbl_82196320 + (int)in_r0) & 0xfffffff0);
              uVar14 = *puVar4;
              uVar15 = puVar4[1];
              uVar16 = puVar4[2];
              uVar17 = puVar4[3];
              fn_8255ACE0(param_4);
              puVar4 = (undefined4 *)((uint)(auStack_d0 + (int)in_r0) & 0xfffffff0);
              *puVar4 = uVar14;
              puVar4[1] = uVar15;
              puVar4[2] = uVar16;
              puVar4[3] = uVar17;
            }
            fn_82552C78(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10),piVar9,param_3,
                              auStack_d0,&uStack_110);
            fn_822C18B8(&uStack_110);
          }
        }
        fn_82381BC0(aiStack_11c);
      }
      puVar8 = *(uint **)(param_1 + 4);
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x30;
    } while (uVar10 < (uint)((int)(puVar8[1] - *puVar8) / 0x30));
  }
  return;
}

