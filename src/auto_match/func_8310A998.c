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
extern unsigned int *auStack_30;
extern int fn_82230110();
extern int fn_822579F8();
extern int fn_8265CA20();
extern int atexit();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8310A998(void)

{
  uint auStack_30;
  undefined4 uStack_20;
  uint uStack_1c;
  
  fn_82230110(&auStack_30,0xffffffff82198218);
  fn_822579F8(0xffffffff83283cd0,&auStack_30,3);
  if (0xf < uStack_1c) {
    fn_8265CA20(auStack_30);
  }
  uStack_20 = 0;
  uStack_1c = 0xf;
  auStack_30 = auStack_30 & 0xffffff;
  atexit(0xffffffff8313b430);
  return;
}

