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
extern int fn_8261FA78();
extern unsigned int lbl_821CC160;


void fn_825E13D8(int *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  iVar3 = param_1[1];
  dVar4 = (double)*(float *)(iVar3 + 0x30);
  fVar1 = *(float *)(iVar3 + 0x34);
  *(undefined4 *)(iVar3 + 0x38) = *(undefined4 *)(*param_1 + 0xc0);
  iVar3 = param_1[1];
  *(float *)(iVar3 + 0x3c) =
       (float)((double)*(float *)(iVar3 + 0x30) - dVar4) + *(float *)(iVar3 + 0x3c);
  iVar3 = param_1[1];
  if (*(int *)(param_2 + 0x90) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_8261FA78((double)*(float *)(iVar3 + 0x38),(double)*(float *)(iVar3 + 0x34),
                              (double)*(float *)(iVar3 + 0x30),(double)*(float *)(*param_1 + 0xc0),
                              param_2);
  }
  iVar2 = param_1[1];
  if (iVar3 == 0) {
    dVar5 = (double)lbl_821CC160;
    if (*(int *)(param_2 + 0x90) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_8261FA78((double)*(float *)(iVar2 + 0x38),(double)*(float *)(iVar2 + 0x34),
                                dVar5,(double)*(float *)(*param_1 + 0xc0),param_2);
    }
    if (iVar3 != 0) {
      iVar3 = param_1[1];
      *(float *)(iVar3 + 0x40) = (fVar1 - *(float *)(iVar3 + 0x34)) + *(float *)(iVar3 + 0x40);
      *(float *)(param_1[1] + 0x34) = fVar1;
      *(float *)(param_1[1] + 0x3c) = (float)((double)*(float *)(param_1[1] + 0x3c) - dVar4);
      *(float *)(param_1[1] + 0x30) = (float)dVar5;
    }
  }
  else {
    *(float *)(iVar2 + 0x40) = (fVar1 - *(float *)(iVar2 + 0x34)) + *(float *)(iVar2 + 0x40);
    *(float *)(param_1[1] + 0x34) = fVar1;
  }
  return;
}

