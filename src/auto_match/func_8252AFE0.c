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
extern unsigned int lbl_821CA460;


void fn_8252AFE0(double param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  
  fVar1 = lbl_821CA460;
  iVar4 = 0x10;
  pfVar2 = (float *)(param_2 + 0x1fc);
  lVar5 = 2;
  dVar6 = (double)lbl_821CA460;
  do {
    *pfVar2 = (float)param_1;
    *(float *)(param_2 + 0x200 + iVar4) = fVar1;
    uVar3 = *(uint *)(iVar4 + param_2 + 0x1d0);
    if (dVar6 <= param_1) {
      uVar3 = uVar3 & 0xffffffdf;
    }
    else {
      uVar3 = uVar3 | 0x20;
    }
    *(uint *)(iVar4 + param_2 + 0x1d0) = uVar3;
    iVar4 = iVar4 + 4;
    pfVar2 = pfVar2 + 4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

