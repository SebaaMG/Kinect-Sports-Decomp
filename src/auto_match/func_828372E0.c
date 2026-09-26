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
extern int fn_82631920();
extern int fn_82648158();
extern int fn_82648160();
extern int fn_82648988();
extern unsigned int lbl_8320A87C;
extern unsigned int lbl_8320A880;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8320A8A8;
extern unsigned int lbl_8320A8B4;
extern unsigned int lbl_8320A8B8;


void fn_828372E0(void)

{
  if (lbl_8320A880 == '\0') {
    if (lbl_8320A8B4 == 0) {
      fn_82648988(lbl_8320A898);
    }
    else {
      fn_82648158(lbl_8320A898);
      fn_82631920(lbl_8320A898,0);
      fn_82648160(lbl_8320A898,*(undefined4 *)(&lbl_8320A8A8 + lbl_8320A8B8 * 4),0);
      lbl_8320A8B8 = (uint)LZCOUNT(lbl_8320A8B8) >> 5;
    }
  }
  else {
    fn_82648158(lbl_8320A898);
    fn_82631920(lbl_8320A898,0);
    fn_82648160(lbl_8320A898,lbl_8320A87C,0);
    lbl_8320A87C = 0;
  }
  return;
}

