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
extern unsigned int lbl_832765BC;
extern unsigned int lbl_832766D4;


void fn_82460270(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = lbl_832766D4;
  if (lbl_832765BC == 0) {
    return;
  }
  *(undefined4 *)(*(int *)(lbl_832765BC + 0x38) + 0x678) = 1;
  *(undefined4 *)(iVar1 + 0x308) = param_1;
  return;
}

