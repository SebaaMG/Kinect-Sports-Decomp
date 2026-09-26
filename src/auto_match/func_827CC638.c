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


void fn_827CC638(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  iVar4 = *(int *)(param_1 + 0x1a8);
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x7fc);
  uVar5 = 0x10;
  iVar7 = iVar1 + 0x3fc;
  iVar6 = 0;
  *(int *)(iVar4 + 0x28) = iVar7;
  iVar4 = 0;
  piVar3 = (int *)(iVar1 + 0x3f8);
  lVar8 = 0x10;
  piVar2 = (int *)(iVar1 + 0x400);
  do {
    piVar3 = piVar3 + 1;
    *piVar3 = iVar6;
    iVar6 = iVar6 + 1;
    piVar2 = piVar2 + -1;
    *piVar2 = iVar4;
    iVar4 = iVar4 + -1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  piVar3 = (int *)(iVar1 + 0x438);
  piVar2 = (int *)(iVar1 + 0x3c0);
  lVar8 = 0x20;
  do {
    uVar5 = uVar5 + 1;
    piVar3 = piVar3 + 1;
    *piVar3 = iVar6;
    piVar2 = piVar2 + -1;
    *piVar2 = -iVar6;
    iVar6 = (~uVar5 & 1) + iVar6;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  if ((int)uVar5 < 0x100) {
    iVar4 = 0x100 - uVar5;
    piVar3 = (int *)(uVar5 * 4 + iVar7 + -4);
    piVar2 = (int *)(iVar7 + (uVar5 & 0x3fffffff) * -4 + 4);
    do {
      piVar3 = piVar3 + 1;
      *piVar3 = iVar6;
      piVar2 = piVar2 + -1;
      *piVar2 = -iVar6;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

