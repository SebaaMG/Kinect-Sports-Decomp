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
extern int fn_82FA5060();
extern int fn_83008328();
extern int fn_8300E460();
extern int fn_83015E68();
extern unsigned int lbl_8217C564;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E0;


undefined4 * fn_8301E958(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_82FA5060(lbl_831BC768,0x20);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    fn_83008328(puVar1,param_1);
    puVar1[4] = 0;
    *puVar1 = &lbl_8217C564;
    fn_8300E460(puVar1 + 5);
    fn_83015E68((ulonglong)lbl_832642E0 + 0x1628,puVar1);
  }
  return puVar1;
}

