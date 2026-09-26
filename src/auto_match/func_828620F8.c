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
extern unsigned int lbl_82005340;
extern unsigned int lbl_82005344;


void fn_828620F8(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = lbl_82002AE0;
  fVar1 = param_2[10];
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfc | 2;
  fVar3 = lbl_82005344;
  fVar4 = lbl_82005340;
  fVar6 = lbl_82002C5C;
  fVar2 = param_2[0xe] * (fVar5 / fVar1);
  *(float *)(param_1 + 0x110) = fVar2;
  *(float *)(param_1 + 0x10c) = fVar2 + fVar5 / fVar1;
  fVar1 = (fVar5 / param_2[5]) * fVar3;
  fVar3 = (fVar5 / *param_2) * fVar3;
  fVar2 = param_2[0xd] * (fVar5 / param_2[5]) * fVar4;
  fVar4 = param_2[0xc] * (fVar5 / *param_2) * fVar4;
  *(float *)(param_1 + 0xfc) = (fVar1 + fVar2) * fVar6;
  *(float *)(param_1 + 0x100) = (fVar2 - fVar1) * fVar6;
  *(float *)(param_1 + 0x104) = (fVar4 - fVar3) * fVar6;
  *(float *)(param_1 + 0x108) = (fVar3 + fVar4) * fVar6;
  return;
}

