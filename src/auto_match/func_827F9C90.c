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


void fn_827F9C90(double param_1,int param_2)

{
  double dVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  float fVar5;
  float *pfVar6;
  bool bVar7;
  undefined2 uStack_a;
  
  pfVar6 = (float *)(param_2 + 0xa4);
  dVar1 = (double)*(float *)(param_2 + 0xb0) * param_1 + (double)*pfVar6;
  fVar2 = (float)dVar1;
  uVar4 = *(uint *)(param_2 + 0xb4);
  *(float *)(param_2 + 0xa8) = *pfVar6;
  *pfVar6 = fVar2;
  *(undefined2 *)(param_2 + 0xba) = 0;
  fVar5 = lbl_82002AE0;
  if (uVar4 == 0) {
    if (fVar2 < lbl_82002AE0) {
      if (lbl_821AAD20 <= fVar2) {
        return;
      }
      uStack_a = (short)(int)dVar1;
      uStack_a = uStack_a + -1;
      *(short *)(param_2 + 0xba) = uStack_a;
    }
    else {
      uStack_a = (short)(int)dVar1;
      *(short *)(param_2 + 0xba) = uStack_a;
    }
    fVar2 = fVar2 - (float)(longlong)uStack_a;
  }
  else if (uVar4 == 1) {
    if (fVar2 <= lbl_82002AE0) {
      if (lbl_821AAD20 <= fVar2) {
        return;
      }
      uStack_a = (short)(int)dVar1;
      uStack_a = uStack_a + -1;
      fVar2 = lbl_821AAD20;
    }
    else {
      uStack_a = (short)(int)dVar1;
      fVar2 = lbl_82002AE0;
    }
    *(short *)(param_2 + 0xba) = uStack_a;
  }
  else {
    if (2 < uVar4) {
      return;
    }
    if ((lbl_821AAD20 < fVar2) && (fVar2 < lbl_82002AE0)) {
      return;
    }
    uStack_a = (short)(int)dVar1;
    bVar7 = fVar2 <= lbl_821AAD20;
    *(short *)(param_2 + 0xba) = uStack_a;
    if (bVar7) {
      *(short *)(param_2 + 0xba) = uStack_a + -1;
    }
    uVar3 = *(ushort *)(param_2 + 0xba);
    fVar2 = fVar2 - (float)(longlong)(short)uVar3;
    *pfVar6 = fVar2;
    if ((longlong)(short)uVar3 ==
        ((longlong)((int)(short)uVar3 >> 1) + (ulonglong)((short)uVar3 < 0 && (uVar3 & 1) != 0) &
        0x7fffffff) << 1) {
      return;
    }
    fVar2 = fVar5 - fVar2;
    *(float *)(param_2 + 0xb0) = -*(float *)(param_2 + 0xb0);
  }
  *pfVar6 = fVar2;
  return;
}

