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
extern int fn_8229ACA0();
extern int fn_8229F758();
extern int fn_8242C1B8();
extern unsigned int lbl_821CC160;


void fn_82437A38(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  double dVar3;
  
  iVar1 = *(int *)(**(int **)(param_1 + 0x40) + 0xa0);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x40) != 1)) {
    fn_8229ACA0(*(undefined4 *)(**(int **)(param_1 + 0x40) + 0xd4),0);
    uVar2 = **(undefined4 **)(param_1 + 0x40);
    if ((*(undefined4 **)(param_1 + 0x40))[0x3e] != 0) {
                    /* WARNING: Subroutine does not return */
      fn_8242C1B8(uVar2);
    }
                    /* WARNING: Subroutine does not return */
    fn_8242C1B8(uVar2);
  }
  fn_8229ACA0(*(undefined4 *)(**(int **)(param_1 + 0x40) + 0xd4),
                    *(undefined4 *)(**(int **)(param_1 + 0x40) + 0xd0));
  if ((*(int **)(param_1 + 0x40))[0x3e] != 0) {
    iVar1 = **(int **)(param_1 + 0x40);
    uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0xd4) + 0xc);
    if (*(int *)(*(int *)(iVar1 + 0x174) + 0xc4) == 0) {
      dVar3 = (double)lbl_821CC160;
    }
    else {
      dVar3 = (double)lbl_821CC160;
      fn_8229F758(dVar3,dVar3,dVar3,uVar2);
      uVar2 = *(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0xc);
    }
    fn_8229F758(dVar3,dVar3,dVar3,uVar2);
  }
  if ((*(undefined4 **)(param_1 + 0x40))[0x3e] == 0) {
                    /* WARNING: Subroutine does not return */
    fn_8242C1B8(**(undefined4 **)(param_1 + 0x40));
  }
  *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x1cc) = 1;
  return;
}

