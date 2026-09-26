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
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_82646018();
extern int fn_82646858();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8320A89C;
extern unsigned int lbl_8320A8A0;
extern unsigned int lbl_8320A8A4;
extern unsigned int lbl_8320A8B0;
extern unsigned int lbl_8320A8B4;


void fn_828375E8(void)

{
  undefined8 in_r8;
  
  if (lbl_8320A8B4 != 0) {
    fn_8263A1B8(lbl_8320A898,0,lbl_8320A8A0);
    fn_8263A508(lbl_8320A898,lbl_8320A8A4);
    if ((lbl_8320A89C != 1) &&
       (fn_82646018((double)lbl_82002AE0,lbl_8320A898,0,lbl_8320A89C,0xffffffff8320a7b0,
                          0xffffffff8320a7f0,in_r8,0), lbl_8320A8B0 != 0)) {
      fn_82646858(lbl_8320A898,0);
    }
  }
  return;
}

