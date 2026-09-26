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
extern unsigned int *auStack_30;
extern int fn_82810328();
extern int fn_82810BE8();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


double fn_828120F0(int param_1,undefined4 *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_30 [24];
  
  uStack_40 = *param_2;
  uStack_3c = param_2[1];
  uStack_38 = param_2[2];
  dVar3 = (double)(float)param_2[3];
  fn_82810328(&uStack_40,param_1,auStack_30);
  dVar2 = (double)fn_82810BE8(auStack_30);
  fVar1 = lbl_821AAD20;
  if ((double)(float)((double)*(float *)(param_1 + 0xc) + dVar3) < dVar2) {
    fVar1 = (float)((double)(float)(dVar2 - (double)(float)param_2[3]) -
                   (double)*(float *)(param_1 + 0xc));
  }
  return (double)fVar1;
}

