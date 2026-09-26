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
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821922D4;
extern unsigned int lbl_82192480;
extern unsigned int lbl_8219250C;
extern unsigned int lbl_82192604;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


double fn_82654DB0(double param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if ((double)lbl_821CA460 <= ABS(param_1)) {
    dVar3 = (double)lbl_821916FC;
    fVar1 = lbl_821CC160;
    if (dVar3 <= ABS(param_1)) goto LAB_82654e94;
    dVar4 = (double)fn_826545C0(param_1,dVar3);
    dVar5 = (double)fn_826545C0(ABS(param_1),(double)lbl_82192604);
    fVar1 = -(float)(ABS(param_1) * (double)lbl_821922D4 -
                    (double)(float)(dVar4 * (double)lbl_82186E64 - (double)(float)(dVar5 * dVar3)));
    fVar2 = lbl_821922D0;
  }
  else {
    dVar3 = (double)fn_826545C0(ABS(param_1),(double)lbl_82192604);
    dVar4 = (double)fn_826545C0(param_1,(double)lbl_821916FC);
    fVar1 = (float)(dVar3 * (double)lbl_8219250C - (double)(float)(dVar4 * (double)lbl_82186E64));
    fVar2 = lbl_82192480;
  }
  fVar1 = fVar1 + fVar2;
LAB_82654e94:
  return (double)fVar1;
}

