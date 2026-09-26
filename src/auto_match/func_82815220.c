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
extern unsigned int lbl_8320A5C4;
extern unsigned int lbl_8320A5C8;
extern unsigned int lbl_8320A5CC;
extern unsigned int lbl_8320A5D0;
extern unsigned int lbl_8320A5D4;
extern unsigned int lbl_8320A5D8;


void fn_82815220(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  if (lbl_8320A5D8 == 0) {
    lbl_8320A5C4 = param_1;
    lbl_8320A5C8 = param_2;
    lbl_8320A5CC = param_5;
    lbl_8320A5D0 = param_3;
    lbl_8320A5D4 = param_4;
  }
  return;
}

