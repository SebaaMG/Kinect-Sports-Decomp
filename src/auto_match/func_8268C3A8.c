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
extern unsigned int lbl_83155186;
extern unsigned int lbl_83155188;
extern U64 storeWordConditionalIndexed();


void fn_8268C3A8(undefined4 *param_1,undefined4 param_2)

{
  char in_RESERVE;
  byte in_cr0;
  
  param_1[1] = param_2;
  do {
    if (in_RESERVE != '\0') {
      lbl_83155188 = storeWordConditionalIndexed((ulonglong)lbl_83155188 + 1,0,0xffffffff83155188);
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  *param_1 = &lbl_83155186;
  return;
}

