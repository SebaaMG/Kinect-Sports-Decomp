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
extern unsigned int *auStack_d0;
extern int fn_827EA708();
extern int fn_827EF590();
extern int fn_827EF608();
extern int fn_8280A5E8();
extern int fn_82810328();
extern int fn_828106A0();
extern unsigned int lbl_82002AE0;
extern unsigned int uStack_100;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


undefined8
fn_827EA918(undefined8 param_1,undefined8 param_2,float *param_3,undefined8 param_4,
             undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
             undefined4 *param_9)

{
  int iVar2;
  undefined8 uVar1;
  undefined4 *in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [128];
  
  uStack_dc = param_5[1];
  uStack_e0 = *param_5;
  uStack_f0 = *param_6;
  uStack_ec = param_6[1];
  uStack_100 = *param_7;
  uStack_fc = param_7[1];
  uStack_a0 = *param_8;
  uStack_9c = param_8[1];
  uStack_b0 = *param_9;
  uStack_ac = param_9[1];
  uStack_c0 = *in_stack_00000054;
  uStack_bc = in_stack_00000054[1];
  uStack_d8 = param_5[2];
  uStack_e8 = param_6[2];
  uStack_f8 = param_7[2];
  uStack_98 = param_8[2];
  uStack_a8 = param_9[2];
  uStack_b8 = in_stack_00000054[2];
  iVar2 = fn_8280A5E8((double)*param_3);
  if (((iVar2 == 0) && (iVar2 = fn_8280A5E8((double)param_3[1]), iVar2 == 0)) &&
     (iVar2 = fn_8280A5E8((double)param_3[2]), iVar2 == 0)) {
    fn_82810328(param_4,in_stack_0000005c,auStack_90);
    fn_82810328(&uStack_e0,param_2,&uStack_e0);
    fn_82810328(&uStack_f0,param_2,&uStack_f0);
    fn_82810328(&uStack_100,param_2,&uStack_100);
    fn_827EF590(param_3,auStack_d0);
    fn_827EF608(auStack_d0,auStack_90,auStack_90);
    fn_827EF608(auStack_d0,&uStack_e0,&uStack_e0);
    fn_827EF608(auStack_d0,&uStack_f0,&uStack_f0);
    fn_827EF608(auStack_d0,&uStack_100,&uStack_100);
    fn_828106A0(auStack_80);
    uVar1 = fn_827EA708((double)lbl_82002AE0,param_1,auStack_80,&uStack_c0,auStack_90,&uStack_e0,
                          &uStack_f0,&uStack_100,&uStack_a0,&uStack_b0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

