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


void fn_827F9C88(double param_1,int param_2)

{
  float fVar1;
  ushort uVar2;
  uint uVar3;
  float *pfVar4;
  double dVar5;
  double dVar6;
  undefined2 uStack_a;
  
  pfVar4 = (float *)(param_2 + 0xa4);
  uVar3 = *(uint *)(param_2 + 0xb4);
  *(float *)(param_2 + 0xa8) = *pfVar4;
  *pfVar4 = (float)param_1;
  *(undefined2 *)(param_2 + 0xba) = 0;
  if (uVar3 == 0) {
    if (param_1 < (double)lbl_82002AE0) {
      if ((double)lbl_821AAD20 <= param_1) {
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
    dVar5 = (double)(float)(param_1 - (double)(longlong)uStack_a);
  }
  else if (uVar3 == 1) {
    dVar5 = (double)lbl_82002AE0;
    if (param_1 <= dVar5) {
      dVar5 = (double)lbl_821AAD20;
      if (dVar5 <= param_1) {
        return;
      }
      uStack_a = (short)(int)param_1;
      uStack_a = uStack_a + -1;
    }
    else {
      uStack_a = (short)(int)param_1;
    }
    *(short *)(param_2 + 0xba) = uStack_a;
  }
  else {
    if (2 < uVar3) {
      return;
    }
    dVar5 = (double)lbl_821AAD20;
    dVar6 = (double)lbl_82002AE0;
    if ((dVar5 < param_1) && (param_1 < dVar6)) {
      return;
    }
    uStack_a = (short)(int)param_1;
    *(short *)(param_2 + 0xba) = uStack_a;
    if (param_1 <= dVar5) {
      *(short *)(param_2 + 0xba) = uStack_a + -1;
    }
    uVar2 = *(ushort *)(param_2 + 0xba);
    fVar1 = (float)(param_1 - (double)(longlong)(short)uVar2);
    *pfVar4 = fVar1;
    if ((longlong)(short)uVar2 ==
        ((longlong)((int)(short)uVar2 >> 1) + (ulonglong)((short)uVar2 < 0 && (uVar2 & 1) != 0) &
        0x7fffffff) << 1) {
      return;
    }
    dVar5 = (double)(float)(dVar6 - (double)fVar1);
    *(float *)(param_2 + 0xb0) = -*(float *)(param_2 + 0xb0);
  }
  *pfVar4 = (float)dVar5;
  return;
}

