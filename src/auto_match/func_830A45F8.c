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
extern float fRam831bd2e4;
extern float fRam831bd2e8;
extern unsigned int lbl_82005344;
extern unsigned int lbl_821347B0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fn_830A45F8(double param_1,double param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = (double)*(float *)(param_3 + 0x10);
  dVar3 = (double)(float)((double)fRam831bd2e4 * param_2);
  dVar5 = (double)(float)(-(double)*(float *)(param_3 + 4) - (double)(float)(param_1 - dVar4));
  dVar2 = dVar3;
  if ((float)((double)(float)(-(double)fRam831bd2e8 * dVar4) - dVar3) < 0.0) {
    dVar2 = (double)(float)(-(double)fRam831bd2e8 * dVar4);
  }
  dVar1 = (double)(float)(dVar2 + dVar4);
  dVar4 = (double)(float)((double)(float)(param_1 - dVar4) - dVar2);
  if ((double)(float)(dVar2 * (double)lbl_82005344 + dVar3) < dVar5) {
    dVar1 = (double)(float)(dVar1 - dVar5);
    dVar4 = (double)(float)(dVar5 + dVar4);
  }
  dVar2 = (double)lbl_821347B0;
  if ((float)(dVar1 - (double)lbl_821347B0) < 0.0) {
    dVar2 = dVar1;
  }
  *(float *)(param_3 + 0x10) = (float)dVar2;
  return dVar4;
}

