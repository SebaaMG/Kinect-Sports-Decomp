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


void fn_82A968E0(double param_1,undefined8 param_2,int param_3)

{
  float *pfVar1;
  uint *puVar2;
  longlong lVar3;
  undefined1 in_vs32 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  float afStack_10 [4];
  
  pfVar1 = afStack_10;
  puVar2 = (uint *)(param_3 + 0x1c);
  lVar3 = 4;
  do {
    if (*puVar2 >> (puVar2[4] & 0x3f) == 1) {
      *pfVar1 = (float)((double)lbl_82002AE0 - param_1) - lbl_82002C5C;
    }
    puVar2 = puVar2 + 1;
    pfVar1 = pfVar1 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  altv300_23(in_vs42,in_vs43);
  altv300_21(in_vs32,in_vs41);
  return;
}

