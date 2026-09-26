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
extern int fn_82F68B78();


void fn_82DFF060(int param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 8);
    do {
      if (*piVar2 == (int)param_2) goto LAB_82dff098;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  iVar1 = -1;
LAB_82dff098:
  iVar3 = *(int *)(param_1 + 0xc) + -1;
  *(int *)(param_1 + 0xc) = iVar3;
  if (iVar3 != iVar1) {
    *(undefined4 *)(iVar1 * 4 + *(int *)(param_1 + 8)) =
         *(undefined4 *)(iVar3 * 4 + *(int *)(param_1 + 8));
  }
  fn_82F68B78(param_2);
  return;
}

