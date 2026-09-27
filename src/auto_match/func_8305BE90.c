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
extern unsigned int lbl_82005758;
extern unsigned int lbl_820155C8;
extern unsigned int lbl_820E86E0;
extern float lbl_8217E688;


double fn_8305BE90(double param_1,double param_2)

{
  double dVar1;
  
  dVar1 = (double)fn_82F655D8(param_2,lbl_820E86E0);
  dVar1 = -((lbl_82005758 - dVar1) * lbl_8217E688 - param_2);
  if (param_1 < lbl_82005710) {
    dVar1 = -(-(param_2 * param_2 - lbl_82005758) * param_1 * lbl_820155C8 - lbl_82005758) * dVar1;
  }
  return dVar1;
}

