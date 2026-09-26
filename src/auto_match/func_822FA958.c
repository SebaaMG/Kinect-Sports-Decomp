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


void fn_822FA958(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = (uint)*(float *)(*(int *)((*(int **)**(undefined4 **)(iVar1 + 8))[4] * 4 +
                                   **(int **)**(undefined4 **)(iVar1 + 8)) + 0x20);
  if (*(int *)(iVar1 + 0x178) == 1) {
    uVar2 = *(int *)(*(int *)(iVar1 + 0x2d8) + 0x15c) + uVar2;
  }
                    /* WARNING: Subroutine does not return */
  fn_82539560((double)uVar2,(double)lbl_821CC160,(double)*(uint *)(*(int *)(iVar1 + 0x2d8) + 0x160)
               ,(double)lbl_821CC160,(double)lbl_821CA460);
}

