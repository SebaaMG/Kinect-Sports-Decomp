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
extern unsigned int *auStack_d0;
extern unsigned int *auStack_d8;
extern unsigned int *auStack_e0;
extern int fn_822315A0();
extern int fn_822AEA70();
extern int fn_822CEE40();
extern int fn_822CEF30();
extern int fn_822CF9D8();
extern int fn_82359070();
extern int fn_82365BD8();
extern int fn_8236FB68();
extern int fn_8236FDE0();
extern int fn_82370BB8();
extern int fn_82370D40();
extern int fn_82371930();
extern int fn_823723D0();
extern int fn_82372550();
extern int fn_82372C00();
extern int fn_82373AC0();
extern int fn_823759C8();
extern int fn_82377620();
extern int fn_82379958();
extern int fn_82379D20();
extern int fn_8237A078();
extern int fn_8237A2E0();
extern int fn_8237E9D8();
extern int fn_82380650();
extern int fn_82387AD8();
extern int fn_8248F890();
extern int fn_82508078();
extern int fn_82522588();
extern int fn_825354B8();
extern int fn_82536288();
extern int fn_82560100();
extern int fn_8288B760();
extern unsigned int iStack_cc;
extern unsigned int iStack_d4;
extern unsigned int iStack_dc;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821917C4;
extern unsigned int lbl_821917D4;
extern unsigned int lbl_821B37CC;
extern unsigned int lbl_821B37E4;
extern unsigned int lbl_821BEBBC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D1B34;
extern unsigned int lbl_831D1B38;
extern unsigned int lbl_831D1B3C;
extern unsigned int lbl_831D1B40;
extern unsigned int lbl_831D1B4C;
extern unsigned int lbl_831D2298;
extern unsigned int lbl_831DCD58;
extern unsigned int lbl_83265A28;


void fn_82370F38(double param_1,undefined8 param_2,int param_3,int *param_4,int param_5,
                  int param_6,uint param_7,undefined8 param_8)

