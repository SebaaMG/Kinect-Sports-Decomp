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
extern int fn_827EE3C0();
extern int fn_82809558();
extern int fn_82809CB0();
extern int fn_82810280();
extern int fn_82810328();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201DCB8;
extern unsigned int lbl_821AAD20;


void fn_827E9868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,float *param_6)

{
  float fVar1;
  undefined8 uVar2;
  double extraout_f1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [128];
  
  uVar2 = fn_82F6A538();
  dVar8 = extraout_f1;
  fn_82810328(param_4,param_3,auStack_a0);
  fn_82810328(uVar2,param_3,auStack_80);
  fn_82810328(param_2,uVar2,auStack_90);
  dVar3 = (double)fn_82810280(auStack_80,auStack_a0);
  dVar4 = (double)fn_82810280(auStack_90,auStack_a0);
  dVar5 = (double)fn_82810280(auStack_a0,auStack_a0);
  dVar9 = (double)lbl_821AAD20;
  if (((dVar3 < dVar9) && (uVar2 = param_3, (double)(float)(dVar4 + dVar3) < dVar9)) ||
     ((dVar5 < dVar3 && (uVar2 = param_4, dVar5 < (double)(float)(dVar4 + dVar3))))) {
code_r0x827e9914:
    uVar2 = fn_827EE3C0(dVar8,uVar2);
  }
  else {
    dVar6 = (double)fn_82810280(auStack_90,auStack_90);
    dVar7 = (double)fn_82810280(auStack_80,auStack_90);
    dVar10 = (double)(float)(dVar6 * dVar5 - (double)(float)(dVar4 * dVar4));
    dVar6 = (double)fn_82810280(auStack_80,auStack_80);
    dVar11 = (double)(float)(-(double)(float)(dVar8 * dVar8 - dVar6) * dVar5 -
                            (double)(float)(dVar3 * dVar3));
    dVar6 = (double)fn_82809CB0(dVar10);
    if ((double)lbl_8201DCB8 <= dVar6) {
      dVar6 = (double)(float)(dVar7 * dVar5 - (double)(float)(dVar4 * dVar3));
      if (dVar9 <= (double)(float)(dVar6 * dVar6 - (double)(float)(dVar11 * dVar10))) {
        dVar7 = (double)fn_82809558();
        fVar1 = (float)((double)(float)(-dVar6 - dVar7) / dVar10);
        dVar6 = (double)fVar1;
        *param_6 = fVar1;
        if ((dVar9 <= dVar6) && (dVar6 <= (double)lbl_82002AE0)) {
          dVar3 = (double)(float)(dVar6 * dVar4 + dVar3);
          uVar2 = param_3;
          if ((dVar9 <= dVar3) && (uVar2 = param_4, dVar3 <= dVar5)) goto code_r0x827e99bc;
          goto code_r0x827e9914;
        }
      }
    }
    else if (dVar11 <= dVar9) {
      uVar2 = param_3;
      if ((dVar9 <= dVar3) && (uVar2 = param_4, dVar3 <= dVar5)) {
        *param_6 = (float)dVar9;
code_r0x827e99bc:
        uVar2 = 1;
        goto code_r0x827e9a24;
      }
      goto code_r0x827e9914;
    }
    uVar2 = 0;
  }
code_r0x827e9a24:
  fn_82F6A584(uVar2);
  return;
}

