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
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_827ECAB8();
extern int fn_8280A5D8();
extern int fn_82810208();
extern int fn_82810240();
extern int fn_82810280();
extern int fn_828102A8();
extern int fn_828102D0();
extern int fn_82810308();
extern int fn_82810328();
extern int fn_82810360();
extern int fn_82810558();
extern int fn_82810590();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int lbl_8201DCB8;
extern unsigned int lbl_821AAD20;


void fn_827ECE88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  int iVar5;
  double extraout_f1;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [144];
  
  uVar3 = fn_82F6A538();
  bVar2 = true;
  bVar1 = true;
  dVar7 = extraout_f1;
  fn_82810328(param_4,param_3,auStack_e0);
  fn_82810328(param_5,param_3,auStack_d0);
  fn_82810328(uVar3,param_3,auStack_f0);
  fn_82810240(auStack_e0,auStack_d0,auStack_a0);
  dVar6 = (double)fn_82810280(auStack_a0,auStack_f0);
  dVar14 = (double)(float)(dVar7 * dVar7);
  dVar7 = (double)fn_82810308(auStack_a0);
  if ((dVar7 < (double)lbl_8201DCB8) || ((float)(dVar7 * dVar14) < (float)(dVar6 * dVar6))) {
LAB_827ed1d8:
    uVar3 = 0;
    goto LAB_827ed1dc;
  }
  dVar8 = (double)fn_82810308(auStack_f0);
  uVar3 = param_3;
  if (dVar14 < dVar8) {
    dVar8 = (double)fn_82810280(auStack_f0,auStack_e0);
    dVar9 = (double)fn_82810308(auStack_e0);
    dVar13 = (double)lbl_821AAD20;
    if (dVar9 <= dVar8) {
      bVar2 = false;
      dVar10 = (double)fn_828102D0(auStack_e0,auStack_f0);
      uVar3 = param_4;
      if (dVar14 < dVar10) goto LAB_827ed010;
      goto LAB_827ecf50;
    }
    if (dVar8 <= dVar13) {
LAB_827ed010:
      dVar10 = (double)fn_82810280(auStack_f0,auStack_d0);
      dVar11 = (double)fn_82810308(auStack_d0);
      uVar3 = param_5;
      if (dVar11 <= dVar10) {
        bVar1 = false;
        dVar11 = (double)fn_828102D0(auStack_d0,auStack_f0);
        if (dVar11 <= dVar14) goto LAB_827ecf50;
      }
      else if (dVar13 < dVar10) {
        fn_828102A8(dVar11,auStack_f0,auStack_b0);
        fn_82810590(dVar10,auStack_d0,auStack_b0);
        dVar12 = (double)fn_82810308(auStack_c0);
        if (dVar12 <= (double)(float)((double)(float)(dVar11 * dVar11) * dVar14)) {
          dVar7 = (double)fn_8280A5D8(dVar11);
          dVar7 = dVar7 * dVar10;
          puVar4 = auStack_d0;
          goto LAB_827ed004;
        }
      }
      fn_82810328(auStack_d0,auStack_e0,auStack_90);
      dVar11 = (double)fn_82810308(auStack_90);
      dVar12 = (double)fn_82810280(auStack_e0,auStack_d0);
      dVar8 = (double)(float)((double)(float)((double)(float)(dVar10 - dVar8) + dVar9) - dVar12);
      if (dVar8 < dVar11) {
        if (dVar13 <= dVar8) {
          fn_82810328(auStack_f0,auStack_e0,auStack_b0);
          fn_828102A8(dVar11,auStack_b0,auStack_b0);
          fn_82810590(dVar8,auStack_90,auStack_b0);
          dVar9 = (double)fn_82810308(auStack_c0);
          if (dVar9 <= (double)(float)((double)(float)(dVar11 * dVar11) * dVar14)) {
            dVar7 = (double)fn_8280A5D8(dVar11);
            dVar7 = dVar7 * dVar8;
            puVar4 = auStack_90;
            param_3 = param_4;
            goto LAB_827ed004;
          }
        }
        else if ((bVar2) &&
                (dVar8 = (double)fn_828102D0(auStack_e0,auStack_f0), uVar3 = param_4,
                dVar8 <= dVar14)) goto LAB_827ecf50;
      }
      else if ((bVar1) && (dVar8 = (double)fn_828102D0(auStack_d0,auStack_f0), dVar8 <= dVar14))
      goto LAB_827ecf50;
      fn_82810558(-(double)(float)(dVar6 / dVar7),auStack_a0,auStack_f0);
      iVar5 = fn_827ECAB8(auStack_c0,auStack_e0,auStack_d0,auStack_a0);
      if (iVar5 == 0) goto LAB_827ed1d8;
      fn_82810208(auStack_c0,param_3,param_6);
    }
    else {
      fn_828102A8(dVar9,auStack_f0,auStack_b0);
      fn_82810590(dVar8,auStack_e0,auStack_b0);
      dVar10 = (double)fn_82810308(auStack_c0);
      if ((double)(float)((double)(float)(dVar9 * dVar9) * dVar14) < dVar10) goto LAB_827ed010;
      dVar7 = (double)fn_8280A5D8(dVar9);
      dVar7 = dVar7 * dVar8;
      puVar4 = auStack_e0;
LAB_827ed004:
      fn_82810558((double)(float)dVar7,puVar4,param_3);
    }
  }
  else {
LAB_827ecf50:
    fn_82810360(uVar3,param_6);
  }
  uVar3 = 1;
LAB_827ed1dc:
  fn_82F6A584(uVar3);
  return;
}

