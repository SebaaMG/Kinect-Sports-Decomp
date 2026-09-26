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


void fn_829BF260(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  iVar1 = *(int *)(param_1 + 0x1cc);
  uVar4 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 8) = uVar4;
  uVar4 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0xc) = uVar4;
  uVar4 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x10) = uVar4;
  uVar4 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x14) = uVar4;
  lVar10 = 0x100;
  iVar9 = 0;
  iVar6 = 0x5b6900;
  iVar7 = -0xe25100;
  iVar8 = -0xb2f480;
  iVar5 = 0x2c8d00;
  do {
    iVar2 = iVar8 >> 0x10;
    iVar3 = iVar7 >> 0x10;
    iVar8 = iVar8 + 0x166e9;
    iVar7 = iVar7 + 0x1c5a2;
    *(int *)(iVar9 + *(int *)(iVar1 + 8)) = iVar2;
    *(int *)(*(int *)(iVar1 + 0xc) + iVar9) = iVar3;
    *(int *)(iVar9 + *(int *)(iVar1 + 0x10)) = iVar6;
    iVar6 = iVar6 + -0xb6d2;
    *(int *)(*(int *)(iVar1 + 0x14) + iVar9) = iVar5;
    iVar5 = iVar5 + -0x581a;
    iVar9 = iVar9 + 4;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  return;
}

