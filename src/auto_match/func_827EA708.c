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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_8280A5D8();
extern int fn_82810240();
extern int fn_82810280();
extern int fn_82810328();
extern int fn_82810470();
extern int fn_82810558();
extern int fn_82810B78();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82005344;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831F13B4;


void fn_827EA708(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  int iVar2;
  double extraout_f1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  float *in_stack_0000006c;
  undefined4 in_stack_00000074;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [96];
  
  uVar1 = fn_82F6A548();
  dVar5 = extraout_f1;
  fn_82810558(param_9,param_6);
  fn_82810558(dVar5,param_10,param_7);
  fn_82810558(dVar5,in_stack_00000054,param_8);
  fn_82810328(auStack_b0,auStack_d0,auStack_c0);
  fn_82810328(auStack_a0,auStack_d0,auStack_70);
  fn_82810328(auStack_a0,auStack_b0,auStack_60);
  fn_82810240(auStack_c0,auStack_70,in_stack_00000074);
  iVar2 = fn_82810470(in_stack_00000074);
  if (iVar2 == 0) {
    fn_82810B78(in_stack_00000074,in_stack_00000074);
    fn_82810328(param_5,in_stack_0000005c,auStack_80);
    fn_82810328(uVar1,auStack_d0,auStack_90);
    dVar3 = (double)fn_82810280(auStack_90,in_stack_00000074);
    dVar4 = (double)fn_82810280(auStack_80,in_stack_00000074);
    dVar6 = (double)lbl_821AAD20;
    if (((dVar4 < dVar6) && (-(double)(float)(dVar5 * (double)lbl_82005344) <= dVar3)) &&
       ((double)(float)(dVar4 * param_2 + dVar3) <= dVar6)) {
      dVar5 = (double)fn_8280A5D8();
      dVar3 = -(double)(float)(dVar5 * dVar3);
      fn_82810558(dVar3,auStack_80,auStack_90);
      fn_82810240(in_stack_00000074,auStack_c0,auStack_e0);
      dVar5 = (double)fn_82810280(auStack_e0,auStack_f0);
      if (dVar6 <= dVar5) {
        fn_82810240(auStack_70,in_stack_00000074,auStack_e0);
        dVar5 = (double)fn_82810280(auStack_e0,auStack_f0);
        if (dVar6 <= dVar5) {
          fn_82810240(in_stack_00000074,auStack_60,auStack_e0);
          fn_82810328(auStack_f0,auStack_c0,auStack_f0);
          dVar5 = (double)fn_82810280(auStack_e0,auStack_f0);
          if ((dVar6 <= dVar5) && ((lbl_831F13B4 == 0 || (dVar6 <= dVar3)))) {
            uVar1 = 1;
            *in_stack_0000006c = (float)dVar3;
            goto code_r0x827ea908;
          }
        }
      }
    }
  }
  uVar1 = 0;
code_r0x827ea908:
  fn_82F6A594(uVar1);
  return;
}

