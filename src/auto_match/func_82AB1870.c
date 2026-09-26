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
extern int (*lbl_83223C5C)();
extern unsigned int lbl_83223C64;


void fn_82AB1870(ulonglong param_1)

{
  if ((param_1 & 0xffffffff) == 0) {
    return;
  }
  if (lbl_83223C5C == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82ab189c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*lbl_83223C5C)(lbl_83223C64,param_1);
  return;
}

