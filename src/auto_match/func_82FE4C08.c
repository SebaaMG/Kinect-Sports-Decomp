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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82F655D8();
extern int fn_82F65E20();
extern int fn_82F65FB0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82005758;
extern unsigned int lbl_82015618;
extern unsigned int lbl_8202DCE0;
extern unsigned int lbl_8217BA90;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82FE4C08(undefined8 param_1,double param_2)

{
  uint uVar1;
  ulonglong in_r6;
  double extraout_f1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  
  uVar1 = fn_82F6A548();
  dVar4 = -(param_2 * param_2 - lbl_82005758);
  uVar5 = lbl_82015618;
  dVar6 = lbl_82005758;
  fn_82F655D8(lbl_82015618,
                    ((double)uVar1 * lbl_8217BA90) / (extraout_f1 * (double)(in_r6 & 0xffffffff)));
  dVar2 = (double)fn_82F65FB0();
  dVar3 = (double)fn_82F65E20(uVar5);
  dVar2 = dVar2 * dVar3 * lbl_8202DCE0;
  if (dVar6 < dVar2 * dVar4) {
    dVar4 = dVar6 / dVar2;
  }
  fn_82F6A594((double)(float)SQRT(dVar6 - dVar4));
  return;
}

