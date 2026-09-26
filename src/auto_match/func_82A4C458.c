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
extern unsigned int lbl_82005730;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_c;


void fn_82A4C458(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  double dVar4;
  undefined4 uStack_c;
  
  fVar3 = lbl_82002AE0;
  uVar1 = *(uint *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x44) = uVar1 * param_2;
  if (*(float *)(param_1 + 0x38) == fVar3) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x34) = lbl_821AAD20;
    uStack_c = param_2;
  }
  else {
    dVar4 = (double)((float)param_2 * *(float *)(param_1 + 0x38));
    if ((*(float *)(param_1 + 0x5c) == fVar3) && (*(float *)(param_1 + 0x60) == fVar3)) {
      uStack_c = (uint)(longlong)(dVar4 + lbl_82005730);
    }
    else {
      trapWord(6,(ulonglong)uVar1,0);
      uVar2 = *(uint *)(param_1 + 0x4c);
      trapWord(5,(ulonglong)uVar1 &
                 ~((((ulonglong)uVar2 & 0x7fffffff) << 1 | (ulonglong)(uVar2 >> 0x1f)) - 1),0xffff);
      uStack_c = (uint)(longlong)((double)*(float *)(param_1 + 0x34) + dVar4);
      uStack_c = uStack_c + (int)uVar2 / (int)uVar1 + 1;
    }
  }
  *(uint *)(param_1 + 0x40) = uVar1 * uStack_c;
  return;
}

