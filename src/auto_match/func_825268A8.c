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
extern int (*lbl_83276784)();
extern int (*lbl_8327F654)();
extern unsigned int lbl_8327F674;


void fn_825268A8(int param_1)

{
  if (param_1 == 0) {
    if (lbl_8327F654 != (code *)0x0) {
      (*lbl_8327F654)(lbl_8327F674);
    }
    fn_825269D0(0x1a,0);
    fn_825523D0();
    if (lbl_83276784 != (code *)0x0) {
      (*lbl_83276784)();
    }
    fn_825269D0(0x1b,0);
  }
  return;
}

