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
extern int fn_8303A888();
extern unsigned int lbl_8217BA98;


void fn_8303B138(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  float *pfVar1;
  float fVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  for (uVar4 = *(uint *)((int)param_2 + 0x1c); uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
    uVar5 = uVar5 + 1;
  }
  uVar3 = 0;
  if ((uVar5 & 0xffffffff) != 0) {
    param_3 = param_3 + 0xc;
    do {
      if (*(char *)((int)param_2 + 0x21) == '\0') {
        fn_8303A888(param_3 + -0xc);
      }
      fVar2 = lbl_8217BA98;
      pfVar1 = (float *)param_3;
      uVar3 = uVar3 + 1;
      pfVar1[-1] = (pfVar1[-1] + lbl_8217BA98) - lbl_8217BA98;
      *pfVar1 = (*pfVar1 + fVar2) - fVar2;
      param_3 = param_3 + 0x10;
    } while ((uVar3 & 0xffffffff) < (uVar5 & 0xffffffff));
  }
  return;
}

