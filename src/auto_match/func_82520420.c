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
extern int fn_822315A0();
extern int fn_8251F468();
extern int fn_8251FA58();
extern int fn_8258AE88();
extern int fn_827D50B8();
extern U64 storeWordConditionalIndexed();


void fn_82520420(undefined4 *param_1,longlong param_2)

{
  uint uVar1;
  int iVar3;
  ulonglong uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint *puVar9;
  char in_RESERVE;
  byte bVar10;
  
  iVar3 = fn_827D50B8(*param_1);
  bVar10 = (iVar3 == 0) << 1;
  if (iVar3 == 0) {
    uVar5 = (ulonglong)*(uint *)((int)param_2 + 0xc);
    lVar8 = param_2 + 0xc;
    uVar7 = 0;
    if (uVar5 != 0) {
      do {
        uVar7 = uVar7 + 1;
        uVar5 = fn_8258AE88(lVar8,uVar5);
        bVar10 = (uVar5 == 0) << 1;
      } while (uVar5 != 0);
    }
    uVar5 = 0;
    puVar9 = (uint *)lVar8;
    if ((uVar7 & 0xffffffff) != 0) {
      do {
        uVar2 = (ulonglong)*puVar9;
        uVar4 = uVar5;
        if (0 < (int)uVar5) {
          do {
            uVar2 = fn_8258AE88(lVar8,uVar2);
            uVar4 = uVar4 - 1;
            bVar10 = (uVar4 == 0) << 1;
          } while (uVar4 != 0);
        }
        do {
          puVar6 = (uint *)(param_2 + 4);
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed((ulonglong)*puVar6 + 1,0,param_2 + 4);
            *puVar6 = uVar1;
            bVar10 = 2;
          }
        } while (!(bool)(bVar10 >> 1 & 1));
        fn_8251F468(uVar2,0,2,0,0xffffffff82520360,param_2,0,0);
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
    }
    if (*puVar9 != 0) {
      fn_8251FA58();
      *puVar9 = 0;
    }
  }
  do {
    puVar9 = (uint *)(param_2 + 4);
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((ulonglong)*puVar9 - 1,0,param_2 + 4);
      *puVar9 = uVar1;
      bVar10 = 2;
    }
  } while (!(bool)(bVar10 >> 1 & 1));
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

