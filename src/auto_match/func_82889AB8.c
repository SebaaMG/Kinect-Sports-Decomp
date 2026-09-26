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


void fn_82889AB8(ulonglong param_1,longlong param_2,ulonglong param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar8;
  longlong lVar7;
  ulonglong uVar9;
  
  param_2 = param_2 - param_1;
  lVar4 = param_2;
  lVar7 = param_3 - param_1;
  while (lVar2 = lVar4, iVar8 = (int)lVar7, lVar2 != 0) {
    lVar4 = lVar7 - (longlong)(iVar8 / (int)lVar2) * (longlong)(int)lVar2;
    lVar7 = lVar2;
  }
  if ((iVar8 < (int)(param_3 - param_1)) && (0 < iVar8)) {
    uVar9 = lVar7 + param_1;
    do {
      uVar5 = uVar9 + param_2;
      if ((uVar9 + param_2 & 0xffffffff) == (param_3 & 0xffffffff)) {
        uVar5 = param_1;
      }
      lVar4 = -uVar5;
      uVar3 = uVar9;
      do {
        uVar1 = *(undefined1 *)uVar3;
        *(undefined1 *)uVar3 = *(undefined1 *)uVar5;
        *(undefined1 *)uVar5 = uVar1;
        if ((int)param_2 < (int)lVar4 + (int)param_3) {
          uVar6 = uVar5 + param_2;
          lVar4 = -param_2 + lVar4;
        }
        else {
          lVar4 = (-param_2 + lVar4 + param_3) - param_1;
          uVar6 = (uVar5 - param_3) + param_2 + param_1;
        }
        uVar3 = uVar5;
        uVar5 = uVar6;
      } while ((uVar6 & 0xffffffff) != (uVar9 & 0xffffffff));
      lVar7 = lVar7 + -1;
      uVar9 = uVar9 - 1;
    } while (0 < lVar7);
  }
  return;
}

