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


void fn_82CF00D8(float *param_1,float *param_2)

{
  *param_1 = *param_1 + *param_2;
  *(short *)(param_1 + 8) = *(short *)(param_2 + 8) + *(short *)(param_1 + 8);
  param_1[1] = param_2[1] + param_1[1];
  *(short *)((int)param_1 + 0x22) =
       *(short *)((int)param_2 + 0x22) + *(short *)((int)param_1 + 0x22);
  param_1[2] = param_2[2] + param_1[2];
  *(short *)(param_1 + 9) = *(short *)(param_2 + 9) + *(short *)(param_1 + 9);
  param_1[3] = param_2[3] + param_1[3];
  *(short *)((int)param_1 + 0x26) =
       *(short *)((int)param_2 + 0x26) + *(short *)((int)param_1 + 0x26);
  param_1[4] = param_2[4] + param_1[4];
  *(short *)(param_1 + 10) = *(short *)(param_2 + 10) + *(short *)(param_1 + 10);
  param_1[5] = param_2[5] + param_1[5];
  *(short *)((int)param_1 + 0x2a) =
       *(short *)((int)param_2 + 0x2a) + *(short *)((int)param_1 + 0x2a);
  param_1[6] = param_2[6] + param_1[6];
  *(short *)(param_1 + 0xb) = *(short *)(param_2 + 0xb) + *(short *)(param_1 + 0xb);
  param_1[7] = param_2[7] + param_1[7];
  *(short *)((int)param_1 + 0x2e) =
       *(short *)((int)param_2 + 0x2e) + *(short *)((int)param_1 + 0x2e);
  return;
}

