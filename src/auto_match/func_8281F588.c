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
extern int fn_82F6B030();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005C88;
extern unsigned int lbl_8201EB88;
extern unsigned int lbl_8201EB90;
extern unsigned int lbl_821AAD20;


void fn_8281F588(int param_1,float *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  param_2[5] = *param_2;
  if (param_3 == 0) {
    param_2[2] = 0.0;
    fVar2 = lbl_821AAD20;
    param_2[3] = 0.0;
    param_2[1] = 0.0;
    fVar1 = lbl_82005C88;
    *param_2 = fVar2;
    param_2[6] = fVar1;
    param_2[4] = fVar2;
  }
  else {
    *(longlong *)(param_2 + 2) = param_3;
    dVar4 = (double)fn_82F6B030(param_3);
    dVar7 = lbl_8201EB90;
    dVar6 = lbl_8201EB88;
    fVar3 = lbl_82002AE0;
    dVar5 = dVar4 * lbl_8201EB90;
    param_2[1] = (float)(int)(dVar4 * lbl_8201EB88);
    fVar1 = (float)dVar5;
    *param_2 = fVar1;
    fVar2 = *(float *)(param_1 + 0x7c);
    *(longlong *)(param_2 + 10) = param_3 + *(longlong *)(param_2 + 10);
    param_2[6] = fVar3 / fVar1;
    param_2[4] = fVar2 * fVar1;
    dVar4 = (double)fn_82F6B030();
    param_2[7] = param_2[4] + param_2[7];
    *(longlong *)(param_2 + 0xc) = (longlong)(dVar4 * dVar6);
    param_2[8] = (float)(dVar4 * dVar7);
  }
  return;
}

