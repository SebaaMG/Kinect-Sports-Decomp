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
extern unsigned int *auStack_120;
extern unsigned int fStack_11c;
extern int fn_82250A18();
extern int fn_8229AB58();
extern int fn_822BC358();
extern int fn_822BC818();
extern int fn_822BC900();
extern int fn_823B65F8();
extern int fn_823B6C60();
extern int fn_8240ED00();
extern int fn_8240F170();
extern int fn_82417F58();
extern int fn_82419DB8();
extern int fn_8241A280();
extern int fn_8241A418();
extern int fn_8241A610();
extern int fn_8241A990();
extern int fn_8241B1C8();
extern int fn_8241B7C0();
extern int fn_8241C5D0();
extern int fn_8241D080();
extern int fn_8241D1C8();
extern int fn_8241DB48();
extern int fn_8241E988();
extern int fn_8241ECE8();
extern int fn_8241FB38();
extern int fn_82429260();
extern int fn_824D2888();
extern int fn_82547C80();
extern int fn_82A1EFC0();
extern int fn_82F68CC0();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821B9BC8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_fc;


void fn_82418800(double param_1,int *param_2)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined8 in_r0;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar5;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_120 [4];
  float fStack_11c;
  undefined4 uStack_fc;
  undefined **appuStack_e0 [56];
  
  param_2[0xb9] = (int)(float)(param_1 + (double)(float)param_2[0xb9]);
  piVar9 = (int *)(param_2[6] * 0x1ac + param_2[2]);
  piVar11 = *(int **)(**(int **)(*param_2 + 8) + *piVar9 * 4);
  *(float *)(*(int *)(piVar11[4] * 4 + *piVar11) + 0x20) = (float)(uint)piVar9[0xc];
  iVar6 = fn_82417F58();
  if ((((param_2[0xb8] != 0) && (piVar11 = (int *)*param_2, param_2 == (int *)piVar11[0xac8])) &&
      ((param_2[0x6d] == 3 ||
       (((param_2[0x6d] == 0 && (iVar6 != 0)) && (*(int *)(iVar6 + 0x24) == 0)))))) &&
     (param_2[0xb8] = 0, iVar6 != 0)) {
    iVar7 = (**(code **)(*piVar11 + 0x98))(piVar11,1);
    if (iVar7 == 0) {
      if (param_2 == *(int **)(*param_2 + 0x2b20)) {
        fn_8229AB58(*(undefined4 *)(*param_2 + 0xd4),iVar6 + 0x30);
      }
    }
    else {
      (**(code **)(*(int *)*param_2 + 0x90))((int *)*param_2,0);
      *(undefined4 *)(iVar6 + 0x398) = 1;
    }
  }
  fn_8241D1C8(param_1,param_2);
  fn_8241DB48(param_1,param_2);
  fn_8241ECE8(param_1,param_2);
  fn_8241E988(param_1,param_2);
  if (param_2[0xb7] == 0) {
    iVar6 = *param_2;
    if (param_2 == *(int **)(iVar6 + 0x2b20)) {
      iVar7 = *(int *)(*(int *)(*(int *)(iVar6 + 0xd4) + 0x18) + 0xc);
    }
    else {
      iVar7 = 0;
    }
    if (((iVar7 == 0) && (param_2[0xb8] == 0)) && (param_2[0xa7] == 0)) {
      if (param_2 == *(int **)(iVar6 + 0x2b20)) {
        *(undefined4 *)(*(int *)(iVar6 + 0x90) + 0x510) = 1;
      }
      param_2[0xb7] = 1;
    }
  }
  else if (param_2[0xb7] == 2) {
    if (param_2 == *(int **)(*param_2 + 0x2b20)) {
      *(undefined4 *)(*(int *)(*param_2 + 0x90) + 0x510) = 0;
    }
    param_2[0xb7] = 3;
  }
  iVar6 = *param_2;
  iVar7 = *(int *)(iVar6 + 0x660);
  if ((param_2 == *(int **)(iVar6 + 0x2b20)) &&
     (uVar12 = *(uint *)(iVar6 + 0x670), (int)uVar12 < *(int *)(iVar6 + 0x674))) {
    do {
      fn_82547C80((ulonglong)**(uint **)(iVar6 + 0x2bf8) + 0xd0,uVar12 & 0xff,iVar7 == 0);
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < *(int *)(iVar6 + 0x674));
  }
  iVar6 = *param_2;
  if ((*(int *)(iVar6 + 0x664) != 0) || (uVar10 = 1, *(int *)(iVar6 + 0x668) != 0)) {
    uVar10 = 0;
  }
  if ((param_2 == *(int **)(iVar6 + 0x2b20)) &&
     (uVar12 = *(uint *)(iVar6 + 0x678), (int)uVar12 < *(int *)(iVar6 + 0x67c))) {
    do {
      fn_82547C80((ulonglong)**(uint **)(iVar6 + 0x2bfc) + 0xd0,uVar12 & 0xff,uVar10);
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < *(int *)(iVar6 + 0x67c));
  }
  iVar6 = fn_82417F58(param_2);
  if (param_2[0xc] == 0) {
    param_2[0x106] = (int)(float)((double)(float)param_2[0x106] + param_1);
  }
  fn_8241B1C8(param_1,param_2);
  dVar16 = (double)lbl_821CC160;
  if (param_2[0x21] != 0) {
    param_2[0x20] = param_2[0x21];
    goto LAB_82418b90;
  }
  if ((double)(float)param_2[0x70] <= dVar16) {
    if (dVar16 < (double)(float)param_2[0x71]) {
      dVar14 = (double)(float)((double)(float)param_2[0x71] - param_1);
      param_2[0x20] = 1;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar14 < dVar16) << 2) | (uint)(NAN(dVar14) || NAN(dVar16)) << 2)
                    ) < 0.0) {
        dVar14 = dVar16;
      }
      goto LAB_82418b88;
    }
  }
  else {
    dVar14 = (double)(float)((double)(float)param_2[0x70] - param_1);
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar14 < dVar16) << 2) | (uint)(NAN(dVar14) || NAN(dVar16)) << 2))
        < 0.0) {
      dVar14 = dVar16;
    }
    param_2[0x70] = (int)(float)dVar14;
    if (dVar14 == dVar16) {
      dVar14 = (double)*(float *)(*param_2 + 0x638);
LAB_82418b88:
      param_2[0x71] = (int)(float)dVar14;
    }
  }
  param_2[0x20] = 0;
