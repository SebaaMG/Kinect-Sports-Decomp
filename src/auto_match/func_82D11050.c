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


void fn_82D11050(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  do {
    iVar5 = (int)param_1;
    iVar3 = *(int *)(((int)param_2 + (int)param_3 >> 1) * 4 + iVar5);
    uVar6 = param_3;
    uVar8 = param_2;
    do {
      iVar1 = *(int *)(iVar3 + 0x38);
      lVar7 = (uVar8 & 0x3fffffff) * 4 + param_1;
      iVar2 = *(int *)(*(int *)lVar7 + 0x38);
      while (iVar2 < iVar1) {
        lVar7 = lVar7 + 4;
        uVar8 = uVar8 + 1;
        iVar2 = *(int *)(*(int *)lVar7 + 0x38);
      }
      lVar7 = (uVar6 & 0x3fffffff) * 4 + param_1;
      iVar2 = *(int *)(*(int *)lVar7 + 0x38);
      while (iVar1 < iVar2) {
        lVar7 = lVar7 + -4;
        uVar6 = uVar6 - 1;
        iVar2 = *(int *)(*(int *)lVar7 + 0x38);
      }
      if ((int)uVar6 < (int)uVar8) break;
      if ((int)uVar6 != (int)uVar8) {
        iVar1 = (int)((uVar8 & 0xffffffff) << 2);
        iVar2 = (int)((uVar6 & 0xffffffff) << 2);
        uVar4 = *(undefined4 *)(iVar2 + iVar5);
        *(undefined4 *)(iVar2 + iVar5) = *(undefined4 *)(iVar1 + iVar5);
        *(undefined4 *)(iVar1 + iVar5) = uVar4;
      }
      uVar6 = uVar6 - 1;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 <= (int)uVar6);
    if ((int)param_2 < (int)uVar6) {
      fn_82D11050(param_1,param_2,uVar6,param_4);
    }
    param_2 = uVar8;
    if ((int)param_3 <= (int)uVar8) {
      return;
    }
  } while( true );
}

