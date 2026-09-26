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
extern unsigned int *auStack_60;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_828095F8();
extern int fn_82810240();
extern int fn_82810280();
extern int fn_82810B78();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_821AAD20;


double fn_8281D0C8(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  double dVar3;
  undefined1 auStack_60 [16];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined1 auStack_30 [24];
  
  fn_82810B78(param_1,auStack_60);
  fn_82810B78(param_2,auStack_30);
  dVar3 = (double)fn_82810280(auStack_30,auStack_60);
  if (dVar3 < (double)lbl_82002AE0) {
    if ((double)lbl_8200133C < dVar3) {
      fn_82810240(auStack_30,auStack_60,param_3);
      dVar3 = (double)fn_828095F8(dVar3);
    }
    else {
      fStack_50 = lbl_82002AE0;
      fStack_3c = lbl_82002AE0;
      fStack_48 = lbl_821AAD20;
      fStack_4c = lbl_821AAD20;
      fStack_38 = lbl_821AAD20;
      fStack_40 = lbl_821AAD20;
      dVar3 = (double)fn_82810280(auStack_60,&fStack_50);
      pfVar2 = &fStack_40;
      if (dVar3 <= (double)lbl_82002C5C) {
        pfVar2 = &fStack_50;
      }
      fn_82810240(auStack_60,pfVar2,param_3);
      dVar3 = (double)lbl_8201DD74;
    }
  }
  else {
    *param_3 = lbl_82002AE0;
    fVar1 = lbl_821AAD20;
    dVar3 = (double)lbl_821AAD20;
    param_3[1] = lbl_821AAD20;
    param_3[2] = fVar1;
  }
  return dVar3;
}

