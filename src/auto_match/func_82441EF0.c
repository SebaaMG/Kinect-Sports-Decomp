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


void fn_82441EF0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)param_1[1];
  iVar2 = piVar1[0xb];
  if (*piVar1 != 0) {
    iVar3 = *(int *)(*piVar1 + 0x1d0);
    if (iVar3 == iVar2) {
      if (iVar2 == 0) {
        iVar3 = iVar3 + 1;
      }
      else {
        iVar3 = iVar3 + -1;
      }
      *(int *)(*piVar1 + 0x1d0) = iVar3;
    }
  }
  *(int *)(param_1[1] + 0x2c) = iVar2;
  if (*(int *)(param_1[1] + 0x28) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82441f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}

