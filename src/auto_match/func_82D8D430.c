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
extern int fn_82D8D988();


void fn_82D8D430(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xd4)) {
    piVar1 = *(int **)(param_1 + 0xd0);
    do {
      if (*piVar1 == param_2) goto LAB_82d8d47c;
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xd4));
  }
  iVar3 = -1;
LAB_82d8d47c:
  fn_82D8D988(param_1,param_2,(byte)((uint)iVar3 >> 0x1f) ^ 1);
  if (-1 < iVar3) {
    iVar2 = *(int *)(param_1 + 0xd4) + -1;
    *(int *)(param_1 + 0xd4) = iVar2;
    if (iVar2 != iVar3) {
      *(undefined4 *)(iVar3 * 4 + *(int *)(param_1 + 0xd0)) =
           *(undefined4 *)(iVar2 * 4 + *(int *)(param_1 + 0xd0));
    }
    *(undefined1 *)(param_1 + 0xdc) = 1;
  }
  return;
}

