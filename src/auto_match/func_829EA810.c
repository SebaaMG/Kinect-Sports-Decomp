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
extern unsigned int *auStack_cc;
extern unsigned int *auStack_d0;
extern int fn_829E9888();
extern int fn_829E9C08();
extern int fn_829E9CB0();
extern int fn_829EA248();
extern int fn_829EC0C0();
extern int fn_829EE088();
extern int fn_829EE1D8();
extern int fn_829EE4F0();
extern int fn_829EE5F8();
extern int fn_82F68918();
extern int fn_82F68CC0();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern int fn_82F6B2A8();
extern unsigned int iStack_b4;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005340;
extern unsigned int lbl_8200D8C4;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_b8;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;


void fn_829EA810(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  float *pfVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  double dVar13;
  double extraout_f1;
  double extraout_f1_00;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uStack_e0;
  float *pfStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [20];
  undefined4 uStack_b8;
  int iStack_b4;
  
  uVar3 = fn_82F6A538();
  uVar4 = fn_829EE5F8(param_2,param_3);
  uVar8 = (param_3 & 0xffffffff) / (uVar4 & 0xffffffff);
  uVar4 = (param_2 & 0xffffffff) / (uVar4 & 0xffffffff);
  dVar18 = (double)lbl_82002AE0;
  dVar14 = (double)uVar8;
  dVar17 = (double)(float)((double)uVar4 / dVar14);
  if ((double)(float)((double)uVar4 / dVar14) < dVar18) {
    dVar17 = dVar18;
  }
  uStack_e0 = 0;
  pfStack_dc = (float *)0x0;
  uStack_d8 = 0;
  dVar16 = (double)(float)(dVar17 * (double)lbl_8200D8C4);
  uStack_d4 = 0;
  lVar5 = fn_829EE4F0(uVar3,uVar8,uVar4);
  if ((-1 < lVar5) &&
     (lVar5 = fn_829EA248(&uStack_e0,1 - (ulonglong)(uint)(int)(dVar16 * (double)lbl_82005340)),
     -1 < lVar5)) {
    fn_829E9888(auStack_d0);
    pfVar2 = pfStack_dc;
    uVar9 = 0;
    if (uVar8 != 0) {
      dVar15 = (double)lbl_821AAD20;
      do {
        dVar20 = (double)(float)((double)(uint)((int)uVar9 * (int)uVar4) / dVar14);
        if (((uVar9 & 0xffffffff) == 0) && (dVar17 == dVar18)) {
          *pfVar2 = (float)dVar18;
          uVar10 = 0;
          lVar5 = 1;
        }
        else {
          dVar13 = (double)fn_82F6B2A8((double)(float)(dVar20 - dVar16));
          uVar10 = (ulonglong)(uint)(int)dVar13;
          uVar6 = fn_82F68918((double)(float)(dVar20 + dVar16));
          iVar11 = 0;
          lVar5 = ((uint)(int)extraout_f1 - uVar10) + 1;
          if (0 < lVar5) {
            dVar19 = (double)(float)(dVar18 / dVar17);
            pfVar7 = pfVar2 + -1;
            dVar21 = dVar15;
            do {
              uVar6 = fn_829E9C08((double)(float)((double)(float)((double)(longlong)
                                                                            (iVar11 + (int)dVar13) -
                                                                   dVar20) * dVar19),uVar6,
                                    0xffffffff8315c860);
              iVar11 = iVar11 + 1;
              pfVar7 = pfVar7 + 1;
              *pfVar7 = (float)extraout_f1_00;
              dVar21 = (double)(float)(extraout_f1_00 + dVar21);
            } while (iVar11 < (int)lVar5);
            pfVar7 = pfVar2 + -1;
            lVar12 = lVar5;
            do {
              pfVar1 = pfVar7 + 1;
              pfVar7 = pfVar7 + 1;
              *pfVar7 = *pfVar1 * (float)(dVar18 / dVar21);
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
        }
        lVar5 = fn_829EE088(auStack_d0,lVar5,0,0);
        if (lVar5 < 0) break;
        fn_82F68CC0(uStack_b8,pfVar2,iStack_b4 << 2);
        fn_829EE1D8(uVar3,uVar9,uVar10,auStack_d0);
        uVar9 = uVar9 + 1;
      } while ((uVar9 & 0xffffffff) < uVar8);
    }
    fn_829EC0C0(auStack_cc);
  }
  fn_829E9CB0(&uStack_e0);
  fn_82F6A584(lVar5);
  return;
}

