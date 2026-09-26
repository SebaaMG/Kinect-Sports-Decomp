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
extern unsigned int *auStack_108;
extern unsigned int *auStack_138;
extern unsigned int *auStack_148;
extern unsigned int *auStack_158;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_c8;
extern unsigned int *auStack_d8;
extern unsigned int fStack_110;
extern unsigned int fStack_114;
extern unsigned int fStack_118;
extern unsigned int fStack_120;
extern unsigned int fStack_124;
extern unsigned int fStack_128;
extern unsigned int fStack_12c;
extern unsigned int fStack_170;
extern unsigned int fStack_e0;
extern unsigned int fStack_e4;
extern unsigned int fStack_e8;
extern unsigned int fStack_f0;
extern unsigned int fStack_f4;
extern unsigned int fStack_f8;
extern int fn_827EDAD0();
extern int fn_827EDFA0();
extern int fn_827EE1F8();
extern int fn_827EEDE8();
extern int fn_82810240();
extern int fn_82810280();
extern int fn_828102A8();
extern int fn_82810308();
extern int fn_82810328();
extern int fn_82810558();
extern int fn_828106A0();
extern int fn_82810B78();
extern int fn_82F6A52C();
extern int fn_82F6A578();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002D08;
extern unsigned int lbl_820069B4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831F13BC;
extern unsigned int lbl_831F13C0;
extern unsigned int uStack_160;
extern unsigned int uStack_164;
extern unsigned int uStack_168;


