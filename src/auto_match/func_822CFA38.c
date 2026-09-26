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
extern int fn_822CF9D8();
extern int fn_82520780();
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_831E4880;


undefined8 fn_822CFA38(void)

{
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = (double)fn_822CF9D8();
  if ((double)lbl_8218EC10 <= dVar2) {
    if (dVar2 <= (double)lbl_831E4880) {
      uVar1 = fn_82520780(0xffffffff83265a28);
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

