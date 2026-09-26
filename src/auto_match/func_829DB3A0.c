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
extern int fn_829E32C0();
extern int (*lbl_83217B28)();
extern unsigned int lbl_83217B38;
extern unsigned int lbl_832187E4;


longlong fn_829DB3A0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  lVar1 = fn_829E32C0(lbl_83217B38,param_2,param_3,param_3);
  if ((-1 < lVar1) && (lbl_83217B28 != (code *)0x0)) {
    lbl_832187E4 = (uint)LZCOUNT(*param_3) >> 5;
    (*lbl_83217B28)();
  }
  return lVar1;
}

