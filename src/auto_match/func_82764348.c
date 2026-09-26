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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern unsigned int fStack_ec;
extern unsigned int fStack_f0;
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_826EBD10();
extern int fn_8270D7A0();
extern int fn_8275E130();
extern int fn_8275E198();
extern int fn_8275F028();
extern int fn_8275FD10();
extern int fn_8275FD58();
extern int fn_82760B00();
extern int fn_827635E0();
extern int fn_8277AE48();
extern int fn_82783F98();
extern int fn_827842B8();
extern int fn_82784460();
extern int fn_82784708();
extern int fn_82784920();
extern int fn_82F6A530();
extern int fn_82F6A57C();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200571C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_d8;


void fn_82764348(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int *piVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  undefined8 uVar7;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar19;
  double extraout_f1;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float fStack_f0;
  float fStack_ec;
  int aiStack_e8 [2];
  int aiStack_e0 [2];
  undefined8 uStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  char cStack_c0;
  double dVar18;
  
  piVar8 = (int *)fn_82F6A530();
  aiStack_e8[0] = 0;
  dVar22 = extraout_f1;
  iVar9 = (**(code **)(*piVar8 + 0x28))(piVar8,aiStack_e8);
  if ((aiStack_e8[0] == 0) || (bVar5 = true, (*(byte *)(piVar8 + 9) & 0x40) == 0)) {
    bVar5 = false;
  }
  iVar14 = (int)param_4;
  cVar11 = *(char *)(iVar14 + 0x20);
  iVar10 = 0;
  bVar6 = false;
  if (cVar11 != '\x01') {
    dVar21 = (double)lbl_821AAD20;
    dVar20 = (double)lbl_8200571C;
    do {
      if (cVar11 == '\x02') {
        if (bVar6) goto LAB_82764758;
        fn_8275FD10(param_4);
      }
      else {
        uVar16 = (ulonglong)*(uint *)(iVar14 + 0x1c);
        uVar1 = *(undefined4 *)(iVar14 + 0x14);
        iVar2 = *(int *)(iVar14 + 0x18);
        if ((uVar16 == 0) && ((uint)LZCOUNT(uVar1) >> 5 == (uint)(iVar2 == 0))) {
          fn_82760B00(param_4);
        }
        else {
          fn_8275FD58(aiStack_e0,param_4);
          fn_8275E130(aiStack_e0,&fStack_f0,&fStack_ec);
          if ((param_5 & 0xffffffff) != 0) {
            fn_8270D7A0(param_5,&fStack_f0,&fStack_ec);
          }
          if ((bVar5) && (uVar16 != 0)) {
            if (iVar10 == 0) {
              iVar10 = fn_8267B890(lbl_831E7E64,0xc4,0);
              if (iVar10 == 0) {
                iVar10 = 0;
              }
              else {
                iVar10 = fn_827635E0();
              }
              fn_82783F98(dVar20,iVar10 + 0x34);
              fn_82783F98((double)*(float *)(iVar10 + 0x34),iVar10 + 0x7c);
            }
            fn_82784708((double)fStack_f0,(double)fStack_ec,iVar10 + 0x34,0xffffffffffffffff,
                              0xffffffffffffffff,uVar16 - 1);
          }
          while( true ) {
            if ((*(byte *)(aiStack_e0[0] + 0x20) == 1) ||
               (bVar4 = false, (*(byte *)(aiStack_e0[0] + 0x20) & 0x80) == 0)) {
              bVar4 = true;
            }
            if (bVar4) break;
            fn_8275E198(aiStack_e0,&fStack_d0,0);
            if ((param_5 & 0xffffffff) != 0) {
              fn_8270D7A0(param_5,&fStack_c8,&fStack_c4);
            }
            dVar19 = (double)fStack_ec;
            dVar24 = (double)fStack_c4;
            dVar23 = (double)fStack_c8;
            dVar25 = (double)fStack_f0;
            dVar18 = dVar19;
            dVar17 = dVar23;
            dVar26 = dVar24;
            if (dVar24 < dVar19) {
              dVar25 = dVar23;
              dVar18 = dVar24;
              dVar17 = (double)fStack_f0;
              dVar26 = dVar19;
            }
            if (cStack_c0 == '\0') {
              if (((((uint)LZCOUNT(uVar1) >> 5 != (uint)LZCOUNT(iVar2) >> 5) && (dVar18 <= param_2))
                  && (param_2 < dVar26)) &&
                 (dVar21 < (double)((float)(dVar26 - dVar18) * (float)(dVar22 - dVar17) -
                                   (float)(dVar17 - dVar25) * (float)(param_2 - dVar26))))
              goto LAB_827646e0;
            }
            else {
              if ((param_5 & 0xffffffff) != 0) {
                fn_8270D7A0(param_5,&fStack_d0,&fStack_cc);
                dVar24 = (double)fStack_c4;
                dVar23 = (double)fStack_c8;
              }
              if (((uint)LZCOUNT(uVar1) >> 5 != (uint)(iVar2 == 0)) &&
                 (cVar11 = fn_8275F028(dVar25,dVar18,(double)fStack_d0,(double)fStack_cc,dVar17,
                                         dVar26,dVar22,param_2), cVar11 != '\0')) {
LAB_827646e0:
                bVar6 = (bool)(bVar6 ^ 1);
              }
            }
            if ((bVar5) && (uVar16 != 0)) {
              if (cStack_c0 == '\0') {
                uStack_d8 = CONCAT44((float)dVar23,(float)dVar24);
                fn_826EBD10(iVar10 + 0x3c,&uStack_d8);
                *(int *)(*(int *)(iVar10 + 0x5c) + 4) = *(int *)(*(int *)(iVar10 + 0x5c) + 4) + 1;
              }
              else {
                fn_82784920((double)fStack_d0,(double)fStack_cc,dVar23,dVar24,iVar10 + 0x34);
              }
              dVar23 = (double)fStack_c8;
              dVar24 = (double)fStack_c4;
            }
            fStack_f0 = (float)dVar23;
            fStack_ec = (float)dVar24;
          }
        }
      }
      cVar11 = *(char *)(iVar14 + 0x20);
    } while (cVar11 != '\x01');
    if (bVar6) {
LAB_82764758:
      if (iVar10 != 0) {
LAB_82764760:
        fn_8267C498(iVar10);
      }
      uVar7 = 1;
      goto LAB_82764844;
    }
    if (iVar10 != 0) {
      uVar16 = 0;
      if (*(int *)(iVar10 + 0x4c) != 0) {
        iVar14 = iVar10 + 0x7c;
        dVar25 = (double)lbl_82002C5C;
        do {
          lVar15 = (ulonglong)
                   *(uint *)(((uint)((uVar16 & 0xffffffff) >> 4) & 0xffffffc) +
                            *(int *)(iVar10 + 0x58)) + (uVar16 & 0x3f) * 0x18;
          iVar2 = *(int *)((int)lVar15 + 0x14) * 0x18 + iVar9;
          uStack_d8 = (longlong)(int)(uint)*(ushort *)(iVar2 + 4);
          dVar18 = (double)uStack_d8;
          if ((double)uStack_d8 < dVar20) {
            dVar18 = dVar20;
          }
          dVar17 = (double)(float)(dVar18 * dVar25);
          *(float *)(iVar10 + 8) = (float)(dVar18 * dVar25);
          if (dVar17 < dVar21) {
            dVar17 = -dVar17;
          }
          *(float *)(iVar10 + 0xc) = (float)dVar17;
          uVar3 = *(ushort *)(iVar2 + 0x10) & 0x30;
          if (uVar3 == 0x10) {
            uVar12 = 4;
          }
          else {
            uVar12 = -(uint)(uVar3 != 0x20) & 3;
          }
          *(uint *)(iVar10 + 0x10) = uVar12;
          uVar12 = *(ushort *)(iVar2 + 0x10) & 0xc0;
          if (uVar12 == 0x40) {
            iVar13 = 0;
          }
          else {
            iVar13 = ((uint)LZCOUNT(uVar12 - 0x80) >> 5 ^ 1) + 1;
          }
          *(int *)(iVar10 + 0x14) = iVar13;
          uVar12 = *(ushort *)(iVar2 + 0x10) >> 2 & 0xc0;
          if (uVar12 == 0x40) {
            iVar13 = 0;
          }
          else {
            iVar13 = ((uint)LZCOUNT(uVar12 - 0x80) >> 5 ^ 1) + 1;
          }
          *(int *)(iVar10 + 0x18) = iVar13;
          if ((*(ushort *)(iVar2 + 0x10) & 0x30) == 0x20) {
            *(undefined4 *)(iVar10 + 0x1c) = *(undefined4 *)(iVar2 + 0x14);
          }
          fn_827842B8(iVar14);
          fn_8277AE48((float *)(iVar10 + 8),lVar15,iVar14,1);
          cVar11 = fn_82784460(dVar22,param_2,iVar14);
          if (cVar11 != '\0') goto LAB_82764760;
          uVar16 = uVar16 + 1;
        } while ((uVar16 & 0xffffffff) < (ulonglong)*(uint *)(iVar10 + 0x4c));
      }
      fn_8267C498(iVar10);
    }
  }
  uVar7 = 0;
LAB_82764844:
  fn_82F6A57C(uVar7);
  return;
}

