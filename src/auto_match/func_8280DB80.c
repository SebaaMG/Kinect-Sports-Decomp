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
extern int fn_8280A550();
extern int fn_8280A668();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201DCB8;


void fn_8280DB80(float *param_1,float *param_2)

{
  float fVar1;
  undefined8 uVar2;
  double extraout_f1;
  double dVar3;
  double dVar4;
  float afStack_30 [6];
  
  dVar4 = (double)(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
  if (dVar4 <= (double)lbl_8201DCB8) {
    param_2[3] = lbl_82002AE0;
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    fVar1 = param_1[2];
  }
  else {
    uVar2 = fn_8280A550(dVar4);
    dVar3 = extraout_f1;
    fn_8280A668((double)(float)(extraout_f1 * dVar4),uVar2,afStack_30,param_2 + 3);
    fVar1 = (float)((double)afStack_30[0] * dVar3);
    *param_2 = *param_1 * fVar1;
    param_2[1] = param_1[1] * fVar1;
    fVar1 = fVar1 * param_1[2];
  }
  param_2[2] = fVar1;
  return;
}

