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
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821925C0;
extern unsigned int lbl_821CC160;


bool fn_822D1320(double param_1,int param_2,int param_3,undefined8 param_4,int param_5)

{
  float fVar1;
  
  if (param_5 != 0) {
    if ((double)lbl_821CC160 <= param_1) {
      return false;
    }
    return true;
  }
  if ((*(int *)(*(int *)(param_2 + 0x14) + 0x2c) == *(int *)(param_3 + 0x2c)) ||
     (*(int *)(*(int *)(param_2 + 0x14) + 0x310) != 0)) {
    if (param_1 < (double)lbl_821CC160) {
      return false;
    }
  }
  else {
    if (param_1 == (double)lbl_821CC160) {
      return *(int *)(param_3 + 0x2a4) != 0;
    }
    fVar1 = lbl_8218E8E8;
    if (param_1 < (double)lbl_821CC160) {
      fVar1 = lbl_821925C0;
    }
    if ((double)fVar1 < param_1) {
      return false;
    }
  }
  return true;
}

