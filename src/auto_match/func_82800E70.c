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


void fn_82800E70(double param_1,float *param_2)

{
  float fVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  short sStack_a;
  
  *param_2 = (float)param_1;
  param_1 = (double)param_2[3] * (double)lbl_821AAD20 + param_1;
  fVar1 = (float)param_1;
  fVar3 = param_2[4];
  param_2[1] = *param_2;
  *param_2 = fVar1;
  *(undefined2 *)((int)param_2 + 0x16) = 0;
  fVar4 = lbl_82002AE0;
  if (fVar3 == 0.0) {
    if (fVar1 < lbl_82002AE0) {
      if (lbl_821AAD20 <= fVar1) {
        return;
      }
      sStack_a = (short)(int)param_1;
      sStack_a = sStack_a + -1;
      *(short *)((int)param_2 + 0x16) = sStack_a;
    }
    else {
      sStack_a = (short)(int)param_1;
      *(short *)((int)param_2 + 0x16) = sStack_a;
    }
    fVar1 = fVar1 - (float)(longlong)sStack_a;
  }
  else if (fVar3 == 1.4013e-45) {
    if (fVar1 <= lbl_82002AE0) {
      if (lbl_821AAD20 <= fVar1) {
        return;
      }
      sStack_a = (short)(int)param_1;
      sStack_a = sStack_a + -1;
      fVar1 = lbl_821AAD20;
    }
    else {
      sStack_a = (short)(int)param_1;
      fVar1 = lbl_82002AE0;
    }
    *(short *)((int)param_2 + 0x16) = sStack_a;
  }
  else {
    if (2 < (uint)fVar3) {
      return;
    }
    if ((lbl_821AAD20 < fVar1) && (fVar1 < lbl_82002AE0)) {
      return;
    }
    sStack_a = (short)(int)param_1;
    bVar5 = fVar1 <= lbl_821AAD20;
    *(short *)((int)param_2 + 0x16) = sStack_a;
    if (bVar5) {
      *(short *)((int)param_2 + 0x16) = sStack_a + -1;
    }
    uVar2 = *(ushort *)((int)param_2 + 0x16);
    fVar1 = fVar1 - (float)(longlong)(short)uVar2;
    *param_2 = fVar1;
    if ((longlong)(short)uVar2 ==
        ((longlong)((int)(short)uVar2 >> 1) + (ulonglong)((short)uVar2 < 0 && (uVar2 & 1) != 0) &
        0x7fffffff) << 1) {
      return;
    }
    fVar1 = fVar4 - fVar1;
    param_2[3] = -param_2[3];
  }
  *param_2 = fVar1;
  return;
}

