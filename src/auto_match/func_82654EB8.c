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
extern int fn_826545C0();
extern unsigned int lbl_82186E64;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82191FC4;
extern unsigned int lbl_82191FD4;
extern unsigned int lbl_82192510;
extern unsigned int lbl_82192604;
extern unsigned int lbl_82193B38;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


double fn_82654EB8(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((double)lbl_821CA460 <= ABS(param_1)) {
    if ((double)lbl_821916FC <= ABS(param_1)) {
      dVar1 = (double)lbl_821CC160;
    }
    else {
      dVar1 = (double)fn_826545C0(param_1);
      dVar3 = (double)lbl_82192604;
      dVar2 = (double)fn_826545C0(ABS(param_1),dVar3);
      dVar1 = (double)(-(float)(ABS(param_1) * (double)lbl_82191FD4 -
                               (double)(float)(dVar1 * (double)lbl_82192510 -
                                              (double)(float)(dVar2 * dVar3))) + lbl_82186E64);
    }
  }
  else {
    dVar1 = (double)fn_826545C0(ABS(param_1),(double)lbl_82192604);
    dVar2 = (double)fn_826545C0(param_1,(double)lbl_821916FC);
    dVar1 = (double)((float)(dVar1 * (double)lbl_82193B38 -
                            (double)(float)(dVar2 * (double)lbl_82192510)) + lbl_82191FC4);
  }
  return dVar1;
}

