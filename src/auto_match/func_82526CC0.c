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


longlong fn_82526CC0(longlong param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar8;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte *pbVar9;
  int iVar10;
  ulonglong uVar11;
  
  lVar5 = param_1;
  do {
    pcVar8 = (char *)lVar5;
    lVar5 = lVar5 + 1;
  } while (*pcVar8 != '\0');
  lVar6 = param_2;
  do {
    pcVar8 = (char *)lVar6;
    lVar6 = lVar6 + 1;
  } while (*pcVar8 != '\0');
  uVar2 = (lVar6 - param_2) - 1U & 0xffffffff;
  lVar5 = ((lVar5 - param_1) - 1U & 0xffffffff) - uVar2;
  if (-1 < lVar5) {
    lVar6 = (param_2 - lVar5) - param_1;
    do {
      lVar7 = lVar5 + param_1;
      uVar11 = uVar2;
      if (uVar2 != 0) {
        do {
          pbVar9 = (byte *)lVar7;
          bVar1 = *pbVar9;
          lVar7 = lVar7 + 1;
          uVar4 = bVar1 & 0xdf;
          uVar3 = pbVar9[(int)lVar6] & 0xdf;
          if (uVar4 != uVar3) {
            iVar10 = uVar4 - uVar3;
            goto code_r0x82526d48;
          }
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0 && (bVar1 & 0xdf) != 0);
      }
      iVar10 = 0;
code_r0x82526d48:
      if (iVar10 == 0) {
        return lVar5;
      }
      lVar5 = lVar5 + -1;
      lVar6 = lVar6 + 1;
    } while (-1 < lVar5);
  }
  return -1;
}

