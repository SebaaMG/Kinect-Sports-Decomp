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
extern int fn_82415550();
extern int fn_82415748();


undefined8 fn_82415940(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  
  cVar5 = fn_82415748();
  if (cVar5 == '\0') {
    cVar5 = fn_82415550(param_1);
    if (cVar5 == '\0') {
      iVar6 = *(int *)(*param_1 * 4 + param_1[1]);
      if (((*(int **)(iVar6 + 4) == (int *)0x0) || (*(int **)(iVar6 + 8) == (int *)0x0)) ||
         (bVar4 = true, **(int **)(iVar6 + 8) + **(int **)(iVar6 + 4) != 10)) {
        bVar4 = false;
      }
      if (!bVar4) {
        return 0;
      }
      if ((*(int **)(iVar6 + 4) == (int *)0x0) || (bVar4 = true, **(int **)(iVar6 + 4) != 10)) {
        bVar4 = false;
      }
      if (bVar4) {
        return 0;
      }
      return 1;
    }
    iVar6 = param_1[5];
    iVar3 = param_1[6] - iVar6 >> 2;
    piVar1 = *(int **)(param_1[9] + 4);
    if ((piVar1 == (int *)0x0) || (bVar4 = true, *piVar1 != 10)) {
      bVar4 = false;
    }
    if (!bVar4) {
      return 0;
    }
    piVar1 = *(int **)(param_1[9] + 8);
    if ((piVar1 == (int *)0x0) || (bVar4 = true, *piVar1 != 10)) {
      bVar4 = false;
    }
    if (bVar4) {
      return 0;
    }
    iVar6 = **(int **)((iVar3 + -2) * 4 + iVar6) + **(int **)(iVar3 * 4 + iVar6 + -4);
  }
  else {
    iVar6 = *(int *)(*param_1 * 4 + param_1[1] + -4);
    piVar1 = *(int **)(iVar6 + 4);
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    piVar2 = *(int **)(iVar6 + 8);
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iVar6 = *piVar2 + *piVar1;
  }
  if (iVar6 != 10) {
    return 0;
  }
  return 1;
}

