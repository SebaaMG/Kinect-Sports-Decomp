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
extern unsigned int *auStack_e0;
extern unsigned int fStack_100;
extern unsigned int fStack_114;
extern unsigned int fStack_118;
extern unsigned int fStack_12c;
extern unsigned int fStack_130;
extern unsigned int fStack_bc;
extern unsigned int fStack_f4;
extern unsigned int fStack_f8;
extern unsigned int fStack_fc;
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_826EBD10();
extern int fn_8270D7A0();
extern int fn_8275E678();
extern int fn_8275EB90();
extern int fn_8275F028();
extern int fn_8275FE18();
extern int fn_8275FFC0();
extern int fn_82760050();
extern int fn_827603C0();
extern int fn_827635E0();
extern int fn_8277AE48();
extern int fn_82783F98();
extern int fn_827842B8();
extern int fn_82784460();
extern int fn_82784708();
extern int fn_82784920();
extern int fn_82F6A530();
extern int fn_82F6A57C();
extern unsigned int iStack_120;
extern unsigned int iStack_128;
extern unsigned int iStack_c0;
extern unsigned int iStack_c4;
extern unsigned int iStack_d0;
extern unsigned int iStack_d4;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200571C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_11c;
extern unsigned int uStack_124;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;


void fn_82764858(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  int *piVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  undefined8 uVar6;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double extraout_f1;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float fStack_130;
  float fStack_12c;
  int iStack_128;
  uint uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  float fStack_118;
  float fStack_114;
  longlong lStack_110;
  longlong lStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  char cStack_f0;
  undefined1 auStack_e0 [4];
  uint uStack_dc;
  uint uStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_c4;
  int iStack_c0;
  float fStack_bc;
  double dVar19;
  
  piVar7 = (int *)fn_82F6A530();
  iStack_128 = 0;
  dVar22 = extraout_f1;
  iVar8 = (**(code **)(*piVar7 + 0x28))(piVar7,&iStack_128);
  if ((iStack_128 == 0) || (bVar3 = true, (*(byte *)(piVar7 + 9) & 0x40) == 0)) {
    bVar3 = false;
  }
  iVar14 = (int)param_4;
  iVar9 = 0;
  bVar4 = false;
  if (*(uint *)(iVar14 + 0x18) < *(uint *)(iVar14 + 0x1c)) {
    dVar21 = (double)lbl_821AAD20;
    dVar20 = (double)lbl_8200571C;
    do {
      if ((**(byte **)(iVar14 + 4) & 7) == 0) {
        if (bVar4) goto LAB_82764cc4;
        fn_827603C0(param_4);
      }
      else {
        fn_8275FFC0(param_4,&uStack_11c,&iStack_120,&uStack_124);
        uVar5 = uStack_11c;
        iVar13 = iStack_120;
        uVar16 = (ulonglong)uStack_124;
        if ((uVar16 == 0) && ((uint)LZCOUNT(uStack_11c) >> 5 == (uint)(iStack_120 == 0))) {
          fn_82760050();
        }
        else {
          fn_8275FE18(auStack_e0,param_4);
          lStack_110 = (longlong)iStack_d0;
          lStack_108 = (longlong)iStack_d4;
          fStack_130 = (float)lStack_108 * fStack_bc;
          fStack_12c = (float)lStack_110 * fStack_bc;
          if ((param_5 & 0xffffffff) != 0) {
            fn_8270D7A0(param_5,&fStack_130,&fStack_12c);
          }
          if ((bVar3) && (uVar16 != 0)) {
            if (iVar9 == 0) {
              iVar9 = fn_8267B890(lbl_831E7E64,0xc4,0);
              if (iVar9 == 0) {
                iVar9 = 0;
              }
              else {
                iVar9 = fn_827635E0();
              }
              fn_82783F98(dVar20,iVar9 + 0x34);
              fn_82783F98((double)*(float *)(iVar9 + 0x34),iVar9 + 0x7c);
            }
            fn_82784708((double)fStack_130,(double)fStack_12c,iVar9 + 0x34,0xffffffffffffffff,
                              0xffffffffffffffff,uVar16 - 1);
          }
          if (uStack_dc < uStack_d8) {
            uVar1 = (uint)LZCOUNT(uVar5) >> 5;
            uVar11 = (uint)LZCOUNT(iVar13) >> 5;
            do {
              fn_8275E678(auStack_e0,&fStack_100,0);
              if ((param_5 & 0xffffffff) != 0) {
                fn_8270D7A0(param_5,&fStack_f8,&fStack_f4);
              }
              dVar24 = (double)fStack_f4;
              dVar17 = (double)fStack_12c;
              dVar23 = (double)fStack_f8;
              dVar26 = (double)fStack_130;
              dVar19 = dVar17;
              dVar18 = dVar23;
              dVar25 = dVar24;
              if (dVar24 < dVar17) {
                dVar26 = dVar23;
                dVar19 = dVar24;
                dVar18 = (double)fStack_130;
                dVar25 = dVar17;
              }
              if (cStack_f0 == '\0') {
                if ((((uVar1 != uVar11) && (dVar19 <= param_2)) && (param_2 < dVar25)) &&
                   (dVar21 < (double)((float)(dVar25 - dVar19) * (float)(dVar22 - dVar18) -
                                     (float)(dVar18 - dVar26) * (float)(param_2 - dVar25))))
                goto LAB_82764b50;
              }
              else {
                if ((param_5 & 0xffffffff) != 0) {
                  fn_8270D7A0(param_5,&fStack_100,&fStack_fc);
                  dVar24 = (double)fStack_f4;
                  dVar23 = (double)fStack_f8;
                }
                if ((uVar1 != uVar11) &&
                   (cVar10 = fn_8275F028(dVar26,dVar19,(double)fStack_100,(double)fStack_fc,dVar18
                                           ,dVar25,dVar22,param_2), cVar10 != '\0')) {
LAB_82764b50:
                  bVar4 = (bool)(bVar4 ^ 1);
                }
              }
              if ((bVar3) && (uVar16 != 0)) {
                if (cStack_f0 == '\0') {
                  fStack_118 = (float)dVar23;
                  fStack_114 = (float)dVar24;
                  fn_826EBD10(iVar9 + 0x3c,&fStack_118);
                  *(int *)(*(int *)(iVar9 + 0x5c) + 4) = *(int *)(*(int *)(iVar9 + 0x5c) + 4) + 1;
                }
                else {
                  fn_82784920((double)fStack_100,(double)fStack_fc,dVar23,dVar24,iVar9 + 0x34)
                  ;
                }
                dVar23 = (double)fStack_f8;
                dVar24 = (double)fStack_f4;
              }
              fStack_130 = (float)dVar23;
              fStack_12c = (float)dVar24;
            } while (uStack_dc < uStack_d8);
          }
          iVar13 = iStack_c4;
          if (iStack_c4 == 0) {
            iVar13 = iStack_c0;
          }
          *(int *)(iVar14 + 4) = iVar13;
          *(int *)(iVar14 + 0x18) = *(int *)(iVar14 + 0x18) + 1;
          fn_8275EB90(param_4);
        }
      }
    } while (*(uint *)(iVar14 + 0x18) < *(uint *)(iVar14 + 0x1c));
    if (bVar4) {
LAB_82764cc4:
      if (iVar9 != 0) {
LAB_82764ccc:
        fn_8267C498(iVar9);
      }
      uVar6 = 1;
      goto LAB_82764db0;
    }
    if (iVar9 != 0) {
      uVar16 = 0;
      if (*(int *)(iVar9 + 0x4c) != 0) {
        iVar14 = iVar9 + 0x7c;
        dVar26 = (double)lbl_82002C5C;
        do {
          lVar15 = (ulonglong)
                   *(uint *)(((uint)((uVar16 & 0xffffffff) >> 4) & 0xffffffc) +
                            *(int *)(iVar9 + 0x58)) + (uVar16 & 0x3f) * 0x18;
          iVar13 = *(int *)((int)lVar15 + 0x14) * 0x18 + iVar8;
          lStack_108 = (longlong)(int)(uint)*(ushort *)(iVar13 + 4);
          dVar19 = (double)lStack_108;
          if ((double)lStack_108 < dVar20) {
            dVar19 = dVar20;
          }
          dVar18 = (double)(float)(dVar19 * dVar26);
          *(float *)(iVar9 + 8) = (float)(dVar19 * dVar26);
          if (dVar18 < dVar21) {
            dVar18 = -dVar18;
          }
          *(float *)(iVar9 + 0xc) = (float)dVar18;
          uVar2 = *(ushort *)(iVar13 + 0x10) & 0x30;
          if (uVar2 == 0x10) {
            uVar11 = 4;
          }
          else {
            uVar11 = -(uint)(uVar2 != 0x20) & 3;
          }
          *(uint *)(iVar9 + 0x10) = uVar11;
          uVar11 = *(ushort *)(iVar13 + 0x10) & 0xc0;
          if (uVar11 == 0x40) {
            iVar12 = 0;
          }
          else {
            iVar12 = ((uint)LZCOUNT(uVar11 - 0x80) >> 5 ^ 1) + 1;
          }
          *(int *)(iVar9 + 0x14) = iVar12;
          uVar11 = *(ushort *)(iVar13 + 0x10) >> 2 & 0xc0;
          if (uVar11 == 0x40) {
            iVar12 = 0;
          }
          else {
            iVar12 = ((uint)LZCOUNT(uVar11 - 0x80) >> 5 ^ 1) + 1;
          }
          *(int *)(iVar9 + 0x18) = iVar12;
          if ((*(ushort *)(iVar13 + 0x10) & 0x30) == 0x20) {
            *(undefined4 *)(iVar9 + 0x1c) = *(undefined4 *)(iVar13 + 0x14);
          }
          fn_827842B8(iVar14);
          fn_8277AE48((float *)(iVar9 + 8),lVar15,iVar14,1);
          cVar10 = fn_82784460(dVar22,param_2,iVar14);
          if (cVar10 != '\0') goto LAB_82764ccc;
          uVar16 = uVar16 + 1;
        } while ((uVar16 & 0xffffffff) < (ulonglong)*(uint *)(iVar9 + 0x4c));
      }
      fn_8267C498(iVar9);
    }
  }
  uVar6 = 0;
LAB_82764db0:
  fn_82F6A57C(uVar6);
  return;
}

