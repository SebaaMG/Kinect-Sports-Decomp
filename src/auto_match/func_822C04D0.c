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
extern int fn_822AF138();
extern int fn_82320BE0();
extern int fn_82321138();
extern int fn_8232B210();
extern int fn_82F63108();
extern unsigned int lbl_821CC160;


void fn_822C04D0(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = lbl_821CC160;
  if (*(int *)(param_1 + 0x788) == 2) {
    *(undefined4 *)(param_1 + 0x4ec) = lbl_821CC160;
    *(undefined4 *)(param_1 + 0x4f0) = uVar1;
    fn_82321138(param_1 + 0x528,param_1);
  }
  else if (*(int *)(param_1 + 0x788) == 3) {
    *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_1 + 0x4e0);
    *(undefined4 *)(param_1 + 0x4ec) = uVar1;
    *(undefined4 *)(param_1 + 0x7c4) = 0;
  }
  if (param_2 == 0) {
    uVar2 = 2;
  }
  else {
    if (param_2 != 1) {
      if (param_2 < 3) {
        fn_82321138(param_1 + 0x518,param_1);
        *(undefined4 *)(param_1 + 0x500) = 0;
        *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(*(int *)(param_1 + 0x504) + 0x18);
        if (*(int *)(param_1 + 0x7d4) != 0) {
          fn_82320BE0(*(int *)(param_1 + 0x7d4),0);
        }
        fn_8232B210(param_1 + 0x5c0);
        if (*(int *)(param_1 + 0x718) == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F63108();
        }
        (**(code **)(**(int **)(param_1 + 0x718) + 4))(*(int **)(param_1 + 0x718),1);
        *(undefined4 *)(param_1 + 0x7a0) = 0;
      }
      else {
        if (param_2 == 3) {
          uVar2 = 4;
          *(int *)(param_1 + 0x78c) = *(int *)(param_1 + 0x78c) + 1;
          *(int *)(param_1 + 0x790) = *(int *)(param_1 + 0x790) + 1;
          if (*(int *)(param_1 + 0x24) == 0) {
            uVar2 = 5;
          }
                    /* WARNING: Subroutine does not return */
          fn_822AF138(*(undefined4 *)(param_1 + 0x110),uVar2);
        }
        if (param_2 < 5) {
                    /* WARNING: Subroutine does not return */
          fn_822AF138(*(undefined4 *)(param_1 + 0x110),1);
        }
      }
      *(uint *)(param_1 + 0x788) = param_2;
      return;
    }
    uVar2 = 3;
  }
                    /* WARNING: Subroutine does not return */
  fn_822AF138(*(undefined4 *)(param_1 + 0x110),uVar2);
}

