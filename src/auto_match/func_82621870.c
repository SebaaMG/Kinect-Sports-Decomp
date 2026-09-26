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
extern int fn_82587C30();
extern unsigned int lbl_821954B0;
extern unsigned int lbl_82195590;
extern unsigned int lbl_821955AC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


double fn_82621870(double param_1,double param_2,double param_3,double param_4)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (param_3 != (double)lbl_821CC160) {
    puVar1 = &lbl_821954B0;
    dVar5 = (double)lbl_821CA460;
    dVar4 = (double)lbl_82195590;
    dVar3 = (double)(float)((double)(float)(param_2 - param_1) * dVar4);
    dVar2 = (double)fn_82587C30((double)(float)(dVar5 - param_3),
                                 (double)(float)(param_4 * (double)lbl_821955AC),dVar3);
    dVar4 = (double)(float)((double)(float)(dVar5 - dVar2) *
                            (double)(float)((dVar3 - (double)(longlong)dVar3) * (double)puVar1[0x1e]
                                           ) + param_1) * dVar4;
    param_1 = (double)(float)(((double)(float)dVar4 - (double)(longlong)dVar4) *
                             (double)puVar1[0x1e]);
  }
  return param_1;
}

