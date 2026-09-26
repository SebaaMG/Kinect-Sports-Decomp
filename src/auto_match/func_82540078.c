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
#define NAN(x) ((x) != (x))
extern int fn_82F655D8();
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_82192488;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


double fn_82540078(double param_1,double param_2)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = (double)lbl_821CA460;
  dVar3 = (double)lbl_821CC160;
  bVar1 = ((double)(float)(param_2 - (double)lbl_8218EC10) < dVar3) << 3 |
          (NAN((double)(float)(param_2 - (double)lbl_8218EC10)) || NAN(dVar3));
  dVar2 = (double)fn_82F655D8((double)(float)(dVar4 - param_1),
                                    (double)(float)(param_2 * (double)lbl_82192488));
  dVar2 = (double)(float)(dVar4 - (double)(float)dVar2);
  if (*(float *)(&lbl_821954D8 + ((bVar1 & 0xf) >> 1 & 4 | ((bVar1 & 0xf) & 1) << 2)) < 0.0) {
    dVar2 = dVar3;
  }
  return dVar2;
}

