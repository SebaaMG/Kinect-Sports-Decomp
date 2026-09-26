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
extern int fn_82809558();
extern int fn_8280A5D8();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_821AAD20;


void fn_827EDED0(undefined8 param_1,double param_2,double param_3,double param_4)

{
  float fVar1;
  undefined8 uVar2;
  float *in_r7;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar3 = (double)fn_82F6A544();
  dVar6 = (double)lbl_821AAD20;
  dVar4 = (double)(float)(param_2 * param_2 - (double)(float)(dVar3 * param_3));
  if ((dVar4 < dVar6) ||
     ((dVar5 = (double)(float)(dVar3 * param_4 + param_2), dVar5 < dVar6 &&
      (dVar4 < (double)(float)(dVar5 * dVar5))))) {
code_r0x827edf80:
    uVar2 = 0;
  }
  else {
    dVar4 = (double)fn_82809558();
    if ((double)(float)(-param_2 - dVar4) < dVar6) {
      if ((dVar5 < dVar4) || (dVar4 < param_2)) goto code_r0x827edf80;
      dVar3 = (double)fn_8280A5D8(dVar3);
      fVar1 = (float)(dVar3 * (double)(float)(dVar4 - param_2));
    }
    else {
      dVar3 = (double)fn_8280A5D8(dVar3);
      fVar1 = -(float)(dVar3 * (double)(float)(dVar4 + param_2));
    }
    *in_r7 = fVar1;
    uVar2 = 1;
  }
  fn_82F6A590(uVar2);
  return;
}

