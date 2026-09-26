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
extern int fn_82809950();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831E4E38;


void fn_824408A8(undefined8 param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (double)fn_82F6A544();
  dVar5 = (double)lbl_821CC160;
  dVar6 = (double)lbl_821CA460;
  dVar3 = (double)(float)(dVar6 / param_3);
  dVar4 = (double)lbl_831E4E38;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)(((double)(float)(dVar1 - param_3) < dVar5) << 2) |
                (uint)(NAN((double)(float)(dVar1 - param_3)) || NAN(dVar5)) << 2)) < 0.0) {
    param_3 = dVar1;
  }
  dVar2 = (double)fn_82809950((double)(float)((double)(float)(param_3 * dVar3) * dVar4));
  dVar3 = (double)fn_82809950((double)(float)((double)(float)(dVar3 * param_2) * dVar4));
  dVar4 = (double)(float)((double)lbl_82193CC0 - dVar3);
  dVar1 = (double)lbl_82193CC0;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar4 < dVar5) << 2) | (uint)(NAN(dVar4) || NAN(dVar5)) << 2)) < 0.0)
  {
    dVar1 = dVar3;
  }
  fn_82F6A590((double)(float)((double)(float)((double)(float)(dVar6 / dVar1) * dVar2) * param_2));
  return;
}

