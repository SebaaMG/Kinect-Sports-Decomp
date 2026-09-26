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
extern int fn_82553008();
extern int fn_82569980();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_8260E9F8(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  
  iVar1 = fn_82569980(param_1,*(undefined1 *)(param_3 + 0x14));
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 * 0x30 + *(int *)((int)param_1 + 0xd8) + 0x10);
  }
  if (iVar1 != 0) {
    if (param_5 == 2) {
      if (*(int *)(iVar1 + 0x8c0) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82539560((double)*(float *)((int)param_1 + 0x88),(double)*(float *)(param_3 + 4),
                     (double)*(float *)(param_3 + 8),(double)lbl_821CC160,(double)lbl_821CA460);
      }
    }
    else if ((((param_5 == 1) || (param_5 == 3)) && ((ulonglong)*(uint *)(iVar1 + 0x8c0) != 0)) &&
            (*(int *)(param_3 + 0x24) != 0)) {
      fn_82553008((ulonglong)*(uint *)(iVar1 + 0x8c0) + 0x20,0xffffffff82196290);
    }
  }
  return;
}

