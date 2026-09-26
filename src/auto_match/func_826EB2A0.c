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
extern unsigned int lbl_8200D89C;
extern unsigned int lbl_8200D8A0;


void fn_826EB2A0(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = lbl_8200D8A0;
  fVar3 = lbl_8200D89C;
  if (lbl_8200D8A0 < ABS(*param_2)) {
    fVar2 = lbl_8200D89C;
    if (lbl_8200D8A0 < *param_2) {
      fVar2 = lbl_8200D8A0;
    }
    *param_2 = fVar2;
  }
  if (fVar1 < ABS(param_2[1])) {
    if (param_2[1] <= fVar1) {
      fVar1 = fVar3;
    }
    param_2[1] = fVar1;
    return;
  }
  return;
}

