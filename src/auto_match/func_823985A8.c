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
extern int fn_822ABA88();
extern int fn_822AF138();


void fn_823985A8(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 8);
  iVar2 = 0;
  if ((piVar3[1] - *piVar3 & 0xfffffffcU) != 0) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)((*(int **)(*piVar3 + iVar4))[4] * 4 + **(int **)(*piVar3 + iVar4));
      if (*(int *)(iVar1 + 8) != 0) {
        iVar2 = fn_822ABA88(iVar1,0);
                    /* WARNING: Subroutine does not return */
        fn_822AF138(*(undefined4 *)(iVar2 + 0x110),3);
      }
      piVar3 = *(int **)(param_1 + 8);
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar2 < piVar3[1] - *piVar3 >> 2);
  }
  return;
}

