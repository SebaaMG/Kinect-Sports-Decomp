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


void fn_82CD4B20(int param_1,int param_2,int param_3,int param_4,longlong param_5,longlong param_6
                  ,int param_7)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  
  iVar13 = *(int *)(param_7 + 0x3920);
  param_6 = param_6 - param_5;
  uVar14 = *(uint *)(param_7 + 0x3890);
  iVar6 = (int)param_5;
  if (iVar13 == 0) {
    iVar15 = *(int *)(param_7 + 0x38fc) * iVar6;
    uVar14 = *(int *)(param_7 + 0x38fc) - uVar14;
    iVar10 = iVar15 >> 2;
    iVar12 = ((int)uVar14 >> 2) + (uint)((int)uVar14 < 0 && (uVar14 & 3) != 0);
    iVar13 = iVar12;
  }
  else {
    iVar15 = iVar13 * iVar6;
    iVar8 = ((int)uVar14 >> 2) + (uint)((int)uVar14 < 0 && (uVar14 & 3) != 0);
    iVar10 = *(int *)(param_7 + 0x3924) * iVar6;
    uVar14 = iVar13 - uVar14;
    iVar12 = *(int *)(param_7 + 0x3928) - iVar8;
    iVar13 = *(int *)(param_7 + 0x3924) - iVar8;
  }
  uVar2 = *(uint *)(param_7 + 0x390c);
  uVar9 = *(int *)(param_7 + 0x3910) * *(int *)(param_7 + 0x38fc);
  iVar10 = ((int)uVar2 >> 2) + (uint)((int)uVar2 < 0 && (uVar2 & 3) != 0) +
           ((int)uVar9 >> 2) + (uint)((int)uVar9 < 0 && (uVar9 & 3) != 0) + iVar10;
  puVar7 = (undefined1 *)(uVar2 + uVar9 + iVar15 + param_2);
  param_1 = *(int *)(param_7 + 0x389c) * iVar6 + *(int *)(param_7 + 0x38a4) + param_1;
  if (0 < (int)param_6) {
    puVar5 = (undefined1 *)(iVar10 + param_3 + -1);
    iVar6 = *(int *)(param_7 + 0x3890);
    puVar4 = (undefined1 *)(iVar10 + param_4 + -1);
    do {
      iVar10 = 0;
      if (0 < iVar6) {
        puVar11 = (undefined1 *)(param_1 + -5);
        do {
          iVar10 = iVar10 + 4;
          puVar11[5] = *puVar7;
          puVar11[7] = puVar7[1];
          puVar11[9] = puVar7[2];
          puVar3 = puVar7 + 3;
          puVar7 = puVar7 + 4;
          puVar11[0xb] = *puVar3;
          puVar5 = puVar5 + 1;
          uVar1 = *puVar5;
          puVar11[10] = uVar1;
          puVar11[6] = uVar1;
          puVar4 = puVar4 + 1;
          uVar1 = *puVar4;
          puVar11[0xc] = uVar1;
          puVar11 = puVar11 + 8;
          *puVar11 = uVar1;
          iVar6 = *(int *)(param_7 + 0x3890);
        } while (iVar10 < iVar6);
      }
      puVar7 = puVar7 + uVar14;
      puVar5 = puVar5 + iVar13;
      puVar4 = puVar4 + iVar12;
      param_1 = *(int *)(param_7 + 0x389c) + param_1;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}

