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
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_82809558();
extern int fn_8280E180();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82800FA8(undefined8 param_1,float *param_2,float *param_3,undefined8 param_4,
                  ulonglong param_5,undefined2 *param_6)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  fVar1 = lbl_82002AE0;
  if ((param_5 & 0xe0) != 0) {
    fStack_4c = param_2[1];
    if ((param_5 & 0x1c) != 0x1c) {
      fStack_50 = *param_2;
      fStack_48 = param_2[2];
      dVar4 = (double)lbl_82002AE0;
      dVar2 = (double)lbl_821AAD20;
      if (dVar2 < (double)(float)(dVar4 - (double)(fStack_48 * fStack_48 +
                                                  fStack_50 * fStack_50 + fStack_4c * fStack_4c))) {
        dVar3 = (double)fn_82809558();
        fStack_44 = (float)dVar3;
      }
      else {
        fStack_44 = lbl_821AAD20;
      }
      fStack_5c = param_3[1];
      fStack_58 = param_3[2];
      fStack_60 = *param_3;
      if (dVar2 < (double)(float)(dVar4 - (double)(fStack_60 * fStack_60 +
                                                  fStack_58 * fStack_58 + fStack_5c * fStack_5c))) {
        dVar2 = (double)fn_82809558();
      }
      fStack_54 = (float)dVar2;
      fn_8280E180(param_1,&fStack_50,&fStack_60,param_2);
      goto LAB_828010d0;
    }
    fVar1 = lbl_821AAD20;
    if (lbl_821AAD20 <
        lbl_82002AE0 - (param_2[2] * param_2[2] + *param_2 * *param_2 + fStack_4c * fStack_4c)) {
      dVar2 = (double)fn_82809558();
      param_2[3] = (float)dVar2;
      goto LAB_828010d0;
    }
  }
  param_2[3] = fVar1;
LAB_828010d0:
  *param_6 = 4;
  return;
}

