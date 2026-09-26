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


void fn_82F27E78(int param_1,short *param_2,int param_3,int param_4,uint param_5,int param_6,
                  int param_7,longlong param_8)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  longlong lVar5;
  short *psVar6;
  short *psVar7;
  longlong lVar8;
  short *psVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  
  uVar11 = 1;
  psVar6 = (short *)(param_3 * 0xc + param_1);
  if (param_6 == 0) {
    if (param_7 != 0) {
      for (lVar12 = (-(ulonglong)(param_8 != 0) & 0xfffffffc) + 6; lVar12 != 0; lVar12 = lVar12 + -1
          ) {
        iVar10 = 0;
        lVar5 = 8;
        psVar6 = param_2;
        do {
          lVar8 = (longlong)*psVar6 + 0x80;
          if (lVar8 < 0) {
            lVar8 = 0;
          }
          else if (0xff < (int)lVar8) {
            lVar8 = 0xff;
          }
          *(char *)(iVar10 + param_4) = (char)lVar8;
          psVar6 = psVar6 + 1;
          iVar10 = iVar10 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        param_2 = param_2 + param_3;
        param_4 = param_4 + param_5;
      }
    }
  }
  else if (param_7 == 0) {
    param_4 = param_4 + (param_5 & 0x7fffffff) * -2;
    lVar12 = 2;
    do {
      iVar10 = 0;
      lVar5 = 8;
      psVar7 = psVar6;
      do {
        lVar8 = (longlong)*psVar7 + 0x80;
        if (lVar8 < 0) {
          lVar8 = 0;
        }
        else if (0xff < (int)lVar8) {
          lVar8 = 0xff;
        }
        *(char *)(iVar10 + param_4) = (char)lVar8;
        psVar7 = psVar7 + 1;
        iVar10 = iVar10 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      lVar12 = lVar12 + -1;
      psVar6 = psVar6 + param_3;
      param_4 = param_4 + param_5;
    } while (lVar12 != 0);
  }
  else {
    iVar10 = 0;
    lVar12 = 8;
    psVar9 = param_2 + param_3;
    psVar7 = param_2;
    do {
      sVar3 = *(short *)(((int)psVar6 - (int)param_2) + (int)psVar7);
      sVar1 = *psVar9;
      sVar4 = *(short *)(((int)psVar6 - (int)param_2) + (int)psVar9);
      sVar2 = *psVar7;
      lVar5 = (longlong)((int)((sVar3 * 8 - (int)sVar3) + (int)sVar1 + uVar11 + 3) >> 3) + 0x80;
      if (lVar5 < 0) {
        lVar5 = 0;
      }
      else if (0xff < (int)lVar5) {
        lVar5 = 0xff;
      }
      *(char *)(iVar10 + (param_5 & 0x7fffffff) * -2 + param_4) = (char)lVar5;
      lVar5 = (longlong)((int)(((sVar1 * 8 - (int)sVar1) - uVar11) + (int)sVar3 + 4) >> 3) + 0x80;
      if (lVar5 < 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0xff;
        if ((int)lVar5 < 0x100) {
          lVar8 = lVar5;
        }
      }
      *(char *)(param_4 + param_5 + iVar10) = (char)lVar8;
      lVar5 = (longlong)
              ((int)((((sVar4 * 8 - (int)sVar4) - (int)sVar3) - uVar11) + (int)sVar2 + (int)sVar1 +
                    4) >> 3) + 0x80;
      if (lVar5 < 0) {
        lVar5 = 0;
      }
      else if (0xff < (int)lVar5) {
        lVar5 = 0xff;
      }
      *(char *)((param_4 - param_5) + iVar10) = (char)lVar5;
      lVar5 = (longlong)
              ((int)(((sVar2 * 8 - (int)sVar2) - (int)sVar1) + (int)sVar4 + (int)sVar3 + uVar11 + 3)
              >> 3) + 0x80;
      if (lVar5 < 0) {
        lVar5 = 0;
      }
      else if (0xff < (int)lVar5) {
        lVar5 = 0xff;
      }
      *(char *)(iVar10 + param_4) = (char)lVar5;
      uVar11 = uVar11 ^ 1;
      iVar10 = iVar10 + 1;
      psVar7 = psVar7 + 1;
      psVar9 = psVar9 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    param_4 = param_5 * 2 + param_4;
    param_2 = param_2 + param_3 * 2;
    if ((int)param_8 == 0) {
      lVar12 = 4;
      do {
        iVar10 = 0;
        lVar5 = 8;
        psVar6 = param_2;
        do {
          lVar8 = (longlong)*psVar6 + 0x80;
          if (lVar8 < 0) {
            lVar8 = 0;
          }
          else if (0xff < (int)lVar8) {
            lVar8 = 0xff;
          }
          *(char *)(iVar10 + param_4) = (char)lVar8;
          psVar6 = psVar6 + 1;
          iVar10 = iVar10 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        lVar12 = lVar12 + -1;
        param_2 = param_2 + param_3;
        param_4 = param_4 + param_5;
      } while (lVar12 != 0);
    }
  }
  return;
}

