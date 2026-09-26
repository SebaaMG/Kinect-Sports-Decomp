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
extern int fn_82FA6B68();
extern int fn_82FA7778();
extern unsigned int lbl_8216CB84;
extern unsigned int lbl_831BC768;
extern unsigned int *lbl_83264230;


void fn_82FA79C0(undefined8 param_1)

{
  int iVar1;
  
  if (lbl_83264230 == (undefined4 *)0x0) {
    lbl_83264230 = (undefined4 *)fn_82FA5060(lbl_831BC768,4);
    if (lbl_83264230 != (undefined4 *)0x0) {
      *lbl_83264230 = &lbl_8216CB84;
      iVar1 = fn_82FA6B68(lbl_83264230,param_1);
      if (iVar1 == 1) {
        return;
      }
      fn_82FA7778(lbl_83264230);
    }
    lbl_83264230 = (undefined4 *)0x0;
  }
  return;
}

