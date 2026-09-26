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
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern int fn_82809CB0();
extern int fn_8280A5D8();
extern int fn_82810328();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_82005C88;
extern unsigned int lbl_820069B4;
extern unsigned int lbl_8200DBB4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831F13B4;


void fn_827EA178(undefined8 param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                  float *param_5,undefined8 param_6,undefined8 param_7,float *param_8)

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
  double dVar9;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  
  uVar1 = fn_82F6A53C();
  dVar4 = extraout_f1;
  fn_82810328(param_2,param_6,&fStack_90);
  fn_82810328(param_3,uVar1,&fStack_80);
  dVar6 = (double)(param_5[6] * fStack_88 + *param_5 * fStack_90 + param_5[3] * fStack_8c);
  dVar8 = (double)(param_5[6] * fStack_78 + *param_5 * fStack_80 + param_5[3] * fStack_7c);
  dVar2 = (double)fn_82809CB0(dVar6);
  dVar5 = (double)lbl_820069B4;
  if (dVar2 <= dVar5) {
    dVar2 = (double)lbl_821AAD20;
    if ((dVar2 <= (double)(float)((double)*param_4 + dVar8)) && (dVar8 <= (double)*param_4)) {
      dVar6 = (double)lbl_8200DBB4;
      dVar8 = (double)lbl_82005C88;
      goto LAB_827ea2bc;
    }
  }
  else {
    dVar6 = (double)fn_8280A5D8(dVar6);
    dVar2 = (double)(float)((double)(float)((double)*param_4 + dVar8) * dVar6);
    dVar8 = (double)(float)((double)(float)(dVar8 - (double)*param_4) * dVar6);
    dVar6 = dVar2;
    if (dVar8 < dVar2) {
      dVar6 = dVar8;
      dVar8 = dVar2;
    }
    if (((dVar6 <= dVar8) && (dVar2 = (double)lbl_821AAD20, dVar2 <= dVar8)) && (dVar6 <= dVar4)) {
LAB_827ea2bc:
      dVar7 = (double)(param_5[7] * fStack_88 + param_5[1] * fStack_90 + param_5[4] * fStack_8c);
      dVar9 = (double)(param_5[7] * fStack_78 + param_5[1] * fStack_80 + param_5[4] * fStack_7c);
      dVar3 = (double)fn_82809CB0(dVar7);
      if (dVar3 <= dVar5) {
        if ((dVar2 <= (double)(float)((double)param_4[1] + dVar9)) && (dVar9 <= (double)param_4[1]))
        goto LAB_827ea394;
      }
      else {
        dVar7 = (double)fn_8280A5D8(dVar7);
        dVar3 = (double)(float)((double)(float)((double)param_4[1] + dVar9) * dVar7);
        dVar7 = (double)(float)((double)(float)(dVar9 - (double)param_4[1]) * dVar7);
        if (dVar3 <= dVar7) {
          if (dVar6 < dVar3) {
            dVar6 = dVar3;
          }
          if (dVar7 < dVar8) {
            dVar8 = dVar7;
          }
        }
        else {
          if (dVar6 < dVar7) {
            dVar6 = dVar7;
          }
          if (dVar3 < dVar8) {
            dVar8 = dVar3;
          }
        }
        if (((dVar6 <= dVar8) && (dVar2 <= dVar8)) && (dVar6 <= dVar4)) {
LAB_827ea394:
          dVar7 = (double)(param_5[8] * fStack_88 + param_5[2] * fStack_90 + param_5[5] * fStack_8c)
          ;
          dVar9 = (double)(param_5[8] * fStack_78 + param_5[2] * fStack_80 + param_5[5] * fStack_7c)
          ;
          dVar3 = (double)fn_82809CB0(dVar7);
          if (dVar3 <= dVar5) {
            if ((dVar2 <= (double)(float)((double)param_4[2] + dVar9)) &&
               (dVar9 <= (double)param_4[2])) goto LAB_827ea46c;
          }
          else {
            dVar3 = (double)fn_8280A5D8(dVar7);
            dVar5 = (double)(float)((double)(float)((double)param_4[2] + dVar9) * dVar3);
            dVar3 = (double)(float)((double)(float)(dVar9 - (double)param_4[2]) * dVar3);
            if (dVar5 <= dVar3) {
              if (dVar6 < dVar5) {
                dVar6 = dVar5;
              }
              if (dVar3 < dVar8) {
                dVar8 = dVar3;
              }
            }
            else {
              if (dVar6 < dVar3) {
                dVar6 = dVar3;
              }
              if (dVar5 < dVar8) {
                dVar8 = dVar5;
              }
            }
            if (((dVar6 <= dVar8) && (dVar2 <= dVar8)) && (dVar6 <= dVar4)) {
LAB_827ea46c:
              if ((lbl_831F13B4 == 0) || (dVar2 <= dVar6)) {
                *param_8 = (float)dVar6;
                uVar1 = 1;
                goto LAB_827ea278;
              }
            }
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_827ea278:
  fn_82F6A588(uVar1);
  return;
}

