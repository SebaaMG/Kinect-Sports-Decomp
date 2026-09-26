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
extern int fn_82F655D8();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005720;
extern unsigned int lbl_82005778;
extern unsigned int lbl_82015618;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_83057D38(double param_1,undefined8 param_2,double param_3,int param_4)

{
  int iVar1;
  double dVar2;
  
  if (param_1 < lbl_82005710) {
    param_3 = param_3 - lbl_82005778;
  }
  dVar2 = (double)fn_82F655D8(lbl_82015618,param_3 * lbl_82005720);
  iVar1 = *(int *)(param_4 + 8);
  *(float *)(iVar1 + 0x54) = (float)dVar2;
  *(float *)(iVar1 + 0x44) = (float)dVar2;
  return;
}

