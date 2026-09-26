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
extern unsigned int lbl_82005344;
extern unsigned int lbl_82175388;


void fn_82D0AEE8(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  uVar4 = *(int *)(param_1 + 4) * 0x19660d + 0x3c6ef35f;
  *(uint *)(param_1 + 4) = uVar4;
  fVar3 = lbl_82175388;
  fVar2 = lbl_82005344;
  fVar1 = lbl_82002AE0;
  *param_2 = (float)uVar4 * lbl_82175388 * lbl_82005344 - lbl_82002AE0;
  uVar4 = *(int *)(param_1 + 4) * 0x19660d + 0x3c6ef35f;
  *(uint *)(param_1 + 4) = uVar4;
  param_2[1] = (float)uVar4 * fVar3 * fVar2 - fVar1;
  uVar4 = *(int *)(param_1 + 4) * 0x19660d + 0x3c6ef35f;
  *(uint *)(param_1 + 4) = uVar4;
  param_2[2] = (float)uVar4 * fVar3 * fVar2 - fVar1;
  uVar4 = *(int *)(param_1 + 4) * 0x19660d + 0x3c6ef35f;
  *(uint *)(param_1 + 4) = uVar4;
  param_2[3] = (float)uVar4 * fVar3 * fVar2 - fVar1;
  return;
}

