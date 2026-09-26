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
extern int fn_8265C9E0();
extern int fn_8267A0E0();
extern unsigned int *lbl_831E7B3C;


undefined4 fn_8266F6B8(void)

{
  if (lbl_831E7B3C == (undefined4 *)0x0) {
    lbl_831E7B3C = (undefined4 *)fn_8265C9E0(0xc);
    if (lbl_831E7B3C == (undefined4 *)0x0) {
      lbl_831E7B3C = (undefined4 *)0x0;
    }
    else {
      *lbl_831E7B3C = 0;
      lbl_831E7B3C[1] = 0;
      lbl_831E7B3C[2] = 0;
    }
    fn_8267A0E0(1,1,1,0,0x18280143);
  }
  return *lbl_831E7B3C;
}

