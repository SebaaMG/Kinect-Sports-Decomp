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
extern int fn_825909E0();
extern int fn_825A23C0();
extern int (*lbl_8326AF28)();
extern unsigned int lbl_8326C2B0;
extern unsigned int lbl_8326C2C0;
extern unsigned int lbl_8326C390;
extern unsigned int lbl_832749B0;
extern unsigned int lbl_83274A04;
extern unsigned int lbl_832960CC;


void fn_825CFD40(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  *param_1 = 1;
  if (param_2 == lbl_832960CC) {
    lbl_8326C2C0 = fn_825A23C0(0x50,8);
    puVar1 = &lbl_8326C2B0;
    lbl_8326C390 = 0;
    lVar2 = 4;
    do {
      puVar1 = puVar1 + 0xc;
      *puVar1 = 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  lbl_83274A04 = 0;
  lbl_832749B0 = 0;
  if (lbl_8326AF28 != (code *)0x0) {
    (*lbl_8326AF28)();
  }
  *(undefined4 *)(param_2 + 0x88c) = 0;
  fn_825909E0(param_2 + 0x85c,0);
  return;
}

