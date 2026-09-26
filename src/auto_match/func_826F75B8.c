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


void fn_826F75B8(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    return;
  }
  if ((*(byte *)((int)piVar1 + 0x66) & 0x10) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x826f764c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x128))(piVar1,*(undefined4 *)(param_1 + 0xc));
    return;
  }
  if (iVar2 != 2) {
    if (iVar2 == 3) {
                    /* WARNING: Could not recover jumptable at 0x826f7624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0x130))(piVar1,param_1 + 0x20,param_1 + 0x30);
      return;
    }
    if (iVar2 != 4) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x826f760c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x134))(piVar1,*(undefined4 *)(param_1 + 0x2c),param_1 + 0x30);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x826f7638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 300))(piVar1,param_1 + 0x10);
  return;
}