LAB_82418b90:
  fn_8241B7C0(param_1,param_2);
  fn_8241D080(param_1,param_2);
  fn_82419DB8(param_1,param_2,iVar6);
  fn_8241A280(param_1,param_2);
  if ((*(int *)(*param_2 + 0x2b40) == 0) && (dVar16 < (double)(float)param_2[0x94])) {
    dVar13 = (double)(float)((double)(float)param_2[0x94] - param_1);
    dVar15 = -dVar13;
    dVar14 = dVar16;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar15 < dVar16) << 2) | (uint)(NAN(dVar15) || NAN(dVar16)) << 2))
        < 0.0) {
      dVar14 = dVar13;
    }
    param_2[0x94] = (int)(float)dVar14;
    if (dVar14 == dVar16) {
      fn_8241C5D0(param_2,param_2[0x93]);
    }
  }
  piVar11 = (int *)param_2[8];
  if (piVar11 != (int *)param_2[9]) {
    do {
      iVar7 = *piVar11;
      iVar8 = *(int *)(iVar7 + 0x2c);
      if (iVar8 == 2) {
        if (iVar6 != 0) {
          fn_8241A418(param_2,iVar6,iVar7);
          fn_82A1EFC0(auStack_120,0,0x40);
          iVar8 = *param_2;
          fVar1 = (float)param_2[0x75];
          puVar2 = (undefined4 *)((int)in_r0 + iVar7 + 0x290 & 0xfffffff0);
          uVar10 = puVar2[1];
          uVar17 = puVar2[2];
          uVar18 = puVar2[3];
          puVar3 = (undefined4 *)((uint)(auStack_120 + (int)in_r0) & 0xfffffff0);
          *puVar3 = *puVar2;
          puVar3[1] = uVar10;
          puVar3[2] = uVar17;
          puVar3[3] = uVar18;
          fVar1 = *(float *)(iVar8 + 0x474) + fVar1;
          dVar14 = (double)(fStack_11c - fVar1);
          if (*(float *)(&lbl_821954D8 +
                        ((uint)(byte)((dVar14 < dVar16) << 2) |
                        (uint)(NAN(dVar14) || NAN(dVar16)) << 2)) < 0.0) {
            fStack_11c = fVar1;
          }
          iVar8 = fn_822BC358(iVar6,auStack_120,*(undefined4 *)(iVar7 + 0x40));
          if (iVar8 != 0) {
            piVar9 = param_2 + 0xd4;
            fn_82A1EFC0(piVar9,0,0x90);
            puVar2 = (undefined4 *)(iVar6 + 0x80U & 0xfffffff0);
            uVar10 = puVar2[1];
            uVar17 = puVar2[2];
            uVar18 = puVar2[3];
            puVar3 = (undefined4 *)((uint)(param_2 + 0xdc) & 0xfffffff0);
            *puVar3 = *puVar2;
            puVar3[1] = uVar10;
            puVar3[2] = uVar17;
            puVar3[3] = uVar18;
            fn_822BC818(iVar6,piVar9,*(undefined4 *)(iVar7 + 0x40));
            if (*(int *)(iVar6 + 0x24) != 0) {
              fn_8241FB38(param_2,auStack_120,piVar9);
            }
            fn_82F68CC0(param_2 + 0xbc,auStack_120,0x40);
            fn_822BC900(iVar6,*(undefined4 *)(iVar7 + 0x28),*(undefined4 *)(iVar7 + 0x40));
            fn_8240F170(iVar7,auStack_120);
            if (*(int *)(iVar6 + 0x24) != 0) {
              (**(code **)(*(int *)param_2[1] + 0x54))
                        ((int *)param_2[1],
                         (ulonglong)(uint)param_2[6] * 0x1ac + (ulonglong)(uint)param_2[2],
                         *(undefined4 *)(iVar7 + 0x40),uStack_fc);
            }
            fn_8241A610(param_2,iVar6,auStack_120);
            iVar8 = lbl_832975B0;
            if (lbl_832975B0 == 0) {
              iVar8 = fn_82250A18();
            }
            if (*(char *)(iVar8 + 4) != '\0') {
              uVar5 = fn_823B6C60(*(undefined4 *)(*param_2 + 0x8c),iVar7);
              fn_82429260(appuStack_e0,1,uVar5,auStack_120,0);
              fn_823B65F8(*(undefined4 *)(*param_2 + 0x8c),appuStack_e0);
              appuStack_e0[0] = &lbl_821B9BC8;
            }
          }
          if ((*(int *)(iVar6 + 0x24) == 0) ||
             ((double)*(float *)(*(int *)(iVar7 + 0x40) * 0x1c10 + *(int *)(iVar6 + 0x24) + 0x47c)
              == dVar16)) {
            puVar2 = (undefined4 *)(*(int *)(iVar7 + 0x28) + 0x50U & 0xfffffff0);
            uVar10 = puVar2[1];
            uVar17 = puVar2[2];
            uVar18 = puVar2[3];
            puVar3 = (undefined4 *)((int)in_r0 + iVar7 + 0x290 & 0xfffffff0);
            *puVar3 = *puVar2;
            puVar3[1] = uVar10;
            puVar3[2] = uVar17;
            puVar3[3] = uVar18;
          }
        }
      }
      else if ((3 < iVar8) && (iVar8 < 9)) {
        fn_8241A990(param_2,iVar6,iVar7);
      }
      fn_8240ED00(param_1,iVar7);
      piVar11 = piVar11 + 1;
    } while (piVar11 != (int *)param_2[9]);
  }
  piVar11 = (int *)param_2[1];
  if (piVar11 != (int *)0x0) {
    (**(code **)(*piVar11 + 0x1c))
              (param_1,piVar11,(ulonglong)(uint)param_2[6] * 0x1ac + (ulonglong)(uint)param_2[2]);
  }
  if ((iVar6 != 0) && (*(int *)(iVar6 + 0x24) != 0)) {
    if ((*(int *)(iVar6 + 0x1a0) != 0) || (bVar4 = false, *(int *)(iVar6 + 0x1e0) != 0)) {
      bVar4 = true;
    }
    if (bVar4) {
      *(uint *)(*param_2 + 0x2cc4) = *(uint *)(*param_2 + 0x2cc4) | 2;
    }
    iVar6 = *(int *)(iVar6 + 0x24);
    if ((iVar6 == 0) ||
       (((*(int *)(iVar6 + 0x394) == 0 || (iVar7 = fn_824D2888(iVar6,0), iVar7 == 0)) &&
        ((*(int *)(iVar6 + 0x1fa4) == 0 || (iVar6 = fn_824D2888(iVar6,1), iVar6 == 0)))))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      *(uint *)(*param_2 + 0x2cc4) = *(uint *)(*param_2 + 0x2cc4) | 4;
    }
  }
  return;
}

