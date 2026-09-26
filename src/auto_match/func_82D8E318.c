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


void fn_82D8E318(longlong param_1,ulonglong param_2,ulonglong param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  do {
    iVar3 = (int)param_1;
    uVar1 = *(undefined4 *)(((int)param_2 + (int)param_3 >> 1) * 4 + iVar3);
    uVar9 = param_2;
    uVar10 = param_3;
    do {
      lVar7 = (uVar9 & 0x3fffffff) * 4;
      lVar8 = lVar7 + param_1;
      cVar6 = (*param_4)(*(undefined4 *)((int)lVar7 + iVar3),uVar1);
      while (cVar6 != '\0') {
        lVar8 = lVar8 + 4;
        uVar9 = uVar9 + 1;
        cVar6 = (*param_4)(*(undefined4 *)lVar8,uVar1);
      }
      lVar7 = (uVar10 & 0x3fffffff) * 4;
      lVar8 = lVar7 + param_1;
      cVar6 = (*param_4)(uVar1,*(undefined4 *)((int)lVar7 + iVar3));
      while (cVar6 != '\0') {
        lVar8 = lVar8 + -4;
        uVar10 = uVar10 - 1;
        cVar6 = (*param_4)(uVar1,*(undefined4 *)lVar8);
      }
      if ((int)uVar10 < (int)uVar9) break;
      if ((int)uVar10 != (int)uVar9) {
        iVar4 = (int)((uVar9 & 0xffffffff) << 2);
        iVar5 = (int)((uVar10 & 0xffffffff) << 2);
        uVar2 = *(undefined4 *)(iVar5 + iVar3);
        *(undefined4 *)(iVar5 + iVar3) = *(undefined4 *)(iVar4 + iVar3);
        *(undefined4 *)(iVar4 + iVar3) = uVar2;
      }
      uVar10 = uVar10 - 1;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 <= (int)uVar10);
    if ((int)param_2 < (int)uVar10) {
      fn_82D8E318(param_1,param_2,uVar10,param_4);
    }
    param_2 = uVar9;
    if ((int)param_3 <= (int)uVar9) {
      return;
    }
  } while( true );
}

