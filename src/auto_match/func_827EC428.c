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
extern unsigned int *auStack_20;
extern unsigned int *auStack_40;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_827EF590();
extern int fn_827EF608();
extern int fn_82810308();
extern int fn_82810328();
extern int fn_8281CAE8();
extern unsigned int lbl_82002AE0;


bool fn_827EC428(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5,undefined8 param_6)

{
  double dVar1;
  undefined1 auStack_40 [16];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined1 auStack_20 [16];
  
  fStack_30 = (float)((double)*param_5 + param_1);
  fStack_2c = (float)((double)param_5[1] + param_1);
  fStack_28 = (float)((double)param_5[2] + param_1);
  fn_82810328(param_2,param_4,auStack_40);
  fn_8281CAE8(param_6,auStack_40,auStack_40);
  fn_827EF590(&fStack_30,auStack_20);
  fn_827EF608(auStack_20,auStack_40,auStack_40);
  dVar1 = (double)fn_82810308(auStack_40);
  return dVar1 <= (double)lbl_82002AE0;
}

