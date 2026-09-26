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
extern unsigned int *auStack_30;
extern int fn_825521F0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CC160;
extern int (*lbl_8327677C)();
extern unsigned int uStack_20;


void fn_8228F738(int param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  
  if ((*(int *)(param_1 + 0x58) != 0) && (*(int *)(param_1 + 0x60) != 0)) {
    if (*(int *)(param_1 + 0x5c) == 0) {
      if (lbl_8327677C != (code *)0x0) {
        (*lbl_8327677C)(0xffffffff821a9b30,0xffffffff821a9ac0,0x2d3);
      }
    }
    else if ((int)param_2 != 0) {
      uStack_20 = 0;
      fn_825521F0((double)lbl_821CC160,(double)lbl_8218E8E8,param_1,param_2,auStack_30);
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}

