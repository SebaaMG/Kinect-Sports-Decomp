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
extern int fn_82544528();
extern int fn_82586008();
extern int fn_8263CBB0();
extern unsigned int lbl_8320A898;


void fn_82582040(int param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  for (piVar1 = *(int **)(param_1 + 0xe0); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[4]) {
    *(undefined1 *)(*piVar1 + 0x54) = 0;
  }
  for (piVar1 = *(int **)(param_1 + 0xdc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    if (*piVar1 != 0) {
      fn_82586008(*piVar1,param_3);
    }
  }
  uVar2 = fn_82544528();
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(lbl_8320A898,1,uVar2,0x40000000);
}

