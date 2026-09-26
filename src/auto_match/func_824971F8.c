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
extern int fn_8254EEB8();
extern unsigned int lbl_821CC160;


void fn_824971F8(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x54) + 4) != 0) {
    fn_8254EEB8((double)lbl_821CC160,(double)lbl_821CC160,*(int *)(param_1 + 0x54),
                      *(undefined4 *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}

