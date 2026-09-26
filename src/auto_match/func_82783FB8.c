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
extern unsigned int lbl_821AAD20;


void fn_82783FB8(int param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  
  fVar1 = lbl_82002AE0;
  *param_2 = lbl_82002AE0;
  fVar2 = lbl_821AAD20;
  *param_3 = fVar1;
  *param_4 = fVar2;
  *param_5 = fVar2;
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  uVar3 = 1;
  fVar1 = *(float *)**(undefined4 **)(param_1 + 0x14);
  *param_4 = fVar1;
  *param_2 = fVar1;
  fVar1 = *(float *)(**(int **)(param_1 + 0x14) + 4);
  *param_5 = fVar1;
  *param_3 = fVar1;
  if (*(uint *)(param_1 + 8) < 2) {
    return;
  }
  do {
    pfVar4 = (float *)(*(int *)((uVar3 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x14)) +
                      (uVar3 & 0xff) * 8);
    if (*pfVar4 < *param_2) {
      *param_2 = *pfVar4;
    }
    if (pfVar4[1] < *param_3) {
      *param_3 = pfVar4[1];
    }
    if (*param_4 < *pfVar4) {
      *param_4 = *pfVar4;
    }
    if (*param_5 < pfVar4[1]) {
      *param_5 = pfVar4[1];
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(uint *)(param_1 + 8));
  return;
}

