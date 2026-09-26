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
extern unsigned int *auStack_120;
extern int fn_82F68CC0();


void fn_82539060(ulonglong param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_120 [288];
  
  iVar2 = (param_2 - (int)param_1) / 0xc4;
  lVar8 = (longlong)iVar2;
  iVar1 = (int)(param_3 - (int)param_1) / 0xc4;
  lVar4 = (longlong)iVar1;
  lVar3 = lVar8;
  lVar6 = lVar4;
  if (iVar2 != 0) {
    do {
      lVar4 = lVar3;
      lVar3 = lVar6 - (longlong)((int)lVar6 / (int)lVar4) * (longlong)(int)lVar4;
      lVar6 = lVar4;
    } while (lVar3 != 0);
  }
  if (((int)lVar4 < iVar1) && (0 < (int)lVar4)) {
    uVar5 = lVar4 * 0xc4 + param_1;
    do {
      uVar9 = uVar5 + lVar8 * 0xc4;
      uVar7 = uVar5;
      if ((uVar9 & 0xffffffff) == (ulonglong)param_3) {
        uVar9 = param_1;
      }
      do {
        fn_82F68CC0(auStack_120,uVar7,0xc4);
        fn_82F68CC0(uVar7,uVar9,0xc4);
        fn_82F68CC0(uVar9,auStack_120,0xc4);
        iVar1 = (int)(param_3 - (int)uVar9) / 0xc4;
        if (iVar2 < iVar1) {
          uVar10 = lVar8 * 0xc4 + uVar9;
        }
        else {
          uVar10 = (lVar8 - iVar1) * 0xc4 + param_1;
        }
        uVar7 = uVar9;
        uVar9 = uVar10;
      } while ((uVar10 & 0xffffffff) != (uVar5 & 0xffffffff));
      lVar4 = lVar4 + -1;
      uVar5 = uVar5 - 0xc4;
    } while (0 < lVar4);
  }
  return;
}

