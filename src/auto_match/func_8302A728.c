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
extern int fn_82F65FB0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005728;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_820525A8;
extern unsigned int lbl_820525B0;
extern float lbl_8217C788;
extern unsigned int lbl_8217C790;
extern unsigned int lbl_821AAD20;


double fn_8302A728(double param_1)

{
  double dVar1;
  
  if (param_1 <= lbl_82005710) {
    return (double)lbl_821AAD20;
  }
  if (lbl_820525B0 <= param_1) {
    return (double)lbl_82005CCC;
  }
  dVar1 = (double)fn_82F65FB0(param_1 * lbl_820525A8);
  return (double)(float)((dVar1 * lbl_82005728 + lbl_8217C790) * lbl_8217C788);
}

