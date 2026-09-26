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
extern float fRam831d32f8;
extern int fn_82359558();
extern int fn_824CCD80();
extern int fn_824CD030();
extern int fn_82530158();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327F844;


void fn_82402CF8(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x27c) == param_2) {
    return;
  }
  if ((*(int *)(param_1 + 0x27c) == 0) && (*(int *)(param_1 + 0x368) != 0)) {
    fn_824CCD80(*(undefined4 *)(param_1 + 0x10));
    if (lbl_8327F844 != 0) {
      fn_82530158((double)lbl_821CC160,(double)fRam831d32f8,lbl_8327F844);
    }
    *(undefined4 *)(param_1 + 0x368) = 0;
  }
  if ((param_2 != 1) && (param_2 != 2)) {
    if (param_2 == 3) {
      *(undefined4 *)(param_1 + 0x2a0) = 0;
      *(undefined4 *)(param_1 + 0x2a4) = 0;
      goto LAB_82402dd4;
    }
    if (param_2 != 4) {
      if ((param_2 != 5) && (param_2 != 6)) goto LAB_82402dd4;
      goto LAB_82402dc0;
    }
  }
  iVar1 = fn_824CD030(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 != 0) {
LAB_82402dc0:
                    /* WARNING: Subroutine does not return */
    fn_82359558(*(undefined4 *)(param_1 + 0x240),*(undefined4 *)(param_1 + 0x10));
  }
LAB_82402dd4:
  *(int *)(param_1 + 0x27c) = param_2;
  iVar1 = *(int *)(param_1 + 0x284);
  if (*(int *)(param_1 + 0x284) < param_3) {
    iVar1 = param_3;
  }
  *(int *)(param_1 + 0x284) = iVar1;
  return;
}

