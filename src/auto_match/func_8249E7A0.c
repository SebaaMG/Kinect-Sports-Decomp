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
extern unsigned int fStack_8;
extern unsigned int lbl_821CC160;
extern V16 vectorSubtractFloatingPoint();


undefined4 fn_8249E7A0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  bool bVar5;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float afStack_10 [2];
  float fStack_8;
  
  fVar1 = lbl_821CC160;
  if (param_2 == 1) {
    puVar3 = (undefined4 *)(param_1 + 0x70U & 0xfffffff0);
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    uVar8 = puVar3[3];
    vectorSubtractFloatingPoint(in_vs45,in_vs32);
    puVar4 = (undefined4 *)((int)afStack_10 + in_r0 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar6;
    puVar4[2] = uVar7;
    puVar4[3] = uVar8;
    if (afStack_10[0] < fVar1) {
      return 0;
    }
    if (fVar1 < afStack_10[0]) {
      return 1;
    }
    bVar5 = fVar1 < fStack_8;
  }
  else {
    if (param_2 == 2) {
      fVar1 = *(float *)(param_1 + 0xb0);
      fVar2 = *(float *)(param_1 + 0xb4);
    }
    else {
      if (param_2 == 3) {
        return *(undefined4 *)(param_1 + 0xd0);
      }
      if (param_2 != 4) {
        if (param_2 != 5) {
          return 0;
        }
        if (*(float *)(param_1 + 0xb8) < *(float *)(param_1 + 0xbc)) {
          return 1;
        }
        return 0;
      }
      fVar1 = *(float *)(param_1 + 0xb8);
      fVar2 = *(float *)(param_1 + 0xbc);
    }
    bVar5 = fVar2 < fVar1;
  }
  if (bVar5) {
    return 1;
  }
  return 0;
}

