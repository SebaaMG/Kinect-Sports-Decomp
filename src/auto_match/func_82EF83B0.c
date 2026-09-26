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


longlong fn_82EF83B0(int param_1,int param_2,int param_3,int param_4,longlong param_5)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  
  iVar15 = (int)param_5;
  if (iVar15 < 0) {
    lVar2 = 0;
  }
  else {
    pbVar4 = (byte *)(param_3 + 6);
    uVar1 = iVar15 * 3;
    lVar2 = 0;
    pbVar5 = (byte *)(param_1 + 6);
    iVar14 = ((int)uVar1 >> 4) + (uint)((int)uVar1 < 0 && (uVar1 & 0xf) != 0);
    iVar3 = 4;
    iVar15 = iVar15 + iVar14 * -3;
    do {
      iVar3 = iVar3 + -1;
      uVar12 = (ulonglong)((int)((ulonglong)pbVar5[-6] - (ulonglong)pbVar4[-6]) >> 0x1f);
      uVar9 = (ulonglong)((int)((ulonglong)pbVar5[-5] - (ulonglong)pbVar4[-5]) >> 0x1f);
      uVar7 = (ulonglong)((int)((ulonglong)pbVar5[-4] - (ulonglong)pbVar4[-4]) >> 0x1f);
      uVar6 = (ulonglong)((int)((ulonglong)pbVar5[-3] - (ulonglong)pbVar4[-3]) >> 0x1f);
      uVar10 = (ulonglong)((int)((ulonglong)pbVar5[-2] - (ulonglong)pbVar4[-2]) >> 0x1f);
      uVar8 = (ulonglong)((int)((ulonglong)pbVar5[-1] - (ulonglong)pbVar4[-1]) >> 0x1f);
      uVar13 = (ulonglong)((int)((ulonglong)pbVar5[1] - (ulonglong)pbVar4[1]) >> 0x1f);
      uVar11 = (ulonglong)((int)((ulonglong)*pbVar5 - (ulonglong)*pbVar4) >> 0x1f);
      lVar2 = (((ulonglong)pbVar5[-6] - (ulonglong)pbVar4[-6] ^ uVar12) - uVar12) +
              (((ulonglong)pbVar5[-5] - (ulonglong)pbVar4[-5] ^ uVar9) - uVar9) +
              (((ulonglong)pbVar5[-4] - (ulonglong)pbVar4[-4] ^ uVar7) - uVar7) +
              (((ulonglong)pbVar5[-3] - (ulonglong)pbVar4[-3] ^ uVar6) - uVar6) +
              (((ulonglong)pbVar5[-2] - (ulonglong)pbVar4[-2] ^ uVar10) - uVar10) +
              (((ulonglong)pbVar5[-1] - (ulonglong)pbVar4[-1] ^ uVar8) - uVar8) +
              (((ulonglong)pbVar5[1] - (ulonglong)pbVar4[1] ^ uVar13) - uVar13) +
              (((ulonglong)*pbVar5 - (ulonglong)*pbVar4 ^ uVar11) - uVar11) + lVar2;
      if (iVar15 <= (int)lVar2) {
        return param_5;
      }
      iVar15 = iVar15 + iVar14;
      pbVar5 = pbVar5 + param_2;
      pbVar4 = pbVar4 + param_4;
    } while (iVar3 != 0);
  }
  return lVar2;
}

