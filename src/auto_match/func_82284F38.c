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
extern int fn_82F69290();
extern unsigned int lbl_82167FA8;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;


void fn_82284F38(int param_1,longlong param_2)

{
  int iVar1;
  undefined **ppuStack_20;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  
  iVar1 = *(int *)(param_1 + 0x14c);
  if (*(int *)(param_1 + 0x148) == iVar1) {
    return;
  }
  if (param_2 - 100000U == 0) {
    if (*(int *)(iVar1 + -0x30) == 0) {
      return;
    }
    if (*(int *)(iVar1 + -0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x82284fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(iVar1 + -0x30) + 4))();
      return;
    }
  }
  else {
    if ((param_2 - 100000U & 0xffffffff) != 1) {
      return;
    }
    if (*(int *)(iVar1 + -0x18) == 0) {
      return;
    }
    if (*(int *)(iVar1 + -0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x82284f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(iVar1 + -0x18) + 4))();
      return;
    }
  }
  uStack_1c = 0;
  ppuStack_20 = &lbl_82167FA8;
  uStack_18 = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F69290(&ppuStack_20,0xffffffff821dda54);
}

