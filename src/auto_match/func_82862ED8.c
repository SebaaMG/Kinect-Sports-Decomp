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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_827EB7D0();
extern int fn_827EC910();
extern int fn_828094D0();
extern int fn_828095F8();
extern int fn_82809D40();
extern int fn_82810240();
extern int fn_82810280();
extern int fn_828102A8();
extern int fn_82810360();
extern int fn_82810558();
extern int fn_828105C8();
extern int fn_828106B8();
extern int fn_8281D7D0();
extern int fn_8281D8C0();
extern int fn_82F6A534();
extern int fn_82F6A580();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82002D08;
extern unsigned int lbl_8200533C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82015468;
extern unsigned int lbl_8201DCB8;
extern unsigned int lbl_8201F990;
extern unsigned int lbl_8201F994;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_82862ED8(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,float *param_10,undefined8 param_11)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar9;
  undefined8 uVar8;
  bool bVar10;
  double dVar11;
  double extraout_f1;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 in_stack_00000054;
  float *in_stack_0000005c;
  float *in_stack_00000064;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  
  uVar5 = ZEXT48(&stack0x00000000);
  uVar6 = fn_82F6A534();
  fVar4 = lbl_8200133C;
  dVar14 = (double)lbl_821AAD20;
  if ((param_2 == dVar14) || (bVar3 = false, (double)lbl_82015468 <= param_2)) {
    bVar3 = true;
  }
  *in_stack_0000005c = lbl_8200133C;
  *in_stack_00000064 = fVar4;
  dVar18 = extraout_f1;
  lVar7 = fn_827EB7D0(extraout_f1,param_3,uVar6);
  *in_stack_0000005c = (float)((double)fVar4 - param_3);
  if (lVar7 != 0) {
    dVar15 = (double)lbl_82002AE0;
    fn_828102A8((double)(float)(dVar15 / (double)fVar4),uVar5 - 0xf0,uVar5 - 0xf0);
    dVar11 = (double)fVar4;
    bVar2 = false;
    dVar16 = (double)lbl_82002D08;
    if ((dVar11 < dVar16) || (bVar10 = false, (double)(float)(dVar11 - param_3) < dVar16)) {
      bVar10 = true;
    }
    if ((double)(float)(dVar11 - dVar18) <= -param_3) {
LAB_82862ff4:
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (param_3 <= (double)(float)(dVar11 + dVar18)) goto LAB_82862ff4;
    }
    if ((bVar1) || (bVar10)) {
      if (bVar1) {
        if (bVar3) {
LAB_828631b4:
          bVar2 = true;
          goto LAB_828631b8;
        }
        uVar8 = 1;
      }
      else {
        if (bVar3) goto LAB_828631b4;
        uVar8 = 0xffffffffffffffff;
      }
      *param_10 = (float)param_2;
      fn_828106B8(param_6,param_11,0);
      fn_82810558((double)lbl_82005344,param_6,uVar6);
      *in_stack_0000005c = (float)dVar18;
      dVar14 = (double)fn_828094D0((double)(float)(param_2 * (double)lbl_82002C5C));
      *in_stack_00000064 = (float)(dVar14 * dVar18);
      goto LAB_82863234;
    }
    if ((int)lVar7 == -1) {
      uStack_fc = fVar4;
      *in_stack_00000064 = (float)param_3;
    }
    dVar11 = (double)fn_82809D40((double)*in_stack_00000064,(double)uStack_fc);
    dVar17 = (double)lbl_8201DCB8;
    if (dVar17 <= dVar11) {
      if (bVar3) {
        dVar14 = (double)lbl_82005344;
        *param_10 = (float)(dVar11 * dVar14);
        fn_828106B8(uVar5 - 0xf0,param_11,0);
        param_6 = uVar5 - 0xf0;
LAB_8286310c:
        fn_82810558(dVar14,param_6,uVar6);
        uVar8 = 1;
        goto LAB_82863234;
      }
      dVar12 = (double)fn_82810280(param_6,uVar5 - 0xf0);
      dVar13 = (double)fn_828095F8();
      dVar19 = (double)lbl_82002C5C;
      iVar9 = fn_827EC910((double)(float)(param_2 * (double)lbl_8200533C),
                           (double)(float)(param_2 * dVar19),(double)(float)(dVar13 - dVar11),
                           (double)(float)(dVar13 + dVar11));
      if (iVar9 == 0) goto LAB_82863230;
      *param_10 = uStack_f8 - uStack_f4;
      if (dVar14 < (double)(uStack_f8 - uStack_f4)) {
        if ((double)(float)(dVar15 - dVar12) <= dVar17) {
          fn_828106B8(param_6,param_11,0);
        }
        else {
          fn_82810240(uVar5 - 0xf0,param_6,param_11);
          fn_8281D8C0(-(double)(float)((double)*param_10 * dVar19 - (double)uStack_f8),
                            uVar5 - 0xd0,param_11);
          fn_8281D7D0(uVar5 - 0xd0,uVar5 - 0xf0,uVar5 - 0xe0);
          param_6 = uVar5 - 0xe0;
        }
        dVar14 = (double)lbl_82005344;
        goto LAB_8286310c;
      }
LAB_828631b8:
      if (bVar2) {
        dVar11 = (double)lbl_8201F990;
        *param_10 = lbl_8201F994;
        *in_stack_0000005c = (float)dVar16;
        *in_stack_00000064 = (float)(dVar18 * dVar11);
        fn_82810360(param_8,in_stack_00000054);
        if ((double)fVar4 <= dVar16) {
          fn_828105C8(dVar14,dVar15,dVar14,param_11);
        }
        else {
          fn_828106B8(uVar5 - 0xf0,param_11,0);
        }
        uVar8 = 0xffffffffffffffff;
        goto LAB_82863234;
      }
    }
  }
LAB_82863230:
  uVar8 = 0;
LAB_82863234:
  fn_82F6A580(uVar8);
  return;
}

