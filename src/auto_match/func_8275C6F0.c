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
extern unsigned int *auStack_110;
extern unsigned int *auStack_114;
extern unsigned int *auStack_120;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_82681728();
extern int fn_826824B0();
extern int fn_826826A8();
extern int fn_826828D8();
extern int fn_82683270();
extern int fn_82687270();
extern int fn_8268B330();
extern int fn_8268C510();
extern int fn_8268C750();
extern int fn_826944C8();
extern int fn_82695608();
extern int fn_826957D0();
extern int fn_82696330();
extern int fn_82696B20();
extern int fn_82696D38();
extern int fn_826A7398();
extern int fn_826ADE60();
extern int fn_826C52C8();
extern int fn_826C53D0();
extern int fn_826D06C8();
extern int fn_826D7220();
extern int fn_826F35B0();
extern int fn_826F5070();
extern int fn_826F7480();
extern int fn_8274A8E0();
extern int fn_8275BB38();
extern int fn_8275C268();
extern unsigned int iStack_124;
extern unsigned int iStack_12c;
extern unsigned int iStack_134;
extern unsigned int iStack_13c;
extern unsigned int iStack_b0;
extern unsigned int iStack_b8;
extern unsigned int iStack_c8;
extern unsigned int iStack_e0;
extern unsigned int iStack_e8;
extern unsigned int iStack_f8;
extern unsigned int lbl_8200579C;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_118;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_b4;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_e4;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern U64 storeWordConditionalIndexed();


