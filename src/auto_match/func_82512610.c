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
extern int fn_823AB478();
extern int fn_825126F0();
extern int fn_82521A10();
extern int fn_825269D0();
extern int iRam8327f790;
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659AC;
extern unsigned int lbl_832659B0;
extern unsigned int lbl_832659C4;
extern unsigned int lbl_832659CD;
extern unsigned int lbl_832767C8;


void fn_82512610(int param_1,int param_2,char param_3,ulonglong param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if ((&lbl_83265988)[param_2] != param_1) {
    if ((&lbl_83265988)[param_2] != 0) {
      fn_825126F0(param_2,param_4);
    }
    (&lbl_83265988)[param_2] = param_1;
    bVar1 = true;
    *(undefined1 *)(param_2 + -0x7cd9a668) = *(undefined1 *)(param_1 + 0xd8);
    lbl_832659B0 = lbl_832659B0 + 1;
    lbl_832659AC = lbl_832659AC + 1;
  }
  lbl_832659CD = 1;
  if ((param_4 & 0xff) == 0) {
    if (param_3 != '\0') {
      fn_82521A10(lbl_832767C8,param_1,1);
    }
    if (bVar1) {
      lbl_832659C4 = fn_823AB478(param_1);
      if (iRam8327f790 != 0) {
        fn_825269D0(0x44,0);
      }
    }
  }
  return;
}

