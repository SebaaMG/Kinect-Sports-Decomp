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


int fn_826C51F0(int param_1,char param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 == (int *)0x0) {
    return param_1;
  }
  if (param_2 == '\0') {
    if (((*(byte *)(param_1 + 0x1cc) & 0x10) != 0) && ((*(byte *)(param_1 + 0x1cc) & 0x20) != 0)) {
      return param_1;
    }
  }
  if ((*(byte *)(param_1 + 0x66) & 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x826c5240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(*piVar1 + 0x54))(piVar1);
    return iVar3;
  }
  uVar2 = *(uint *)(*(int *)(param_1 + 0xa0) + 0x60);
  uVar4 = 0;
  if (uVar2 != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0xa0) + 0x5c);
    iVar5 = 0;
    do {
      if (*(int *)(iVar5 + iVar3) == 0) {
        return *(int *)(uVar4 * 8 + iVar3 + 4);
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 8;
    } while (uVar4 < uVar2);
  }
  return 0;
}

