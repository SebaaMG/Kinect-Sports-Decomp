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
extern unsigned int lbl_821AAD20;


void fn_82A8B860(int *param_1,float *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_1 + 8))();
  if (param_2 != (float *)0x0) {
    fVar1 = lbl_821AAD20;
    if (-1 < iVar2) {
      fVar1 = (float)(param_1[0x1662] - 1) / (float)param_1[0x1663];
    }
    *param_2 = fVar1;
  }
  if (param_3 != (int *)0x0) {
    if (iVar2 < 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_1[0x1664];
    }
    *param_3 = iVar3;
  }
  if (param_4 != (int *)0x0) {
    if (iVar2 < 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_1[0x1665];
    }
    *param_4 = iVar3;
  }
  if (param_5 != (int *)0x0) {
    if (iVar2 < 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_1[0x1666];
    }
    *param_5 = iVar3;
  }
  if (param_6 != (int *)0x0) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1[0x1667];
    }
    *param_6 = iVar2;
  }
  return;
}

