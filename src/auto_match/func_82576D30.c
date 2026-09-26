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
extern int fn_8263CBB0();
extern unsigned int lbl_8320A898;
extern unsigned int lbl_83282270;


void fn_82576D30(undefined8 param_1,int param_2,int param_3,undefined8 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_2 + 0x8c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x18))(piVar1,param_3,param_5);
  }
  for (iVar2 = *(int *)(param_2 + 0x68); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x1e4)) {
    (**(code **)**(undefined4 **)(iVar2 + 0x1d0))(param_1);
  }
  if (*(int **)(param_2 + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(param_2 + 0xa8) + 0x20))(param_1);
  }
  if (*(int **)(param_2 + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(param_2 + 0x98) + 0x20))(param_1);
  }
  if ((&lbl_83282270)[*(int *)(*(int *)(*(int *)(param_3 + 0x8ac) + 0xb9e4) + param_5 * 4)] != 0) {
                    /* WARNING: Subroutine does not return */
    fn_8263CBB0(lbl_8320A898,0x10,
                      (&lbl_83282270)
                      [*(int *)(*(int *)(*(int *)(param_3 + 0x8ac) + 0xb9e4) + param_5 * 4)],0x8000)
    ;
  }
  for (piVar1 = *(int **)(param_2 + 0x1c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x1c))(param_1);
    }
  }
  if (*(int **)(param_2 + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(param_2 + 0x80) + 0x1c))(param_1);
  }
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(lbl_8320A898,0x10,0,0x8000);
}