{
  float fVar1;
  undefined4 *puVar2;
  float fVar3;
  int in_r0;
  undefined8 uVar4;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  longlong lVar5;
  float *pfVar11;
  undefined4 uVar12;
  int iVar13;
  bool bVar14;
  ulonglong uVar15;
  int iVar16;
  bool bVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 in_stack_00000054;
  float afStack_f0 [4];
  undefined1 auStack_e0 [4];
  int iStack_dc;
  undefined1 auStack_d8 [4];
  int iStack_d4;
  undefined1 auStack_d0 [4];
  int iStack_cc;
  undefined **appuStack_c0 [4];
  undefined ***pppuStack_b0;
  
  afStack_f0[0] = 0.0;
  bVar14 = false;
  uVar4 = fn_82365BD8(afStack_f0);
  fn_82370D40(param_1,param_2,param_3,uVar4,param_5,param_6,param_7,param_8);
  dVar18 = (double)lbl_8218E8E8;
  if ((param_7 != 0xb) || (uVar12 = 1, param_1 < dVar18)) {
    uVar12 = 0;
  }
  *(undefined4 *)(param_3 + 0x21c) = uVar12;
  if (((param_7 != 10) && (param_7 != 0xb)) || (uVar12 = 1, param_1 < dVar18)) {
    uVar12 = 0;
  }
  *(undefined4 *)(param_3 + 0x21c) = uVar12;
  pppuStack_b0 = appuStack_c0;
  appuStack_c0[0] = &lbl_821B37CC;
  fn_822AEA70(*(undefined4 *)(param_3 + 8),appuStack_c0);
  if ((*(int *)(param_5 + 0x2c) != *(int *)(param_6 + 0x2c)) &&
     (iVar6 = fn_822CEF30((double)lbl_821917C4,param_6), iVar6 == 0)) {
    iVar6 = param_7 * 0x148 + *param_4;
    iVar9 = iVar6 + 0x1dc;
    if ((double)lbl_8218E8E8 <= param_1) {
      iVar9 = iVar6 + 0x280;
    }
    uVar12 = *(undefined4 *)(iVar9 + 0x24);
    *(undefined4 *)(param_6 + 0x34c) = 0;
    *(undefined4 *)(param_6 + 0x350) = uVar12;
  }
  pppuStack_b0 = appuStack_c0;
  appuStack_c0[0] = &lbl_821B37E4;
  fn_822AEA70(*(undefined4 *)(param_3 + 8),appuStack_c0);
  iVar6 = *(int *)(*param_4 + 0x2148);
  if (iVar6 < 0x18) {
    iVar9 = *(int *)(&lbl_831DCD58 + iVar6 * 4);
    if ((iVar9 == 4) && (lVar5 = fn_8236FB68(0x1c), lVar5 != 0)) {
      fn_82508078(*(undefined4 *)(param_3 + 0xa4),lVar5,0);
    }
  }
  else {
    iVar9 = 6;
  }
  puVar7 = (undefined4 *)fn_82373AC0(auStack_e0,param_3);
  piVar10 = (int *)*puVar7;
  iVar16 = *piVar10;
  uVar4 = fn_82365BD8(afStack_f0,param_4);
  (**(code **)(iVar16 + 0x24))(param_1,param_2,piVar10,uVar4,param_5,param_6,param_7);
  if (iStack_dc != 0) {
    fn_822315A0();
  }
  if ((iVar9 != 5) || (uVar12 = 1, *(int *)(param_3 + 0x1fc) != 0)) {
    uVar12 = 0;
  }
  dVar18 = (double)lbl_821CC160;
  if ((int)param_7 < 0x18) {
    *(float *)(param_5 + 0x264) = lbl_821CC160;
    *(uint *)(param_5 + 600) = param_7;
    *(float *)(param_5 + 0x260) = (float)param_1;
    *(undefined4 *)(param_5 + 0x26c) = uVar12;
  }
  *(float *)(param_5 + 0x25c) = (float)param_1;
  *(uint *)(param_5 + 0x254) = param_7;
  *(undefined4 *)(param_5 + 0x268) = in_stack_00000054;
  *(undefined4 *)(param_5 + 0x250) = 0x18;
  dVar19 = dVar18;
  if (*(int *)(param_3 + 0x204) == 0) {
    iVar9 = *(int *)(param_5 + 0x240);
    if (iVar9 == 1) {
      uVar4 = 0x13;
LAB_823711d0:
      dVar18 = (double)fn_822CF9D8(param_5,uVar4);
    }
    else {
      if (iVar9 == 2) {
        uVar4 = 0x14;
        goto LAB_823711d0;
      }
      if (iVar9 == 3) {
        uVar4 = 0x15;
        goto LAB_823711d0;
      }
    }
    fVar3 = lbl_821917D4;
    fVar1 = (float)((double)*(float *)(param_5 + 0x1d8) - dVar18);
    *(float *)(param_5 + 0x1d8) = fVar1;
    if (fVar1 < fVar3) {
      *(float *)(param_5 + 0x1d8) = fVar3;
    }
  }
  uVar4 = fn_82365BD8(afStack_f0,param_4);
  fn_82372550(param_3,uVar4,param_5,param_6,param_7,in_stack_00000054);
  if ((5 < (int)param_7) && (7 < (int)param_7)) {
    if (param_7 == 10) {
      if (*(int *)(param_3 + 0x220) == 0) goto LAB_823712b4;
      iVar9 = param_3 + 0x898;
    }
    else if (param_7 == 0xb) {
      if (*(int *)(param_3 + 0x21c) == 0) goto LAB_823712b4;
      iVar9 = param_3 + 0x8f0;
    }
    else {
      if (((int)param_7 < 0xe) || (0x10 < (int)param_7)) goto LAB_823712b4;
      iVar9 = param_3 + 0x840;
    }
    uVar12 = *(undefined4 *)(*(int *)(param_5 + 0x2c) * 4 + **(int **)(param_3 + 8));
    fn_82370BB8(param_3,*(undefined4 *)
                               (((uint)((ulonglong)LZCOUNT(*(int *)(param_5 + 0x2c)) >> 3) & 4) +
                               **(int **)(param_3 + 8)),iVar9);
    fn_82370BB8(param_3,uVar12,iVar9 + 0x2c);
  }
LAB_823712b4:
  if (*(int *)(param_5 + 0x168) == 0) {
    uVar8 = *(uint *)(param_5 + 0x16c);
  }
  else {
    uVar8 = fn_8288B760();
    uVar8 = uVar8 & 0xff;
  }
  if (uVar8 == 0) {
    iVar9 = *param_4;
    iVar13 = param_7 * 0x148 + iVar9;
    iVar16 = iVar13 + 0x280;
    if (param_1 < (double)lbl_8218E8E8) {
      iVar16 = iVar13 + 0x1dc;
    }
    piVar10 = (int *)(iVar9 + 0xf8);
    if (piVar10 == (int *)0x0) {
      bVar17 = false;
    }
    else {
      bVar17 = *piVar10 != 0;
    }
    if (!bVar17) {
      piVar10 = (int *)(iVar16 + 0x58);
    }
    fn_82379958(iVar9,piVar10);
    fn_82379958(iVar9,iVar16 + 0x5c);
  }
  else {
    iVar9 = *(int *)(param_5 + 0x310);
    puVar7 = (undefined4 *)(param_5 + 800U & 0xfffffff0);
    uVar12 = puVar7[1];
    uVar20 = puVar7[2];
    uVar21 = puVar7[3];
    puVar2 = (undefined4 *)(param_5 + 0x330U & 0xfffffff0);
    uVar22 = *puVar2;
    uVar23 = puVar2[1];
    uVar24 = puVar2[2];
    uVar25 = puVar2[3];
    puVar2 = (undefined4 *)(in_r0 + (int)afStack_f0 & 0xfffffff0);
    *puVar2 = *puVar7;
    puVar2[1] = uVar12;
    puVar2[2] = uVar20;
    puVar2[3] = uVar21;
    puVar7 = (undefined4 *)((int)appuStack_c0 + in_r0 & 0xfffffff0);
    *puVar7 = uVar22;
    puVar7[1] = uVar23;
    puVar7[2] = uVar24;
    puVar7[3] = uVar25;
    if (iVar9 == 0) {
      fn_82379D20(param_1,param_2,*param_4,param_5,param_6,param_7,param_8,afStack_f0,0x330,0)
      ;
    }
    else {
      iVar9 = *param_4;
      fn_8237A2E0(param_1,(double)lbl_8218E8E8,appuStack_c0,iVar9,param_7);
      fn_8237A078(param_1,param_2,iVar9,param_7,param_8);
    }
    fn_82377620((double)*(float *)(*param_4 + 0x118),param_1,param_2,param_3,0x1f80,
                      *(undefined4 *)(*param_4 + 0x217c),*(undefined4 *)(param_5 + 0x2c),
                      *(undefined4 *)(param_5 + 0x28),*(undefined4 *)(param_6 + 0x2c),
                      *(undefined4 *)(param_6 + 0x28),param_7);
  }
  if (*(int *)(param_5 + 0x168) == 0) {
    uVar8 = *(uint *)(param_5 + 0x16c);
  }
  else {
    uVar8 = fn_8288B760();
    uVar8 = uVar8 & 0xff;
  }
  *(uint *)(*param_4 + 0x216c) = (uint)LZCOUNT(uVar8) >> 5;
  *(undefined4 *)(param_3 + 0x1f0) = *(undefined4 *)(param_5 + 0x2c);
  uVar12 = *(undefined4 *)(param_5 + 0x28);
  *(float *)(param_3 + 0x210) = (float)dVar19;
  *(undefined4 *)(param_3 + 500) = uVar12;
  *(int *)(param_3 + 0x200) = *(int *)(param_3 + 0x200) + 1;
  *(int *)(param_3 + 0x1fc) = *(int *)(param_3 + 0x1fc) + 1;
  if (((*(int *)(param_3 + 0x204) == 0) && (iVar9 = fn_82372C00(param_3), iVar9 != param_6))
     && (*(undefined4 *)(param_6 + 0x120) = 1, iVar9 != 0)) {
    *(undefined4 *)(iVar9 + 0x120) = 0;
  }
  fn_823759C8(param_3,*(undefined4 *)(param_6 + 0x2c));
  uVar4 = fn_82365BD8(afStack_f0,param_4);
  fn_823723D0(param_1,param_3,uVar4,param_5,param_6,param_7);
  iVar16 = param_7 * 0x148 + *param_4;
  iVar9 = iVar16 + 0x280;
  if (param_1 < (double)lbl_8218E8E8) {
    iVar9 = iVar16 + 0x1dc;
  }
  pfVar11 = (float *)(iVar9 + 0x60);
  if (pfVar11 == (float *)0x0) {
    bVar17 = false;
  }
  else {
    bVar17 = *pfVar11 != 0.0;
  }
  if (bVar17) {
    afStack_f0[0] = *pfVar11;
    iVar16 = *(int *)(param_5 + 0x14);
    puVar7 = (undefined4 *)(param_5 + 0x80U & 0xfffffff0);
    uVar12 = puVar7[1];
    uVar20 = puVar7[2];
    uVar21 = puVar7[3];
    puVar2 = (undefined4 *)((int)appuStack_c0 + in_r0 & 0xfffffff0);
    *puVar2 = *puVar7;
    puVar2[1] = uVar12;
    puVar2[2] = uVar20;
    puVar2[3] = uVar21;
    afStack_f0[0] =
         (float)fn_825354B8(afStack_f0,appuStack_c0,0,
                                  *(undefined4 *)(*(int *)(iVar16 + 0x4c) + 0x84c),
                                  0xffffffff83296bc0,0xffffffff83296bd0);
    fn_82536288(afStack_f0);
  }
  if (*(int *)(param_3 + 0x30) != *(int *)(param_3 + 0x34)) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    afStack_f0[0] = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
    dVar18 = (double)((lbl_831D1B38 - lbl_831D1B34) * (afStack_f0[0] - lbl_821CA460) + lbl_831D1B34)
    ;
    puVar7 = (undefined4 *)fn_8248F890(0x44);
    uVar20 = lbl_831D1B40;
    uVar12 = lbl_831D1B3C;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[9] = uVar12;
      puVar7[10] = uVar20;
      puVar7[7] = 0xffffffff;
      puVar7[0xb] = (float)dVar18;
      puVar7[8] = 0xffffffff;
      puVar7[0xc] = 1;
      *puVar7 = &lbl_821BEBBC;
      puVar7[0xf] = 0;
      puVar7[0x10] = param_3;
    }
    fn_82359070(param_3,puVar7);
  }
  uVar15 = (ulonglong)*(uint *)(param_3 + 0x30);
  if (uVar15 != *(uint *)(param_3 + 0x34)) {
    do {
      if (*(int *)(param_5 + 0x24) == 0) {
LAB_823716d8:
        bVar17 = false;
      }
      else {
        iVar16 = *(int *)(param_5 + 0x2c);
        bVar14 = true;
        piVar10 = (int *)fn_82522588(auStack_d8,uVar15);
        bVar17 = true;
        if (iVar16 != *(int *)(*piVar10 + 0x254)) goto LAB_823716d8;
      }
      if ((bVar14) && (bVar14 = false, iStack_d4 != 0)) {
        fn_822315A0();
      }
      if (bVar17) {
        piVar10 = (int *)fn_82522588(auStack_d0,uVar15);
        iVar16 = *piVar10;
        if ((int)param_7 < 0xc) {
          if ((int)param_7 < 10) {
            if (param_7 != 0) {
              if ((7 < param_7) && (param_7 != 9)) goto LAB_82371744;
              goto LAB_8237173c;
            }
          }
          else {
            *(undefined4 *)(iVar16 + 0x25c) = lbl_831D2298;
          }
LAB_82371924:
          uVar4 = 2;
LAB_82371740:
          fn_8237E9D8(iVar16,uVar4);
        }
        else {
          if (param_7 == 0xc) {
LAB_8237173c:
            uVar4 = 0;
            goto LAB_82371740;
          }
          if ((0xc < (int)param_7) && ((int)param_7 < 0x11)) goto LAB_82371924;
        }
LAB_82371744:
        if (iStack_cc != 0) {
          fn_822315A0();
        }
      }
      uVar15 = uVar15 + 8;
    } while ((uVar15 & 0xffffffff) != (ulonglong)*(uint *)(param_3 + 0x34));
  }
  if ((*(int *)(param_3 + 0x1d8) == 0) && (lbl_831D1B4C <= *(int *)(param_3 + 0xa10))) {
    lVar5 = fn_8236FB68(0x18);
    if (lVar5 != 0) {
      fn_82508078(*(undefined4 *)(param_3 + 0xa4),lVar5,0);
    }
    *(undefined4 *)(param_3 + 0x1d8) = 1;
  }
  if ((*(int *)(param_3 + 0x1d4) == 0) && (*(int *)(param_3 + 0x1c0) < *(int *)(param_3 + 0x200))) {
    *(undefined4 *)(param_3 + 0x1d4) = 1;
  }
  if (*(int *)(param_3 + 0x204) == 0) {
    fn_82508078(*(undefined4 *)(param_3 + 0xa4),iVar9 + 100,0);
  }
  iVar9 = fn_822CEE40(param_6);
  if ((iVar9 != 0) && (*(int *)(iVar9 + 0x340) != 0)) {
    if ((*(int *)(iVar9 + 0x24) != 0) && (lVar5 = fn_8236FB68(0), lVar5 != 0)) {
      fn_82508078(*(undefined4 *)(param_3 + 0xa4),lVar5,0);
    }
    if ((*(int *)(param_6 + 0x24) != 0) && (lVar5 = fn_8236FB68(2), lVar5 != 0)) {
      fn_82508078(*(undefined4 *)(param_3 + 0xa4),lVar5,0);
    }
  }
  *(int *)(param_3 + 0x268) = *(int *)(param_3 + 0x268) + 1;
  fn_82380650(*(undefined4 *)(param_3 + 0x664));
  fn_82371930(param_3,param_7);
  uVar12 = *(undefined4 *)(param_3 + 0x600);
  uVar4 = fn_82365BD8(afStack_f0,param_4);
  fn_82387AD8(param_1,uVar12,uVar4,param_5,param_6,param_7);
  if (iVar6 == 0xb) {
    piVar10 = (int *)*param_4;
    if (piVar10[0x832] != 0) {
      fn_82560100((double)lbl_821CA460,*(undefined4 *)(*piVar10 + 0x4c),piVar10 + 0x832,
                        *piVar10 + 0x50);
    }
  }
  fn_8236FDE0(param_5);
  if (param_4[1] != 0) {
    fn_822315A0();
  }
  return;
}

