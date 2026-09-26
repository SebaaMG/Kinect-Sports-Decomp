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


void fn_82800C70(double param_1,float *param_2)

{
  ushort uVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  short sStack_a;
  
  fVar2 = param_2[4];
  param_2[1] = *param_2;
  *param_2 = (float)param_1;
  *(undefined2 *)((int)param_2 + 0x16) = 0;
  if (fVar2 == 0.0) {
    if (param_1 < (double)lbl_82002AE0) {
      if ((double)lbl_821AAD20 <= param_1) {
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
    dVar3 = (double)(float)(param_1 - (double)(longlong)sStack_a);
  }
  else if (fVar2 == 1.4013e-45) {
    dVar3 = (double)lbl_82002AE0;
    if (param_1 <= dVar3) {
      dVar3 = (double)lbl_821AAD20;
      if (dVar3 <= param_1) {
        return;
      }
      sStack_a = (short)(int)param_1;
      sStack_a = sStack_a + -1;
    }
    else {
      sStack_a = (short)(int)param_1;
    }
    *(short *)((int)param_2 + 0x16) = sStack_a;
  }
  else {
    if (2 < (uint)fVar2) {
      return;
    }
    dVar3 = (double)lbl_821AAD20;
    dVar4 = (double)lbl_82002AE0;
    if ((dVar3 < param_1) && (param_1 < dVar4)) {
      return;
    }
    sStack_a = (short)(int)param_1;
    *(short *)((int)param_2 + 0x16) = sStack_a;
    if (param_1 <= dVar3) {
      *(short *)((int)param_2 + 0x16) = sStack_a + -1;
    }
    uVar1 = *(ushort *)((int)param_2 + 0x16);
    fVar2 = (float)(param_1 - (double)(longlong)(short)uVar1);
    *param_2 = fVar2;
    if ((longlong)(short)uVar1 ==
        ((longlong)((int)(short)uVar1 >> 1) + (ulonglong)((short)uVar1 < 0 && (uVar1 & 1) != 0) &
        0x7fffffff) << 1) {
      return;
    }
    dVar3 = (double)(float)(dVar4 - (double)fVar2);
    param_2[3] = -param_2[3];
  }
  *param_2 = (float)dVar3;
  return;
}

