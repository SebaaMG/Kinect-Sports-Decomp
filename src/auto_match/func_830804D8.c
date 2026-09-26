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


int fn_830804D8(uint *param_1,longlong param_2,uint *param_3,int param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  
  *param_5 = 0;
  puVar13 = param_3 + param_4 * 2;
  puVar10 = param_3;
  while (puVar9 = param_1, param_2 = param_2 + -1, 0 < param_2) {
    param_1 = puVar9 + 8;
    uVar1 = puVar9[4];
    if (*param_1 < uVar1) {
      puVar11 = puVar9 + 0x11;
      puVar12 = param_1;
      do {
        uVar2 = puVar9[5];
        uVar3 = puVar9[1];
        uVar4 = puVar9[6];
        uVar5 = puVar9[2];
        uVar6 = (uVar2 - puVar11[8] | puVar11[0xc] - uVar3 | uVar4 - puVar11[9] |
                puVar11[0xd] - uVar5) & 0x80000000;
        uVar7 = (uVar2 - puVar11[0x10] | uVar4 - puVar11[0x11] | puVar11[0x14] - uVar3 |
                puVar11[0x15] - uVar5) & 0x80000000;
        uVar8 = (uVar2 - *puVar11 | puVar11[4] - uVar3 | uVar4 - puVar11[1] | puVar11[5] - uVar5) &
                0x80000000;
        uVar2 = (puVar11[-4] - uVar3 | uVar2 - puVar11[-8] | uVar4 - puVar11[-7] |
                puVar11[-3] - uVar5) & 0x80000000;
        if ((uVar7 & uVar6 & uVar8 & uVar2) == 0) {
          if (uVar2 == 0) {
            if (puVar10 < puVar13) {
              uVar2 = puVar11[-6];
              *puVar10 = puVar9[3];
              puVar10[1] = uVar2;
              puVar10 = puVar10 + 2;
            }
            else {
              *param_5 = *param_5 + 1;
            }
          }
          if ((uVar8 == 0) && (puVar11[-1] <= uVar1)) {
            if (puVar10 < puVar13) {
              uVar2 = puVar11[2];
              *puVar10 = puVar9[3];
              puVar10[1] = uVar2;
              puVar10 = puVar10 + 2;
            }
            else {
              *param_5 = *param_5 + 1;
            }
          }
          if ((uVar6 == 0) && (puVar11[7] <= uVar1)) {
            if (puVar10 < puVar13) {
              uVar2 = puVar11[10];
              *puVar10 = puVar9[3];
              puVar10[1] = uVar2;
              puVar10 = puVar10 + 2;
            }
            else {
              *param_5 = *param_5 + 1;
            }
          }
          if ((uVar7 == 0) && (puVar11[0xf] <= uVar1)) {
            if (puVar10 < puVar13) {
              uVar2 = puVar11[0x12];
              *puVar10 = puVar9[3];
              puVar10[1] = uVar2;
              puVar10 = puVar10 + 2;
            }
            else {
              *param_5 = *param_5 + 1;
            }
          }
        }
        puVar12 = puVar12 + 0x20;
        puVar11 = puVar11 + 0x20;
      } while (*puVar12 < uVar1);
    }
  }
  return (int)puVar10 - (int)param_3 >> 3;
}

