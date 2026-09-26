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
extern int fn_825308E8();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821CA460;


undefined8 fn_82531E50(double param_1,double param_2,undefined8 param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  float fStack00000010;
  float fStack00000014;
  
  _fStack00000010 = param_3;
  iVar1 = fn_825308E8();
  dVar3 = param_2;
  if (*(uint *)(iVar1 + 0xc) < 0x2d0) {
    dVar2 = (double)lbl_821CA460;
    if (*(int *)(iVar1 + 4) == 0) {
      param_2 = -(double)(float)((double)(float)(dVar2 - param_2) * (double)lbl_821916FC - dVar2);
    }
    else {
      dVar3 = -(double)(float)((double)(float)(dVar2 - param_2) * (double)lbl_821916FC - dVar2);
    }
  }
  if ((-param_1 <= (double)fStack00000010) && ((double)fStack00000010 < param_1)) {
    if ((-dVar3 <= (double)fStack00000014) && ((double)fStack00000014 < param_2)) {
      return 1;
    }
  }
  return 0;
}

