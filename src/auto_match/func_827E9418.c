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
extern unsigned int *auStack_120;
extern unsigned int *auStack_160;
extern unsigned int *auStack_178;
extern unsigned int *auStack_188;
extern unsigned int *auStack_198;
extern unsigned int *auStack_1a8;
extern unsigned int *auStack_1b8;
extern unsigned int *auStack_1d8;
extern unsigned int *auStack_1f8;
extern unsigned int *auStack_238;
extern unsigned int *auStack_248;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_e0;
extern unsigned int fStack_194;
extern unsigned int fStack_1b4;
extern unsigned int fStack_1c4;
extern unsigned int fStack_1c8;
extern unsigned int fStack_1e0;
extern unsigned int fStack_1e4;
extern unsigned int fStack_1e8;
extern unsigned int fStack_200;
extern unsigned int fStack_204;
extern unsigned int fStack_208;
extern unsigned int fStack_210;
extern unsigned int fStack_214;
extern unsigned int fStack_218;
extern unsigned int fStack_220;
extern unsigned int fStack_224;
extern unsigned int fStack_228;
extern int fn_827E8798();
extern int fn_827E8AA0();
extern int fn_827E8DD0();
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
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83156AAC;


void fn_827E9418(undefined8 param_1,double param_2,double param_3,double param_4)

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
  float *in_stack_00000054;
  undefined4 in_stack_0000005c;
  float *in_stack_00000064;
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [16];
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  undefined1 auStack_1f8 [16];
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined1 auStack_1d8 [16];
  float fStack_1c8;
  float fStack_1c4;
  undefined1 auStack_1b8 [4];
  float fStack_1b4;
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [4];
  float fStack_194;
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [64];
  undefined1 auStack_120 [64];
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [160];
  
  dVar8 = (double)fn_82F6A53C();
  fVar1 = lbl_821AAD20;
  dVar9 = (double)lbl_821AAD20;
  dVar10 = (double)lbl_82002AE0;
  dVar7 = (double)(float)((double)(float)(dVar8 - param_2) / param_3);
  fn_82809558(-(double)(float)(dVar7 * dVar7 - dVar10));
  fn_8280BCC0(dVar10,dVar10,dVar10,(double)*in_r7,(double)in_r7[1],(double)in_r7[2],
                    (double)*in_r6,(double)in_r6[1],(double)in_r6[2],auStack_120);
  fn_8280BCC0(dVar10,dVar10,dVar10,(double)*in_r7,(double)in_r7[1],(double)in_r7[2],dVar9,
                    dVar9,dVar9,auStack_160);
  fn_8280CED8(auStack_120,auStack_e0);
  fn_8280CED8(auStack_160,auStack_a0);
  fn_8280AD30(auStack_e0,in_r8,auStack_248);
  dVar7 = (double)fn_82810308(in_r9);
  if ((double)lbl_83156AAC < dVar7) {
    fn_82810558(param_4,in_r9,in_r8);
    fn_8280AD30(auStack_e0,auStack_1f8,auStack_1f8);
    iVar4 = fn_827E8AA0(param_2,dVar8,param_3);
    iVar3 = fn_827E8798(param_2,dVar8,param_3);
    if (iVar4 != 0) goto joined_r0x827e95b8;
    fn_828102A8(param_4,in_r9,auStack_238);
    fn_8280AD30(auStack_a0,auStack_238,auStack_238);
    iVar3 = 0;
    dVar7 = dVar10;
    fn_828105C8(dVar9,dVar9,dVar9,auStack_1d8);
    fStack_218 = (float)dVar9;
    fStack_214 = (float)param_3;
    fStack_210 = (float)dVar9;
    iVar4 = fn_827E9A68(param_2,dVar7,auStack_248,auStack_238,&fStack_218);
    if ((iVar4 != 0) &&
       (fn_82810558((double)fVar1,auStack_238,auStack_248), param_3 < (double)fStack_194)) {
      dVar10 = (double)fVar1;
      iVar3 = 1;
    }
    fStack_1c4 = (float)dVar9;
    iVar4 = fn_827E9A68(dVar8,dVar7,auStack_248,auStack_238,&fStack_1c8);
    if (iVar4 != 0) {
      fn_82810558((double)fVar1,auStack_238,auStack_248);
      if (((double)fVar1 < dVar10) && ((double)fStack_1b4 < dVar9)) {
        iVar3 = 2;
        dVar10 = (double)fVar1;
      }
    }
    fn_82810208(auStack_248,auStack_238,auStack_178);
    iVar4 = fn_827E8DD0(dVar8,param_2,param_3);
    if (((iVar4 != 0) && (dVar7 = (double)fVar1, dVar9 < dVar7)) && (dVar7 < dVar10)) {
      iVar3 = 3;
      dVar10 = dVar7;
    }
    if ((iVar3 != 0) && (dVar10 = (double)(float)(dVar10 * param_4), dVar10 < param_4)) {
      fn_82810558(dVar10,in_r9,auStack_248);
      if (iVar3 == 1) {
        pfVar6 = &fStack_218;
        puVar5 = auStack_198;
LAB_827e9810:
        fn_82810328(puVar5,pfVar6,in_stack_0000005c);
      }
      else {
        if (iVar3 == 2) {
          pfVar6 = &fStack_1c8;
          puVar5 = auStack_1b8;
          goto LAB_827e9810;
        }
        fStack_228 = *in_stack_00000054;
        fStack_220 = in_stack_00000054[2];
        fStack_224 = (float)dVar9;
        fn_82810B78(&fStack_228,&fStack_228);
        fStack_208 = (float)((double)fStack_228 * dVar8);
        fStack_200 = (float)((double)fStack_220 * dVar8);
        fStack_204 = (float)dVar9;
        fStack_1e8 = (float)((double)fStack_228 * param_2);
        fStack_1e4 = (float)param_3;
        fStack_1e0 = (float)((double)fStack_220 * param_2);
        fn_82810328(&fStack_208,&fStack_1e8,auStack_1a8);
        fn_82810240(auStack_1a8,&fStack_208,auStack_188);
        fn_82810240(auStack_188,auStack_1a8,in_stack_0000005c);
      }
      fn_8280AD30(auStack_120,in_stack_00000054,in_stack_00000054);
      fn_8280AD30(auStack_160,in_stack_0000005c,in_stack_0000005c);
      fn_82810B78(in_stack_0000005c,in_stack_0000005c);
      uVar2 = 1;
      *in_stack_00000064 = (float)dVar10;
      goto LAB_827e9858;
    }
  }
  else {
    iVar3 = fn_827E8AA0(param_2,dVar8,param_3);
joined_r0x827e95b8:
    if (iVar3 != 0) {
      *in_stack_00000064 = (float)dVar9;
      fn_8280AD30(auStack_120,in_stack_00000054,in_stack_00000054);
      fn_8280AD30(auStack_160,in_stack_0000005c,in_stack_0000005c);
      fn_82810B78(in_stack_0000005c,in_stack_0000005c);
      uVar2 = 1;
      goto LAB_827e9858;
    }
  }
  uVar2 = 0;
LAB_827e9858:
  fn_82F6A588(uVar2);
  return;
}

