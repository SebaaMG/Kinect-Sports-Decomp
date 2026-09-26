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


void fn_82A9FF70(undefined8 param_1,int *param_2,int param_3,int *param_4,ushort *param_5)

{
  *param_2 = *param_4 + param_3;
  param_2[1] = (uint)*(ushort *)(param_4 + 1);
  param_2[2] = (uint)*(ushort *)((int)param_4 + 6);
  param_2[3] = (uint)*(ushort *)(param_4 + 2);
  param_3 = param_4[4] + param_3;
  if (param_4[4] == 0) {
    param_3 = 0;
  }
  param_2[0xb] = param_3;
  param_2[7] = (uint)param_5[3];
  param_2[6] = (uint)param_5[2];
  param_2[4] = (uint)*param_5;
  param_2[5] = (uint)param_5[1];
  param_2[8] = (uint)param_5[4];
  param_2[9] = (uint)param_5[5];
  return;
}

