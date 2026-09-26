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


void fn_827CFBC0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  
  iVar2 = *(int *)(param_1 + 0x150);
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x2000);
  *(int *)(iVar2 + 8) = iVar1;
  iVar10 = 0;
  lVar11 = 0x100;
  iVar2 = 0;
  iVar4 = 0;
  iVar5 = 0;
  iVar7 = 0;
  iVar8 = 0;
  iVar3 = 0x807fff;
  iVar6 = 0x8000;
  piVar9 = (int *)(iVar1 + 0x1bfc);
  do {
    piVar9[-0x5ff] = iVar7;
    piVar9[-0x6ff] = iVar8;
    iVar8 = iVar8 + 0x4c8b;
    piVar9[-0x4ff] = iVar6;
    iVar7 = iVar7 + 0x9646;
    piVar9[-0x3ff] = iVar5;
    iVar6 = iVar6 + 0x1d2f;
    piVar9[-0x2ff] = iVar4;
    iVar5 = iVar5 + -0x2b33;
    piVar9[-0x1ff] = iVar3;
    iVar4 = iVar4 + -0x54cd;
    piVar9[-0xff] = iVar2;
    iVar3 = iVar3 + 0x8000;
    piVar9 = piVar9 + 1;
    *piVar9 = iVar10;
    iVar2 = iVar2 + -0x6b2f;
    iVar10 = iVar10 + -0x14d1;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  return;
}

