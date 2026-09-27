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
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_82027070;
extern float lbl_820288C0;
extern float lbl_8202EE48;
extern unsigned int lbl_8202EE4C;
extern unsigned int lbl_8202EE50;


void fn_82B98E70(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = lbl_82005CCC;
  if (*(int *)(param_1 + 4) == 0x1a200153) {
    fVar1 = lbl_82027070;
  }
  *(float *)(param_1 + 0x80) = fVar1;
  fVar6 = lbl_8202EE48;
  fVar5 = lbl_82002C5C;
  fVar2 = *(float *)(param_1 + 0x30) * fVar1 + lbl_82002C5C;
  fVar3 = *(float *)(param_1 + 0x28) * lbl_820288C0 + lbl_82002C5C;
  fVar1 = lbl_82002AE0 / fVar1;
  fVar4 = *(float *)(param_1 + 0x24) * lbl_8202EE48 + lbl_82002C5C;
  *(float *)(param_1 + 0x84) = fVar1;
  fVar8 = lbl_8202EE50;
  fVar7 = lbl_8202EE4C;
  *(float *)(param_1 + 0x24) = (float)(longlong)(int)fVar4 * lbl_8202EE4C;
  *(float *)(param_1 + 0x28) = (float)(longlong)(int)fVar3 * fVar8;
  *(float *)(param_1 + 0x2c) =
       (float)(longlong)(int)(*(float *)(param_1 + 0x2c) * fVar6 + fVar5) * fVar7;
  *(float *)(param_1 + 0x30) = (float)(longlong)(int)fVar2 * fVar1;
  return;
}

