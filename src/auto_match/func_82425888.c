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
extern int fn_822621D8();
extern int fn_82293670();
extern int fn_82293818();
extern int fn_822ABA88();
extern int fn_822B17A8();
extern int fn_82415090();
extern int fn_82415438();
extern int fn_82415550();
extern int fn_82415748();
extern int fn_824157A0();
extern int fn_82415940();
extern int fn_82417F58();
extern int fn_8241F440();
extern int fn_82422D88();
extern int fn_824264F0();
extern int fn_82426958();


void fn_82425888(int param_1,int *param_2,uint *param_3,int param_4,int *param_5,
                  undefined4 *param_6,undefined4 *param_7,float *param_8)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int iVar6;
  undefined4 uVar7;
  longlong lVar5;
  char cVar8;
  char cVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar17;
  undefined8 uVar16;
  
  *param_5 = 8;
  piVar1 = (int *)param_2[2];
  param_2[4] = 1;
  iVar15 = *piVar1 + 1;
  iVar6 = *(int *)(*piVar1 * 4 + piVar1[1]);
  if (*(int *)(iVar6 + 4) == 0) {
    cVar8 = '\0';
  }
  else {
    iVar6 = *(int *)(iVar6 + 8);
    if (iVar6 == 0) {
      cVar8 = '\x01';
    }
    else {
      cVar8 = (*(int *)(iVar6 + 8) != 0) + '\x02';
    }
  }
  fn_82415438(piVar1,*param_3);
  uVar14 = 0;
  uVar17 = 0;
  do {
    iVar6 = fn_82415090(*(undefined4 *)(uVar17 + piVar1[1]));
    uVar17 = uVar17 + 4;
    uVar14 = iVar6 + uVar14;
  } while (uVar17 < 0x28);
  param_2[0xc] = uVar14;
  if ((((0xf9 < uVar14) && (iVar6 = fn_82417F58(*(undefined4 *)(param_1 + 4)), iVar6 != 0)) &&
      (*(int *)(iVar6 + 0x24) != 0)) &&
     (iVar6 = *(int *)(*(int *)(iVar6 + 0x24) + 0x34), iVar6 != 0)) {
    fn_822B17A8(iVar6,0x11,0);
  }
  uVar16 = 0;
  if (param_3[6] != 0) {
    iVar6 = 0xc;
    goto LAB_82425b80;
  }
  cVar9 = fn_824157A0(piVar1);
  if (cVar9 != '\0') {
    uVar16 = 2;
    *param_5 = 9;
    param_2[0x2c] = param_2[0x2c] + 1;
    if (param_3[8] != 0) {
      param_2[0x27] = param_2[0x27] + 1;
    }
    if (param_3[9] == 0) {
      param_2[0x2d] = param_2[0x2d] + 1;
    }
    else {
      param_2[0x2e] = param_2[0x2e] + 1;
    }
    goto LAB_82425b84;
  }
  cVar9 = fn_82415940(piVar1);
  if (cVar9 != '\0') {
    uVar16 = 1;
    *param_5 = 10;
    param_2[0x2a] = param_2[0x2a] + 1;
    if ((param_3[3] == 6) || (param_3[3] == 7)) {
      iVar6 = fn_82417F58(*(undefined4 *)(param_1 + 4));
      if ((iVar6 != 0) &&
         ((*(int *)(iVar6 + 0x24) != 0 &&
          (iVar6 = *(int *)(*(int *)(iVar6 + 0x24) + 0x34), iVar6 != 0)))) {
        fn_822B17A8(iVar6,0xc,0);
      }
      param_2[0x1b] = param_2[0x1b] + 1;
    }
    goto LAB_82425b84;
  }
  if (*param_3 == 0) {
    if (param_3[7] == 0) {
      if (param_3[4] != 0) {
        *param_5 = 4;
        param_2[0x22] = param_2[0x22] + 1;
        goto LAB_82425b84;
      }
      iVar6 = ((uint)LZCOUNT(param_3[5]) >> 5 ^ 1) + 2;
    }
    else {
      iVar6 = 5;
    }
  }
  else {
    cVar9 = fn_82415748(piVar1);
    if (cVar9 == '\0') {
      if (((param_3[1] == 2) && (param_3[0x10] != 0)) && (param_3[0x13] != 0)) {
        iVar6 = 7;
LAB_82425c34:
        *param_5 = iVar6;
        *(undefined4 *)(*(int *)((piVar1[6] - piVar1[5] >> 2) * 4 + piVar1[5] + -4) + 4) = 1;
        param_2[0x2b] = param_2[0x2b] + 1;
        goto LAB_82425b84;
      }
      if ((param_3[10] == 0) && (param_3[1] != 1)) {
        lVar5 = 1;
        puVar13 = param_3 + 0xb;
        do {
          if (*puVar13 != 0) {
            uVar7 = fn_82422D88(param_1,lVar5,param_3);
            uVar14 = (uint)LZCOUNT(uVar7) >> 5;
            goto LAB_82425c28;
          }
          lVar5 = lVar5 + 1;
          puVar13 = puVar13 + 1;
        } while ((int)lVar5 < 10);
      }
      else {
        uVar14 = 0;
LAB_82425c28:
        if (uVar14 != 0) {
          iVar6 = 6;
          goto LAB_82425c34;
        }
      }
      cVar9 = fn_82415550(piVar1);
      if (cVar9 == '\0') goto LAB_82425b84;
      iVar6 = 0xd;
    }
    else {
      iVar6 = 0xb;
    }
  }
