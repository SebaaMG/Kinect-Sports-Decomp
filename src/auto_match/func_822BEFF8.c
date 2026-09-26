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
extern int fn_8232B210();
extern int fn_8232B310();
extern int fn_8232B410();
extern int fn_82F63108();


void fn_822BEFF8(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x5c0);
  *(undefined4 *)(param_1 + 0x5c8) = 0;
  if ((param_2 == 0) && (*piVar3 != 0)) {
    if (param_3 == 0) {
      fn_8232B410(piVar3);
      if (*(int *)(param_1 + 0x718) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      uVar2 = 0;
    }
    else {
      fn_8232B210();
      if (*(int *)(param_1 + 0x718) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      uVar2 = 1;
    }
    (**(code **)(**(int **)(param_1 + 0x718) + 4))(*(int **)(param_1 + 0x718),uVar2);
  }
  else {
    iVar1 = *piVar3;
    *piVar3 = param_2;
    fn_8232B310(piVar3,iVar1);
  }
  return;
}

