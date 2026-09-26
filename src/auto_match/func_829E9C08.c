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
extern int fn_82F64318();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_821AAD20;


double fn_829E9C08(double param_1,undefined8 param_2,int param_3)

{
  double dVar1;
  
  dVar1 = (double)lbl_821AAD20;
  if (param_1 == dVar1) {
    dVar1 = (double)lbl_82002AE0;
  }
  else if (((int)ABS(param_1) < 6) && ((double)*(float *)((int)ABS(param_1) * 4 + param_3) != dVar1)
          ) {
                    /* WARNING: Subroutine does not return */
    fn_82F64318((double)(float)(param_1 * (double)lbl_8201DD74));
  }
  return dVar1;
}

