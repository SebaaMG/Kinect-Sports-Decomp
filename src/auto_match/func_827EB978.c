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
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern int fn_82809CB0();
extern int fn_82810328();
extern int fn_828104E8();
extern int fn_82F6A528();
extern int fn_82F6A574();


void fn_827EB978(undefined8 param_1,float *param_2,undefined8 param_3,float *param_4,
                  float *param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  
  fn_82F6A528();
  fn_828104E8();
  fn_82810328(param_3,&fStack_a0,&fStack_b0);
  dVar2 = (double)fn_82809CB0((double)*param_5);
  dVar3 = (double)fn_82809CB0((double)param_5[3]);
  dVar4 = (double)fn_82809CB0((double)param_5[6]);
  dVar12 = (double)(*param_2 - fStack_a0);
  dVar5 = (double)fn_82809CB0((double)fStack_b0);
  if (dVar5 <= (double)(float)((double)(float)((double)*param_4 * dVar2 +
                                              (double)(float)((double)param_4[2] * dVar4 +
                                                             (double)(float)((double)param_4[1] *
                                                                            dVar3))) + dVar12)) {
    dVar5 = (double)fn_82809CB0((double)param_5[1]);
    dVar6 = (double)fn_82809CB0((double)param_5[4]);
    dVar7 = (double)fn_82809CB0((double)param_5[7]);
    dVar13 = (double)(param_2[1] - fStack_9c);
    dVar8 = (double)fn_82809CB0((double)fStack_ac);
    if (dVar8 <= (double)(float)((double)(float)((double)*param_4 * dVar5 +
                                                (double)(float)((double)param_4[2] * dVar7 +
                                                               (double)(float)((double)param_4[1] *
                                                                              dVar6))) + dVar13)) {
      dVar8 = (double)fn_82809CB0((double)param_5[2]);
      dVar9 = (double)fn_82809CB0((double)param_5[5]);
      dVar10 = (double)fn_82809CB0((double)param_5[8]);
      dVar14 = (double)(param_2[2] - fStack_98);
      dVar11 = (double)fn_82809CB0((double)fStack_a8);
      if (dVar11 <= (double)(float)((double)(float)((double)*param_4 * dVar8 +
                                                   (double)(float)((double)param_4[2] * dVar10 +
                                                                  (double)(float)((double)param_4[1]
                                                                                 * dVar9))) + dVar14
                                   )) {
        dVar11 = (double)fn_82809CB0((double)(*param_5 * fStack_b0 +
                                              param_5[3] * fStack_ac + param_5[6] * fStack_a8));
        if (dVar11 <= (double)((float)(dVar12 * dVar2 +
                                      (double)(float)(dVar14 * dVar8 +
                                                     (double)(float)(dVar13 * dVar5))) + *param_4))
        {
          dVar11 = (double)fn_82809CB0((double)(fStack_ac * param_5[4] +
                                                param_5[7] * fStack_a8 + param_5[1] * fStack_b0));
          if (dVar11 <= (double)((float)(dVar12 * dVar3 +
                                        (double)(float)(dVar14 * dVar9 +
                                                       (double)(float)(dVar13 * dVar6))) +
                                param_4[1])) {
            dVar11 = (double)fn_82809CB0((double)(param_5[8] * fStack_a8 +
                                                  param_5[2] * fStack_b0 + param_5[5] * fStack_ac));
            if (dVar11 <= (double)((float)(dVar12 * dVar4 +
                                          (double)(float)(dVar14 * dVar10 +
                                                         (double)(float)(dVar13 * dVar7))) +
                                  param_4[2])) {
              dVar11 = (double)fn_82809CB0((double)(param_5[1] * fStack_a8 - param_5[2] * fStack_ac
                                                    ));
              if (dVar11 <= (double)((float)((double)param_4[1] * dVar4 +
                                            (double)(float)((double)param_4[2] * dVar3)) +
                                    (float)(dVar14 * dVar5 + (double)(float)(dVar8 * dVar13)))) {
                dVar11 = (double)fn_82809CB0((double)(fStack_a8 * param_5[4] -
                                                      param_5[5] * fStack_ac));
                if (dVar11 <= (double)((float)((double)param_4[2] * dVar2 +
                                              (double)(float)((double)*param_4 * dVar4)) +
                                      (float)(dVar14 * dVar6 + (double)(float)(dVar9 * dVar13)))) {
                  dVar11 = (double)fn_82809CB0((double)(param_5[7] * fStack_a8 -
                                                        param_5[8] * fStack_ac));
                  if (dVar11 <= (double)((float)((double)param_4[1] * dVar2 +
                                                (double)(float)((double)*param_4 * dVar3)) +
                                        (float)(dVar14 * dVar7 + (double)(float)(dVar10 * dVar13))))
                  {
                    dVar11 = (double)fn_82809CB0((double)(param_5[2] * fStack_b0 -
                                                          *param_5 * fStack_a8));
                    if (dVar11 <= (double)((float)((double)param_4[1] * dVar7 +
                                                  (double)(float)((double)param_4[2] * dVar6)) +
                                          (float)(dVar14 * dVar2 + (double)(float)(dVar8 * dVar12)))
                       ) {
                      dVar11 = (double)fn_82809CB0((double)(param_5[5] * fStack_b0 -
                                                            param_5[3] * fStack_a8));
                      if (dVar11 <= (double)((float)((double)param_4[2] * dVar5 +
                                                    (double)(float)((double)*param_4 * dVar7)) +
                                            (float)(dVar14 * dVar3 + (double)(float)(dVar9 * dVar12)
                                                   ))) {
                        dVar11 = (double)fn_82809CB0((double)(param_5[8] * fStack_b0 -
                                                              param_5[6] * fStack_a8));
                        if (dVar11 <= (double)((float)((double)param_4[1] * dVar5 +
                                                      (double)(float)((double)*param_4 * dVar6)) +
                                              (float)(dVar14 * dVar4 +
                                                     (double)(float)(dVar10 * dVar12)))) {
                          dVar11 = (double)fn_82809CB0((double)(*param_5 * fStack_ac -
                                                                param_5[1] * fStack_b0));
                          if (dVar11 <= (double)((float)((double)param_4[1] * dVar10 +
                                                        (double)(float)((double)param_4[2] * dVar9))
                                                + (float)(dVar5 * dVar12 +
                                                         (double)(float)(dVar13 * dVar2)))) {
                            dVar2 = (double)fn_82809CB0((double)(param_5[3] * fStack_ac -
                                                                 fStack_b0 * param_5[4]));
                            if (dVar2 <= (double)((float)((double)param_4[2] * dVar8 +
                                                         (double)(float)((double)*param_4 * dVar10))
                                                 + (float)(dVar6 * dVar12 +
                                                          (double)(float)(dVar13 * dVar3)))) {
                              dVar2 = (double)fn_82809CB0((double)(param_5[6] * fStack_ac -
                                                                   param_5[7] * fStack_b0));
                              uVar1 = 0;
                              if (dVar2 <= (double)((float)((double)param_4[1] * dVar8 +
                                                           (double)(float)((double)*param_4 * dVar9)
                                                           ) +
                                                   (float)(dVar7 * dVar12 +
                                                          (double)(float)(dVar13 * dVar4)))) {
                                uVar1 = 1;
                              }
                              goto LAB_827ebde4;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_827ebde4:
  fn_82F6A574(uVar1);
  return;
}