LAB_82425b80:
  *param_5 = iVar6;
LAB_82425b84:
  if (param_4 == 0) {
    fn_82426958(param_1,param_2,param_3,*param_5);
  }
  uVar7 = *(undefined4 *)(param_1 + 4);
  if (*param_5 == 9) {
    param_2[6] = 0;
    param_2[5] = param_2[5] + 1;
    fn_8241F440(uVar7,param_2);
    if (((param_2[5] == 3) && (iVar6 = fn_82417F58(*(undefined4 *)(param_1 + 4)), iVar6 != 0)) &&
       ((*(int *)(iVar6 + 0x24) != 0 &&
        (iVar6 = *(int *)(*(int *)(iVar6 + 0x24) + 0x34), iVar6 != 0)))) {
      fn_822B17A8(iVar6,0xe,0);
    }
  }
  else {
    uVar14 = *param_3;
    param_2[5] = 0;
    if (uVar14 == 0) {
      param_2[6] = param_2[6] + 1;
    }
    else {
      param_2[6] = 0;
    }
    fn_8241F440(uVar7,param_2);
  }
  if (param_4 == 0) {
    if (param_2[5] == 0) {
      param_2[7] = 0;
    }
    else {
      param_2[7] = *(int *)(param_2[5] * 0x68 + **(int **)(param_1 + 4) + 0x1644);
    }
  }
  iVar6 = param_2[5];
  if (param_2[5] < param_2[0x19]) {
    iVar6 = param_2[0x19];
  }
  param_2[0x19] = iVar6;
  iVar6 = param_2[6];
  if (param_2[6] < param_2[0x18]) {
    iVar6 = param_2[0x18];
  }
  param_2[0x18] = iVar6;
  param_2[0x1a] = *param_3 + param_2[0x1a];
  if ((*param_5 == 7) || (uVar10 = 0, *param_5 == 6)) {
    uVar10 = 1;
  }
  if (-1 < param_2[3]) {
    fn_82293670(*(undefined4 *)(*(int *)(param_1 + 8) + 0xd4),param_2[3],iVar15,cVar8 + '\x01'
                      ,*param_3,uVar10,uVar16);
  }
  if (param_4 == 0) {
    iVar6 = *(int *)(param_1 + 8);
    piVar4 = *(int **)(**(int **)(iVar6 + 8) + *param_2 * 4);
    if (*(int *)(param_1 + 4) == *(int *)(iVar6 + 0x2b20)) {
      lVar5 = fn_822ABA88((double)*(float *)(iVar6 + 0x658),(double)*(float *)(iVar6 + 0x65c),
                           *(undefined4 *)(piVar4[4] * 4 + *piVar4),0,*param_3,param_2[5],uVar16);
      fn_82293818(*(undefined4 *)(iVar6 + 0xd4),lVar5 + 0x30);
    }
    fn_824264F0(param_1,param_2,*param_3 & 0xff,*param_5,param_1 + 0x210,param_1 + 0x214);
  }
  *param_8 = *(float *)(*(int *)(param_1 + 8) + 0x65c) + *(float *)(*(int *)(param_1 + 8) + 0x658);
  cVar8 = fn_82415550(piVar1);
  cVar9 = fn_82415748(piVar1);
  uVar7 = 0;
  if (((cVar8 != '\0') || (cVar9 != '\0')) || (param_3[1] == 0)) {
    uVar7 = 1;
    param_2[0x10] = *piVar1 + 1;
    iVar6 = *(int *)(param_1 + 8);
    if ((*(int *)(param_1 + 4) == *(int *)(iVar6 + 0x2b20)) && (param_2[1] != 0)) {
      iVar2 = *(int *)(iVar15 * 4 + piVar1[1] + -4);
      puVar13 = *(uint **)(iVar2 + 4);
      if (puVar13 == (uint *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = (ulonglong)*puVar13;
      }
      puVar3 = *(uint **)(iVar2 + 8);
      if (puVar3 == (uint *)0x0) {
        uVar12 = 0;
        uVar14 = 0;
      }
      else {
        uVar12 = (ulonglong)*puVar3;
        uVar14 = *puVar3;
      }
      if (puVar13 == (uint *)0x0) {
        uVar17 = 0;
      }
      else {
        uVar17 = *puVar13;
      }
      iVar2 = *(int *)(param_1 + 4);
      piVar1 = *(int **)(**(int **)(iVar6 + 8) + *param_2 * 4);
      fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),0,iVar6,uVar17,uVar14,uVar12 + uVar11);
      fn_822621D8(*(undefined4 *)(iVar2 + 0x408),iVar15,*(undefined4 *)(iVar2 + 0x18));
    }
    if ((cVar8 != '\0') && (param_2[8] = 1, (uint)param_2[0x40] < (uint)param_2[0xc])) {
      param_2[10] = 1;
      param_2[0xb] = 1;
    }
  }
  *param_6 = uVar7;
  if ((cVar9 != '\0') || (uVar7 = 0, cVar8 != '\0')) {
    uVar7 = 1;
  }
  *param_7 = uVar7;
  return;
}

