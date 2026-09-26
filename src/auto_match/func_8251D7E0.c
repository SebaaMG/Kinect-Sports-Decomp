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
extern int fn_82595950();
extern unsigned int lbl_8329615C;
extern unsigned int *lbl_8329618C;
extern unsigned int lbl_83296190;
extern int (*lbl_832961A8)();


void fn_8251D7E0(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = &lbl_8329615C;
  lbl_83296190 = lbl_8329618C;
  piVar1 = lbl_8329618C;
  do {
    if (*piVar2 != 0) {
      lbl_8329618C = piVar2 + -1;
      if ((piVar1 == piVar2 + -1) || (piVar2[2] != 0)) {
        fn_82595950(*piVar2);
        piVar1 = lbl_83296190;
      }
    }
    lbl_8329618C = piVar1;
    piVar2 = piVar2 + -0xc;
    piVar1 = lbl_8329618C;
  } while (-0x7cd69f35 < (int)piVar2);
  if (lbl_832961A8 != (code *)0x0) {
    (*lbl_832961A8)(lbl_8329618C[1]);
  }
  return;
}

