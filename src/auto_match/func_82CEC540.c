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


void fn_82CEC540(int param_1,int *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  longlong lVar5;
  
  pfVar3 = (float *)(param_1 + 0x20);
  iVar4 = 0;
  lVar5 = 3;
  fVar2 = lbl_821AAD20;
  do {
    if ((iVar4 < 0) && (fVar1 = pfVar3[-8], fVar2 <= ABS(fVar1))) {
      *param_2 = iVar4;
      *param_3 = 0;
      fVar2 = ABS(fVar1);
    }
    if ((iVar4 < 1) && (fVar1 = pfVar3[-4], fVar2 <= ABS(fVar1))) {
      *param_2 = iVar4;
      *param_3 = 1;
      fVar2 = ABS(fVar1);
    }
    if ((iVar4 < 2) && (fVar1 = *pfVar3, fVar2 <= ABS(fVar1))) {
      *param_2 = iVar4;
      *param_3 = 2;
      fVar2 = ABS(fVar1);
    }
    iVar4 = iVar4 + 1;
    pfVar3 = pfVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

