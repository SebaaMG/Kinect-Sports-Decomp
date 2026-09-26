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
extern unsigned int lbl_8200DD28;


longlong fn_82B63290(double param_1,ushort *param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = 0;
  lVar4 = 1;
  lVar5 = 7;
  fVar1 = -(float)((double)*param_2 * (double)lbl_8200DD28 - param_1);
  fVar1 = fVar1 * fVar1;
  do {
    param_2 = param_2 + 1;
    fVar2 = -(float)((double)*param_2 * (double)lbl_8200DD28 - param_1);
    fVar2 = fVar2 * fVar2;
    if (fVar2 < fVar1) {
      lVar3 = lVar4;
      fVar1 = fVar2;
    }
    lVar4 = lVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return lVar3;
}

