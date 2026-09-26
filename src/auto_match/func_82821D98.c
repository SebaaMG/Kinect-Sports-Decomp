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
extern int fn_8281FE80();
extern int fn_82820EF8();


void fn_82821D98(undefined8 param_1,int param_2,longlong param_3,uint *param_4,int param_5,
                  ulonglong param_6,int param_7)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  
  if ((int)param_3 != 0) {
    puVar9 = (undefined4 *)(param_2 + 0xc);
    do {
      lVar3 = fn_8281FE80(param_1,puVar9[-3]);
      uVar8 = puVar9[-1];
      uVar1 = *puVar9;
      uVar4 = 0;
      uVar2 = puVar9[1];
      if (puVar9[-2] != 0) {
        do {
          if ((ulonglong)uVar8 != 0) {
            lVar6 = 0;
            uVar7 = (ulonglong)uVar8;
            do {
              fn_82820EF8((ulonglong)*param_4 + lVar6 + lVar3,uVar1);
              uVar7 = uVar7 - 1;
              lVar6 = lVar6 + (ulonglong)uVar2;
            } while (uVar7 != 0);
          }
          uVar4 = uVar4 + 1;
          param_4 = param_4 + 1;
        } while (uVar4 < (uint)puVar9[-2]);
      }
      param_3 = param_3 + -1;
      puVar9 = puVar9 + 5;
    } while (param_3 != 0);
  }
  if ((param_6 & 0xffffffff) != 0) {
    puVar10 = (uint *)(param_5 + 8);
    puVar5 = (uint *)(param_7 + -4);
    do {
      lVar3 = fn_8281FE80(param_1,puVar10[-2]);
      uVar8 = 0;
      if (*puVar10 != 0) {
        do {
          puVar5 = puVar5 + 1;
          fn_82820EF8((ulonglong)*puVar5 + lVar3,4);
          uVar8 = uVar8 + 1;
        } while (uVar8 < *puVar10);
      }
      param_6 = param_6 - 1;
      puVar10 = puVar10 + 3;
    } while (param_6 != 0);
  }
  return;
}

