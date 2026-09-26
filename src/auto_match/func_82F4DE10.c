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
extern unsigned int lbl_821655B4;
extern unsigned int lbl_8326183C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82F4DE10(void)

{
  if ((*(int *)(lbl_8326183C + 0x2dc8) != 0) && (*(float *)(lbl_8326183C + 0x2de8) < lbl_821655B4))
  {
    return 1;
  }
  return 0;
}

