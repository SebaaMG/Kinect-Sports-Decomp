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
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern int fn_826EBD10();
extern int fn_827847F8();
extern unsigned int lbl_82015528;
extern unsigned int lbl_821AAD20;


void fn_82784920(double param_1,double param_2,double param_3,double param_4,int param_5)

{
  float fVar1;
  ulonglong uVar2;
  float *pfVar3;
  double dVar4;
  double dVar5;
  float fStack_20;
  float fStack_1c;
  
  uVar2 = (ulonglong)*(uint *)(param_5 + 8) - 1;
  pfVar3 = (float *)(*(int *)(((uint)((uVar2 & 0xffffffff) >> 6) & 0x3fffffc) +
                             *(int *)(param_5 + 0x14)) + ((uint)((uVar2 & 0xffffffff) << 3) & 0x7f8)
                    );
  dVar4 = (double)*pfVar3;
  dVar5 = (double)pfVar3[1];
  fVar1 = (float)(param_2 - dVar5) * (float)(param_3 - param_1) -
          (float)(param_1 - dVar4) * (float)(param_4 - param_2);
  if (fVar1 < lbl_821AAD20) {
    fVar1 = -fVar1;
  }
  if (lbl_82015528 <= fVar1) {
    fn_827847F8(dVar4,dVar5,param_1,param_2,param_5);
  }
  else {
    fStack_20 = (float)param_3;
    fStack_1c = (float)param_4;
    fn_826EBD10(param_5 + 8,&fStack_20);
    *(int *)(*(int *)(param_5 + 0x28) + 4) = *(int *)(*(int *)(param_5 + 0x28) + 4) + 1;
  }
  return;
}

