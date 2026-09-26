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
extern unsigned int *auStack_100;
extern unsigned int *auStack_140;
extern unsigned int *auStack_180;
extern unsigned int *auStack_198;
extern unsigned int *auStack_1a8;
extern unsigned int *auStack_1b8;
extern unsigned int *auStack_1c8;
extern unsigned int *auStack_1d8;
extern unsigned int *auStack_1f8;
extern unsigned int *auStack_218;
extern unsigned int *auStack_258;
extern unsigned int *auStack_268;
extern unsigned int *auStack_c0;
extern unsigned int fStack_1b4;
extern unsigned int fStack_1d4;
extern unsigned int fStack_1e4;
extern unsigned int fStack_1e8;
extern unsigned int fStack_200;
extern unsigned int fStack_204;
extern unsigned int fStack_208;
extern unsigned int fStack_220;
extern unsigned int fStack_224;
extern unsigned int fStack_228;
extern unsigned int fStack_230;
extern unsigned int fStack_234;
extern unsigned int fStack_238;
extern unsigned int fStack_240;
extern unsigned int fStack_244;
extern unsigned int fStack_248;
extern int fn_827E8838();
extern int fn_827E88C8();
extern int fn_827E8C48();
extern int fn_827E9A68();
extern int fn_82809558();
extern int fn_8280AD30();
extern int fn_8280BCC0();
extern int fn_8280CED8();
extern int fn_82810208();
extern int fn_82810240();
extern int fn_828102A8();
extern int fn_82810308();
extern int fn_82810328();
extern int fn_82810558();
extern int fn_828105C8();
extern int fn_82810B78();
extern int fn_82F6A52C();
extern int fn_82F6A578();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83156AA8;


void fn_827E8F58(undefined8 param_1,double param_2,double param_3,double param_4)

