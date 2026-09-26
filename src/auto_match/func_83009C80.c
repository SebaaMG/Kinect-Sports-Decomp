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
extern unsigned int lbl_832645A8;


int fn_83009C80(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 != 0) {
    uVar4 = 0;
    iVar3 = iVar2;
    do {
      if (*(int *)(iVar3 + 0xc) != -1) {
        bVar1 = true;
        goto LAB_83009cb4;
      }
      uVar4 = uVar4 + 0xc;
      iVar3 = uVar4 + iVar2;
    } while (uVar4 < 0x30);
  }
  bVar1 = false;
LAB_83009cb4:
  if ((bVar1) && (param_1 != lbl_832645A8)) {
    return param_1;
  }
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x82fff494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x7c))();
    return iVar2;
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x82fff4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x7c))();
    return iVar2;
  }
  return 0;
}

