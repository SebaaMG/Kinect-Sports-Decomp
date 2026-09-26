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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int fStack_48;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_822B33B0();
extern int fn_823C9098();
extern int fn_823CB4A0();
extern unsigned int lbl_821922D0;
extern unsigned int lbl_82192604;


void fn_823C8830(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5,undefined8 param_6)

{
  char cVar1;
  double extraout_f1;
  double dVar2;
  undefined1 in_vs32 [16];
  undefined1 in_vs43 [16];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 auStack_50 [8];
  float fStack_48;
  undefined1 auStack_40 [64];
  
  fn_823CB4A0(param_1,param_2,auStack_40,auStack_50,&fStack_60,param_5,param_6);
  dVar2 = (double)fStack_60;
  altv207_13(in_vs32,in_vs43);
  fn_823C9098(dVar2,(double)fStack_5c,(double)fStack_58);
  cVar1 = fn_822B33B0((double)lbl_82192604,
                       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x240) + 0x1c) + 4));
  if (cVar1 == '\0') {
    fStack_48 = (float)extraout_f1;
    fn_823C9098(dVar2);
    *param_5 = *param_5 - lbl_821922D0;
  }
  return;
}

