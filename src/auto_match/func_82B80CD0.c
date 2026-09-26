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
extern int fn_82F6DF80();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82006268;


double fn_82B80CD0(double param_1,undefined8 param_2,int param_3,ulonglong param_4)

{
  if ((param_4 & 1) != 0) {
    param_1 = (double)fn_82B80258((double)(float)param_1);
  }
  if ((param_4 & 2) != 0) {
    param_1 = (double)fn_82F6DF48(param_1,lbl_82005710);
  }
  if ((param_4 & 4) != 0) {
    if (param_3 == 2) {
      param_1 = lbl_82006268 - param_1;
    }
    else {
      param_1 = (double)fn_82F6DF80();
    }
  }
  return param_1;
}

