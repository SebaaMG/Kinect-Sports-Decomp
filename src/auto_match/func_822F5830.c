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
extern int fn_82539560();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


double fn_822F5830(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 0x2e0);
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x844);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(*piVar1 + 0x3c))();
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x83c);
                    /* WARNING: Subroutine does not return */
    fn_82539560((double)*(float *)(param_2 + 0x26c),(double)*(float *)(iVar3 + 0x1a4),
                 (double)lbl_821CA460,(double)lbl_821CC160,
                 (double)*(float *)((iVar2 + 0x6a) * 4 + iVar3));
  }
  iVar3 = iVar2 + 0x6f;
  if (*(int *)(param_2 + 0x188) == 0) {
    iVar3 = iVar2 + 0x74;
  }
  return (double)*(float *)(iVar3 * 4 + *(int *)(*(int *)(param_1 + 0x10) + 0x83c));
}

