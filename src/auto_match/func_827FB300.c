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
extern unsigned int *auStack_dc;
extern int fn_827F6990();
extern int fn_827FAF20();
extern int fn_828116B8();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int iStack_cc;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_d0;
extern unsigned int uStack_e0;


void fn_827FB300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  float *pfVar13;
  double extraout_f1;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uStack_e0;
  undefined4 auStack_dc [3];
  uint uStack_d0;
  int iStack_cc;
  float *pfStack_c8;
  undefined4 *puStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  
  uVar4 = fn_82F6A540();
  dVar14 = extraout_f1;
  fn_827F6990(uVar4,auStack_dc);
  fn_827F6990(param_2,&uStack_e0);
  lVar12 = 0;
  lVar10 = 0;
  uVar11 = 0;
  dVar17 = (double)lbl_821AAD20;
  dVar16 = (double)lbl_82002AE0;
  do {
    uStack_d0 = uVar11;
    fn_827FAF20(uVar4,param_2,param_3,&uStack_d0);
    uVar3 = uStack_b8;
    uVar9 = (ulonglong)uStack_bc;
    uVar8 = (ulonglong)uStack_c0;
    if (param_5 == 0) {
      uVar6 = 0;
      if (uStack_b8 != 0) {
        dVar15 = (double)(float)(dVar16 - dVar14);
        iVar1 = iStack_cc - (int)pfStack_c8;
        iVar2 = (int)puStack_c4 - (int)pfStack_c8;
        pfVar13 = pfStack_c8;
        do {
          if ((uVar9 <= (uVar6 & 0xffffffff)) ||
             (dVar18 = dVar14, dVar19 = dVar15, iVar5 = fn_828116B8(uStack_e0,lVar10 + uVar6),
             iVar5 == 0)) {
            dVar18 = dVar17;
            dVar19 = dVar16;
          }
          if ((uVar8 <= (uVar6 & 0xffffffff)) ||
             (iVar5 = fn_828116B8(auStack_dc[0],uVar6 + lVar12), iVar5 == 0)) {
            dVar19 = dVar17;
          }
          if ((uVar6 & 0xffffffff) < uVar8) {
            if (uVar9 <= (uVar6 & 0xffffffff)) {
LAB_827fb450:
              dVar18 = dVar17;
            }
            if (dVar19 != dVar17) {
              dVar19 = (double)(float)((double)*(float *)(iVar1 + (int)pfVar13) * dVar19);
            }
          }
          else {
            dVar19 = dVar17;
            if (uVar9 <= (uVar6 & 0xffffffff)) goto LAB_827fb450;
          }
          if (dVar18 != dVar17) {
            dVar18 = (double)(float)((double)*pfVar13 * dVar18);
          }
          uVar6 = uVar6 + 1;
          *(float *)(iVar2 + (int)pfVar13) = (float)(dVar18 + dVar19);
          pfVar13 = pfVar13 + 1;
        } while ((uVar6 & 0xffffffff) < (ulonglong)uVar3);
      }
    }
    else {
      uVar6 = (ulonglong)uStack_b8;
      if (uVar6 != 0) {
        puVar7 = puStack_c4;
        do {
          *puVar7 = *(undefined4 *)((iStack_cc - (int)puStack_c4) + (int)puVar7);
          puVar7 = puVar7 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    uVar11 = uVar11 + 1;
    lVar12 = uVar8 + lVar12;
    lVar10 = uVar9 + lVar10;
    if (1 < uVar11) {
      fn_82F6A58C();
      return;
    }
  } while( true );
}

