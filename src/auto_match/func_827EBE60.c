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
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern int fn_82809CB0();
extern int fn_82810240();
extern int fn_82810280();
extern int fn_82810328();
extern int fn_828104E8();
extern int fn_82F6A544();
extern int fn_82F6A590();


void fn_827EBE60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  
  uVar1 = fn_82F6A544();
  fn_828104E8(param_4,param_5,&fStack_60);
  pfVar2 = (float *)param_4;
  dVar7 = (double)(fStack_60 - *pfVar2);
  dVar8 = (double)(fStack_5c - pfVar2[1]);
  dVar9 = (double)(fStack_58 - pfVar2[2]);
  fn_82810328(uVar1,&fStack_60,&fStack_b0);
  fn_82810328(param_2,uVar1,&fStack_90);
  fn_82810328(param_3,uVar1,&fStack_a0);
  fn_82810240(&fStack_90,&fStack_a0,&fStack_80);
  dVar4 = (double)fn_82809CB0((double)fStack_78);
  dVar10 = (double)(float)(dVar4 * dVar9);
  dVar4 = (double)fn_82809CB0((double)fStack_7c);
  dVar10 = (double)(float)(dVar4 * dVar8 + dVar10);
  dVar4 = (double)fn_82809CB0((double)fStack_80);
  dVar10 = (double)(float)(dVar4 * dVar7 + dVar10);
  fn_82810280(&fStack_80,&fStack_b0);
  dVar4 = (double)fn_82809CB0();
  if (dVar4 <= dVar10) {
    dVar4 = (double)fStack_b0;
    if (dVar4 <= dVar7) {
      dVar10 = -dVar7;
      if (((dVar10 <= dVar4) || (dVar10 <= (double)(float)((double)fStack_90 + dVar4))) ||
         (dVar10 <= (double)(float)((double)fStack_a0 + dVar4))) goto code_r0x827ebf98;
    }
    else if (((double)(float)((double)fStack_90 + dVar4) <= dVar7) ||
            ((double)(float)((double)fStack_a0 + dVar4) <= dVar7)) {
code_r0x827ebf98:
      dVar10 = (double)fStack_ac;
      dVar4 = (double)fStack_8c;
      if (dVar10 <= dVar8) {
        dVar3 = -dVar8;
        if (((dVar3 <= dVar10) || (dVar3 <= (double)(float)(dVar4 + dVar10))) ||
           (dVar3 <= (double)(float)((double)fStack_9c + dVar10))) goto code_r0x827ebff0;
      }
      else if (((double)(float)(dVar4 + dVar10) <= dVar8) ||
              ((double)(float)((double)fStack_9c + dVar10) <= dVar8)) {
code_r0x827ebff0:
        dVar3 = (double)fStack_a8;
        dVar5 = (double)fStack_88;
        if (dVar3 <= dVar9) {
          dVar6 = -dVar9;
          if (((dVar6 <= dVar3) || (dVar6 <= (double)(float)(dVar5 + dVar3))) ||
             (dVar6 <= (double)(float)((double)fStack_98 + dVar3))) goto code_r0x827ec048;
        }
        else if (((double)(float)(dVar5 + dVar3) <= dVar9) ||
                ((double)(float)((double)fStack_98 + dVar3) <= dVar9)) {
code_r0x827ec048:
          dVar3 = (double)(float)(dVar3 * dVar4 - (double)(float)(dVar5 * dVar10));
          dVar4 = (double)fn_82809CB0();
          dVar10 = (double)(float)(dVar4 * dVar8);
          dVar4 = (double)fn_82809CB0((double)fStack_8c);
          dVar4 = (double)(float)(dVar4 * dVar9 + dVar10);
          if (((dVar3 <= dVar4) || ((double)(float)(dVar3 + (double)fStack_80) <= dVar4)) &&
             ((-dVar4 <= dVar3 || (-dVar4 <= (double)(float)(dVar3 + (double)fStack_80))))) {
            dVar3 = (double)(fStack_a8 * fStack_9c - fStack_98 * fStack_ac);
            dVar4 = (double)fn_82809CB0();
            dVar10 = (double)(float)(dVar4 * dVar8);
            dVar4 = (double)fn_82809CB0((double)fStack_9c);
            dVar4 = (double)(float)(dVar4 * dVar9 + dVar10);
            if (((dVar3 <= dVar4) || ((double)(float)(dVar3 - (double)fStack_80) <= dVar4)) &&
               ((-dVar4 <= dVar3 || (-dVar4 <= (double)(float)(dVar3 - (double)fStack_80))))) {
              fn_82810328(&fStack_a0,&fStack_90,&fStack_70);
              dVar3 = (double)(fStack_6c * fStack_a8 - fStack_68 * fStack_ac);
              dVar4 = (double)fn_82809CB0();
              dVar10 = (double)(float)(dVar4 * dVar9);
              dVar4 = (double)fn_82809CB0((double)fStack_68);
              dVar4 = (double)(float)(dVar4 * dVar8 + dVar10);
              if (((dVar3 <= dVar4) || ((double)(float)(dVar3 - (double)fStack_80) <= dVar4)) &&
                 ((-dVar4 <= dVar3 || (-dVar4 <= (double)(float)(dVar3 - (double)fStack_80))))) {
                dVar3 = (double)(fStack_88 * fStack_b0 - fStack_a8 * fStack_90);
                dVar4 = (double)fn_82809CB0();
                dVar10 = (double)(float)(dVar4 * dVar7);
                dVar4 = (double)fn_82809CB0((double)fStack_90);
                dVar4 = (double)(float)(dVar4 * dVar9 + dVar10);
                if (((dVar3 <= dVar4) || ((double)(float)(dVar3 + (double)fStack_7c) <= dVar4)) &&
                   ((-dVar4 <= dVar3 || (-dVar4 <= (double)(float)(dVar3 + (double)fStack_7c))))) {
                  dVar3 = (double)(fStack_98 * fStack_b0 - fStack_a8 * fStack_a0);
                  dVar4 = (double)fn_82809CB0();
                  dVar10 = (double)(float)(dVar4 * dVar7);
                  dVar4 = (double)fn_82809CB0((double)fStack_a0);
                  dVar4 = (double)(float)(dVar4 * dVar9 + dVar10);
                  if (((dVar3 <= dVar4) || ((double)(float)(dVar3 - (double)fStack_7c) <= dVar4)) &&
                     ((-dVar4 <= dVar3 || (-dVar4 <= (double)(float)(dVar3 - (double)fStack_7c)))))
                  {
                    dVar10 = (double)(fStack_68 * fStack_b0 - fStack_70 * fStack_a8);
                    dVar4 = (double)fn_82809CB0();
                    dVar9 = (double)(float)(dVar4 * dVar9);
                    dVar4 = (double)fn_82809CB0((double)fStack_68);
                    dVar4 = (double)(float)(dVar4 * dVar7 + dVar9);
                    if (((dVar10 <= dVar4) || ((double)(float)(dVar10 - (double)fStack_7c) <= dVar4)
                        ) && ((-dVar4 <= dVar10 ||
                              (-dVar4 <= (double)(float)(dVar10 - (double)fStack_7c))))) {
                      dVar10 = (double)(fStack_ac * fStack_90 - fStack_8c * fStack_b0);
                      dVar4 = (double)fn_82809CB0();
                      dVar9 = (double)(float)(dVar4 * dVar7);
                      dVar4 = (double)fn_82809CB0((double)fStack_90);
                      dVar4 = (double)(float)(dVar4 * dVar8 + dVar9);
                      if (((dVar10 <= dVar4) ||
                          ((double)(float)(dVar10 + (double)fStack_78) <= dVar4)) &&
                         ((-dVar4 <= dVar10 ||
                          (-dVar4 <= (double)(float)(dVar10 + (double)fStack_78))))) {
                        dVar10 = (double)(fStack_ac * fStack_a0 - fStack_9c * fStack_b0);
                        dVar4 = (double)fn_82809CB0();
                        dVar9 = (double)(float)(dVar4 * dVar7);
                        dVar4 = (double)fn_82809CB0((double)fStack_a0);
                        dVar4 = (double)(float)(dVar4 * dVar8 + dVar9);
                        if (((dVar10 <= dVar4) ||
                            ((double)(float)(dVar10 - (double)fStack_78) <= dVar4)) &&
                           ((-dVar4 <= dVar10 ||
                            (-dVar4 <= (double)(float)(dVar10 - (double)fStack_78))))) {
                          dVar9 = (double)(fStack_70 * fStack_ac - fStack_6c * fStack_b0);
                          dVar4 = (double)fn_82809CB0();
                          dVar8 = (double)(float)(dVar4 * dVar8);
                          dVar4 = (double)fn_82809CB0((double)fStack_6c);
                          dVar4 = (double)(float)(dVar4 * dVar7 + dVar8);
                          if (((dVar9 <= dVar4) ||
                              ((double)(float)(dVar9 - (double)fStack_78) <= dVar4)) &&
                             ((-dVar4 <= dVar9 ||
                              (-dVar4 <= (double)(float)(dVar9 - (double)fStack_78))))) {
                            uVar1 = 1;
                            goto code_r0x827ec388;
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
code_r0x827ec388:
  fn_82F6A590(uVar1);
  return;
}

