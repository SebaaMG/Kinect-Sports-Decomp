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
extern int fn_825E4220();
extern int fn_825E42D8();
extern unsigned int lbl_821CC160;


void fn_825E4788(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  double dVar4;
  
  *(float *)(param_2 + 0x34) = (float)(param_1 + (double)*(float *)(param_2 + 0x34));
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 0x78)) {
    pfVar3 = (float *)(param_2 + 0xc0);
    dVar4 = (double)lbl_821CC160;
    do {
      if ((dVar4 < (double)*pfVar3) &&
         (fVar1 = (float)((double)*pfVar3 - param_1), *pfVar3 = fVar1, (double)fVar1 < dVar4)) {
        if (pfVar3[-1] == 0.0) {
          fn_825E42D8(param_2,pfVar3 + -8,0);
        }
        else {
          fn_825E4220();
        }
      }
      iVar2 = iVar2 + 1;
      pfVar3 = pfVar3 + 0xc;
    } while (iVar2 < *(int *)(param_2 + 0x78));
  }
  return;
}

