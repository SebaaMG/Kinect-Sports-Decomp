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
extern unsigned int lbl_8201435C;
extern unsigned int lbl_82057270;


double fn_829C9838(float *param_1,short param_2,short param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(longlong)param_2 - lbl_82057270;
  fVar2 = (float)(longlong)param_3 - lbl_8201435C;
  return (double)((param_1[5] * fVar2 +
                   (param_1[1] * fVar2 + param_1[3] * fVar1) * fVar2 + param_1[2] * fVar1 * fVar1 +
                  param_1[8]) * fVar2 +
                  ((*param_1 * fVar1 + param_1[4]) * fVar1 + param_1[6] * fVar2 + param_1[7]) *
                  fVar1 + param_1[9]);
}

