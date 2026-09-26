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
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_82809558();
extern int fn_8280DD78();
extern int fn_8280E418();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82808758(undefined8 param_1,float *param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  fStack_3c = param_2[1];
  fStack_38 = param_2[2];
  fStack_40 = *param_2;
  dVar2 = (double)lbl_82002AE0;
  dVar3 = (double)lbl_821AAD20;
  if (dVar3 < (double)(float)(dVar2 - (double)(fStack_40 * fStack_40 +
                                              fStack_38 * fStack_38 + fStack_3c * fStack_3c))) {
    dVar1 = (double)fn_82809558();
    fStack_34 = (float)dVar1;
  }
  else {
    fStack_34 = lbl_821AAD20;
  }
  fStack_4c = param_3[1];
  fStack_48 = param_3[2];
  fStack_50 = *param_3;
  if (dVar3 < (double)(float)(dVar2 - (double)(fStack_50 * fStack_50 +
                                              fStack_48 * fStack_48 + fStack_4c * fStack_4c))) {
    dVar3 = (double)fn_82809558();
  }
  fStack_44 = (float)dVar3;
  fn_8280DD78(param_1,&fStack_40,&fStack_50,param_2);
  fn_8280E418(param_2,param_2);
  return;
}

