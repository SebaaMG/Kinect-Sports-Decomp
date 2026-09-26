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
extern unsigned int lbl_8325F874;
extern unsigned int lbl_8325F884;
extern unsigned int lbl_8325F88C;


void fn_82EFFFA8(int param_1)

{
  if (((*(int *)(param_1 + 0x350) != 3) && (*(int *)(param_1 + 0x350) != 4)) &&
     ((*(uint *)(param_1 + 0x358) == 0 || (3 < *(uint *)(param_1 + 0x358))))) {
    lbl_8325F88C = lbl_8325F884;
    *(undefined4 *)(param_1 + 0x1f30) = 0;
    return;
  }
  lbl_8325F88C = lbl_8325F874;
  *(undefined4 *)(param_1 + 0x1f30) = 1;
  return;
}

