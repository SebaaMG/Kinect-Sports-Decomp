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
extern unsigned int lbl_82015BD4;
extern unsigned int lbl_820885F0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fn_82BBD798(double param_1)

{
  int iVar1;
  
  if ((double)lbl_82015BD4 <= param_1) {
    return 0x7fffffe;
  }
  if (param_1 <= (double)lbl_820885F0) {
    return 0x8000000;
  }
  iVar1 = 0x81 - ((int)(float)param_1 >> 0x17 & 0xffU);
  if (0xf < iVar1) {
    iVar1 = 0xf;
  }
  return ((int)((double)(1L << ((longlong)(iVar1 + 0x19) & 0x7fU)) * param_1) + 1 >> 1 & 0xfffffffU)
         + iVar1 * 0x10000000;
}

