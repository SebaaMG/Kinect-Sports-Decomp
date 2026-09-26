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
extern unsigned int *auStack_20;
extern int fn_8281B530();
extern int fn_8281B558();
extern int fn_82822510();
extern unsigned int lbl_8320A5E8;
extern unsigned int lbl_8320A764;


void fn_82823560(ulonglong param_1,undefined8 param_2)

{
  undefined4 auStack_20 [2];
  
  if ((param_1 & 0xffffffff) == 0) {
    lbl_8320A764 = lbl_8320A764 + 1;
    fn_8281B530(lbl_8320A5E8,param_2);
  }
  else {
    fn_82822510(0xffffffff8320a5dc,0xffffffff82823440,param_1,auStack_20);
    fn_8281B558(auStack_20[0],param_1,param_2);
  }
  return;
}