void fn_8275C6F0(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar7;
  int *piVar8;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char cVar9;
  longlong lVar10;
  uint *puVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  char in_RESERVE;
  byte bVar16;
  uint uStack_150;
  uint uStack_14c;
  undefined4 *apuStack_148 [2];
  int *piStack_140;
  int iStack_13c;
  byte bStack_138;
  int iStack_134;
  int *piStack_130;
  int iStack_12c;
  byte bStack_128;
  int iStack_124;
  uint auStack_120 [2];
  undefined4 uStack_118;
  undefined1 auStack_114 [4];
  undefined1 auStack_110 [16];
  undefined **ppuStack_100;
  undefined1 *puStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined **ppuStack_d0;
  undefined1 *puStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [112];
  
  iVar7 = fn_826A7398(*(undefined4 *)(param_1 + 0x18));
  if ((iVar7 != 0) && (piVar8 = (int *)fn_8274A8E0(iVar7 + 8), piVar8 != (int *)0x0)) {
    iVar15 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar15 = 0;
    }
    lVar4 = fn_8275BB38(iVar15);
    if (lVar4 != 0) {
      if (*(int *)(param_1 + 0x1c) < 1) {
        fn_826ADE60(*(undefined4 *)(param_1 + 0x18),0xffffffff8201477c);
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x18);
        uVar5 = fn_826957D0(param_1,0);
        fn_82696D38(apuStack_148,uVar5,uVar2,0xffffffffffffffff,0);
        uVar14 = 0;
        if (1 < *(int *)(param_1 + 0x1c)) {
          uVar2 = *(undefined4 *)(param_1 + 0x18);
          uVar5 = fn_826957D0(param_1,1);
          uVar14 = fn_82695608(uVar5,uVar2);
        }
        uVar6 = fn_8267B890(lbl_831E7E64,0x54,0);
        bVar1 = (uVar6 & 0xffffffff) == 0;
        bVar16 = bVar1 << 1;
        if (bVar1) {
          uVar6 = 0;
        }
        else {
          lVar10 = (ulonglong)*(uint *)(iVar7 + 0x100) + 8;
          if ((ulonglong)*(uint *)(iVar7 + 0x100) == 0) {
            lVar10 = 0;
          }
          uVar6 = fn_826F5070(uVar6,*(undefined4 *)(*(int *)(iVar7 + 0x6c) + 0x14),lVar10,0);
        }
        fn_8268B330(&uStack_150);
        fn_826F7480(iVar7,&uStack_150);
        uVar5 = fn_8268C510(auStack_120,*apuStack_148[0]);
        uStack_118 = 0;
        fn_8268C750(auStack_114,uVar5);
        fn_8268C750(auStack_110,&uStack_150);
        lVar10 = ((ulonglong)auStack_120[0] & 0xfffffffc) + 4;
        do {
          puVar11 = (uint *)lVar10;
          uVar12 = (ulonglong)*puVar11;
          if (in_RESERVE != '\0') {
            uVar13 = storeWordConditionalIndexed(uVar12 - 1,0,lVar10);
            *puVar11 = uVar13;
            bVar16 = 2;
          }
        } while (!(bool)(bVar16 >> 1 & 1));
        if (uVar12 == 1) {
          fn_8267BE38();
        }
        fn_8268B330(&uStack_14c);
        fn_826F35B0(uVar6,&uStack_14c,&uStack_118);
        uVar12 = (**(code **)(*piVar8 + 8))(piVar8,((ulonglong)uStack_14c & 0xfffffffc) + 8,uVar14);
        bVar16 = (uVar12 == 0) << 1;
        if (uVar12 == 0) {
          auStack_a0[0] = 0;
          fn_82681728(&iStack_134,
                            (ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                            0xffffffff8200ebf0);
          cVar9 = (**(code **)(*(int *)(iVar15 + 0x10) + 0x2c))
                            (iVar15 + 0x10,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,&iStack_134,
                             auStack_a0);
          lVar4 = (ulonglong)*(uint *)(iStack_134 + 8) - 1;
          *(int *)(iStack_134 + 8) = (int)lVar4;
          if (lVar4 == 0) {
            fn_826944C8(iStack_134);
          }
          bVar16 = (cVar9 == '\0') << 1;
          if (cVar9 != '\0') {
            fn_82696B20(&piStack_130,auStack_a0,*(undefined4 *)(param_1 + 0x18));
            iVar7 = *(int *)(param_1 + 0x18);
            auStack_70[0] = 0;
            puVar11 = (uint *)(iVar7 + 8);
            uVar13 = *(int *)(iVar7 + 8) + 0x10;
            *puVar11 = uVar13;
            if (*(uint *)(iVar7 + 0x10) <= uVar13) {
              fn_826826A8(puVar11);
            }
            puVar3 = (undefined1 *)*puVar11;
            if (puVar3 != (undefined1 *)0x0) {
              puVar3[4] = 0;
              *puVar3 = 2;
            }
            iStack_b8 = *(int *)(param_1 + 0x18);
            puStack_cc = auStack_70;
            ppuStack_d0 = &lbl_8200579C;
            uStack_bc = 0;
            uStack_c4 = 0;
            uStack_c0 = 0;
            iStack_b0 = (*(int *)(iStack_b8 + 8) - *(int *)(iStack_b8 + 0xc) >> 4) +
                        *(int *)(iStack_b8 + 0x1c) * 0x20 + -0x20;
            uStack_b4 = 1;
            iStack_c8 = iVar15 + 0x10;
            (**(code **)(*piStack_130 + 0x28))(piStack_130,&ppuStack_d0,iStack_12c,0);
            fn_826828D8(&ppuStack_d0);
            fn_82683270((ulonglong)*(uint *)(param_1 + 0x18) + 8,1);
            fn_82696330(auStack_70);
            if (((bStack_128 & 2) == 0) && (piStack_130 != (int *)0x0)) {
              fn_826824B0();
            }
            piStack_130 = (int *)0x0;
            bVar1 = (bStack_128 & 1) == 0;
            bVar16 = bVar1 << 1;
            if ((bVar1) && (iStack_12c != 0)) {
              fn_826824B0();
            }
            iStack_12c = 0;
          }
          fn_82696330(auStack_a0);
          lVar4 = ((ulonglong)uStack_14c & 0xfffffffc) + 4;
          do {
            puVar11 = (uint *)lVar4;
            uVar14 = (ulonglong)*puVar11;
            if (in_RESERVE != '\0') {
              uVar13 = storeWordConditionalIndexed(uVar14 - 1,0,lVar4);
              *puVar11 = uVar13;
              bVar16 = 2;
            }
          } while (!(bool)(bVar16 >> 1 & 1));
          bVar16 = (uVar14 == 1) << 1;
          if (uVar14 == 1) {
            fn_8267BE38();
          }
          fn_826D7220(&uStack_118);
          lVar4 = ((ulonglong)uStack_150 & 0xfffffffc) + 4;
          do {
            puVar11 = (uint *)lVar4;
            uVar14 = (ulonglong)*puVar11;
            if (in_RESERVE != '\0') {
              uVar13 = storeWordConditionalIndexed(uVar14 - 1,0,lVar4);
              *puVar11 = uVar13;
              bVar16 = 2;
            }
          } while (!(bool)(bVar16 >> 1 & 1));
        }
        else {
          if (*(int *)(iVar15 + 0x34) != 0) {
            fn_82687270();
          }
          *(undefined4 *)(iVar15 + 0x34) = 0;
          do {
            puVar11 = (uint *)(uVar12 + 4);
            if (in_RESERVE != '\0') {
              uVar13 = storeWordConditionalIndexed((ulonglong)*puVar11 + 1,0,uVar12 + 4);
              *puVar11 = uVar13;
              bVar16 = 2;
            }
          } while (!(bool)(bVar16 >> 1 & 1));
          if (*(int *)(iVar15 + 0x30) != 0) {
            fn_8275C268();
          }
          *(int *)(iVar15 + 0x30) = (int)uVar12;
          if (((uVar14 & 0xff) != 0) &&
             (piVar8 = (int *)(**(code **)(*piVar8 + 0x14))(piVar8,uVar12 & 0xffffffff,1),
             piVar8 != (int *)0x0)) {
            iVar7 = *piVar8;
            fn_826C52C8(lVar4);
            (**(code **)(iVar7 + 0x28))(piVar8);
            iVar7 = *piVar8;
            fn_826C53D0(lVar4);
            (**(code **)(iVar7 + 0x30))(piVar8);
            (**(code **)(*piVar8 + 0x10))(piVar8,0);
            fn_826D06C8(lVar4,piVar8,iVar15,*(undefined4 *)(iVar15 + 0x34));
            fn_8267C4F0(piVar8);
          }
          auStack_90[0] = 0;
          fn_82681728(&iStack_124,
                            (ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                            0xffffffff8200ebf0);
          cVar9 = (**(code **)(*(int *)(iVar15 + 0x10) + 0x2c))
                            (iVar15 + 0x10,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,&iStack_124,
                             auStack_90);
          lVar4 = (ulonglong)*(uint *)(iStack_124 + 8) - 1;
          *(int *)(iStack_124 + 8) = (int)lVar4;
          if (lVar4 == 0) {
            fn_826944C8(iStack_124);
          }
          bVar16 = (cVar9 == '\0') << 1;
          if (cVar9 != '\0') {
            fn_82696B20(&piStack_140,auStack_90,*(undefined4 *)(param_1 + 0x18));
            auStack_80[0] = 0;
            iVar7 = *(int *)(param_1 + 0x18);
            puVar11 = (uint *)(iVar7 + 8);
            uVar13 = *(int *)(iVar7 + 8) + 0x10;
            *puVar11 = uVar13;
            if (*(uint *)(iVar7 + 0x10) <= uVar13) {
              fn_826826A8(puVar11);
            }
            puVar3 = (undefined1 *)*puVar11;
            if (puVar3 != (undefined1 *)0x0) {
              puVar3[4] = 1;
              *puVar3 = 2;
            }
            iStack_e8 = *(int *)(param_1 + 0x18);
            puStack_fc = auStack_80;
            ppuStack_100 = &lbl_8200579C;
            uStack_f4 = 0;
            uStack_f0 = 0;
            uStack_ec = 0;
            iStack_e0 = (*(int *)(iStack_e8 + 8) - *(int *)(iStack_e8 + 0xc) >> 4) +
                        *(int *)(iStack_e8 + 0x1c) * 0x20 + -0x20;
            uStack_e4 = 1;
            iStack_f8 = iVar15 + 0x10;
            (**(code **)(*piStack_140 + 0x28))(piStack_140,&ppuStack_100,iStack_13c,0);
            fn_826828D8(&ppuStack_100);
            fn_82683270((ulonglong)*(uint *)(param_1 + 0x18) + 8,1);
            fn_82696330(auStack_80);
            if (((bStack_138 & 2) == 0) && (piStack_140 != (int *)0x0)) {
              fn_826824B0();
            }
            piStack_140 = (int *)0x0;
            bVar1 = (bStack_138 & 1) == 0;
            bVar16 = bVar1 << 1;
            if ((bVar1) && (iStack_13c != 0)) {
              fn_826824B0();
            }
            iStack_13c = 0;
          }
          fn_82683270((ulonglong)*(uint *)(param_1 + 0x18) + 8,1);
          fn_82696330(auStack_90);
          fn_8275C268(uVar12);
          lVar4 = ((ulonglong)uStack_14c & 0xfffffffc) + 4;
          do {
            puVar11 = (uint *)lVar4;
            uVar14 = (ulonglong)*puVar11;
            if (in_RESERVE != '\0') {
              uVar13 = storeWordConditionalIndexed(uVar14 - 1,0,lVar4);
              *puVar11 = uVar13;
              bVar16 = 2;
            }
          } while (!(bool)(bVar16 >> 1 & 1));
          bVar16 = (uVar14 == 1) << 1;
          if (uVar14 == 1) {
            fn_8267BE38();
          }
          fn_826D7220(&uStack_118);
          lVar4 = ((ulonglong)uStack_150 & 0xfffffffc) + 4;
          do {
            puVar11 = (uint *)lVar4;
            uVar14 = (ulonglong)*puVar11;
            if (in_RESERVE != '\0') {
              uVar13 = storeWordConditionalIndexed(uVar14 - 1,0,lVar4);
              *puVar11 = uVar13;
              bVar16 = 2;
            }
          } while (!(bool)(bVar16 >> 1 & 1));
        }
        if (uVar14 == 1) {
          fn_8267BE38();
        }
        if ((uVar6 & 0xffffffff) != 0) {
          fn_8267C4F0(uVar6);
        }
        uVar13 = apuStack_148[0][2];
        apuStack_148[0][2] = (int)((ulonglong)uVar13 - 1);
        if ((ulonglong)uVar13 - 1 == 0) {
          fn_826944C8(apuStack_148[0]);
        }
      }
    }
  }
  return;
}

