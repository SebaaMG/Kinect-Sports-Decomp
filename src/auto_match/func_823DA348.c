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
extern int fn_823DA800();


undefined4 *
fn_823DA348(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  
  puVar12 = param_3 + -3;
  uVar6 = ((int)param_3 - (int)param_2) / 0xc;
  iVar7 = ((int)puVar12 - (int)param_2) / 0xc;
  puVar9 = param_2 + (((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0)) * 3;
  puVar13 = param_2;
  if (0x28 < iVar7) {
    uVar6 = iVar7 + 1;
    iVar7 = ((int)uVar6 >> 3) + (uint)((int)uVar6 < 0 && (uVar6 & 7) != 0);
    fn_823DA800(param_2,param_2 + iVar7 * 3,param_2 + iVar7 * 6);
    fn_823DA800(puVar9 + iVar7 * -3,puVar9,puVar9 + iVar7 * 3,param_4);
    fn_823DA800(puVar12 + iVar7 * -6,puVar12 + iVar7 * -3,puVar12,param_4);
    puVar12 = puVar12 + iVar7 * -3;
    puVar13 = param_2 + iVar7 * 3;
  }
  fn_823DA800(puVar13,puVar9,puVar12,param_4);
  puVar12 = puVar9 + 3;
  while (puVar13 = puVar9, param_2 < puVar13) {
    puVar9 = puVar13 + -3;
    cVar5 = (*param_4)(puVar9,puVar13);
    if ((cVar5 != '\0') || (cVar5 = (*param_4)(puVar13,puVar9), cVar5 != '\0')) break;
  }
  while ((puVar9 = puVar13, puVar10 = puVar12, puVar12 < param_3 &&
         ((cVar5 = (*param_4)(puVar12,puVar13), cVar5 == '\0' &&
          (cVar5 = (*param_4)(puVar13,puVar12), cVar5 == '\0'))))) {
    puVar12 = puVar12 + 3;
  }
  do {
    for (; puVar4 = puVar13, puVar8 = puVar9, puVar12 < param_3; puVar12 = puVar12 + 3) {
      cVar5 = (*param_4)(puVar13,puVar12);
      if (cVar5 == '\0') {
        cVar5 = (*param_4)(puVar12,puVar13);
        if (cVar5 != '\0') break;
        uVar1 = *puVar10;
        uVar2 = puVar10[1];
        uVar3 = puVar10[2];
        *puVar10 = *puVar12;
        puVar10[1] = puVar12[1];
        puVar10[2] = puVar12[2];
        *puVar12 = uVar1;
        puVar12[1] = uVar2;
        puVar12[2] = uVar3;
        goto LAB_823da500;
      }
LAB_823da504:;}
    for (; param_2 < puVar9; puVar9 = puVar9 + -3) {
      puVar11 = puVar8 + -3;
      cVar5 = (*param_4)(puVar11,puVar4);
      puVar13 = puVar4;
      if (cVar5 == '\0') {
        cVar5 = (*param_4)(puVar4,puVar11);
        if (cVar5 != '\0') break;
        puVar13 = puVar4 + -3;
        uVar3 = *puVar13;
        uVar1 = puVar4[-2];
        *puVar13 = *puVar11;
        uVar2 = puVar4[-1];
        puVar4[-2] = puVar8[-2];
        puVar4[-1] = puVar8[-1];
        *puVar11 = uVar3;
        puVar8[-2] = uVar1;
        puVar8[-1] = uVar2;
      }
      puVar4 = puVar13;
      puVar8 = puVar11;
    }
    if (puVar9 == param_2) {
      if (puVar12 == param_3) {
        *param_1 = puVar4;
        param_1[1] = puVar10;
        return param_1;
      }
      if (puVar10 != puVar12) {
        uVar1 = *puVar4;
        uVar2 = puVar4[1];
        uVar3 = puVar4[2];
        *puVar4 = *puVar10;
        puVar4[1] = puVar10[1];
        puVar4[2] = puVar10[2];
        *puVar10 = uVar1;
        puVar10[1] = uVar2;
        puVar10[2] = uVar3;
      }
      puVar13 = puVar4 + 3;
      uVar1 = *puVar4;
      *puVar4 = *puVar12;
      uVar2 = puVar4[1];
      uVar3 = puVar4[2];
      puVar4[1] = puVar12[1];
      puVar4[2] = puVar12[2];
      *puVar12 = uVar1;
      puVar12[1] = uVar2;
      puVar12[2] = uVar3;
LAB_823da500:
      puVar10 = puVar10 + 3;
      goto LAB_823da504;
    }
    puVar8 = puVar9 + -3;
    if (puVar12 != param_3) {
      uVar1 = *puVar12;
      uVar2 = puVar12[1];
      uVar3 = puVar12[2];
      *puVar12 = *puVar8;
      puVar12[1] = puVar9[-2];
      puVar12[2] = puVar9[-1];
      *puVar8 = uVar1;
      puVar9[-2] = uVar2;
      puVar9[-1] = uVar3;
      puVar13 = puVar4;
      puVar9 = puVar8;
      goto LAB_823da504;
    }
    puVar13 = puVar4 + -3;
    if (puVar8 != puVar13) {
      uVar1 = *puVar8;
      uVar2 = puVar9[-2];
      uVar3 = puVar9[-1];
      *puVar8 = *puVar13;
      puVar9[-2] = puVar4[-2];
      puVar9[-1] = puVar4[-1];
      *puVar13 = uVar1;
      puVar4[-2] = uVar2;
      puVar4[-1] = uVar3;
    }
    puVar11 = puVar10 + -3;
    uVar1 = *puVar13;
    uVar2 = puVar4[-2];
    uVar3 = puVar4[-1];
    *puVar13 = *puVar11;
    puVar4[-2] = puVar10[-2];
    puVar4[-1] = puVar10[-1];
    *puVar11 = uVar1;
    puVar10[-2] = uVar2;
    puVar10[-1] = uVar3;
    puVar9 = puVar8;
    puVar10 = puVar11;
  } while( true );
}

