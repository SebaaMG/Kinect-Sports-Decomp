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
#define _fStack00000010 ((*(U64*)&fStack00000010))
extern unsigned int fStack00000010;
extern unsigned int fStack00000014;
extern int fn_82539560();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


double fn_8237F4A8(double param_1,double param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fStack00000010;
  float fStack00000014;
  
  fStack00000010 = (float)((ulonglong)param_3 >> 0x20);
  dVar5 = (double)fStack00000010;
  dVar2 = (double)lbl_821CC160;
  dVar3 = (double)lbl_821CA460;
  dVar1 = (double)(float)(param_1 - dVar3);
  dVar4 = (double)(float)(param_2 - dVar3);
  _fStack00000010 = param_3;
  if (dVar5 < dVar1) {
                    /* WARNING: Subroutine does not return */
    fn_82539560(dVar5,dVar1,dVar2);
  }
  if (-dVar1 < dVar5) {
                    /* WARNING: Subroutine does not return */
    fn_82539560(dVar5,-dVar1,dVar3);
  }
  fStack00000014 = (float)param_3;
  dVar1 = (double)fStack00000014;
  if (dVar1 < dVar4) {
                    /* WARNING: Subroutine does not return */
    fn_82539560(dVar1,dVar4,dVar2);
  }
  if (-dVar4 < dVar1) {
                    /* WARNING: Subroutine does not return */
    fn_82539560(dVar1,-dVar4,dVar3);
  }
  return dVar2;
}

