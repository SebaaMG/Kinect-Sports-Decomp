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
extern unsigned int lbl_831A9798;


void fn_82E82680(int *param_1,int param_2)

{
  if (*param_1 == 0) {
    param_1[0x213] = param_2;
    param_1[0x7a8] = param_2;
    param_1[0x214] = (&lbl_831A9798)[param_2];
    return;
  }
  param_1[0x213] = 0;
  param_1[0x7a8] = 0;
  param_1[0x214] = lbl_831A9798;
  return;
}

