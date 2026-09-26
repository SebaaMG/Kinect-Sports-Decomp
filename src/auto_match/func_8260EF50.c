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


void fn_8260EF50(int param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  undefined4 uVar1;
  
  uVar1 = lbl_821CA460;
  if (*(int *)(param_3 + 0x18) == 0) {
    if ((param_5 != 1) && (param_5 != 3)) {
                    /* WARNING: Subroutine does not return */
      fn_82539560((double)*(float *)(param_1 + 0x88),(double)*(float *)(param_3 + 4),
                   (double)*(float *)(param_3 + 8),(double)*(float *)(param_3 + 0x10),
                   (double)*(float *)(param_3 + 0x14));
    }
    uVar1 = *(undefined4 *)(param_3 + 0x14);
  }
  *(undefined4 *)(*(int *)(**(int **)(param_1 + 0x60) + 0x1a8) + 100) = uVar1;
  return;
}

