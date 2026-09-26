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
#define NAN(x) ((x) != (x))
extern int fn_82465328();
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


undefined8 fn_8246E720(double param_1,double param_2,int param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = (double)lbl_821CC160;
  if (((dVar5 < (double)*(float *)(param_3 + 0x18)) && (param_5 != 0)) &&
     (iVar1 = fn_82465328(*(undefined4 *)(param_3 + 0x440)), iVar1 != 0)) {
    dVar3 = (double)(float)(param_2 - (double)*(float *)(param_3 + 0x18));
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar3 < dVar5) << 2) | (uint)(NAN(dVar3) || NAN(dVar5)) << 2)) <
        0.0) {
      param_2 = (double)*(float *)(param_3 + 0x18);
    }
    dVar3 = (double)(float)(param_2 - (double)(float)(param_1 + (double)lbl_82193CC0));
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar3 < dVar5) << 2) | (uint)(NAN(dVar3) || NAN(dVar5)) << 2)) <
        0.0) {
      param_2 = (double)(float)(param_1 + (double)lbl_82193CC0);
    }
    *(float *)(param_3 + 0x18) = (float)param_2;
  }
  if (*(int *)(param_3 + 0x18) != 0) {
    dVar2 = (double)(float)((double)*(float *)(param_3 + 0x18) - param_1);
    dVar4 = -dVar2;
    dVar3 = dVar5;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar4 < dVar5) << 2) | (uint)(NAN(dVar4) || NAN(dVar5)) << 2)) <
        0.0) {
      dVar3 = dVar2;
    }
    *(float *)(param_3 + 0x18) = (float)dVar3;
    if (dVar3 == dVar5) {
      return 1;
    }
  }
  return 0;
}

