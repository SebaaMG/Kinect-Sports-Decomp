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
extern int fn_82809CB0();
extern int fn_82F6A548();
extern int fn_82F6A594();


void fn_827EDE70(undefined8 param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)fn_82F6A548();
  dVar2 = (double)fn_82809CB0((double)(float)(dVar1 - param_3));
  dVar3 = (double)fn_82809CB0((double)(float)(param_2 - param_3));
  if (dVar2 < dVar3) {
    param_2 = dVar1;
  }
  fn_82F6A594(param_2);
  return;
}

