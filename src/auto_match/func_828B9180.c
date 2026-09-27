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
extern float lbl_82002C5C;
extern unsigned int lbl_82186E74;
extern unsigned int lbl_821AAD20;


double fn_828B9180(int param_1)

{
  float *pfVar1;
  float afStack_10 [4];
  
  if (*(float *)(param_1 + 0xb4) + *(float *)(param_1 + 0xb0) < lbl_82186E74) {
    return (double)lbl_821AAD20;
  }
  pfVar1 = afStack_10;
  afStack_10[2] = lbl_82002AE0;
  afStack_10[0] = lbl_821AAD20;
  afStack_10[1] =
       ((*(float *)(param_1 + 0xac) + *(float *)(param_1 + 0xb4)) * lbl_82002C5C +
       *(float *)(param_1 + 0xb0)) * lbl_82002C5C;
  if (lbl_821AAD20 <= afStack_10[1]) {
    pfVar1 = afStack_10 + 1;
  }
  if (lbl_82002AE0 < *pfVar1) {
    pfVar1 = afStack_10 + 2;
  }
  return (double)*pfVar1;
}

