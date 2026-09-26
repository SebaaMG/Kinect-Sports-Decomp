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
extern int fn_829AB128();


void fn_829B96C0(undefined8 param_1,int param_2,char *param_3,byte *param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte bVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  int iVar15;
  
  if (param_5 != 0) {
    if (param_5 == 1) {
      uVar2 = (int)(*(byte *)(param_2 + 0xb) + 7) >> 3;
      if (uVar2 < *(uint *)(param_2 + 4)) {
        iVar12 = *(uint *)(param_2 + 4) - uVar2;
        pcVar13 = param_3 + (uVar2 - 1);
        param_3 = param_3 + -1;
        do {
          param_3 = param_3 + 1;
          pcVar4 = pcVar13 + 1;
          pcVar13 = pcVar13 + 1;
          *pcVar13 = *param_3 + *pcVar4;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
    }
    else if (param_5 < 3) {
      uVar6 = (ulonglong)*(uint *)(param_2 + 4);
      iVar12 = 0;
      if (uVar6 != 0) {
        param_3 = param_3 + -1;
        do {
          pbVar7 = param_4 + iVar12;
          iVar12 = iVar12 + 1;
          pcVar13 = param_3 + 1;
          param_3 = param_3 + 1;
          *param_3 = *pbVar7 + *pcVar13;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    else if (param_5 == 3) {
      lVar9 = (longlong)((int)(*(byte *)(param_2 + 0xb) + 7) >> 3);
      uVar6 = (ulonglong)*(uint *)(param_2 + 4) - lVar9;
      pcVar13 = param_3;
      for (; lVar9 != 0; lVar9 = lVar9 + -1) {
        bVar1 = *param_4;
        param_4 = param_4 + 1;
        *pcVar13 = (bVar1 >> 1) + *pcVar13;
        pcVar13 = pcVar13 + 1;
      }
      iVar12 = 0;
      if ((uVar6 & 0xffffffff) != 0) {
        iVar3 = (int)param_4 - (int)pcVar13;
        do {
          pbVar7 = (byte *)(param_3 + iVar12);
          iVar12 = iVar12 + 1;
          *pcVar13 = (char)((int)((uint)(byte)pcVar13[iVar3] + (uint)*pbVar7) >> 1) + *pcVar13;
          pcVar13 = pcVar13 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    else if (param_5 < 5) {
      lVar9 = (longlong)((int)(*(byte *)(param_2 + 0xb) + 7) >> 3);
      uVar6 = (ulonglong)*(uint *)(param_2 + 4) - lVar9;
      pbVar7 = param_4;
      pcVar13 = param_3;
      for (; lVar9 != 0; lVar9 = lVar9 + -1) {
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        *pcVar13 = bVar1 + *pcVar13;
        pcVar13 = pcVar13 + 1;
      }
      if ((uVar6 & 0xffffffff) != 0) {
        iVar3 = (int)param_3 - (int)param_4;
        iVar12 = (int)pbVar7 - (int)param_4;
        pcVar13 = pcVar13 + -1;
        do {
          bVar1 = *param_4;
          pbVar7 = param_4 + iVar12;
          bVar8 = param_4[iVar3];
          param_4 = param_4 + 1;
          uVar14 = (uint)*pbVar7 - (uint)bVar1;
          uVar10 = (uint)bVar8 - (uint)bVar1;
          uVar2 = (int)(uVar10 + uVar14) >> 0x1f;
          iVar15 = (uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f);
          iVar11 = (uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f);
          iVar5 = (uVar10 + uVar14 ^ uVar2) - uVar2;
          if (((iVar11 < iVar15) || (iVar5 < iVar15)) && (bVar8 = bVar1, iVar11 <= iVar5)) {
            bVar8 = *pbVar7;
          }
          pcVar4 = pcVar13 + 1;
          pcVar13 = pcVar13 + 1;
          *pcVar13 = *pcVar4 + bVar8;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    else {
      fn_829AB128(param_1,0xffffffff82054bb0);
      *param_3 = '\0';
    }
  }
  return;
}

