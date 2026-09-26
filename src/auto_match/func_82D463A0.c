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
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_82002AE0;


void fn_82D463A0(undefined8 param_1,double param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,float *param_8,
                  float *param_9,undefined4 *param_10)

{
  undefined4 *puVar1;
  int in_r0;
  int *piVar2;
  undefined4 uVar3;
  double dVar4;
  double extraout_f1;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  char acStack_80 [128];
  
  piVar2 = (int *)fn_82F6A544();
  dVar7 = (double)lbl_82002AE0;
  *param_8 = lbl_82002AE0;
  puVar1 = (undefined4 *)(in_r0 + (int)param_8 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  dVar8 = extraout_f1;
  (**(code **)(*piVar2 + 0x38))(acStack_80,piVar2);
  if (acStack_80[0] == '\0') {
    dVar5 = (double)(**(code **)(*piVar2 + 0x34))(piVar2,param_4 + 1,param_5);
    dVar4 = (double)(**(code **)(*piVar2 + 0x34))(piVar2,param_4,param_5 + 1);
    if (dVar7 < (double)(float)(dVar8 + param_2)) {
      dVar6 = (double)(**(code **)(*piVar2 + 0x34))(piVar2,param_4 + 1,param_5 + 1);
      *param_9 = (float)((double)((float)(dVar8 - dVar7) * (float)(dVar6 - dVar4) +
                                 (float)((double)(float)(dVar6 - dVar5) * param_2)) + dVar5);
      *param_8 = -(float)(dVar6 - dVar4);
      param_8[2] = (float)-(double)(float)(dVar6 - dVar5);
      *param_10 = 1;
      fn_82F6A590();
      return;
    }
    dVar7 = (double)(**(code **)(*piVar2 + 0x34))(piVar2,param_4,param_5);
    dVar4 = (double)(float)(dVar4 - dVar7);
    dVar5 = (double)(float)(dVar5 - dVar7);
    dVar7 = (double)(float)(dVar5 * dVar8 + (double)(float)(dVar4 * param_2)) + dVar7;
  }
  else {
    dVar7 = (double)(**(code **)(*piVar2 + 0x34))(piVar2,param_4,param_5);
    dVar5 = (double)(**(code **)(*piVar2 + 0x34))(piVar2,param_4 + 1,param_5 + 1);
    if (param_2 < dVar8) {
      dVar6 = (double)(**(code **)(*piVar2 + 0x34))(piVar2,param_4 + 1,param_5);
      dVar4 = (double)(float)(dVar5 - dVar6);
      dVar5 = (double)(float)(dVar6 - dVar7);
      uVar3 = 1;
      dVar7 = (double)(float)(dVar5 * dVar8 + (double)(float)(dVar4 * param_2)) + dVar7;
      goto LAB_82d46580;
    }
    dVar6 = (double)(**(code **)(*piVar2 + 0x34))(piVar2,param_4,param_5 + 1);
    dVar4 = (double)(float)(dVar6 - dVar7);
    dVar5 = (double)(float)(dVar5 - dVar6);
    dVar7 = (double)(float)(dVar5 * dVar8 + (double)(float)(dVar4 * param_2)) + dVar7;
  }
  uVar3 = 0;
LAB_82d46580:
  *param_9 = (float)dVar7;
  *param_8 = (float)-dVar5;
  param_8[2] = (float)-dVar4;
  *param_10 = uVar3;
  fn_82F6A590();
  return;
}

