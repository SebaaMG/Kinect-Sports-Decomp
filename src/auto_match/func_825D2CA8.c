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
extern int fn_8251E4D0();


void fn_825D2CA8(longlong param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  
  if ((param_2 != (int *)0x0) && (uVar3 = (ulonglong)(uint)param_2[1], 0 < param_2[1])) {
    iVar4 = 0;
    do {
      piVar1 = *(int **)(iVar4 + *param_2);
      piVar2 = (int *)(**(code **)(*piVar1 + 0x44))(piVar1);
      if ((piVar2 != (int *)0x0) && (0 < *piVar2)) {
                    /* WARNING: Subroutine does not return */
        fn_8251E4D0(param_1 + 0xc);
      }
      fn_825D2CA8(param_1,piVar1 + 0x26);
      uVar3 = uVar3 - 1;
      iVar4 = iVar4 + 0x1a0;
    } while (uVar3 != 0);
  }
  return;
}

