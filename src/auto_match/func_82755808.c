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


double fn_82755808(float *param_1,float *param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)(*param_2 - *param_1);
  dVar3 = (double)(param_2[1] - param_1[1]);
  dVar2 = (double)lbl_821AAD20;
  if ((dVar1 != dVar2) || (dVar3 != dVar2)) {
    dVar2 = (double)((float)((double)(param_3[1] - param_1[1]) * dVar3 +
                            (double)(float)((double)(*param_3 - *param_1) * dVar1)) /
                    (float)(dVar3 * dVar3 + (double)(float)(dVar1 * dVar1)));
  }
  return dVar2;
}

