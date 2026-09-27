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
extern float lbl_82195590;
extern float lbl_821955A0;


undefined8 fn_8255A780(double param_1,double param_2,double param_3)

{
  float fVar1;
  double dVar2;
  
  fVar1 = (float)(param_2 - param_1) * lbl_82195590;
  dVar2 = (double)(float)(((double)fVar1 - (double)(longlong)fVar1) * lbl_821955A0);
  if ((-param_3 <= dVar2) && (dVar2 <= param_3)) {
    return 1;
  }
  return 0;
}

