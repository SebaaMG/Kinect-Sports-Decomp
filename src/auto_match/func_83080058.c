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


int fn_83080058(uint *param_1,longlong param_2,uint *param_3,longlong param_4,uint *param_5,
                 int param_6,int *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  
  puVar13 = param_5 + param_6 * 2;
  *param_7 = 0;
  puVar11 = param_5;
  do {
    if (*param_3 < *param_1) {
      uVar1 = param_3[4];
      if (*param_1 < uVar1) {
        puVar12 = param_1 + 9;
        do {
          uVar2 = param_3[2];
          uVar3 = param_3[1];
          uVar4 = param_3[5];
          uVar5 = param_3[6];
          uVar7 = (puVar12[0xc] - uVar3 | puVar12[0xd] - uVar2 | uVar4 - puVar12[8] |
                  uVar5 - puVar12[9]) & 0x80000000;
          uVar8 = (puVar12[0x14] - uVar3 | puVar12[0x15] - uVar2 | uVar4 - puVar12[0x10] |
                  uVar5 - puVar12[0x11]) & 0x80000000;
          uVar9 = (puVar12[4] - uVar3 | puVar12[5] - uVar2 | uVar4 - *puVar12 | uVar5 - puVar12[1])
                  & 0x80000000;
          uVar2 = (puVar12[-4] - uVar3 | puVar12[-3] - uVar2 | uVar4 - puVar12[-8] |
                  uVar5 - puVar12[-7]) & 0x80000000;
          if ((uVar8 & uVar7 & uVar9 & uVar2) == 0) {
            if (uVar2 == 0) {
              if (puVar11 < puVar13) {
                uVar2 = param_3[3];
                *puVar11 = puVar12[-6];
                puVar11[1] = uVar2;
                puVar11 = puVar11 + 2;
              }
              else {
                *param_7 = *param_7 + 1;
              }
            }
            if ((uVar9 == 0) && (puVar12[-1] <= uVar1)) {
              if (puVar11 < puVar13) {
                uVar2 = param_3[3];
                *puVar11 = puVar12[2];
                puVar11[1] = uVar2;
                puVar11 = puVar11 + 2;
              }
              else {
                *param_7 = *param_7 + 1;
              }
            }
            if ((uVar7 == 0) && (puVar12[7] <= uVar1)) {
              if (puVar11 < puVar13) {
                uVar2 = param_3[3];
                *puVar11 = puVar12[10];
                puVar11[1] = uVar2;
                puVar11 = puVar11 + 2;
              }
              else {
                *param_7 = *param_7 + 1;
              }
            }
            if ((uVar8 == 0) && (puVar12[0xf] <= uVar1)) {
              if (puVar11 < puVar13) {
                uVar2 = param_3[3];
                *puVar11 = puVar12[0x12];
                puVar11[1] = uVar2;
                puVar11 = puVar11 + 2;
              }
              else {
                *param_7 = *param_7 + 1;
              }
            }
          }
          puVar6 = puVar12 + 0x17;
          puVar12 = puVar12 + 0x20;
        } while (*puVar6 < uVar1);
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 8;
      lVar10 = param_4;
    }
    else {
      uVar1 = param_1[4];
      if (*param_3 < uVar1) {
        puVar12 = param_3 + 9;
        do {
          uVar2 = param_1[6];
          uVar3 = param_1[5];
          uVar4 = param_1[1];
          uVar5 = param_1[2];
          uVar7 = (uVar3 - puVar12[8] | uVar2 - puVar12[9] | puVar12[0xc] - uVar4 |
                  puVar12[0xd] - uVar5) & 0x80000000;
          uVar8 = (uVar3 - puVar12[0x10] | uVar2 - puVar12[0x11] | puVar12[0x14] - uVar4 |
                  puVar12[0x15] - uVar5) & 0x80000000;
          uVar9 = (uVar3 - puVar12[-8] | uVar2 - puVar12[-7] | puVar12[-4] - uVar4 |
                  puVar12[-3] - uVar5) & 0x80000000;
          uVar2 = (uVar3 - *puVar12 | uVar2 - puVar12[1] | puVar12[4] - uVar4 | puVar12[5] - uVar5)
                  & 0x80000000;
          if ((uVar8 & uVar7 & uVar9 & uVar2) == 0) {
            if (uVar9 == 0) {
              if (puVar11 < puVar13) {
                uVar3 = puVar12[-6];
                *puVar11 = param_1[3];
                puVar11[1] = uVar3;
                puVar11 = puVar11 + 2;
              }
              else {
                *param_7 = *param_7 + 1;
              }
            }
            if ((uVar2 == 0) && (puVar12[-1] <= uVar1)) {
              if (puVar11 < puVar13) {
                uVar2 = puVar12[2];
                *puVar11 = param_1[3];
                puVar11[1] = uVar2;
                puVar11 = puVar11 + 2;
              }
              else {
                *param_7 = *param_7 + 1;
              }
            }
            if ((uVar7 == 0) && (puVar12[7] <= uVar1)) {
              if (puVar11 < puVar13) {
                uVar2 = puVar12[10];
                *puVar11 = param_1[3];
                puVar11[1] = uVar2;
                puVar11 = puVar11 + 2;
              }
              else {
                *param_7 = *param_7 + 1;
              }
            }
            if ((uVar8 == 0) && (puVar12[0xf] <= uVar1)) {
              if (puVar11 < puVar13) {
                uVar2 = puVar12[0x12];
                *puVar11 = param_1[3];
                puVar11[1] = uVar2;
                puVar11 = puVar11 + 2;
              }
              else {
                *param_7 = *param_7 + 1;
              }
            }
          }
          puVar6 = puVar12 + 0x17;
          puVar12 = puVar12 + 0x20;
        } while (*puVar6 < uVar1);
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 8;
      lVar10 = param_2;
    }
  } while (0 < lVar10);
  return (int)puVar11 - (int)param_5 >> 3;
}

