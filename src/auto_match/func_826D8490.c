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
extern float lbl_82005718;


void fn_826D8490(float *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x1c) + 0xc) + 0x20);
  fVar2 = *(float *)(iVar1 + 0x34) * lbl_82005718;
  fVar3 = *(float *)(iVar1 + 0x38) * lbl_82005718;
  fVar4 = *(float *)(iVar1 + 0x3c) * lbl_82005718;
  *param_1 = *(float *)(iVar1 + 0x30) * lbl_82005718;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  param_1[3] = fVar4;
  return;
}

