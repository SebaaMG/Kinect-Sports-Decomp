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
extern int fn_82D94AC8();


void fn_82D827B8(int param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = *(int **)(param_1 + 0x28);
  if (piVar2 != piVar2 + *(int *)(param_1 + 0x2c)) {
    do {
      iVar1 = *piVar2;
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 0x3c)) {
        iVar3 = 0;
        do {
          fn_82D94AC8(param_2,*(undefined4 *)(*(int *)(iVar1 + 0x38) + iVar3));
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar4 < *(int *)(iVar1 + 0x3c));
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(*(int *)(param_1 + 0x2c) * 4 + *(int *)(param_1 + 0x28)));
  }
  piVar2 = *(int **)(param_1 + 0x34);
  if (piVar2 != piVar2 + *(int *)(param_1 + 0x38)) {
    do {
      iVar1 = *piVar2;
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 0x3c)) {
        iVar3 = 0;
        do {
          fn_82D94AC8(param_2,*(undefined4 *)(iVar3 + *(int *)(iVar1 + 0x38)));
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar4 < *(int *)(iVar1 + 0x3c));
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(*(int *)(param_1 + 0x38) * 4 + *(int *)(param_1 + 0x34)));
  }
  return;
}

