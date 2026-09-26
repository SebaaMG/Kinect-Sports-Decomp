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
extern int fn_82F6E1C8();
extern unsigned int *lbl_8329F724;
extern unsigned int lbl_8329F728;


undefined8 fn_82F63D60(void)

{
  undefined8 uVar1;
  
  lbl_8329F724 = (undefined4 *)fn_82F6E1C8(0x20,4);
  lbl_8329F728 = lbl_8329F724;
  if (lbl_8329F724 == (undefined4 *)0x0) {
    uVar1 = 0x18;
  }
  else {
    uVar1 = 0;
    *lbl_8329F724 = 0;
  }
  return uVar1;
}

