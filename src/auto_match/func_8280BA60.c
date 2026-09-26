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


void fn_8280BA60(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8,double param_9,double param_10,
                  double param_11,double param_12,double param_13,float *param_14)

{
  float in_stack_00000084;
  float in_stack_0000008c;
  float in_stack_00000094;
  
  param_14[0xe] = (float)param_12;
  param_14[3] = (float)param_13;
  *param_14 = (float)param_1;
  param_14[4] = (float)param_2;
  param_14[8] = (float)param_3;
  param_14[0xc] = (float)param_4;
  param_14[1] = (float)param_5;
  param_14[5] = (float)param_6;
  param_14[9] = (float)param_7;
  param_14[0xd] = (float)param_8;
  param_14[2] = (float)param_9;
  param_14[6] = (float)param_10;
  param_14[10] = (float)param_11;
  param_14[7] = in_stack_00000084;
  param_14[0xb] = in_stack_0000008c;
  param_14[0xf] = in_stack_00000094;
  return;
}

