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
extern unsigned int uStack_a;


void fn_827F9F80(double param_1,int param_2)

{
  float fVar1;
  ushort uVar2;
  uint uVar3;
  float fVar4;
  float *pfVar5;
  bool bVar6;
  undefined2 uStack_a;
  
  pfVar5 = (float *)(param_2 + 0xa4);
  *pfVar5 = (float)param_1;
  param_1 = (double)*(float *)(param_2 + 0xb0) * (double)lbl_821AAD20 + param_1;
  fVar1 = (float)param_1;
  uVar3 = *(uint *)(param_2 + 0xb4);
  *(float *)(param_2 + 0xa8) = *pfVar5;
  *pfVar5 = fVar1;
  *(undefined2 *)(param_2 + 0xba) = 0;
  fVar4 = lbl_82002AE0;
  if (uVar3 == 0) {
    if (fVar1 < lbl_82002AE0) {
      if (lbl_821AAD20 <= fVar1) {
        return;
      }
      uStack_a = (short)(int)param_1;
      uStack_a = uStack_a + -1;
      *(short *)(param_2 + 0xba) = uStack_a;
    }
    else {
      uStack_a = (short)(int)param_1;
      *(short *)(param_2 + 0xba) = uStack_a;
    }
    fVar1 = fVar1 - (float)(longlong)uStack_a;
  }
  else if (uVar3 == 1) {
    if (fVar1 <= lbl_82002AE0) {
      if (lbl_821AAD20 <= fVar1) {
        return;
      }
      uStack_a = (short)(int)param_1;
      uStack_a = uStack_a + -1;
      fVar1 = lbl_821AAD20;
    }
    else {
      uStack_a = (short)(int)param_1;
      fVar1 = lbl_82002AE0;
    }
    *(short *)(param_2 + 0xba) = uStack_a;
  }
  else {
    if (2 < uVar3) {
      return;
    }
    if ((lbl_821AAD20 < fVar1) && (fVar1 < lbl_82002AE0)) {
      return;
    }
    uStack_a = (short)(int)param_1;
    bVar6 = fVar1 <= lbl_821AAD20;
    *(short *)(param_2 + 0xba) = uStack_a;
    if (bVar6) {
      *(short *)(param_2 + 0xba) = uStack_a + -1;
    }
    uVar2 = *(ushort *)(param_2 + 0xba);
    fVar1 = fVar1 - (float)(longlong)(short)uVar2;
    *pfVar5 = fVar1;
    if ((longlong)(short)uVar2 ==
        ((longlong)((int)(short)uVar2 >> 1) + (ulonglong)((short)uVar2 < 0 && (uVar2 & 1) != 0) &
        0x7fffffff) << 1) {
      return;
    }
    fVar1 = fVar4 - fVar1;
    *(float *)(param_2 + 0xb0) = -*(float *)(param_2 + 0xb0);
  }
  *pfVar5 = fVar1;
  return;
}

