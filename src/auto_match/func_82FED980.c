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
extern int fn_82FED0C0();
extern int fn_82FED378();
extern unsigned int lbl_832643F4;
extern unsigned int *lbl_832643F8;


void fn_82FED980(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = lbl_832643F4;
  if (lbl_832643F4 != lbl_832643F8) {
    do {
      iVar1 = *piVar2;
      fn_82FED378(iVar1);
      if ((*(int *)(iVar1 + 0x84) == 1) || (*(int *)(iVar1 + 8) != 0)) {
        piVar2 = piVar2 + 1;
      }
      else {
        fn_82FED0C0(iVar1);
        if (1 < (uint)((int)lbl_832643F8 - (int)lbl_832643F4 >> 2)) {
          *piVar2 = lbl_832643F8[-1];
        }
        lbl_832643F8 = lbl_832643F8 + -1;
      }
    } while (piVar2 != lbl_832643F8);
  }
  return;
}

