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
extern int fn_828094D0();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;


double fn_8284DC60(double param_1,double param_2)

{
  float fVar1;
  double dVar2;
  
  dVar2 = (double)fn_828094D0((double)(float)(param_1 * (double)lbl_82002C5C));
  fVar1 = (float)(param_2 / (double)(float)(dVar2 * (double)lbl_82005344));
  return (double)(fVar1 * fVar1);
}

