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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8200D8C4;
extern unsigned int lbl_820145BC;
extern unsigned int lbl_82015BD4;


bool fn_82A0DA60(double param_1,double param_2)

{
  float fVar1;
  byte bVar2;
  
  fVar1 = (float)(param_1 * (double)lbl_82015BD4) / lbl_820145BC;
  if ((fVar1 + lbl_82002C5C <= lbl_82002AE0) || (bVar2 = 1, lbl_82005344 <= fVar1 - lbl_82002C5C)) {
    bVar2 = 0;
  }
  return !(bool)((double)(fVar1 / lbl_8200D8C4) < param_2 & bVar2);
}

