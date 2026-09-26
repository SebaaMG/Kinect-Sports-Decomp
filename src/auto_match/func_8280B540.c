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


bool fn_8280B540(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)(param_1 * param_1);
  return (param_2[0xf] - param_3[0xf]) * (param_2[0xf] - param_3[0xf]) <= fVar1 &&
         ((param_2[0xb] - param_3[0xb]) * (param_2[0xb] - param_3[0xb]) <= fVar1 &&
         ((param_2[7] - param_3[7]) * (param_2[7] - param_3[7]) <= fVar1 &&
         ((param_2[3] - param_3[3]) * (param_2[3] - param_3[3]) <= fVar1 &&
         ((param_2[0xe] - param_3[0xe]) * (param_2[0xe] - param_3[0xe]) <= fVar1 &&
         ((param_2[10] - param_3[10]) * (param_2[10] - param_3[10]) <= fVar1 &&
         ((param_2[6] - param_3[6]) * (param_2[6] - param_3[6]) <= fVar1 &&
         ((param_2[2] - param_3[2]) * (param_2[2] - param_3[2]) <= fVar1 &&
         ((param_2[0xd] - param_3[0xd]) * (param_2[0xd] - param_3[0xd]) <= fVar1 &&
         ((param_2[9] - param_3[9]) * (param_2[9] - param_3[9]) <= fVar1 &&
         ((param_2[5] - param_3[5]) * (param_2[5] - param_3[5]) <= fVar1 &&
         ((param_2[1] - param_3[1]) * (param_2[1] - param_3[1]) <= fVar1 &&
         ((param_2[0xc] - param_3[0xc]) * (param_2[0xc] - param_3[0xc]) <= fVar1 &&
         ((param_2[8] - param_3[8]) * (param_2[8] - param_3[8]) <= fVar1 &&
         ((param_2[4] - param_3[4]) * (param_2[4] - param_3[4]) <= fVar1 &&
         (*param_2 - *param_3) * (*param_2 - *param_3) <= fVar1))))))))))))));
}

