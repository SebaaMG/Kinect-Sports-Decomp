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
extern unsigned int lbl_82002C5C;


void fn_82779470(double param_1,undefined1 *param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = lbl_82002C5C;
  bVar1 = param_3[1];
  bVar2 = param_4[1];
  fVar3 = (float)((double)(float)((double)param_4[3] - (double)param_3[3]) * param_1 +
                 (double)param_3[3]) + lbl_82002C5C;
  fVar4 = (float)((double)(float)((double)*param_4 - (double)*param_3) * param_1 + (double)*param_3)
          + lbl_82002C5C;
  param_2[2] = (char)(int)((float)((double)(float)((double)param_4[2] - (double)param_3[2]) *
                                   param_1 + (double)param_3[2]) + lbl_82002C5C);
  param_2[3] = (char)(int)fVar3;
  param_2[1] = (char)(int)((float)((double)(float)((double)bVar2 - (double)bVar1) * param_1 +
                                  (double)bVar1) + fVar5);
  *param_2 = (char)(int)fVar4;
  return;
}

