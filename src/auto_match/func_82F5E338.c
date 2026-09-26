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
extern int fn_829C8668();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82167C7C;


bool fn_82F5E338(double param_1,undefined8 param_2)

{
  int iVar1;
  float afStack_20 [8];
  
  afStack_20[0] = (float)(param_1 - (double)lbl_82002AE0);
  iVar1 = fn_829C8668(0,param_2,afStack_20);
  return iVar1 == 0 && ABS((float)((double)afStack_20[0] - param_1)) < lbl_82167C7C;
}

