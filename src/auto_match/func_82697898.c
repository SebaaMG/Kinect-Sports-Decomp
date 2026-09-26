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
extern int fn_82681898();
extern int fn_826972E0();
extern int fn_826BC950();
extern int fn_826BC960();
extern int fn_826BC970();
extern unsigned int lbl_82005710;


void fn_82697898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)fn_826972E0();
  dVar2 = (double)fn_826972E0(param_3,param_2);
  if (dVar2 == lbl_82005710) {
    if (dVar1 == lbl_82005710) {
      dVar1 = (double)fn_826BC950();
    }
    else if (dVar1 < lbl_82005710) {
      dVar1 = (double)fn_826BC970();
    }
    else {
      dVar1 = (double)fn_826BC960();
    }
  }
  else {
    dVar1 = dVar1 / dVar2;
  }
  fn_82681898(dVar1,param_1);
  return;
}

