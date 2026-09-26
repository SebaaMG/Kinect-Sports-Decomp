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
extern unsigned int *auStack_30;
extern unsigned int fStack_2c;
extern int fn_8306E7E8();
extern int fn_83075D30();
extern int fn_83075D80();
extern unsigned int lbl_8202236C;


void fn_8306F1D0(int param_1,int param_2,undefined8 param_3,int param_4)

{
  double dVar1;
  undefined1 auStack_30 [4];
  float fStack_2c;
  
  if ((*(int *)(param_1 + 0xd24) != 0) && (*(int *)((param_4 + 0x58) * 4 + param_2) == 1)) {
    fn_83075D30(auStack_30,param_3,param_4);
    dVar1 = (double)fn_8306E7E8((double)fStack_2c,
                                 (double)(lbl_8202236C / *(float *)(param_1 + 0xd20)));
    fStack_2c = (float)dVar1;
    fn_83075D80(param_3,param_4);
  }
  return;
}

