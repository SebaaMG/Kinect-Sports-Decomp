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
extern int fn_822DD818();


void fn_822DD750(ulonglong param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  iVar2 = (param_2 - (int)param_1) / 0x1c;
  lVar8 = (longlong)iVar2;
  iVar1 = (int)(param_3 - (int)param_1) / 0x1c;
  lVar5 = (longlong)iVar1;
  lVar4 = lVar8;
  lVar7 = lVar5;
  if (iVar2 != 0) {
    do {
      lVar5 = lVar4;
      lVar4 = lVar7 - (longlong)((int)lVar7 / (int)lVar5) * (longlong)(int)lVar5;
      lVar7 = lVar5;
    } while (lVar4 != 0);
  }
  if (((int)lVar5 < iVar1) && (0 < (int)lVar5)) {
    uVar6 = lVar5 * 0x1c + param_1;
    do {
      uVar9 = uVar6 + lVar8 * 0x1c;
      uVar3 = uVar6;
      if ((uVar9 & 0xffffffff) == (ulonglong)param_3) {
        uVar9 = param_1;
      }
      do {
        fn_822DD818(uVar3,uVar9);
        iVar1 = (int)(param_3 - (int)uVar9) / 0x1c;
        if (iVar2 < iVar1) {
          uVar10 = lVar8 * 0x1c + uVar9;
        }
        else {
          uVar10 = (lVar8 - iVar1) * 0x1c + param_1;
        }
        uVar3 = uVar9;
        uVar9 = uVar10;
      } while ((uVar10 & 0xffffffff) != (uVar6 & 0xffffffff));
      lVar5 = lVar5 + -1;
      uVar6 = uVar6 - 0x1c;
    } while (0 < lVar5);
  }
  return;
}

