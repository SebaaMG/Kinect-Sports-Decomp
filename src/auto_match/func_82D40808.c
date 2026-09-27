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
extern float fRam831819c0;
extern float fRam831819c4;
extern unsigned int lbl_82002AE0;
extern float lbl_8213855C;
extern unsigned int lbl_82186E6C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82D40808(uint param_1)

{
  fRam831819c0 = ((float)(longlong)
                         (int)(((int)param_1 >> 3) + (uint)((int)param_1 < 0 && (param_1 & 7) != 0))
                 - lbl_82186E6C) * lbl_8213855C;
  fRam831819c4 = lbl_82002AE0 / fRam831819c0;
  return;
}

