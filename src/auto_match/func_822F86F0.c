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
extern int fn_822F8E58();


undefined4 * fn_822F86F0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  puVar5 = param_3 + -2;
  uVar10 = (int)param_3 - (int)param_2 >> 3;
  iVar4 = (int)puVar5 - (int)param_2 >> 3;
  puVar11 = param_2 + (((int)param_3 - (int)param_2 >> 4) +
                      (uint)((int)uVar10 < 0 && (uVar10 & 1) != 0)) * 2;
  puVar8 = param_2;
  if (0x28 < iVar4) {
    uVar10 = iVar4 + 1;
    uVar10 = ((int)uVar10 >> 3) + (uint)((int)uVar10 < 0 && (uVar10 & 7) != 0);
    fn_822F8E58(param_2,param_2 + uVar10 * 2,param_2 + uVar10 * 4);
    fn_822F8E58(puVar11 + (uVar10 & 0x1fffffff) * -2,puVar11,puVar11 + uVar10 * 2);
    fn_822F8E58(puVar5 + (uVar10 & 0xfffffff) * -4,puVar5 + (uVar10 & 0x1fffffff) * -2,puVar5);
    puVar5 = puVar5 + (uVar10 & 0x1fffffff) * -2;
    puVar8 = param_2 + uVar10 * 2;
  }
  fn_822F8E58(puVar8,puVar11,puVar5);
  puVar5 = puVar11 + 2;
  for (; ((param_2 < puVar11 && ((float)puVar11[-1] <= (float)puVar11[1])) &&
         ((float)puVar11[1] <= (float)puVar11[-1])); puVar11 = puVar11 + -2) {
  }
  puVar8 = puVar11;
  puVar6 = puVar5;
  if (puVar5 < param_3) {
    do {
      puVar6 = puVar5;
      if (((float)puVar11[1] < (float)puVar5[1]) || ((float)puVar5[1] < (float)puVar11[1])) break;
      puVar5 = puVar5 + 2;
      puVar6 = puVar5;
    } while (puVar5 < param_3);
  }
LAB_822f88b4:
  do {
    puVar7 = puVar6;
    puVar9 = puVar5;
    puVar12 = puVar11;
    puVar5 = puVar8;
    puVar6 = puVar7;
    if (puVar9 < param_3) {
      if ((float)puVar11[1] <= (float)puVar9[1]) {
        if ((float)puVar11[1] < (float)puVar9[1]) goto LAB_822f892c;
        puVar6 = puVar7 + 2;
        if (puVar7 != puVar9) {
          uVar1 = *puVar7;
          *puVar7 = *puVar9;
          *puVar9 = uVar1;
          uVar1 = puVar7[1];
          puVar7[1] = puVar9[1];
          puVar9[1] = uVar1;
        }
      }
LAB_822f88b0:
      puVar5 = puVar9 + 2;
      goto LAB_822f88b4;
    }
LAB_822f892c:
    for (; param_2 < puVar5; puVar5 = puVar5 + -2) {
      puVar11 = puVar12;
      if ((float)puVar5[-1] <= (float)puVar12[1]) {
        if ((float)puVar5[-1] < (float)puVar12[1]) break;
        puVar11 = puVar12 + -2;
        puVar8 = puVar5 + -2;
        if (puVar11 != puVar8) {
          uVar2 = *puVar8;
          uVar3 = *puVar11;
          uVar1 = puVar12[-1];
          puVar12[-1] = puVar5[-1];
          puVar5[-1] = uVar1;
          *puVar11 = uVar2;
          *puVar8 = uVar3;
        }
      }
      puVar12 = puVar11;
    }
    if (puVar5 == param_2) {
      if (puVar9 == param_3) {
        *param_1 = puVar12;
        param_1[1] = puVar7;
        return param_1;
      }
      if ((puVar7 != puVar9) && (puVar12 != puVar7)) {
        uVar2 = *puVar12;
        *puVar12 = *puVar7;
        uVar1 = puVar12[1];
        *puVar7 = uVar2;
        puVar12[1] = puVar7[1];
        puVar7[1] = uVar1;
      }
      puVar11 = puVar12 + 2;
      puVar8 = puVar5;
      puVar5 = puVar9 + 2;
      puVar6 = puVar7 + 2;
      if (puVar12 != puVar9) {
        uVar2 = *puVar9;
        uVar1 = puVar12[1];
        uVar3 = *puVar12;
        puVar12[1] = puVar9[1];
        puVar9[1] = uVar1;
        *puVar12 = uVar2;
        *puVar9 = uVar3;
      }
    }
    else {
      if (puVar9 != param_3) {
        puVar8 = puVar5 + -2;
        puVar11 = puVar12;
        if (puVar9 != puVar8) {
          uVar2 = *puVar9;
          *puVar9 = *puVar8;
          uVar1 = puVar9[1];
          *puVar8 = uVar2;
          puVar9[1] = puVar5[-1];
          puVar5[-1] = uVar1;
        }
        goto LAB_822f88b0;
      }
      puVar8 = puVar5 + -2;
      puVar11 = puVar12 + -2;
      if (puVar8 != puVar11) {
        uVar2 = *puVar11;
        uVar3 = *puVar8;
        uVar1 = puVar5[-1];
        puVar5[-1] = puVar12[-1];
        puVar12[-1] = uVar1;
        *puVar8 = uVar2;
        *puVar11 = uVar3;
      }
      puVar6 = puVar7 + -2;
      puVar5 = puVar9;
      if (puVar11 != puVar6) {
        uVar2 = *puVar6;
        uVar3 = *puVar11;
        uVar1 = puVar12[-1];
        puVar12[-1] = puVar7[-1];
        puVar7[-1] = uVar1;
        *puVar11 = uVar2;
        *puVar6 = uVar3;
      }
    }
  } while( true );
}

