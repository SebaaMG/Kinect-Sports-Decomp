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


void fn_8280B1E8(double param_1,double param_2,double param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  
  *param_4 = (float)param_1;
  param_4[5] = (float)param_2;
  param_4[10] = (float)param_3;
  fVar2 = lbl_821AAD20;
  fVar1 = lbl_82002AE0;
  param_4[4] = lbl_821AAD20;
  param_4[8] = fVar2;
  param_4[0xc] = fVar2;
  param_4[1] = fVar2;
  param_4[9] = fVar2;
  param_4[0xd] = fVar2;
  param_4[2] = fVar2;
  param_4[6] = fVar2;
  param_4[0xe] = fVar2;
  param_4[3] = fVar2;
  param_4[7] = fVar2;
  param_4[0xb] = fVar2;
  param_4[0xf] = fVar1;
  return;
}

