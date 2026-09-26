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
extern unsigned int lbl_821AAD20;


void fn_82B8FD40(int param_1,uint param_2)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  float *pfVar4;
  
  fVar1 = lbl_821AAD20;
  uVar3 = *(int *)(param_1 + 0x68) * 0x10 + param_2;
  if (uVar3 <= param_2) {
    return;
  }
  pfVar4 = (float *)(param_2 + 8);
  lVar2 = (ulonglong)((uVar3 - param_2) - 1 >> 4) + 1;
  do {
    if ((((pfVar4[-2] == *(float *)(param_1 + 0x24)) && (pfVar4[-1] == *(float *)(param_1 + 0x28)))
        && (*pfVar4 == *(float *)(param_1 + 0x2c))) && (pfVar4[1] == *(float *)(param_1 + 0x30))) {
      pfVar4[1] = fVar1;
      *pfVar4 = fVar1;
      pfVar4[-1] = fVar1;
      pfVar4[-2] = fVar1;
    }
    pfVar4 = pfVar4 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

