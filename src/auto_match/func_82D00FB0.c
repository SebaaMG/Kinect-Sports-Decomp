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
extern unsigned int *auStack_4f;
extern unsigned int uStack_50;


void fn_82D00FB0(longlong param_1,ulonglong param_2,ulonglong param_3,code *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 uStack_50;
  undefined1 auStack_4f [79];
  
  do {
    iVar4 = (int)param_1;
    uVar2 = *(undefined4 *)(((int)param_2 + (int)param_3 >> 1) * 4 + iVar4);
    uVar10 = param_2;
    uVar11 = param_3;
    do {
      lVar8 = (uVar10 & 0x3fffffff) * 4;
      lVar9 = lVar8 + param_1;
      pcVar7 = (char *)(*param_4)(&uStack_50,*(undefined4 *)((int)lVar8 + iVar4),uVar2);
      cVar1 = *pcVar7;
      while (cVar1 != '\0') {
        lVar9 = lVar9 + 4;
        uVar10 = uVar10 + 1;
        pcVar7 = (char *)(*param_4)(&uStack_50,*(undefined4 *)lVar9,uVar2);
        cVar1 = *pcVar7;
      }
      lVar8 = (uVar11 & 0x3fffffff) * 4;
      lVar9 = lVar8 + param_1;
      pcVar7 = (char *)(*param_4)(auStack_4f,uVar2,*(undefined4 *)((int)lVar8 + iVar4));
      cVar1 = *pcVar7;
      while (cVar1 != '\0') {
        lVar9 = lVar9 + -4;
        uVar11 = uVar11 - 1;
        pcVar7 = (char *)(*param_4)(auStack_4f,uVar2,*(undefined4 *)lVar9);
        cVar1 = *pcVar7;
      }
      if ((int)uVar11 < (int)uVar10) break;
      if ((int)uVar11 != (int)uVar10) {
        iVar5 = (int)((uVar10 & 0xffffffff) << 2);
        iVar6 = (int)((uVar11 & 0xffffffff) << 2);
        uVar3 = *(undefined4 *)(iVar6 + iVar4);
        *(undefined4 *)(iVar6 + iVar4) = *(undefined4 *)(iVar5 + iVar4);
        *(undefined4 *)(iVar5 + iVar4) = uVar3;
      }
      uVar11 = uVar11 - 1;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 <= (int)uVar11);
    if ((int)param_2 < (int)uVar11) {
      fn_82D00FB0(param_1,param_2,uVar11,param_4);
    }
    param_2 = uVar10;
    if ((int)param_3 <= (int)uVar10) {
      return;
    }
  } while( true );
}

