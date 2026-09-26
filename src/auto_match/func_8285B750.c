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


void fn_8285B750(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int *piVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  int aiStack_20 [4];
  
  uVar8 = 0;
  iVar1 = *(int *)(param_1 + 0x44);
  piVar7 = aiStack_20;
  iVar2 = *(int *)(param_2 + 8);
  iVar3 = *(int *)(param_3 + 8);
  aiStack_20[0] = *(int *)(param_1 + 0x34);
  lVar10 = 2;
  aiStack_20[1] = *(undefined4 *)(param_1 + 0x38);
  do {
    if ((*(int *)(*piVar7 + 0x40) != 0) &&
       (iVar9 = *(int *)(*(int *)(*piVar7 + 0x40) + 0x44), iVar9 != 0)) {
      uVar8 = *(uint *)(iVar9 + 0x44) + uVar8;
    }
    piVar7 = piVar7 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar9 = 0;
  **(undefined1 **)(iVar3 + iVar1) = **(undefined1 **)(iVar2 + iVar1);
  uVar6 = uVar8 & 0xffffffff;
  while (uVar6 != 0) {
    iVar4 = *(int *)(iVar2 + iVar1) + iVar9;
    iVar5 = *(int *)(iVar3 + iVar1) + iVar9;
    iVar9 = iVar9 + 1;
    *(undefined1 *)(iVar5 + 1) = *(undefined1 *)(iVar4 + 1);
    uVar8 = uVar8 - 1;
    uVar6 = uVar8;
  }
  return;
}

