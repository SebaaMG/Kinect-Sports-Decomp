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
#define NAN(x) ((x) != (x))
extern unsigned int fStack_90;
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern unsigned int fStack_a0;
extern unsigned int fStack_a4;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern int fn_824E6C20();
extern int fn_8252DDF0();
extern int fn_82F63108();
extern int fn_82F68CC0();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832967B8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_d0;


void fn_824E6D50(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  double extraout_f1;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float fStack_a4;
  float fStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  
  iVar1 = fn_82F6A540();
  *(float *)(iVar1 + 0x300) = (float)extraout_f1;
  dVar9 = (double)lbl_821CC160;
  iVar3 = 0;
  dVar8 = (double)lbl_821CA460;
  dVar6 = extraout_f1;
  do {
    iVar4 = iVar3 * 0x170 + iVar1;
    if (*(int *)(iVar4 + 0x148) != 0) {
      dVar7 = (double)(float)(dVar6 - (double)*(float *)(iVar4 + 0x15c));
      if ((-2 < iVar3) && (iVar3 < 2)) {
        puVar2 = &lbl_832967B8;
        if (iVar3 != -1) {
          puVar2 = &lbl_832967B8 + iVar3 * 0x1a;
        }
        fn_82F68CC0(&uStack_d0,puVar2,0x68);
      }
      dVar7 = (double)(float)(dVar7 / (double)*(float *)(iVar4 + 0x14c));
      uStack_d0 = 1;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar7 < dVar9) << 2) | (uint)(NAN(dVar7) || NAN(dVar9)) << 2)) <
          0.0) {
        dVar7 = dVar9;
      }
      dVar5 = dVar8;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)(((double)(float)(dVar7 - dVar8) < dVar9) << 2) |
                    (uint)(NAN((double)(float)(dVar7 - dVar8)) || NAN(dVar9)) << 2)) < 0.0) {
        dVar5 = dVar7;
      }
      if (dVar8 <= dVar5) {
        fn_82F68CC0(&uStack_d0,iVar4 + 0xe0,0x68);
        *(undefined4 *)(iVar4 + 0x148) = 0;
        if (*(int *)(iVar4 + 0x178) != 0) {
          if (*(int *)(iVar4 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
            fn_82F63108();
          }
          (**(code **)(**(int **)(iVar4 + 0x178) + 4))(*(int **)(iVar4 + 0x178),iVar3);
        }
      }
      else {
        fStack_cc = (float)((double)(float)((double)*(float *)(iVar4 + 0xe4) -
                                           (double)*(float *)(iVar4 + 0x7c)) * dVar5 +
                           (double)*(float *)(iVar4 + 0x7c));
        fStack_c8 = (float)((double)(float)((double)*(float *)(iVar4 + 0xe8) -
                                           (double)*(float *)(iVar4 + 0x80)) * dVar5 +
                           (double)*(float *)(iVar4 + 0x80));
        fStack_c4 = (float)((double)(float)((double)*(float *)(iVar4 + 0xec) -
                                           (double)*(float *)(iVar4 + 0x84)) * dVar5 +
                           (double)*(float *)(iVar4 + 0x84));
        fStack_a4 = (float)((double)(float)((double)*(float *)(iVar4 + 0x10c) -
                                           (double)*(float *)(iVar4 + 0xa4)) * dVar5 +
                           (double)*(float *)(iVar4 + 0xa4));
        fStack_a0 = (float)((double)(float)((double)*(float *)(iVar4 + 0x110) -
                                           (double)*(float *)(iVar4 + 0xa8)) * dVar5 +
                           (double)*(float *)(iVar4 + 0xa8));
        fStack_98 = (float)((double)(float)((double)*(float *)(iVar4 + 0x118) -
                                           (double)*(float *)(iVar4 + 0xb0)) * dVar5 +
                           (double)*(float *)(iVar4 + 0xb0));
        fStack_94 = (float)((double)(float)((double)*(float *)(iVar4 + 0x11c) -
                                           (double)*(float *)(iVar4 + 0xb4)) * dVar5 +
                           (double)*(float *)(iVar4 + 0xb4));
        fStack_90 = (float)((double)(float)((double)*(float *)(iVar4 + 0x120) -
                                           (double)*(float *)(iVar4 + 0xb8)) * dVar5 +
                           (double)*(float *)(iVar4 + 0xb8));
        uStack_c0 = fn_824E6C20(*(undefined4 *)(iVar4 + 0x88),*(undefined4 *)(iVar4 + 0xf0));
        uStack_bc = fn_824E6C20(*(undefined4 *)(iVar4 + 0x8c),*(undefined4 *)(iVar4 + 0xf4));
        uStack_b4 = fn_824E6C20(*(undefined4 *)(iVar4 + 0x94),*(undefined4 *)(iVar4 + 0xfc));
        uStack_b0 = fn_824E6C20(*(undefined4 *)(iVar4 + 0x98),*(undefined4 *)(iVar4 + 0x100));
        uStack_ac = fn_824E6C20(*(undefined4 *)(iVar4 + 0x9c),*(undefined4 *)(iVar4 + 0x104));
      }
      fn_8252DDF0(&uStack_d0,iVar3);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 2);
  fn_82F6A58C();
  return;
}

