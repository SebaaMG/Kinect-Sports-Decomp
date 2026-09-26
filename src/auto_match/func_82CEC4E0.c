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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int lbl_821AAD20;


double fn_82CEC4E0(int param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  pfVar2 = (float *)(param_1 + 0x20);
  lVar4 = 3;
  fVar1 = lbl_821AAD20;
  do {
    if (iVar3 != 0) {
      fVar1 = pfVar2[-8] * pfVar2[-8] + fVar1;
    }
    if (iVar3 != 1) {
      fVar1 = pfVar2[-4] * pfVar2[-4] + fVar1;
    }
    if (iVar3 != 2) {
      fVar1 = *pfVar2 * *pfVar2 + fVar1;
    }
    iVar3 = iVar3 + 1;
    pfVar2 = pfVar2 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return (double)SQRT(fVar1);
}

