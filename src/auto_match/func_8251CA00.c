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
extern int fn_825269D0();
extern int fn_825523D0();
extern int fn_8258FC38();
extern int (*lbl_83276784)();
extern int (*lbl_8327F654)();
extern unsigned int lbl_8327F674;
extern unsigned int lbl_8329618C;
extern int (*lbl_832961B4)();
extern unsigned int lbl_832961C8;


void fn_8251CA00(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  if (lbl_8329618C == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(lbl_8329618C + 4);
  }
  if ((iVar1 == 0) || (lbl_832961C8 != 0)) {
    if ((int)param_1 == 4) {
      if (lbl_8327F654 != (code *)0x0) {
        (*lbl_8327F654)(lbl_8327F674,param_2,param_2);
      }
      fn_825269D0(0x1a,0);
      fn_825523D0();
      if (lbl_83276784 != (code *)0x0) {
        (*lbl_83276784)();
      }
      fn_825269D0(0x1b,0);
    }
  }
  else {
    fn_8258FC38(iVar1,param_1);
  }
  if (lbl_832961B4 != (code *)0x0) {
    (*lbl_832961B4)(iVar1);
  }
  return;
}

