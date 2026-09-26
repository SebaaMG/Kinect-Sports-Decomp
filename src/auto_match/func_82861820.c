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
extern int fn_828094D0();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8201DFF0;


void fn_82861820(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  dVar3 = (double)fn_828094D0((double)(*param_1 * lbl_8201DFF0 * lbl_82002C5C));
  fVar1 = (float)(dVar3 * (double)param_1[2]);
  *param_2 = fVar1;
  param_2[1] = -fVar1;
  fVar2 = param_1[1];
  param_2[3] = fVar2 * fVar1;
  param_2[2] = -(fVar2 * fVar1);
  param_2[4] = param_1[2];
  param_2[5] = param_1[3];
  return;
}

