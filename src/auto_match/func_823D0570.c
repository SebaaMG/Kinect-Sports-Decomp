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
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_280;
extern unsigned int *auStack_350;
extern int fn_82263D60();
extern int fn_8229D418();
extern int fn_8229F618();
extern int fn_82358FD8();
extern int fn_82359698();
extern int fn_82368C30();
extern int fn_8236B638();
extern int fn_8236B6E8();
extern int fn_8236B7E0();
extern int fn_8236BD58();
extern int fn_823C4DD0();
extern int fn_823CC298();
extern int fn_8248F9F8();
extern int fn_824CD030();
extern int fn_82508078();
extern int fn_82536590();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D1918;
extern unsigned int lbl_83276554;


void fn_823D0570(double param_1,int param_2,longlong param_3,ulonglong param_4,char param_5,
                  int param_6,int param_7,char param_8)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_350 [208];
  undefined1 auStack_280 [640];
  
  puVar1 = *(uint **)(param_2 + 0x94);
  if ((puVar1 != (uint *)0x0) && (puVar1[7] != 0)) {
    lVar10 = 0;
    if ((ulonglong)*puVar1 != 0) {
      lVar10 = (ulonglong)*puVar1 - 1;
    }
    fn_8248F9F8(puVar1[7],lVar10,0);
  }
  fVar4 = lbl_821CC160;
  iVar12 = (int)param_4;
  bVar13 = iVar12 == 0;
  dVar16 = (double)lbl_821CC160;
  puVar3 = (undefined4 *)(*(int *)(param_2 + 0xe10) + 0x50U & 0xfffffff0);
  uVar17 = *puVar3;
  uVar18 = puVar3[1];
  uVar19 = puVar3[2];
  uVar20 = puVar3[3];
  *(undefined1 *)(param_2 + 0xd51) = 0;
  *(float *)(param_2 + 0x1024) = fVar4;
  *(undefined1 *)(param_2 + 0xd50) = 0;
  puVar3 = (undefined4 *)(param_2 + 0xd70U & 0xfffffff0);
  *puVar3 = uVar17;
  puVar3[1] = uVar18;
  puVar3[2] = uVar19;
  puVar3[3] = uVar20;
  *(undefined1 *)(param_2 + 0xd52) = 1;
  *(int *)(param_2 + 0xe2c) = iVar12;
  *(undefined4 *)(param_2 + 0x430) = 1;
  *(uint *)(param_2 + 0xd80) = (uint)bVar13;
  *(undefined4 *)(param_2 + 0x1028) = 0;
  fn_823C4DD0(param_2);
  iVar7 = *(int *)(param_2 + 0x4bc);
  iVar12 = iVar12 * 0x84;
  lVar10 = ((ulonglong)*(uint *)(iVar12 + iVar7 + 0xc) -
           (ulonglong)*(uint *)(iVar7 + (uint)bVar13 * 0x84 + 0xc)) + 1;
  if (lVar10 != 0) {
    if ((int)lVar10 == 1) {
      iVar7 = (uint)bVar13 * 0x84 + iVar7;
      *(int *)(iVar7 + 0x28) = *(int *)(iVar7 + 0x28) + 1;
    }
    piVar8 = *(int **)((int)((param_4 & 0xffffffff) << 2) + *(int *)(param_2 + 0x20));
    if (piVar8[1] - *piVar8 >> 2 == 0) {
      piVar8 = *(int **)((uint)bVar13 * 4 + *(int *)(param_2 + 0x20));
      if ((piVar8[1] - *piVar8 >> 2 != 0) && (lVar10 = -lVar10, -2 < (int)lVar10)) {
        lVar10 = -1;
      }
    }
    else if ((int)lVar10 < 1) {
      lVar10 = 1;
    }
  }
  iVar7 = (int)lVar10;
  if (iVar7 == -6) {
    if (*(int *)(param_2 + 0x4c0) == 0) {
      uVar11 = 0xffffffff821b60fc;
      goto LAB_823d0874;
    }
  }
  else if (iVar7 == -4) {
    if (*(int *)(param_2 + 0x4c0) == 0) {
      uVar11 = 0xffffffff821b610c;
      goto LAB_823d0874;
    }
  }
  else {
    if (iVar7 == -2) {
      if (*(int *)(param_2 + 0x4c0) == 0) {
        uVar11 = 0xffffffff821b611c;
LAB_823d0834:
        fn_82508078(*(undefined4 *)(param_2 + 0xa4),uVar11,0);
      }
    }
    else {
      if (iVar7 != 2) {
        if (iVar7 == 4) {
          if (*(int *)(param_2 + 0x4c0) == 0) {
            uVar11 = 0xffffffff821b6138;
            goto LAB_823d0874;
          }
        }
        else if (iVar7 == 6) {
          if (*(int *)(param_2 + 0x4c0) == 0) {
            uVar11 = 0xffffffff821b6144;
            goto LAB_823d0874;
          }
        }
        else if ((iVar7 == 0) && (*(int *)(param_2 + 0x418) != 0)) {
          if (*(int *)(param_2 + 0x4c0) == 0) {
            fn_82508078(*(undefined4 *)(param_2 + 0xa4),0xffffffff821b6150,0);
          }
          *(undefined4 *)(param_2 + 0x418) = 0;
        }
        else {
          iVar7 = *(int *)(param_2 + 0x41c);
          if (iVar7 == 6) {
            if (*(int *)(param_2 + 0x4c0) == 0) {
              uVar11 = 0xffffffff821b615c;
              goto LAB_823d0874;
            }
          }
          else if (iVar7 == 8) {
            if (*(int *)(param_2 + 0x4c0) == 0) {
              uVar11 = 0xffffffff821b6168;
              goto LAB_823d0874;
            }
          }
          else if (((iVar7 == 3) && (iVar7 = fn_82368C30(param_2), iVar7 != 0)) &&
                  (iVar7 = fn_82368C30(param_2), *(int *)(iVar7 + 0x28) != 0)) {
            if (*(int *)(param_2 + 0x4c0) == 0) {
              uVar11 = 0xffffffff821b6174;
LAB_823d0874:
              fn_82508078(*(undefined4 *)(param_2 + 0xa4),uVar11,0);
            }
          }
          else if (*(int *)(param_2 + 0x4c0) == 0) {
            uVar11 = 0xffffffff821b6184;
            goto LAB_823d0874;
          }
        }
        goto LAB_823d0880;
      }
      if (*(int *)(param_2 + 0x4c0) == 0) {
        uVar11 = 0xffffffff821b612c;
        goto LAB_823d0834;
      }
    }
    *(undefined4 *)(param_2 + 0x418) = 1;
  }
