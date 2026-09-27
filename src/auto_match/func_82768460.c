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
extern unsigned int fStack_24;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern float lbl_82005718;
extern unsigned int lbl_821AAD20;


float * fn_82768460(int *param_1,uint param_2,float *param_3)

{
  float fVar1;
  short sVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  float *pfVar7;
  double dVar8;
  struct { float first; float second; } stack_pair_30;

  float fStack_28;
  float fStack_24;
  
  fStack_28 = lbl_821AAD20;
  stack_pair_30.second = lbl_82005718;
  if (param_2 == 0xffffffff) {
    *param_3 = lbl_821AAD20;
    param_3[1] = fStack_28;
    dVar8 = (double)(**(code **)(*param_1 + 0x28))(param_1,0xffffffffffffffff);
    param_3[2] = (float)((double)*param_3 + dVar8);
    dVar8 = (double)(**(code **)(*param_1 + 0x2c))(param_1,0xffffffffffffffff);
    stack_pair_30.second = (float)((double)param_3[1] + dVar8);
  }
  else if (param_2 < (uint)param_1[0xd]) {
    pfVar7 = (float *)(param_1[0xc] + param_2 * 0xc);
    fVar1 = (float)*(ushort *)(pfVar7 + 2) * lbl_82005718;
    if (fVar1 == lbl_821AAD20) {
      fVar1 = *pfVar7;
    }
    fVar4 = (float)*(ushort *)((int)pfVar7 + 10) * lbl_82005718;
    fVar5 = (float)(longlong)*(short *)(pfVar7 + 1) * lbl_82005718;
    *param_3 = fVar5;
    sVar2 = *(short *)((int)pfVar7 + 6);
    param_3[2] = fVar5 + fVar1;
    stack_pair_30.second = (float)(longlong)sVar2 * stack_pair_30.second;
    param_3[1] = stack_pair_30.second;
    stack_pair_30.second = stack_pair_30.second + fVar4;
  }
  else {
    *param_3 = lbl_821AAD20;
    param_3[3] = fStack_28;
    param_3[2] = fStack_28;
    param_3[1] = fStack_28;
    if ((uint)param_1[9] <= param_2) {
      return param_3;
    }
    piVar3 = *(int **)(param_2 * 4 + param_1[8]);
    if (piVar3 == (int *)0x0) {
      return param_3;
    }
    fStack_24 = fStack_28;
    stack_pair_30.second = fStack_28;
    stack_pair_30.first = fStack_28;
    (**(code **)(*piVar3 + 0x14))(piVar3,&stack_pair_30.first);
    if ((fStack_28 < stack_pair_30.first) || (bVar6 = true, fStack_24 < stack_pair_30.second)) {
      bVar6 = false;
    }
    if (!bVar6) {
      return param_3;
    }
    *param_3 = stack_pair_30.first;
    param_3[1] = stack_pair_30.second;
    param_3[2] = (fStack_28 - stack_pair_30.first) + stack_pair_30.first;
    stack_pair_30.second = (fStack_24 - stack_pair_30.second) + stack_pair_30.second;
  }
  param_3[3] = stack_pair_30.second;
  return param_3;
}

