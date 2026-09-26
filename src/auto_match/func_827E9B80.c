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
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_82809CB0();
extern int fn_8280A5D8();
extern int fn_82810240();
extern int fn_82810280();
extern int fn_82810328();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern int iRam831f13b0;
extern unsigned int lbl_820069B4;
extern unsigned int lbl_8201DCBC;
extern unsigned int lbl_8201DCC0;
extern unsigned int lbl_821AAD20;


void fn_827E9B80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,float *param_8)

{
  undefined8 uVar1;
  double extraout_f1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float *in_stack_00000054;
  float *in_stack_0000005c;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [128];
  
  uVar1 = fn_82F6A53C();
  dVar7 = extraout_f1;
  fn_82810328(param_4,param_3,auStack_a0);
  fn_82810328(param_5,param_3,auStack_80);
  fn_82810328(param_2,param_6,auStack_90);
  fn_82810240(auStack_90,auStack_80,auStack_b0);
  dVar2 = (double)fn_82810280(auStack_a0,auStack_b0);
  dVar3 = (double)fn_82809CB0();
  dVar3 = (double)(float)(dVar3 * (double)lbl_8201DCC0);
  if (dVar3 <= dVar2) {
    if ((double)lbl_820069B4 <= dVar2) {
      fn_82810328(uVar1,param_3,auStack_d0);
      dVar4 = (double)fn_82810280(auStack_d0,auStack_b0);
      dVar8 = -dVar3;
      if ((dVar8 <= dVar4) && (dVar6 = (double)(float)(dVar3 + dVar2), dVar4 <= dVar6)) {
        fn_82810240(auStack_d0,auStack_a0,auStack_c0);
        dVar5 = (double)fn_82810280(auStack_90,auStack_c0);
        if ((dVar8 <= dVar5) &&
           ((((double)(float)(dVar5 + dVar4) <= dVar6 &&
             (dVar6 = (double)fn_82810280(auStack_80,auStack_c0),
             dVar6 <= (double)(float)(dVar2 * dVar7 + dVar3))) && (dVar8 <= dVar6))))
        goto code_r0x827e9d78;
      }
    }
  }
  else if ((iRam831f13b0 == 0) && (dVar2 <= (double)lbl_8201DCBC)) {
    fn_82810328(uVar1,param_3,auStack_d0);
    dVar4 = (double)fn_82810280(auStack_d0,auStack_b0);
    if ((dVar4 <= dVar3) && (dVar8 = (double)(float)(dVar2 - dVar3), dVar8 <= dVar4)) {
      fn_82810240(auStack_d0,auStack_a0,auStack_c0);
      dVar5 = (double)fn_82810280(auStack_90,auStack_c0);
      if (((dVar5 <= dVar3) && (dVar8 <= (double)(float)(dVar5 + dVar4))) &&
         ((dVar6 = (double)fn_82810280(auStack_80,auStack_c0),
          (double)(float)(dVar2 * dVar7 - dVar3) <= dVar6 && (dVar6 <= dVar3)))) {
code_r0x827e9d78:
        dVar7 = (double)fn_8280A5D8(dVar2);
        if (lbl_821AAD20 <= (float)(dVar7 * dVar6)) {
          *param_8 = (float)(dVar7 * dVar6);
          uVar1 = 1;
          *in_stack_00000054 = (float)(dVar7 * dVar4);
          *in_stack_0000005c = (float)(dVar7 * dVar5);
          goto code_r0x827e9cc8;
        }
      }
    }
  }
  uVar1 = 0;
code_r0x827e9cc8:
  fn_82F6A588(uVar1);
  return;
}