LAB_823d0880:
  *(float *)(param_2 + 0xef0) = (float)dVar16;
  *(int *)(param_2 + 0xeec) = (int)param_3;
  *(undefined4 *)(param_2 + 0xee8) = *(undefined4 *)(param_2 + 0xe2c);
  iVar7 = (int)((param_4 & 0x3fffffff) << 2);
  piVar8 = *(int **)(iVar7 + *(int *)(param_2 + 0x20));
  if (piVar8[1] - *piVar8 >> 2 == 0) {
    fn_823CC298(*(undefined4 *)(param_2 + 0x4b8),6);
    bVar13 = false;
  }
  else {
    bVar5 = true;
    fn_823CC298(*(undefined4 *)(param_2 + 0x4b8),5);
    bVar13 = true;
    if (param_5 != '\0') {
      piVar8 = (int *)(param_2 + 0x1000);
      goto LAB_823d08e0;
    }
  }
  bVar5 = bVar13;
  piVar8 = (int *)(param_2 + 0xffc);
LAB_823d08e0:
  if (piVar8 == (int *)0x0) {
    bVar13 = false;
  }
  else {
    bVar13 = *piVar8 != 0;
  }
  if (bVar13) {
    fn_82536590(piVar8,0);
  }
  if (param_5 == '\0') {
    *(undefined4 *)(param_2 + 0xe80) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0xe80) = 1;
  }
  fn_82359698(param_2,0x13);
  if (bVar5) {
    fn_82358FD8(param_2,auStack_280,0x100,0xffffffff821b6190);
    iVar9 = fn_8236B6E8(param_2,*(undefined4 *)(param_2 + 0xe2c),auStack_350);
    if (iVar9 == 0) {
      piVar8 = *(int **)(param_2 + 0x4b0);
      if ((double)(float)piVar8[0x37] <= dVar16) {
        fn_8229D418(*(undefined4 *)(*(int *)(*piVar8 + 0xd4) + 0x14),0xffffffff820e975c,
                          auStack_280);
      }
      dVar14 = (double)((float)piVar8[0x37] - lbl_821916FC);
      fVar4 = (float)piVar8[0x37];
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar14 < dVar16) << 2) | (uint)(NAN(dVar14) || NAN(dVar16)) << 2)
                    ) < 0.0) {
        fVar4 = lbl_821916FC;
      }
      piVar8[0x37] = (int)fVar4;
    }
    else {
      fn_8236B638(param_2,auStack_280,auStack_350);
    }
  }
  else {
    fn_8236B7E0(param_2,*(undefined4 *)(param_2 + 0xe2c),0);
  }
  fn_8229F618(*(undefined4 *)(*(int *)(**(int **)(param_2 + 0x4b0) + 0xd4) + 0xc));
  piVar2 = *(int **)(iVar7 + *(int *)(param_2 + 0x20));
  piVar8 = (int *)*piVar2;
  if (piVar2[1] - (int)piVar8 >> 2 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *piVar8;
  }
  if (iVar9 != 0) {
    fn_824CD030();
  }
  iVar9 = iVar12 + *(int *)(param_2 + 0x4bc);
  iVar6 = (int)((param_4 * 0x21 + param_3 + 0x1a & 0xffffffff) << 2);
  *(int *)(iVar9 + 0xc) = *(int *)(iVar9 + 0xc) + 1;
  *(int *)(iVar6 + *(int *)(param_2 + 0x4bc)) = *(int *)(iVar6 + *(int *)(param_2 + 0x4bc)) + 1;
  if (param_6 == 2) {
    iVar9 = iVar12 + *(int *)(param_2 + 0x4bc);
    *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
  }
  else if (param_6 == 4) {
    iVar9 = iVar12 + *(int *)(param_2 + 0x4bc);
    *(int *)(iVar9 + 0x14) = *(int *)(iVar9 + 0x14) + 1;
  }
  else if (param_6 == 6) {
    iVar9 = iVar12 + *(int *)(param_2 + 0x4bc);
    *(int *)(iVar9 + 0x18) = *(int *)(iVar9 + 0x18) + 1;
  }
  if ((param_7 == 0xe) || (param_7 == 0xf)) {
    iVar9 = iVar12 + *(int *)(param_2 + 0x4bc);
    *(int *)(iVar9 + 0x20) = *(int *)(iVar9 + 0x20) + 1;
  }
  else if ((param_7 == 0xc) || (param_7 == 0xd)) {
    iVar9 = iVar12 + *(int *)(param_2 + 0x4bc);
    *(int *)(iVar9 + 0x1c) = *(int *)(iVar9 + 0x1c) + 1;
  }
  if (param_8 != '\0') {
    iVar9 = iVar12 + *(int *)(param_2 + 0x4bc);
    *(int *)(iVar9 + 0x24) = *(int *)(iVar9 + 0x24) + 1;
  }
  iVar9 = iVar12 + *(int *)(param_2 + 0x4bc);
  dVar14 = (double)*(float *)(iVar9 + 0x60);
  dVar15 = (double)(float)(dVar14 - param_1);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar15 < dVar16) << 2) | (uint)(NAN(dVar15) || NAN(dVar16)) << 2)) <
      0.0) {
    dVar14 = param_1;
  }
  *(float *)(iVar9 + 0x60) = (float)dVar14;
  fn_8236BD58(param_2,param_4);
  piVar8 = *(int **)(**(int **)(param_2 + 8) + iVar7);
  *(float *)(*(int *)(piVar8[4] * 4 + *piVar8) + 0x20) =
       (float)*(uint *)(iVar12 + *(int *)(param_2 + 0x4bc) + 0xc);
  if (lbl_831D1918 != 0) {
    iVar7 = *(int *)(param_2 + 0x9a0);
    if (iVar7 == 0) {
      uVar17 = 0;
      bVar13 = false;
    }
    else {
      uVar17 = *(undefined4 *)(iVar7 + 0x28);
      bVar13 = *(int *)(iVar7 + 0x24) != 0;
    }
    fn_82263D60(lbl_83276554,bVar13,param_4,uVar17);
  }
  return;
}

