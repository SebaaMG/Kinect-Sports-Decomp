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
extern int fn_829E3CB0();
extern int fn_829E59D8();
extern unsigned int iStack_40;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82057B24;


undefined8
fn_829E4250(undefined8 param_1,undefined8 param_2,double param_3,double param_4,int param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             int param_10,int param_11)

{
  float fVar1;
  int iVar3;
  undefined8 uVar2;
  double extraout_f1;
  double dVar4;
  double dVar5;
  double dVar6;
  int in_stack_0000005c;
  int in_stack_00000064;
  float *in_stack_0000006c;
  int iStack_40;
  
  iVar3 = fn_829E3CB0(param_5,param_6,param_9);
  if ((((iVar3 != 0) || (param_11 != 0)) || (in_stack_00000064 != *(int *)(param_5 + 0xa8))) ||
     ((float)((double)*(float *)(param_5 + 0xf4) * (double)*(float *)(param_5 + 0x6c)) <
      ABS((float)(extraout_f1 - (double)*(float *)(param_5 + 0x6c))))) {
LAB_829e43a8:
    if ((int)param_9 == 1) goto LAB_829e4378;
  }
  else {
    uVar2 = fn_829E59D8((double)*(float *)(param_5 + 0x74),(double)*(float *)(param_5 + 0x70),
                            param_2,param_1,param_5 + 0x24);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    if (iStack_40 != 0) goto LAB_829e43a8;
    if ((int)param_9 == 1) {
      if (in_stack_0000005c == 0) {
        param_4 = (double)*(float *)(param_5 + 0x88);
      }
      goto LAB_829e4378;
    }
    param_4 = (double)*(float *)(param_5 + 0x84);
    dVar4 = param_4;
    if (param_4 < param_3) {
      dVar4 = param_3;
    }
    dVar6 = param_4;
    if (param_3 < param_4) {
      dVar6 = param_3;
    }
    dVar5 = (double)lbl_82002AE0;
    if (dVar6 <= dVar5) {
      dVar6 = dVar5;
    }
    if (param_10 == 1) {
      fVar1 = *(float *)(param_5 + 0xec);
    }
    else {
      fVar1 = *(float *)(param_5 + 0xf0);
    }
    if ((float)((double)(float)(dVar4 / dVar6) - dVar5) <= fVar1) goto LAB_829e4378;
  }
  param_4 = param_3;
LAB_829e4378:
  if (param_4 < (double)lbl_82057B24) {
    param_4 = (double)lbl_82057B24;
  }
  *in_stack_0000006c = (float)param_4;
  return 0;
}

