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
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_260;
extern unsigned int *auStack_2a0;
extern float fRam831c9958;
extern int fn_8229D4E8();
extern int fn_8229FDA0();
extern int fn_8229FF28();
extern int fn_822AA770();
extern int fn_822ABA88();
extern int fn_822B17A8();
extern int fn_82358FD8();
extern int fn_823693A0();
extern int fn_82369A00();
extern int fn_8236B950();
extern int fn_823C0C80();
extern int fn_823C4D40();
extern int fn_823C4DD0();
extern int fn_823CC298();
extern int fn_823D5728();
extern int fn_823D57F0();
extern int fn_824FFDC8();
extern int fn_82508078();
extern int fn_82528EE0();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_82536590();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821917D4;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


bool fn_823D4E88(double param_1,uint *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  undefined1 uVar11;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar12;
  ulonglong uVar13;
  int *piVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  longlong alStack_2b0 [2];
  undefined1 auStack_2a0 [64];
  undefined1 auStack_260 [512];
  
  dVar18 = (double)lbl_821CC160;
  bVar15 = false;
  if (*(char *)((int)param_2 + 0x9d) == '\0') {
    if ((param_2[10] != 0) && (uVar6 = *param_2, *(int *)(uVar6 + 0xe04) == 0)) {
      uVar1 = param_2[0x18];
      *(uint *)(uVar6 + 200) = uVar1;
      *(undefined4 *)(uVar6 + 0xbc) = 1;
      *(uint *)(uVar6 + 0xc4) = uVar1;
      *(undefined4 *)(uVar6 + 0xc0) = 0xffffffff;
    }
    if (*(int *)(*param_2 + 0x9a0) == 0) {
      if ((double)(float)param_2[0x1b] <= dVar18) {
        param_2[0x1b] = param_2[0xc];
      }
      param_2[0x19] = (uint)(float)((double)(float)param_2[0x19] - param_1);
      if (*(char *)(param_2 + 0x38) == '\0') {
        uVar11 = fn_823C0C80(*param_2,param_2[0x2c] == 0);
        *(undefined1 *)(param_2 + 0x38) = uVar11;
      }
      if ((((double)(float)param_2[0x19] <= dVar18) &&
          ((*(char *)(param_2 + 0x38) != '\0' ||
           (uVar6 = fn_823C4D40(*param_2), uVar6 == (uint)LZCOUNT(param_2[0x2c]) >> 5)))) &&
         ((*(int *)(param_2[3] + 0x160) == 0 || ((int)param_2[0xd] < *(int *)(param_2[3] + 0x160))))
         ) {
        uVar13 = (ulonglong)*param_2;
        uVar6 = fn_823C4D40(uVar13);
        if (uVar6 == (uint)LZCOUNT(param_2[0x2c]) >> 5) {
          uVar6 = param_2[0x25];
          param_2[0x25] = uVar6 + 1;
          param_2[0x2b] = param_2[0x2b] + 1;
          if (99 < uVar6 + 1) {
            iVar7 = fn_823C4D40(uVar13);
            piVar5 = *(int **)(iVar7 * 4 + *(int *)((int)uVar13 + 0x20));
            piVar14 = (int *)*piVar5;
            if (piVar5[1] - (int)piVar14 >> 2 == 0) {
              iVar7 = 0;
            }
            else {
              iVar7 = *piVar14;
            }
            if ((iVar7 != 0) && (*(int *)(iVar7 + 0x34) != 0)) {
              fn_822B17A8(*(int *)(iVar7 + 0x34),0x1d,0);
            }
          }
          fn_823D5728(param_2);
          iVar7 = *(int *)(param_2[3] + 0x16c);
          if (0 < iVar7) {
            iVar9 = *(int *)(param_2[3] + 0x170);
            if (iVar9 == 0) {
LAB_823d5078:
              if ((ulonglong)param_2[0x25] !=
                  (longlong)((int)param_2[0x25] / iVar7) * (longlong)iVar7) goto LAB_823d50e4;
            }
            else if ((int)param_2[0x2b] < iVar7) {
              if (iVar9 != 0) goto LAB_823d50e4;
              goto LAB_823d5078;
            }
            if (param_2[10] == 0) {
              param_2[0x2b] = 0;
              param_2[0x2a] = param_2[0x2a] + 1;
              fn_823CC298(*(undefined4 *)(*param_2 + 0x4b8),0xb);
              if (*(int *)(*param_2 + 0x4c0) != 0) {
                fn_82508078(*(undefined4 *)(*param_2 + 0xa4),0xffffffff821b6514,0);
              }
              puVar8 = param_2 + 8;
              bVar15 = puVar8 == (uint *)0x0;
              goto LAB_823d5158;
            }
          }
LAB_823d50e4:
          fn_823CC298(*(undefined4 *)(*param_2 + 0x4b8),0xb);
          if (*(int *)(*param_2 + 0x4c0) != 0) {
            fn_82508078(*(undefined4 *)(*param_2 + 0xa4),0xffffffff821b6524,0);
          }
          puVar8 = param_2 + 7;
          bVar15 = puVar8 == (uint *)0x0;
LAB_823d5158:
          if (bVar15) {
            bVar15 = false;
          }
          else {
            bVar15 = *puVar8 != 0;
          }
          if (bVar15) {
            fn_82536590(puVar8,0);
          }
        }
        else {
          param_2[0x2b] = 0;
          fn_823D57F0(param_2);
          fn_823CC298(*(undefined4 *)(*param_2 + 0x4b8),10);
          if (param_2[10] == 0) {
            puVar8 = param_2 + 6;
            bVar15 = puVar8 == (uint *)0x0;
            param_2[0x2a] = param_2[0x2a] - 1;
            goto LAB_823d5158;
          }
        }
        uVar6 = param_2[3];
        uVar1 = *param_2;
        fVar3 = (float)param_2[*(int *)(uVar6 + 0x1f8) + 0xf] *
                (*(float *)(uVar6 + 500) - *(float *)(uVar6 + 0x1f0)) + *(float *)(uVar6 + 0x1f0);
        dVar16 = (double)(((float)param_2[0xb] + lbl_821917D4) - fVar3);
        fVar2 = (float)param_2[0xb] + lbl_821917D4;
        if (*(float *)(&lbl_821954D8 +
                      ((uint)(byte)((dVar16 < dVar18) << 2) |
                      (uint)(NAN(dVar16) || NAN(dVar18)) << 2)) < 0.0) {
          fVar2 = fVar3;
        }
        param_2[0xc] = (uint)fVar2;
        fVar2 = *(float *)(uVar6 + 0x1d8);
        fVar3 = *(float *)(uVar6 + 0x1dc);
        fVar4 = (float)param_2[*(int *)(uVar6 + 0x1e0) + 0xf];
        *(float *)(uVar1 + 0x1334) =
             (float)param_2[*(int *)(uVar6 + 0x1ec) + 0xf] *
             (*(float *)(uVar6 + 0x1e8) - *(float *)(uVar6 + 0x1e4)) + *(float *)(uVar6 + 0x1e4);
        *(float *)(uVar1 + 0x1330) = fVar4 * (fVar3 - fVar2) + fVar2;
        param_2[0xd] = param_2[0xd] + 1;
        if ((*(int *)(param_2[3] + 0x168) == 0) || (0 < (int)param_2[0x2a])) {
          uVar13 = (ulonglong)*param_2;
          piVar14 = *(int **)(**(int **)(*param_2 + 8) + param_2[0x2c] * 4);
          iVar9 = fn_822ABA88(*(undefined4 *)(piVar14[4] * 4 + *piVar14),param_2[0x2d]);
          fn_823693A0(uVar13,iVar9);
          (**(code **)(**(int **)(iVar9 + 0x110) + 0xc))();
          uVar6 = *param_2;
          uVar10 = *(undefined4 *)(uVar6 + 0xe10);
          fn_824FFDC8(uVar10,0,0);
          fn_824FFDC8(uVar10,1,0);
          uVar10 = lbl_821916FC;
          iVar7 = *(int *)(uVar6 + 0xe10);
          *(undefined4 *)(iVar7 + 0xc44) = lbl_821916FC;
          *(undefined4 *)(iVar7 + 0xc40) = uVar10;
          *(float *)(iVar7 + 0xc48) = (float)dVar18;
          uVar6 = *param_2;
          iVar7 = (*(int *)(uVar6 + 0x350) + 1) % 3;
          *(int *)(uVar6 + 0x350) = iVar7;
          *(undefined4 *)(uVar6 + 0xe10) = *(undefined4 *)((iVar7 + 0x385) * 4 + uVar6);
          fn_82369A00(*param_2,*(undefined4 *)(*param_2 + 0xe10),iVar9,2);
          uVar10 = lbl_8218E8E8;
          iVar7 = *(int *)(*param_2 + 0xe10);
          *(undefined4 *)(iVar7 + 0xc40) = lbl_8218E8E8;
          *(undefined4 *)(iVar7 + 0xc48) = uVar10;
          *(float *)(iVar7 + 0xc44) = (float)dVar18;
          *(undefined1 *)(param_2 + 0x38) = 0;
          param_2[0x19] = param_2[0xb];
        }
        bVar15 = true;
      }
    }
  }
  if ((*(int *)(*param_2 + 0xe04) == 0) || (*(char *)((int)param_2 + 0x9d) != '\0'))
  goto LAB_823d5410;
  param_2[0x26] = (uint)(float)((double)(float)param_2[0x26] + param_1);
  param_2[0x1b] = (uint)(float)((double)(float)param_2[0x1b] - param_1);
  dVar17 = -(double)(float)((double)(float)param_2[0x18] - param_1);
  dVar16 = dVar18;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar17 < dVar18) << 2) | (uint)(NAN(dVar17) || NAN(dVar18)) << 2)) <
      0.0) {
    dVar16 = (double)(float)((double)(float)param_2[0x18] - param_1);
  }
  param_2[0x18] = (uint)(float)dVar16;
  if ((*(int *)(param_2[3] + 0x14c) == 0) || (param_2[0x3c] == 0)) {
    if ((*(int *)(param_2[3] + 0x168) < 1) || ((int)param_2[0x3d] < 1)) goto LAB_823d5410;
    uVar12 = 0x1a;
    if ((int)param_2[0x3d] < (int)param_2[0x2a]) goto LAB_823d5404;
  }
  else {
    uVar12 = 0x1a;
    if ((double)(float)param_2[0x3c] <= dVar16) {
LAB_823d5404:
      uVar12 = 0x1b;
    }
  }
  fn_823CC298(*(undefined4 *)(*param_2 + 0x4b8),uVar12);
