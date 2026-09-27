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
extern float lbl_820D1764;
extern float lbl_82196284;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82A8C020(int param_1,uint *param_2,float *param_3)

{
  float fVar1;
  
  param_3[1] = *(float *)(param_1 + 8) * (float)param_2[1] + *(float *)(param_1 + 0x14);
  fVar1 = (float)param_2[2] * *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x18);
  param_3[2] = fVar1;
  if ((param_2[1] & 1) != 0) {
    param_3[2] = *(float *)(param_1 + 0xc) * lbl_820D1764 + fVar1;
  }
  fVar1 = (float)*param_2 * *(float *)(param_1 + 4) + *(float *)(param_1 + 0x10);
  *param_3 = fVar1;
  if (((param_2[2] ^ param_2[1]) & 1) == 0) {
    return;
  }
  *param_3 = *(float *)(param_1 + 4) * lbl_82196284 + fVar1;
  return;
}

