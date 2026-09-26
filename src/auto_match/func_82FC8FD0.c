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
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8217BA98;
extern unsigned int lbl_821AAD20;


void fn_82FC8FD0(double param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  uVar4 = lbl_821AAD20;
  fVar3 = lbl_8217BA98;
  fVar2 = lbl_82002AE0;
  if (param_1 < (double)((float)*param_2 * lbl_82002C5C)) {
    fVar1 = lbl_82002AE0 - (float)(param_1 * (double)lbl_82005344) / (float)*param_2;
    fVar1 = fVar1 * fVar1;
    param_2[3] = (uint)fVar1;
    fVar2 = fVar2 - fVar1;
    param_2[2] = (uint)fVar2;
    param_2[2] = (uint)((fVar2 + fVar3) - fVar3);
    param_2[3] = (uint)(((float)param_2[3] + fVar3) - fVar3);
    return;
  }
  param_2[2] = (uint)lbl_82002AE0;
  param_2[3] = uVar4;
  return;
}

