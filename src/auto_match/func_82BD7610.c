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
extern int fn_82BD7EF8();


bool fn_82BD7610(int param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int *piVar4;
  
  if ((*(int *)(param_1 + 0x18) != 1) || (iVar1 = *(int *)(param_1 + 8), iVar1 == 0)) {
    return false;
  }
  uVar3 = 0;
  piVar4 = (int *)(iVar1 + 0x10);
  while ((piVar4[-2] == 0 || (*piVar4 != 1))) {
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 1;
    if (1 < uVar3) {
      lVar2 = 0;
LAB_82bd7668:
      return lVar2 != 0;
    }
  }
  lVar2 = fn_82BD7EF8((ulonglong)*(uint *)(iVar1 + 4) + 8);
  goto LAB_82bd7668;
}

