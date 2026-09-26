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


void fn_82CF0998(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  if ((-1 < iVar1) && (iVar1 < 8)) {
    iVar2 = (iVar1 + 0x10) * 2;
    *(float *)(iVar1 * 4 + param_1) =
         (float)(uint)(*(int *)(param_4 + 4) - *(int *)(param_3 + 4)) * *(float *)(param_2 + 0x10) +
         *(float *)(iVar1 * 4 + param_1);
    *(short *)(iVar2 + param_1) = *(short *)(iVar2 + param_1) + 1;
  }
  iVar1 = *(int *)(param_2 + 8);
  if ((-1 < iVar1) && (iVar1 < 8)) {
    iVar2 = (iVar1 + 0x10) * 2;
    *(float *)(iVar1 * 4 + param_1) =
         (float)(uint)(*(int *)(param_4 + 8) - *(int *)(param_3 + 8)) * *(float *)(param_2 + 0x14) +
         *(float *)(iVar1 * 4 + param_1);
    *(short *)(iVar2 + param_1) = *(short *)(iVar2 + param_1) + 1;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    *(double *)(param_1 + 0x40) =
         (double)*(float *)(param_2 + 0x10) * (double)*(uint *)(param_3 + 4);
    return;
  }
  if (*(int *)(param_2 + 0xc) != 1) {
    return;
  }
  *(double *)(param_1 + 0x40) = (double)*(float *)(param_2 + 0x14) * (double)*(uint *)(param_3 + 8);
  return;
}

