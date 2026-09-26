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
extern float fRam8326b870;
extern unsigned int fStack_24;
extern unsigned int fStack_28;
extern int fn_825881D8();
extern int fn_825E4A78();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8326B85C;
extern unsigned int lbl_8326B8E8;
extern unsigned int lbl_8326B8F0;


double fn_82588280(double param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  float afStack_30 [2];
  float fStack_28;
  float fStack_24;
  
  dVar5 = (double)lbl_821CC160;
  afStack_30[0] = lbl_821CC160;
  if (param_1 == dVar5) {
    pfVar1 = &lbl_8326B85C;
  }
  else {
    fStack_28 = (float)param_1;
    pfVar1 = &fStack_28;
    fStack_24 = (float)param_1;
  }
  fn_825E4A78(param_2,param_4,param_3,pfVar1,afStack_30,0);
  uVar2 = (uint)param_3 & 0xffff;
  if (uVar2 != 10) {
    if (uVar2 == 0x20) {
      dVar4 = (double)fn_825881D8((double)lbl_821CA460,param_2);
    }
    else {
      iVar3 = *(int *)(&lbl_8326B8E8)[param_2];
      if (((int)uVar2 < iVar3) ||
         (iVar3 = uVar2 - iVar3, ((int *)(&lbl_8326B8E8)[param_2])[1] < (int)uVar2)) {
        iVar3 = 0;
      }
      dVar4 = (double)*(float *)(*(int *)(&lbl_8326B8F0 + param_2 * 4) + iVar3 * 0x18);
    }
    if (param_1 == dVar5) {
      dVar5 = (double)(float)((double)lbl_8326B85C * dVar4);
    }
    else {
      dVar5 = (double)(float)(dVar4 * param_1);
    }
  }
  return (double)((float)((double)fRam8326b870 + dVar5) + afStack_30[0]);
}

