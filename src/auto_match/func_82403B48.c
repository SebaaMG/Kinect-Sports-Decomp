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
extern int fn_82530158();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327F844;


/* WARNING: Removing unreachable block (ram,0x82402db0) */
/* WARNING: Removing unreachable block (ram,0x82402da4) */
/* WARNING: Removing unreachable block (ram,0x82402dd4) */
/* WARNING: Removing unreachable block (ram,0x82402de4) */
/* WARNING: Removing unreachable block (ram,0x82402de8) */

void fn_82403B48(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x27c) != 6) {
    if ((*(int *)(iVar1 + 0x27c) == 0) && (*(int *)(iVar1 + 0x368) != 0)) {
      fn_824CCD80(*(undefined4 *)(iVar1 + 0x10));
      if (lbl_8327F844 != 0) {
        fn_82530158((double)lbl_821CC160,(double)fRam831d32f8,lbl_8327F844);
      }
      *(undefined4 *)(iVar1 + 0x368) = 0;
    }
                    /* WARNING: Subroutine does not return */
    fn_82359558(*(undefined4 *)(iVar1 + 0x240),*(undefined4 *)(iVar1 + 0x10));
  }
  return;
}

