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


void fn_82784B90(undefined8 param_1,float *param_2,float *param_3,float *param_4,int param_5)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_3[1] - param_2[1]) * (lbl_82002AE0 / param_2[2]);
  fVar2 = (*param_2 - *param_3) * (lbl_82002AE0 / param_2[2]);
  *(float *)(param_5 + 0x20) = *param_4 * fVar1;
  *(float *)(param_5 + 0x24) = *param_4 * fVar2;
  *(float *)(param_5 + 0x50) = fVar1 * param_4[1];
  *(float *)(param_5 + 0x54) = fVar2 * param_4[1];
  *(float *)(param_5 + 0x28) = param_4[3] * fVar1;
  *(float *)(param_5 + 0x2c) = param_4[3] * fVar2;
  *(float *)(param_5 + 0x58) = param_4[4] * fVar1;
  fVar1 = param_4[4];
  *(float *)(param_5 + 0x5c) = fVar1 * fVar2;
  *(float *)(param_5 + 0xa0) = *param_2 - *(float *)(param_5 + 0x28);
  *(float *)(param_5 + 0xa4) = param_2[1] - *(float *)(param_5 + 0x2c);
  *(float *)(param_5 + 0xa8) = *param_2 + *(float *)(param_5 + 0x58);
  *(float *)(param_5 + 0xac) = fVar1 * fVar2 + param_2[1];
  *(float *)(param_5 + 0xb0) = param_4[3];
  fVar1 = param_4[4];
  *(undefined1 *)(param_5 + 0xda) = 0;
  *(float *)(param_5 + 0xb4) = fVar1;
  *(undefined1 *)(param_5 + 0xd8) = 0;
  *(undefined1 *)(param_5 + 0xd5) = 0;
  *(undefined1 *)(param_5 + 0xd4) = 0;
  return;
}

