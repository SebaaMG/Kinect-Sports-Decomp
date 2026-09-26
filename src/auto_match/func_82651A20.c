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
#define NAN(x) ((x) != (x))
extern double _seed_nan;
extern int fn_82F6B030();
extern unsigned int lbl_821954B0;


double fn_82651A20(undefined8 param_1,longlong param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  if (param_2 == 0) {
    fVar1 = (_seed_nan);
  }
  else {
    dVar2 = (double)fn_82F6B030();
    dVar2 = dVar2 * lbl_821954B0;
    dVar3 = (double)fn_82F6B030(param_2);
    fVar1 = (float)(dVar2 / dVar3);
  }
  return (double)fVar1;
}

