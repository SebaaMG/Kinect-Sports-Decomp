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
extern unsigned int lbl_8201DCB8;
extern unsigned int lbl_821AAD20;


void fn_8285CE60(double param_1,double param_2,double param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float *in_r6;
  undefined4 *in_r7;
  
  in_r6[1] = (float)-param_1;
  in_r6[2] = (float)-param_1;
  *in_r6 = (float)param_1;
  in_r6[4] = (float)param_2;
  uVar2 = lbl_821AAD20;
  uVar1 = lbl_82002AE0;
  in_r6[5] = (float)(param_3 + (double)lbl_8201DCB8);
  in_r6[3] = (float)param_1;
  *in_r7 = uVar2;
  in_r7[1] = uVar2;
  in_r7[2] = uVar1;
  in_r7[3] = uVar1;
  in_r7[4] = uVar2;
  in_r7[5] = uVar1;
  return;
}

