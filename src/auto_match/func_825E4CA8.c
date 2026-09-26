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
#define _fStack_60 ((*(U64*)&fStack_60))
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_825E4EB0();
extern int fn_8284C850();
extern int fn_8284C858();
extern unsigned int lbl_8218E8E8;


void fn_825E4CA8(undefined8 param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                  float *param_5,float *param_6)

{
  int iVar1;
  double dVar2;
  float fStack_60;
  float fStack_5c;
  longlong lStack_58;
  
  fStack_5c = (float)fn_8284C850();
  dVar2 = (double)lbl_8218E8E8;
  fStack_60 = (float)((double)((float)(longlong)(int)fStack_5c * (*param_6 - *param_5)) * dVar2) *
              *param_4;
  iVar1 = fn_8284C858(param_2);
  lStack_58 = (longlong)iVar1;
  _fStack_60 = CONCAT44(fStack_60,
                        (float)((double)((float)lStack_58 * (param_6[1] - param_5[1])) * dVar2) *
                        param_4[1]);
  fn_825E4EB0(param_1,param_3,&fStack_60);
  return;
}

