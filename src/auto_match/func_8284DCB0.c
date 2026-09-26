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
extern int fn_8280A958();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8201DCB8;


double fn_8284DCB0(double param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)lbl_82002AE0;
  dVar1 = (double)(float)(param_2 * param_2);
  if ((double)(float)(param_2 * param_2) < (double)lbl_8201DCB8) {
    dVar1 = (double)lbl_8201DCB8;
  }
  dVar1 = (double)fn_8280A958((double)(float)((double)((float)(dVar2 / dVar1) *
                                                       (float)(dVar2 / param_3)) * param_1 + dVar2))
  ;
  return (double)(float)(dVar1 * (double)lbl_82002C5C + dVar2);
}