void fn_827EEF48(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  double extraout_f1;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float *in_stack_00000054;
  undefined4 *in_stack_0000005c;
  float fStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [12];
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  undefined1 auStack_108 [16];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [184];
  
  uVar2 = fn_82F6A52C();
  dVar8 = extraout_f1;
  fn_82810328(param_7,param_6,&fStack_128);
  fn_82810328(param_8,param_6,&fStack_118);
  fn_82810328(uVar2,param_6,auStack_138);
  fn_828106A0(in_stack_0000005c);
  fn_82810240(&fStack_128,&fStack_118,auStack_108);
  dVar11 = (double)lbl_821AAD20;
  if ((((lbl_831F13BC & 1) == 0) ||
      (dVar5 = (double)fn_82810280(auStack_108,auStack_138), dVar11 <= dVar5)) &&
     (dVar5 = (double)fn_82810308(auStack_108), (double)lbl_82002D08 <= dVar5)) {
    fn_82810328(param_5,param_9,auStack_148);
    dVar5 = (double)fn_82810280(auStack_148,auStack_108);
    if (((lbl_831F13BC & 2) == 0) || (dVar5 < dVar11)) {
      iVar3 = fn_827EDAD0(dVar8,uVar2);
      bVar1 = false;
      dVar6 = (double)fn_82810308(auStack_148);
      if ((double)lbl_820069B4 <= dVar6) {
        fn_82810B78(auStack_108,&uStack_168);
        dVar7 = (double)fn_82810280(auStack_138,&uStack_168);
        if (dVar7 <= dVar8) {
          dVar15 = -dVar8;
          dVar7 = (double)fn_82810280(auStack_138,&uStack_168);
          if (dVar15 <= dVar7) {
LAB_827ef140:
            dVar15 = -dVar8;
            fn_82810558(dVar15,&uStack_168,auStack_138);
            fStack_170 = (float)param_2;
            dVar5 = param_2;
            dVar7 = (double)fn_82810280(auStack_158,&uStack_168);
            if (((dVar15 <= dVar7) &&
                (iVar4 = fn_827EE1F8(param_2,auStack_158,&fStack_128,&fStack_118,auStack_148),
                iVar4 != 0)) &&
               ((dVar7 = (double)fStack_12c, dVar7 <= param_2 &&
                ((lbl_831F13C0 == 0 || (dVar11 <= dVar7)))))) {
              fStack_170 = fStack_12c;
              bVar1 = true;
              *in_stack_0000005c = uStack_168;
              in_stack_0000005c[1] = uStack_164;
              in_stack_0000005c[2] = uStack_160;
              dVar5 = dVar7;
            }
            fn_82810558(dVar8,&uStack_168,auStack_138);
            dVar7 = (double)fn_82810280(auStack_158,&uStack_168);
            if (((((dVar7 <= dVar8) && (lbl_831F13BC == 0)) &&
                 (iVar4 = fn_827EE1F8(param_2,auStack_158,&fStack_128,&fStack_118,auStack_148),
                 iVar4 != 0)) && (dVar7 = (double)fStack_12c, dVar7 <= dVar5)) &&
               ((lbl_831F13C0 == 0 || (dVar11 <= dVar7)))) {
              fStack_170 = fStack_12c;
              bVar1 = true;
              *in_stack_0000005c = uStack_168;
              dVar5 = (double)lbl_8200133C;
              in_stack_0000005c[1] = uStack_164;
              in_stack_0000005c[2] = uStack_160;
              fn_828102A8(dVar5,in_stack_0000005c,in_stack_0000005c);
              dVar5 = dVar7;
            }
            if (!bVar1) {
              dVar5 = (double)fn_82810280(&uStack_168,auStack_138);
              dVar7 = (double)fn_82810280(&uStack_168,auStack_148);
              dVar12 = (double)(float)(dVar8 * dVar8);
              dVar14 = (double)(float)(dVar7 * dVar7);
              dVar13 = (double)(float)(dVar5 * dVar5 - dVar12);
              dVar8 = (double)fn_82810308(&fStack_128);
              dVar15 = (double)fn_82810308(&fStack_118);
              dVar9 = (double)fn_82810280(&fStack_128,&fStack_118);
              fStack_f8 = (float)((double)fStack_128 * dVar9 -
                                 (double)(float)((double)fStack_118 * dVar8));
              fStack_e8 = (float)((double)fStack_128 * dVar15 -
                                 (double)(float)((double)fStack_118 * dVar9));
              fStack_f4 = (float)((double)fStack_124 * dVar9 -
                                 (double)(float)((double)fStack_114 * dVar8));
              fStack_e4 = (float)((double)fStack_124 * dVar15 -
                                 (double)(float)((double)fStack_114 * dVar9));
              fStack_f0 = (float)((double)fStack_120 * dVar9 -
                                 (double)(float)((double)fStack_110 * dVar8));
              fStack_e0 = (float)((double)fStack_120 * dVar15 -
                                 (double)(float)((double)fStack_110 * dVar9));
              fn_82810328(&fStack_e8,&fStack_f8,auStack_c8);
              fn_82810328(&fStack_118,&fStack_128,auStack_d8);
              uVar10 = fn_82810308(auStack_d8);
              fn_82810328(auStack_138,&fStack_128,auStack_158);
              iVar4 = fn_827EDFA0(dVar5,dVar13,dVar7,dVar14,dVar8,param_2,&fStack_128,&fStack_f8,
                                    auStack_138,auStack_148);
              if ((iVar4 != 0) && ((lbl_831F13C0 == 0 || (dVar11 <= (double)fStack_170)))) {
                bVar1 = true;
                param_2 = (double)fStack_170;
              }
              iVar4 = fn_827EDFA0(dVar5,dVar13,dVar7,dVar14,dVar15,param_2,&fStack_118,&fStack_e8,
                                    auStack_138,auStack_148);
              if ((iVar4 != 0) && ((lbl_831F13C0 == 0 || (dVar11 <= (double)fStack_170)))) {
                bVar1 = true;
                param_2 = (double)fStack_170;
              }
              dVar8 = (double)fn_82810280(auStack_158,&uStack_168);
              iVar4 = fn_827EDFA0(dVar8,(double)(float)(dVar8 * dVar8 - dVar12),dVar7,dVar14,
                                    uVar10,param_2,auStack_d8,auStack_c8,auStack_158,auStack_148);
              if ((iVar4 != 0) && ((lbl_831F13C0 == 0 || (dVar11 <= (double)fStack_170)))) {
                bVar1 = true;
                param_2 = (double)fStack_170;
              }
              iVar4 = fn_827EEDE8(dVar12,dVar6,param_2,uVar2,auStack_148,param_6,param_7,param_8);
              dVar5 = param_2;
              if ((iVar4 != 0) && ((lbl_831F13C0 == 0 || (dVar11 <= (double)fStack_170)))) {
                bVar1 = true;
                dVar5 = (double)fStack_170;
              }
            }
            if (dVar11 <= dVar5) {
              if (iVar3 != 0) goto LAB_827ef520;
              if ((lbl_831F13BC != 0) &&
                 (dVar8 = (double)fn_82810280(in_stack_0000005c,&uStack_168), dVar8 < dVar11)) {
                fn_828102A8(&uStack_168,auStack_b8);
                fn_82810328(in_stack_0000005c,auStack_b8,in_stack_0000005c);
                fn_82810B78(in_stack_0000005c,in_stack_0000005c);
              }
              if (bVar1) {
                *in_stack_00000054 = (float)dVar5;
                goto LAB_827ef588;
              }
            }
            else if (iVar3 != 0) {
LAB_827ef520:
              uVar2 = 1;
              *in_stack_00000054 = (float)dVar5;
              goto LAB_827ef0e8;
            }
          }
          else if (dVar11 <= dVar5) {
            fn_82810558(param_2,auStack_148,auStack_138);
            dVar5 = (double)fn_82810280(auStack_158,&uStack_168);
            if (dVar15 <= dVar5) goto LAB_827ef140;
          }
        }
        else if (dVar5 <= dVar11) {
          fn_82810558(param_2,auStack_148,auStack_138);
          dVar5 = (double)fn_82810280(auStack_158,&uStack_168);
          if (dVar5 <= dVar8) goto LAB_827ef140;
        }
      }
      else if (iVar3 != 0) {
        *in_stack_00000054 = (float)dVar11;
LAB_827ef588:
        uVar2 = 1;
        goto LAB_827ef0e8;
      }
    }
  }
  uVar2 = 0;
LAB_827ef0e8:
  fn_82F6A578(uVar2);
  return;
}

