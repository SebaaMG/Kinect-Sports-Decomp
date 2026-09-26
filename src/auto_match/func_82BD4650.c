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


longlong fn_82BD4650(longlong param_1,int param_2,ulonglong param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  lVar4 = 0;
  iVar11 = (int)param_1;
  if (param_2 == 1) {
    uVar13 = (ulonglong)*(uint *)(iVar11 + 0x120);
    uVar6 = param_1 + 0x128;
    iVar11 = iVar11 + 0x158;
    lVar14 = 4;
    lVar7 = param_1 + 0x50;
    uVar5 = 0;
    uVar9 = 4;
    param_1 = (param_3 + 0x56 & 0x3fffffff) * 4 + param_1;
    do {
      if ((*(int *)lVar7 != 0) && (*(int *)param_1 != 0)) {
        uVar5 = uVar5 + 1;
      }
      lVar7 = lVar7 + 4;
      param_1 = param_1 + 0xc;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    if ((uVar5 & 0xffffffff) != 0) {
      trapWord(6,uVar5,0);
      uVar13 = uVar13 - (longlong)(int)(uVar13 / (uVar5 & 0xffffffff)) * (longlong)(int)uVar5;
    }
  }
  else {
    uVar13 = 0;
    uVar6 = param_1 + 0x188;
    iVar11 = iVar11 + 800;
    uVar9 = 0x22;
  }
  uVar5 = uVar9 * 0xc + uVar6;
  if ((uVar6 & 0xffffffff) < (uVar5 & 0xffffffff)) {
    uVar10 = uVar6;
    do {
      piVar8 = (int *)((int)((param_3 & 0xffffffff) << 2) + (int)uVar10);
      uVar10 = uVar10 + 0xc;
      *piVar8 = -*piVar8;
    } while ((uVar10 & 0xffffffff) < (uVar5 & 0xffffffff));
  }
  while( true ) {
    iVar12 = 0;
    uVar10 = 0;
    if (uVar9 == 0) break;
    do {
      if (param_4 == 0) break;
      iVar3 = (int)((param_3 & 0xffffffff) << 2);
      trapWord(6,uVar9,0);
      lVar7 = (uVar10 + uVar13) -
              (longlong)(int)((uVar10 + uVar13 & 0xffffffff) / uVar9) * (longlong)(int)uVar9;
      iVar2 = (int)lVar7 * 0xc + (int)uVar6;
      uVar1 = *(uint *)(iVar3 + iVar2);
      if ((int)uVar1 < *(int *)((int)((lVar7 * 3 + param_3 & 0xffffffff) << 2) + iVar11)) {
        lVar7 = (ulonglong)uVar1 + 1;
        iVar12 = iVar12 + 1;
        *(int *)(iVar3 + iVar2) = (int)lVar7;
        if (lVar7 != 0) {
          param_4 = param_4 + -1;
        }
      }
      uVar10 = uVar10 + 1;
    } while ((uVar10 & 0xffffffff) < uVar9);
    if ((iVar12 == 0) || (param_4 == 0)) break;
  }
  if ((uVar6 & 0xffffffff) < (uVar5 & 0xffffffff)) {
    do {
      iVar11 = (int)((param_3 & 0x3fffffff) << 2);
      iVar12 = (int)uVar6;
      if (*(int *)(iVar11 + iVar12) < 0) {
        *(undefined4 *)(iVar11 + iVar12) = 0;
      }
      uVar6 = uVar6 + 0xc;
      lVar4 = lVar4 + (ulonglong)*(uint *)(iVar11 + iVar12);
    } while ((uVar6 & 0xffffffff) < (uVar5 & 0xffffffff));
  }
  return lVar4;
}

