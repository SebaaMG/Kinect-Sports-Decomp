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
extern unsigned int *auStack_20;
extern int fn_8295D318();
extern unsigned int iStack_24;


undefined8 fn_8295E4F8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iStack_24;
  undefined1 auStack_20 [8];
  
  iVar1 = *(int *)(param_1 + 0x104);
  iVar7 = *(int *)(param_1 + 0x14);
  iVar9 = *(int *)(param_1 + 0x10);
  uVar6 = 0;
  iVar8 = 0;
  piVar5 = &iStack_24;
  lVar10 = 2;
  do {
    iVar2 = *(int *)(iVar8 + *(int *)(iVar1 + 0x10));
    iVar3 = *(int *)(iVar2 * 4 + iVar7);
    if (((*(uint *)(*(int *)(*(int *)(iVar3 + 4) * 4 + iVar9) + 4) & 1) == 0) ||
       (*(int *)(iVar3 + 0x5c) != 0)) {
      piVar5 = piVar5 + 1;
      *piVar5 = iVar2;
      uVar6 = uVar6 + 1;
    }
    iVar8 = iVar8 + 4;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  if ((uVar6 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    iVar7 = param_1 + 0x194;
    if (*(int *)(param_1 + 400) == 0) {
      iVar7 = 0;
      iVar9 = 0;
    }
    else {
      iVar9 = param_1 + 0x1a4;
    }
    iStack_24 = 0;
    uVar4 = fn_8295D318(param_1,0x25,auStack_20,uVar6,*(undefined4 *)(iVar1 + 8),iVar7,iVar9,4
                             );
  }
  return uVar4;
}

