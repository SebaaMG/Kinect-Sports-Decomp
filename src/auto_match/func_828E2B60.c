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
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern int fn_828EA268();


void fn_828E2B60(int param_1,undefined8 param_2)

{
  int *piVar4;
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x10) + 0x1c))();
  uVar1 = (**(code **)(*piVar4 + 0xc))();
  lVar2 = uVar1 - 1;
  if ((uVar1 & 0xffffffff) == 0) {
    lVar2 = 0;
  }
  uVar3 = fn_828EA268(lVar2);
  iVar5 = fn_828E9DA8(param_2);
  iVar6 = fn_828E9D90(param_2);
  if (iVar5 - iVar6 < (int)uVar3) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    uVar7 = fn_828E9FF8(param_2,uVar3);
    *(undefined4 *)(param_1 + 0x18) = uVar7;
  }
  return;
}

