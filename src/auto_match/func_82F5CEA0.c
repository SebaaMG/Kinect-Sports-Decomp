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
extern float fRam8326316c;
extern unsigned int lbl_82002AE0;


void fn_82F5CEA0(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  fVar2 = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x28) = fVar2;
  if (1 < iVar1) {
    if ((iVar1 < 3) || (ABS(*(float *)(param_1 + 0x2c) / fVar2 - lbl_82002AE0) <= fRam8326316c)) {
      fVar2 = (lbl_82002AE0 / (float)(longlong)(iVar1 + -1)) * (fVar2 - *(float *)(param_1 + 0x2c))
              + *(float *)(param_1 + 0x2c);
    }
    else {
      *(undefined4 *)(param_1 + 0x30) = 2;
    }
    *(float *)(param_1 + 0x2c) = fVar2;
  }
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x20);
  return;
}

