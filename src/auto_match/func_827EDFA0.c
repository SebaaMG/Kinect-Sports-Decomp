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
extern int fn_82809558();
extern int fn_8280A5D8();
extern int fn_82810280();
extern int fn_828102A8();
extern int fn_82810308();
extern int fn_82810328();
extern int fn_82810470();
extern int fn_82810558();
extern int fn_82810B78();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831F13C0;


void fn_827EDFA0(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  undefined8 uVar1;
  int iVar2;
  double extraout_f1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float *in_stack_00000064;
  undefined4 in_stack_0000006c;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [128];
  
  uVar1 = fn_82F6A538();
  dVar8 = extraout_f1;
  fn_82810308(param_8);
  dVar3 = (double)fn_8280A5D8();
  dVar4 = (double)fn_82810280(param_9,param_8);
  dVar5 = (double)fn_82810280(param_10,param_8);
  dVar6 = (double)lbl_821AAD20;
  dVar7 = (double)(float)((double)(float)(dVar5 * dVar3) * dVar5 + param_4);
  dVar8 = (double)(float)((double)(float)(dVar4 * dVar3) * dVar5 + (double)(float)(dVar8 * param_3))
  ;
  if (dVar6 < (double)(float)(dVar8 * dVar8 -
                             (double)(float)((double)(float)((double)(float)(dVar4 * dVar3) * dVar4
                                                            + param_2) * dVar7))) {
    dVar3 = (double)fn_82809558();
    dVar3 = (double)(float)(dVar3 + dVar8);
    dVar8 = (double)fn_8280A5D8(dVar7);
    dVar8 = -(double)(float)(dVar8 * dVar3);
    if (((dVar8 <= param_6) && (dVar8 <= (double)*in_stack_00000064)) &&
       ((lbl_831F13C0 == 0 || (dVar6 <= dVar8)))) {
      fn_82810558(dVar8,param_10,param_9);
      dVar3 = (double)fn_82810280(auStack_90,uVar1);
      if ((dVar6 < dVar3) && (dVar3 < param_5)) {
        dVar3 = (double)fn_82810280(auStack_90,uVar1);
        dVar4 = (double)fn_8280A5D8(param_5);
        fn_828102A8((double)(float)(dVar4 * dVar3),uVar1,auStack_80);
        fn_82810328(auStack_90,auStack_80,in_stack_0000006c);
        iVar2 = fn_82810470(in_stack_0000006c);
        if (iVar2 == 0) {
          fn_82810B78(in_stack_0000006c,in_stack_0000006c);
        }
        *in_stack_00000064 = (float)dVar8;
        uVar1 = 1;
        goto LAB_827ee118;
      }
    }
  }
  uVar1 = 0;
LAB_827ee118:
  fn_82F6A584(uVar1);
  return;
}

