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
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern unsigned int *auStack_150;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_82810240();
extern int fn_82810280();
extern int fn_82810328();
extern int fn_82810B78();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern int fn_8305D7D0();
extern int fn_8305F778();
extern int fn_83066810();
extern unsigned int lbl_82005C88;
extern unsigned int lbl_82005C8C;


void fn_8305E888(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar6;
  undefined8 uVar5;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined8 extraout_f1;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [176];
  
  lVar4 = fn_82F6A540();
  uVar5 = extraout_f1;
  fn_8305D7D0(lVar4,auStack_d0);
  fn_8305D7D0(param_2,auStack_b0);
  iVar6 = fn_83066810(uVar5,auStack_d0,param_2);
  if ((iVar6 == 3) && (iVar6 = fn_83066810(uVar5,auStack_b0,lVar4), iVar6 == 3)) {
    iVar6 = 0;
    dVar15 = (double)lbl_82005C8C;
    dVar16 = (double)lbl_82005C88;
    do {
      lVar7 = lVar4;
      lVar13 = param_2;
      if (iVar6 == 0) {
        lVar7 = param_2;
        lVar13 = lVar4;
      }
      iVar3 = (int)lVar13;
      uVar2 = *(uint *)(iVar3 + 0x30);
      if (0 < (int)uVar2) {
        iVar8 = 0;
        uVar10 = 1;
        do {
          fn_8305F778(*(undefined4 *)(iVar3 + 0x28),*(undefined4 *)(*(int *)(iVar3 + 0x2c) + iVar8)
                       ,auStack_150);
          fn_8305F778(*(undefined4 *)(iVar3 + 0x28),
                       *(undefined4 *)
                        ((-(uint)(uVar2 != uVar10) & uVar10) * 4 + *(int *)(iVar3 + 0x2c)),
                       auStack_e0);
          fn_82810328(auStack_e0,auStack_150,auStack_140);
          fn_82810B78(auStack_140,auStack_140);
          fn_82810240(auStack_140,lVar13 + 0x34,auStack_130);
          iVar11 = 0;
          dVar17 = dVar15;
          dVar18 = dVar15;
          dVar19 = dVar16;
          dVar20 = dVar16;
          if (0 < *(int *)(iVar3 + 0x30)) {
            iVar9 = 0;
            do {
              fn_8305F778(*(undefined4 *)(iVar3 + 0x28),
                           *(undefined4 *)(*(int *)(iVar3 + 0x2c) + iVar9),auStack_120);
              fn_82810328(auStack_120,auStack_150,auStack_f0);
              dVar14 = (double)fn_82810280(auStack_130,auStack_f0);
              if (dVar14 < dVar19) {
                dVar19 = dVar14;
              }
              if (dVar17 < dVar14) {
                dVar17 = dVar14;
              }
              iVar11 = iVar11 + 1;
              iVar9 = iVar9 + 4;
            } while (iVar11 < *(int *)(iVar3 + 0x30));
          }
          iVar11 = (int)lVar7;
          iVar9 = 0;
          if (0 < *(int *)(iVar11 + 0x30)) {
            iVar12 = 0;
            do {
              fn_8305F778(*(undefined4 *)(iVar11 + 0x28),
                           *(undefined4 *)(*(int *)(iVar11 + 0x2c) + iVar12),auStack_110);
              fn_82810328(auStack_110,auStack_150,auStack_100);
              dVar14 = (double)fn_82810280(auStack_130,auStack_100);
              if (dVar14 < dVar20) {
                dVar20 = dVar14;
              }
              if (dVar18 < dVar14) {
                dVar18 = dVar14;
              }
              iVar9 = iVar9 + 1;
              iVar12 = iVar12 + 4;
            } while (iVar9 < *(int *)(iVar11 + 0x30));
          }
          if ((((dVar19 < dVar20) && (dVar20 < dVar17)) || ((dVar19 < dVar18 && (dVar18 < dVar17))))
             || ((dVar20 <= dVar19 && (dVar17 <= dVar18)))) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (!bVar1) goto LAB_8305eb04;
          uVar2 = *(uint *)(iVar3 + 0x30);
          iVar8 = iVar8 + 4;
          bVar1 = (int)uVar10 < (int)uVar2;
          uVar10 = uVar10 + 1;
        } while (bVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    uVar5 = 1;
  }
  else {
LAB_8305eb04:
    uVar5 = 0;
  }
  fn_82F6A58C(uVar5);
  return;
}

