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
extern unsigned int lbl_83155AC0;
extern unsigned int lbl_83155C14;


bool fn_82683D70(uint param_1,undefined4 *param_2)

{
  undefined *puVar1;
  
  if (param_1 < 0x55) {
    puVar1 = (&lbl_83155AC0)[param_1];
  }
  else if ((param_1 < 1000) || (0x3f1 < param_1)) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = (&lbl_83155C14)[param_1 - 1000];
  }
  *param_2 = puVar1;
  return puVar1 != (undefined *)0x0;
}

