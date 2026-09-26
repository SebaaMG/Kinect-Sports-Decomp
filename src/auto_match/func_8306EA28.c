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
extern int fn_82F65018();
extern unsigned int lbl_82196080;
extern unsigned int lbl_821AAD20;


double fn_8306EA28(double param_1,double param_2)

{
  float fVar1;
  double dVar2;
  
  if (((double)lbl_82196080 <= ABS(param_1)) ||
     (fVar1 = lbl_821AAD20, (double)lbl_82196080 <= ABS(param_2))) {
    dVar2 = (double)fn_82F65018();
    fVar1 = (float)dVar2;
  }
  return (double)fVar1;
}

