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
extern int fn_82621800();
extern unsigned int lbl_821CA460;


void fn_825E0508(undefined8 param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  double extraout_f1;
  
  fVar1 = lbl_821CA460;
  *(float *)(param_2[3] + 4) =
       ((*(float *)(param_2[8] + 0xf4) * *(float *)(param_2[0xc] + 0x194) +
        *(float *)(param_2[2] + 4)) - *(float *)(param_2[7] + 4)) * *(float *)(param_2[0xc] + 4) +
       *(float *)(param_2[7] + 4);
  iVar2 = fn_82621800((double)*(float *)(param_2[1] + 0x38),
                            (double)((fVar1 - *(float *)(param_2[0xc] + 0xcc)) *
                                     *(float *)(param_2[3] + 4) + *(float *)(*param_2 + 0xc0)),
                            param_1);
  *(float *)(*(int *)(iVar2 + 4) + 0x38) = (float)extraout_f1;
  return;
}

