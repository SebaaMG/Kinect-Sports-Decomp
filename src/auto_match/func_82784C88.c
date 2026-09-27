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
extern float lbl_82002C5C;
extern unsigned int lbl_821AAD20;


void fn_82784C88(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 uVar8;
  
  fVar1 = *(float *)(param_1 + 0x18);
  *param_2 = fVar1;
  param_2[1] = *(float *)(param_1 + 0x1c);
  fVar7 = lbl_821AAD20;
  if (fVar1 < lbl_821AAD20) {
    *param_2 = lbl_821AAD20;
  }
  if (param_2[1] < fVar7) {
    param_2[1] = fVar7;
  }
  fVar1 = *param_2;
  fVar5 = fVar1 + *(float *)(param_1 + 0x20);
  fVar2 = param_2[1];
  param_2[3] = fVar5;
  fVar4 = lbl_82002AE0;
  param_2[4] = *(float *)(param_1 + 0x24) + fVar2;
  fVar6 = fVar4;
  if (fVar5 != fVar7) {
    fVar6 = fVar1 / fVar5;
  }
  fVar3 = param_2[4];
  param_2[7] = fVar6;
  if (fVar3 != fVar7) {
    fVar4 = fVar2 / fVar3;
  }
  param_2[8] = fVar4;
  param_2[9] = fVar1 * *(float *)(param_1 + 0xc);
  param_2[10] = fVar2 * *(float *)(param_1 + 0xc);
  fVar6 = lbl_82002C5C;
  fVar4 = (fVar3 + fVar5) * lbl_82002C5C;
  param_2[0xb] = fVar5 * *(float *)(param_1 + 0xc);
  param_2[0xc] = fVar3 * *(float *)(param_1 + 0xc);
  param_2[5] = fVar4;
  param_2[2] = (fVar2 + fVar1) * fVar6;
  *(bool *)(param_2 + 0xd) = fVar7 < fVar1;
  *(bool *)((int)param_2 + 0x35) = fVar7 < fVar2;
  *(bool *)((int)param_2 + 0x36) = fVar7 < *(float *)(param_1 + 0x20);
  *(bool *)((int)param_2 + 0x37) = fVar7 < *(float *)(param_1 + 0x24);
  if (((fVar7 < fVar1) || (fVar7 < fVar2)) ||
     (uVar8 = 0, *(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x14))) {
    uVar8 = 1;
  }
  *(undefined1 *)(param_2 + 0xe) = uVar8;
  *(bool *)((int)param_2 + 0x39) = fVar5 < fVar3;
  if (fVar5 < fVar3) {
    fVar3 = fVar5 / fVar3;
  }
  else {
    fVar3 = fVar3 / fVar5;
  }
  param_2[6] = fVar3;
  return;
}

