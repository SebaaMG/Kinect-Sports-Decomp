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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_8280B458(double param_1,double param_2,float *param_3,byte param_4)

{
  float fVar1;
  float fVar2;
  
  param_4 = param_4 | 0x20;
  if (param_4 == 0x78) {
    param_3[9] = (float)-param_1;
    param_3[6] = (float)param_1;
    param_3[10] = (float)param_2;
    fVar1 = lbl_821AAD20;
    fVar2 = lbl_82002AE0;
    *param_3 = lbl_82002AE0;
    param_3[4] = fVar1;
    param_3[1] = fVar1;
  }
  else {
    if (param_4 == 0x79) {
      param_3[2] = (float)-param_1;
      *param_3 = (float)param_2;
      param_3[8] = (float)param_1;
      param_3[10] = (float)param_2;
      fVar1 = lbl_821AAD20;
      fVar2 = lbl_82002AE0;
      param_3[4] = lbl_821AAD20;
      param_3[1] = fVar1;
      param_3[5] = fVar2;
      param_3[9] = fVar1;
      param_3[6] = fVar1;
      goto code_r0x8280b51c;
    }
    if (param_4 != 0x7a) {
      return;
    }
    param_3[4] = (float)-param_1;
    *param_3 = (float)param_2;
    param_3[1] = (float)param_1;
    fVar1 = lbl_821AAD20;
    fVar2 = lbl_82002AE0;
    param_3[9] = lbl_821AAD20;
    param_3[6] = fVar1;
    param_3[10] = fVar2;
  }
  param_3[2] = fVar1;
  param_3[8] = fVar1;
  param_3[5] = (float)param_2;
code_r0x8280b51c:
  param_3[0xc] = fVar1;
  param_3[0xd] = fVar1;
  param_3[0xe] = fVar1;
  param_3[3] = fVar1;
  param_3[7] = fVar1;
  param_3[0xb] = fVar1;
  param_3[0xf] = fVar2;
  return;
}