{
  float fVar1;
  int iVar3;
  int iVar4;
  undefined8 uVar2;
  undefined1 *puVar5;
  float *pfVar6;
  float *in_r6;
  float *in_r7;
  undefined8 in_r8;
  undefined8 in_r9;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float *in_stack_00000054;
  undefined4 in_stack_0000005c;
  float *in_stack_00000064;
  undefined1 auStack_268 [16];
  undefined1 auStack_258 [16];
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  undefined1 auStack_218 [16];
  float fStack_208;
  float fStack_204;
  float fStack_200;
  undefined1 auStack_1f8 [16];
  float fStack_1e8;
  float fStack_1e4;
  undefined1 auStack_1d8 [4];
  float fStack_1d4;
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [4];
  float fStack_1b4;
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [64];
  undefined1 auStack_140 [64];
  undefined1 auStack_100 [64];
  undefined1 auStack_c0 [192];
  
  dVar7 = (double)fn_82F6A52C();
  fVar1 = lbl_821AAD20;
  dVar14 = (double)lbl_821AAD20;
  dVar15 = (double)lbl_82002AE0;
  dVar12 = (double)(float)((double)(float)(dVar7 - param_2) / param_3);
  dVar8 = (double)fn_82809558(-(double)(float)(dVar12 * dVar12 - dVar15));
  dVar10 = (double)(float)(dVar12 * dVar7);
  dVar9 = (double)(float)(dVar12 * param_2 + param_3);
  dVar8 = (double)(float)(dVar15 / dVar8);
  dVar13 = (double)(float)(dVar8 * dVar12);
  dVar11 = (double)(float)(dVar8 * dVar7);
  dVar12 = (double)(float)(dVar8 * param_2);
  fn_8280BCC0(dVar15,dVar15,dVar15,(double)*in_r7,(double)in_r7[1],(double)in_r7[2],
                    (double)*in_r6,(double)in_r6[1],(double)in_r6[2],auStack_140);
  fn_8280BCC0(dVar15,dVar15,dVar15,(double)*in_r7,(double)in_r7[1],(double)in_r7[2],dVar14,
                    dVar14,dVar14,auStack_180);
  fn_8280CED8(auStack_140,auStack_100);
  fn_8280CED8(auStack_180,auStack_c0);
  fn_8280AD30(auStack_100,in_r8,auStack_268);
  dVar8 = (double)fn_82810308(in_r9);
  if ((double)lbl_83156AA8 < dVar8) {
    fn_82810558(param_4,in_r9,in_r8);
    fn_8280AD30(auStack_100,auStack_218,auStack_218);
    iVar4 = fn_827E88C8(dVar13,dVar7,param_2,dVar11,dVar12,param_3,dVar10,dVar9);
    iVar3 = fn_827E8838(dVar13,dVar7,param_2,dVar11,param_3,dVar10,dVar9);
    if (iVar4 != 0) goto joined_r0x827e9160;
    fn_828102A8(param_4,in_r9,auStack_258);
    fn_8280AD30(auStack_c0,auStack_258,auStack_258);
    iVar3 = 0;
    dVar8 = dVar15;
    fn_828105C8(dVar14,dVar14,dVar14,auStack_1f8);
    fStack_238 = (float)dVar14;
    fStack_234 = (float)param_3;
    fStack_230 = (float)dVar14;
    iVar4 = fn_827E9A68(param_2,dVar8,auStack_268,auStack_258,&fStack_238);
    if ((iVar4 != 0) &&
       (fn_82810558((double)fVar1,auStack_258,auStack_268), dVar9 < (double)fStack_1b4)) {
      dVar15 = (double)fVar1;
      iVar3 = 1;
    }
    fStack_1e4 = (float)dVar14;
    iVar4 = fn_827E9A68(dVar7,dVar8,auStack_268,auStack_258,&fStack_1e8);
    if (iVar4 != 0) {
      fn_82810558((double)fVar1,auStack_258,auStack_268);
      if (((double)fVar1 < dVar15) && ((double)fStack_1d4 < dVar10)) {
        iVar3 = 2;
        dVar15 = (double)fVar1;
      }
    }
    fn_82810208(auStack_268,auStack_258,auStack_198);
    iVar4 = fn_827E8C48(dVar7,param_2,param_3,dVar10,dVar9);
    if (((iVar4 != 0) && (dVar8 = (double)fVar1, dVar14 < dVar8)) && (dVar8 < dVar15)) {
      iVar3 = 3;
      dVar15 = dVar8;
    }
    if ((iVar3 != 0) && (dVar15 = (double)(float)(dVar15 * param_4), dVar15 < param_4)) {
      fn_82810558(dVar15,in_r9,auStack_268);
      if (iVar3 == 1) {
        pfVar6 = &fStack_238;
        puVar5 = auStack_1b8;
LAB_827e93c0:
        fn_82810328(puVar5,pfVar6,in_stack_0000005c);
      }
      else {
        if (iVar3 == 2) {
          pfVar6 = &fStack_1e8;
          puVar5 = auStack_1d8;
          goto LAB_827e93c0;
        }
        fStack_248 = *in_stack_00000054;
        fStack_240 = in_stack_00000054[2];
        fStack_244 = (float)dVar14;
        fn_82810B78(&fStack_248,&fStack_248);
        fStack_228 = (float)((double)fStack_248 * dVar7);
        fStack_220 = (float)((double)fStack_240 * dVar7);
        fStack_224 = (float)dVar14;
        fStack_208 = (float)((double)fStack_248 * param_2);
        fStack_204 = (float)param_3;
        fStack_200 = (float)((double)fStack_240 * param_2);
        fn_82810328(&fStack_228,&fStack_208,auStack_1c8);
        fn_82810240(auStack_1c8,&fStack_228,auStack_1a8);
        fn_82810240(auStack_1a8,auStack_1c8,in_stack_0000005c);
      }
      fn_8280AD30(auStack_140,in_stack_00000054,in_stack_00000054);
      fn_8280AD30(auStack_180,in_stack_0000005c,in_stack_0000005c);
      fn_82810B78(in_stack_0000005c,in_stack_0000005c);
      uVar2 = 1;
      *in_stack_00000064 = (float)dVar15;
      goto LAB_827e9408;
    }
  }
  else {
    iVar3 = fn_827E88C8(dVar13,dVar7,param_2,dVar11,dVar12,param_3,dVar10,dVar9);
joined_r0x827e9160:
    if (iVar3 != 0) {
      *in_stack_00000064 = (float)dVar14;
      fn_8280AD30(auStack_140,in_stack_00000054,in_stack_00000054);
      fn_8280AD30(auStack_180,in_stack_0000005c,in_stack_0000005c);
      fn_82810B78(in_stack_0000005c,in_stack_0000005c);
      uVar2 = 1;
      goto LAB_827e9408;
    }
  }
  uVar2 = 0;
LAB_827e9408:
  fn_82F6A578(uVar2);
  return;
}

