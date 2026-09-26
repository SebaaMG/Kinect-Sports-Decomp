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


double fn_822F9398(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x1e4);
  iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x2e0) + 0x3c))();
  if (iVar3 == 0) {
    dVar4 = (double)*(float *)(*(int *)(param_1 + 0xc) + 0x14);
  }
  else if (*(int *)(iVar2 + 0x184) == 0) {
    if ((*(int *)(iVar2 + 0x1a0) == 0) || (*(int *)(iVar2 + 0x18c) == 0)) {
      fVar1 = *(float *)(*(int *)(param_1 + 0xc) + 0x1c);
      dVar4 = (double)((*(float *)(*(int *)(param_1 + 0xc) + 0x20) - fVar1) *
                       *(float *)(iVar2 + 0x178) + fVar1);
    }
    else {
      dVar4 = (double)*(float *)(*(int *)(param_1 + 0xc) + 0x18);
    }
  }
  else {
    dVar4 = (double)*(float *)(*(int *)(param_1 + 0xc) + 0x1c);
  }
  return dVar4;
}

