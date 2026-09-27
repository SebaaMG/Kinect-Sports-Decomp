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
extern int fn_827594F8();
extern int fn_82759580();
extern float lbl_8200571C;


void fn_82759900(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  
  fn_827594F8();
  *(undefined1 *)(param_1 + 1) = 2;
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  *(undefined4 *)(param_1 + 0x14) = param_4[1];
  *(undefined4 *)(param_1 + 0x18) = param_4[2];
  *(undefined4 *)(param_1 + 0x1c) = param_4[3];
  *(undefined4 *)(param_1 + 0x20) = param_4[4];
  *(undefined4 *)(param_1 + 0x24) = param_4[5];
  fVar2 = lbl_8200571C;
  fVar1 = *(float *)(param_1 + 0x1c) * lbl_8200571C;
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) * lbl_8200571C;
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) * fVar2;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) * fVar2;
  *(float *)(param_1 + 0x1c) = fVar1;
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) * fVar2;
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) * fVar2;
  fn_82759580(param_1 + 8,param_3);
  return;
}

