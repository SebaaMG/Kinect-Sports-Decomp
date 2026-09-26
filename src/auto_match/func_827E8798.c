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


undefined8 fn_827E8798(double param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_r6;
  undefined4 *in_r7;
  undefined4 uVar4;
  
  fVar3 = -(float)((double)(float)((double)in_r6[1] / param_3) * (double)(float)(param_2 - param_1)
                  - param_2);
  fVar2 = *in_r6 * *in_r6 + in_r6[2] * in_r6[2];
  if ((double)in_r6[1] <= param_3) {
    fVar1 = in_r6[1];
    if (lbl_821AAD20 <= fVar1) {
      if (fVar2 <= fVar3 * fVar3) {
        uVar4 = 3;
        goto LAB_827e8828;
      }
    }
    else if (fVar1 * fVar1 + fVar2 <= (float)(param_2 * param_2)) {
      uVar4 = 2;
LAB_827e8828:
      *in_r7 = uVar4;
      return 1;
    }
  }
  else if ((float)((double)in_r6[1] - param_3) * (float)((double)in_r6[1] - param_3) + fVar2 <=
           (float)(param_1 * param_1)) {
    uVar4 = 1;
    goto LAB_827e8828;
  }
  return 0;
}

