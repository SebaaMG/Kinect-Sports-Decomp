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
extern unsigned int lbl_82015468;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_82022E60;


double fn_8287C0F0(double param_1,double param_2)

{
  if ((float)(param_1 - param_2) < lbl_8201DD74) {
    if ((float)(param_1 - param_2) <= lbl_82022E60) {
      param_2 = (double)(float)(param_2 - (double)lbl_82015468);
    }
  }
  else {
    param_1 = (double)(float)(param_1 - (double)lbl_82015468);
  }
  return (double)(float)(param_2 - param_1);
}

