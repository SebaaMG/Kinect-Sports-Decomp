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


void fn_82DA2EE0(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  do {
    iVar5 = (int)param_1;
    iVar3 = *(int *)(((int)param_2 + (int)param_3 >> 1) * 4 + iVar5);
    uVar8 = param_3;
    uVar10 = param_2;
    do {
      uVar1 = *(uint *)(iVar3 + 0x14);
      lVar9 = (uVar10 & 0x3fffffff) * 4 + param_1;
      uVar2 = *(uint *)(*(int *)lVar9 + 0x14);
      while (uVar2 < uVar1) {
        lVar9 = lVar9 + 4;
        uVar10 = uVar10 + 1;
        uVar2 = *(uint *)(*(int *)lVar9 + 0x14);
      }
      lVar9 = (uVar8 & 0x3fffffff) * 4 + param_1;
      uVar2 = *(uint *)(*(int *)lVar9 + 0x14);
      while (uVar1 < uVar2) {
        lVar9 = lVar9 + -4;
        uVar8 = uVar8 - 1;
        uVar2 = *(uint *)(*(int *)lVar9 + 0x14);
      }
      if ((int)uVar8 < (int)uVar10) break;
      if ((int)uVar8 != (int)uVar10) {
        iVar6 = (int)((uVar10 & 0xffffffff) << 2);
        iVar7 = (int)((uVar8 & 0xffffffff) << 2);
        uVar4 = *(undefined4 *)(iVar7 + iVar5);
        *(undefined4 *)(iVar7 + iVar5) = *(undefined4 *)(iVar6 + iVar5);
        *(undefined4 *)(iVar6 + iVar5) = uVar4;
      }
      uVar8 = uVar8 - 1;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 <= (int)uVar8);
    if ((int)param_2 < (int)uVar8) {
      fn_82DA2EE0(param_1,param_2,uVar8,param_4);
    }
    param_2 = uVar10;
    if ((int)param_3 <= (int)uVar10) {
      return;
    }
  } while( true );
}

