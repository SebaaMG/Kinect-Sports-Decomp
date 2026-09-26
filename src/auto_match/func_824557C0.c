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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_8227CB30();
extern int fn_824558D8();
extern int fn_825521F0();
extern unsigned int lbl_821BA96C;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_2c;


void fn_824557C0(float *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined **ppuStack_30;
  undefined8 uStack_2c;
  undefined ***pppuStack_20;
  
  dVar2 = (double)param_1[1];
  uVar1 = fn_8227CB30(param_1 + 4);
  param_1[2] = (float)dVar2;
  pppuStack_20 = &ppuStack_30;
  ppuStack_30 = &lbl_821BA96C;
  uStack_2c = CONCAT44(fn_824558D8,param_1);
  fn_825521F0((double)lbl_821CA460,(double)*param_1,uVar1,param_2,&ppuStack_30);
  return;
}

