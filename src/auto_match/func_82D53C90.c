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


void fn_82D53C90(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  do {
    iVar4 = (int)param_1;
    uVar2 = *(uint *)(((int)param_2 + (int)param_3 >> 1) * 4 + iVar4);
    uVar7 = param_3;
    uVar9 = param_2;
    do {
      lVar8 = (uVar9 & 0x3fffffff) * 4 + param_1;
      uVar1 = *(uint *)lVar8;
      while (uVar1 < uVar2) {
        lVar8 = lVar8 + 4;
        uVar9 = uVar9 + 1;
        uVar1 = *(uint *)lVar8;
      }
      lVar8 = (uVar7 & 0x3fffffff) * 4 + param_1;
      uVar1 = *(uint *)lVar8;
      while (uVar2 < uVar1) {
        lVar8 = lVar8 + -4;
        uVar7 = uVar7 - 1;
        uVar1 = *(uint *)lVar8;
      }
      if ((int)uVar7 < (int)uVar9) break;
      if ((int)uVar7 != (int)uVar9) {
        iVar5 = (int)((uVar9 & 0xffffffff) << 2);
        iVar6 = (int)((uVar7 & 0xffffffff) << 2);
        uVar3 = *(undefined4 *)(iVar6 + iVar4);
        *(undefined4 *)(iVar6 + iVar4) = *(undefined4 *)(iVar5 + iVar4);
        *(undefined4 *)(iVar5 + iVar4) = uVar3;
      }
      uVar7 = uVar7 - 1;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 <= (int)uVar7);
    if ((int)param_2 < (int)uVar7) {
      fn_82D53C90(param_1,param_2,uVar7,param_4);
    }
    param_2 = uVar9;
    if ((int)param_3 <= (int)uVar9) {
      return;
    }
  } while( true );
}

