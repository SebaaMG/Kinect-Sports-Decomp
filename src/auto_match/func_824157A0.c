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


undefined8 fn_824157A0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  
  if (**(int **)((param_1[6] - param_1[5] >> 2) * 4 + param_1[5] + -4) != 10) {
    return 0;
  }
  cVar5 = fn_82415748();
  if (cVar5 != '\0') {
    iVar1 = *(int *)(*param_1 * 4 + param_1[1] + -4);
LAB_824157fc:
    if ((*(int **)(iVar1 + 4) != (int *)0x0) && (**(int **)(iVar1 + 4) == 10)) {
      return 1;
    }
    return 0;
  }
  cVar5 = fn_82415550(param_1);
  if (cVar5 == '\0') {
    iVar1 = *(int *)(*param_1 * 4 + param_1[1]);
    goto LAB_824157fc;
  }
  iVar1 = param_1[9];
  piVar2 = *(int **)(iVar1 + 8);
  if (piVar2 != (int *)0x0) {
    if (*piVar2 != 10) {
      if (((*(int **)(iVar1 + 4) == (int *)0x0) || (iVar3 = **(int **)(iVar1 + 4), iVar3 == 10)) ||
         (bVar4 = true, iVar3 + *piVar2 != 10)) {
        bVar4 = false;
      }
      if (!bVar4) goto LAB_824158b0;
    }
    if (((int *)piVar2[2] != (int *)0x0) && (bVar4 = true, *(int *)piVar2[2] == 10))
    goto LAB_824158b4;
  }
LAB_824158b0:
  bVar4 = false;
LAB_824158b4:
  if (!bVar4) {
    return 0;
  }
  if ((*(int **)(iVar1 + 4) == (int *)0x0) || (bVar4 = true, **(int **)(iVar1 + 4) != 10)) {
    bVar4 = false;
  }
  if (bVar4) {
    if ((*(int **)(iVar1 + 8) == (int *)0x0) || (bVar4 = true, **(int **)(iVar1 + 8) != 10)) {
      bVar4 = false;
    }
    if (!bVar4) {
      return 0;
    }
  }
  return 1;
}

