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
extern int fn_82BE56B0();
extern int fn_82BE6FA0();
extern unsigned int lbl_8322B1D8;


void fn_82BE7068(void)

{
  int iVar1;
  
  if (lbl_8322B1D8 == 0) {
    iVar1 = fn_82BE56B0(100);
    if (iVar1 == 0) {
      lbl_8322B1D8 = 0;
    }
    else {
      lbl_8322B1D8 = fn_82BE6FA0();
    }
  }
  return;
}