LAB_823d5410:
  if (param_2[10] == 0) {
    uVar6 = param_2[0x2a];
    iVar7 = *(int *)(**(int **)(*param_2 + 0x4b0) + 0xd4);
    fn_8229FF28(*(undefined4 *)(iVar7 + 0xc),param_2[0x25]);
    fn_8229FDA0(*(undefined4 *)(iVar7 + 0xc),uVar6);
  }
  else {
    fn_8236B950(*param_2,param_2[0x25]);
  }
  if ((*(char *)((int)param_2 + 0x9d) == '\0') &&
     ((((((uVar6 = param_2[3], *(int *)(uVar6 + 0x14c) != 0 && ((float)param_2[0x18] < lbl_8218EC10)
          ) && (bVar15)) ||
        ((0 < *(int *)(uVar6 + 0x160) && (*(int *)(uVar6 + 0x160) <= (int)param_2[0xd])))) ||
       ((0 < *(int *)(uVar6 + 0x164) && (*(int *)(uVar6 + 0x164) <= (int)param_2[0x25])))) ||
      ((0 < *(int *)(uVar6 + 0x168) && ((int)param_2[0x2a] < 1)))))) {
    uVar6 = *param_2;
    *(undefined1 *)((int)param_2 + 0x9d) = 1;
    *(float *)(uVar6 + 0x1024) = (float)dVar18;
    *(undefined4 *)(uVar6 + 0x1028) = 3;
    fn_823C4DD0();
    uVar6 = *param_2;
    if ((*(int *)(uVar6 + 0xa0) == 0) || (*(int *)(*(int *)(uVar6 + 0xa0) + 0x40) != 1)) {
      piVar14 = *(int **)**(undefined4 **)(uVar6 + 8);
      iVar9 = fn_822AA770(piVar14);
      iVar7 = *(int *)(*(int *)(iVar9 + 0x24) + 0x34);
      if ((iVar7 == 0) || (param_2[0x25] <= *(uint *)(*(int *)(iVar7 + 0x100) + 0x8b8))) {
        uVar10 = *(undefined4 *)(uVar6 + 0x4b8);
        uVar12 = 0xe;
      }
      else {
        *(undefined4 *)(*(int *)(piVar14[4] * 4 + *piVar14) + 0x1c) = 1;
        uVar6 = *param_2;
        uVar1 = param_2[0x25];
        fn_82358FD8(uVar6,auStack_260,0x100,0xffffffff821aa564);
        fn_82528EE0(auStack_2a0,0x20,0xffffffff821aa638,uVar1);
        iVar7 = *(int *)(*(int *)(uVar6 + 0xd4) + 0x14);
        if (*(int *)(iVar7 + 0x14) == 0) {
          fn_8229D4E8(iVar7,iVar9 + 0x30,auStack_260,auStack_2a0);
          *(undefined4 *)(iVar7 + 0x10) = lbl_821917B0;
          *(undefined4 *)(iVar7 + 0xc) = 1;
        }
        piVar14 = (int *)(*param_2 + 0x1044);
        if (piVar14 == (int *)0x0) {
          bVar15 = false;
        }
        else {
          bVar15 = *piVar14 != 0;
        }
        if (bVar15) {
          alStack_2b0[0] = CONCAT44(*piVar14,((uint)(alStack_2b0[0])));
          uVar10 = fn_82535298(alStack_2b0,**(undefined4 **)(*param_2 + 0xfe0),
                                     0xffffffff83296bc0,0xffffffff83296bd0);
          alStack_2b0[0] = CONCAT44(uVar10,((uint)(alStack_2b0[0])));
          fn_82536288(alStack_2b0);
        }
        uVar12 = 0xd;
        uVar10 = *(undefined4 *)(*param_2 + 0x4b8);
      }
      fn_823CC298(uVar10,uVar12);
    }
  }
  alStack_2b0[0] = (longlong)(int)param_2[0x25];
  piVar14 = *(int **)(((uint)LZCOUNT(param_2[0x2c]) >> 3 & 4) + **(int **)(*param_2 + 8));
  *(float *)(*(int *)(piVar14[4] * 4 + *piVar14) + 0x20) = (float)alStack_2b0[0];
  if (*(char *)((int)param_2 + 0x9d) != '\0') {
    param_2[0x28] = (uint)(float)((double)(float)param_2[0x28] + param_1);
    fn_823CC298(*(undefined4 *)(*param_2 + 0x4b8),0x1b);
  }
  dVar16 = (double)(float)param_2[0x28];
  dVar18 = (double)fRam831c9958;
  if (dVar18 < dVar16) {
    iVar7 = *(int *)(*param_2 + 0xa0);
    if ((iVar7 == 0) || (*(int *)(iVar7 + 0x40) != 1)) {
      fn_822AA770(*(undefined4 *)**(undefined4 **)(*param_2 + 8));
    }
  }
  return dVar18 < dVar16;
}

