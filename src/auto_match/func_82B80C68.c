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
extern int fn_82B80258();
extern int fn_82F6DF48();
extern unsigned int lbl_82005710;


double fn_82B80C68(double param_1,undefined8 param_2,ulonglong param_3)

{
  double dVar1;
  
  if ((param_3 & 1) != 0) {
    param_1 = (double)fn_82B80258();
  }
  if ((param_3 & 2) != 0) {
    dVar1 = (double)fn_82F6DF48(param_1,lbl_82005710);
    param_1 = (double)(float)dVar1;
  }
  if ((param_3 & 4) != 0) {
    param_1 = (double)-(float)param_1;
  }
  return param_1;
}

