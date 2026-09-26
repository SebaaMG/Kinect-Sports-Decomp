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
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;


double fn_82817318(double param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)(float)(param_4 - param_3);
  dVar1 = (double)lbl_82002C5C;
  return (double)(float)((double)(float)((double)(float)((double)(float)((double)(float)((double)(
                                                  float)(param_5 - param_2) - dVar2) * dVar1 - dVar2
                                                  ) * param_1 +
                                                  -(double)(float)((double)(float)(param_3 + param_5
                                                                                  ) * dVar1 -
                                                                  (double)(float)(dVar2 * (double)
                                                  lbl_82005344 + param_2))) * param_1 +
                                        (double)(float)((double)(float)(param_4 - param_2) * dVar1))
                         * param_1 + param_3);
}

