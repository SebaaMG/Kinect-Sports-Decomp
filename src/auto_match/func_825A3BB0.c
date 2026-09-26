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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_f0;
extern int fn_822E83E0();
extern int fn_8240DEC0();
extern int fn_825A4198();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CE6768();
extern int fn_82CEA280();
extern int fn_82D89BD8();
extern int fn_82D8BC78();
extern int fn_82D94918();
extern int fn_82DEB238();
extern unsigned int stack0x00000000;
extern unsigned int uStack_13c;
extern V16 loadVectorLeftIndexed128();


/* WARNING: Removing unreachable block (ram,0x825a4058) */

undefined8 fn_825A3BB0(int param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float *pfVar5;
  bool bVar6;
  undefined8 in_r0;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  int *piStack_140;
  uint uStack_13c;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [240];
  
  uVar7 = ZEXT48(&stack0x00000000);
  iVar1 = *param_2;
  piStack_140 = (int *)0x0;
  uStack_13c = 0;
  uVar11 = 0;
  iVar14 = 0;
  if (0 < param_2[2]) {
    iVar15 = 0;
    do {
      iVar17 = *(int *)(param_2[1] + iVar15);
      if (iVar17 == 0) {
LAB_825a3c68:
        iVar17 = *(int *)(param_2[1] + iVar15 + 4);
        bVar2 = false;
        piVar12 = piStack_140;
        bVar6 = false;
        if (0 < (int)uVar11) {
          do {
            bVar2 = bVar6;
            if (*piVar12 == iVar17) {
              bVar2 = true;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 1;
            bVar6 = bVar2;
          } while (uVar11 != 0);
        }
        iVar8 = fn_82CE5410();
        if (uStack_13c == 0) {
          fn_82CE63B0(*(undefined4 *)(iVar8 + 0x10),uVar7 - 0x140,4);
        }
        *(int *)(uStack_13c * 4) = iVar17;
        uVar11 = (ulonglong)uStack_13c + 1;
        uStack_13c = (uint)uVar11;
        if (!bVar2) {
          iVar8 = fn_82CEA280(param_1 + 0x10,iVar1,0xffffffffffffffff);
          if (iVar8 != -1) {
            iVar18 = *(int *)(param_1 + 4) + iVar8 * 0x28;
            iVar9 = fn_82CEA280(iVar18,iVar17,0);
            iVar19 = iVar9 * 0x60 + *(int *)(iVar18 + 0x1c);
            iVar10 = *(int *)(iVar19 + 0x50);
            if (*(int *)(iVar10 + 8) == 0) {
              if ((*(char *)(iVar10 + 0xe8) == '\x05') ||
                 (bVar2 = false, *(char *)(iVar10 + 0xe8) == '\x04')) {
                bVar2 = true;
              }
              if (!bVar2) {
                if (*(char *)(iVar10 + 0x2a) != '\x05') {
                  *(undefined1 *)(iVar10 + 0x2a) = 4;
                }
                fn_822E83E0(*(undefined4 *)(iVar19 + 0x50),iVar1 + 0x1b0);
                fn_8240DEC0(*(undefined4 *)(iVar19 + 0x50),iVar1 + 0x1c0);
                puVar16 = (undefined4 *)(iVar1 + 0x100U & 0xfffffff0);
                uVar20 = *puVar16;
                uVar21 = puVar16[1];
                uVar23 = puVar16[2];
                uVar25 = puVar16[3];
                pfVar3 = (float *)(iVar1 + 0x110U & 0xfffffff0);
                fVar34 = *pfVar3;
                fVar35 = pfVar3[1];
                fVar36 = pfVar3[2];
                fVar37 = pfVar3[3];
                puVar16 = (undefined4 *)(iVar1 + 0x120U & 0xfffffff0);
                uVar30 = *puVar16;
                uVar31 = puVar16[1];
                uVar32 = puVar16[2];
                uVar33 = puVar16[3];
                iVar10 = (int)in_r0;
                puVar16 = (undefined4 *)(iVar10 + iVar1 + 0xf0 & 0xfffffff0);
                uVar27 = puVar16[1];
                uVar28 = puVar16[2];
                uVar29 = puVar16[3];
                puVar4 = (undefined4 *)((uint)(auStack_120 + iVar10) & 0xfffffff0);
                *puVar4 = *puVar16;
                puVar4[1] = uVar27;
                puVar4[2] = uVar28;
                puVar4[3] = uVar29;
                puVar16 = (undefined4 *)((uint)(auStack_110 + iVar10) & 0xfffffff0);
                *puVar16 = uVar20;
                puVar16[1] = uVar21;
                puVar16[2] = uVar23;
                puVar16[3] = uVar25;
                pfVar3 = (float *)((uint)(auStack_100 + iVar10) & 0xfffffff0);
                *pfVar3 = fVar34;
                pfVar3[1] = fVar35;
                pfVar3[2] = fVar36;
                pfVar3[3] = fVar37;
                puVar16 = (undefined4 *)((uint)(auStack_f0 + iVar10) & 0xfffffff0);
                *puVar16 = uVar30;
                puVar16[1] = uVar31;
                puVar16[2] = uVar32;
                puVar16[3] = uVar33;
                fn_82CE6768(uVar7 - 0xe0,iVar19,uVar7 - 0x120);
                fn_82D8BC78(*(undefined4 *)(iVar19 + 0x50),uVar7 - 0xe0);
                iVar10 = 0;
                if (0 < *(int *)(param_4 + 0xc)) {
                  iVar13 = 0;
                  do {
                    if (*(int *)(iVar13 + *(int *)(param_4 + 8)) == *(int *)(iVar19 + 0x50))
                    goto LAB_825a3e20;
                    iVar10 = iVar10 + 1;
                    iVar13 = iVar13 + 4;
                  } while (iVar10 < *(int *)(param_4 + 0xc));
                }
                iVar10 = -1;
LAB_825a3e20:
                if (iVar10 == -1) {
                  fn_82D94918(param_4,*(undefined4 *)(iVar19 + 0x50));
                }
                if ((*(char *)(iVar1 + 0xe8) == '\x05') ||
                   (bVar2 = false, *(char *)(iVar1 + 0xe8) == '\x04')) {
                  bVar2 = true;
                }
                if (bVar2) {
                  iVar10 = param_2[1];
                  pfVar3 = (float *)(*(int *)(iVar10 + iVar15 + 0x14) + 0x10U & 0xfffffff0);
                  fVar22 = pfVar3[1];
                  fVar24 = pfVar3[2];
                  fVar26 = pfVar3[3];
                  loadVectorLeftIndexed128(in_r0,uVar7 - 0x134);
                  pfVar5 = (float *)((uint)(auStack_130 + (int)in_r0) & 0xfffffff0);
                  *pfVar5 = *pfVar3 * fVar34;
                  pfVar5[1] = fVar22 * fVar35;
                  pfVar5[2] = fVar24 * fVar36;
                  pfVar5[3] = fVar26 * fVar37;
                  iVar13 = *(int *)(iVar19 + 0x50);
                  uVar20 = *(undefined4 *)(iVar10 + iVar15 + 0x14);
                  fn_82D89BD8(iVar13);
                  (**(code **)(*(int *)(iVar13 + 0xe0) + 0x50))(iVar13 + 0xe0,uVar7 - 0x130,uVar20);
                }
                iVar10 = 0;
                if (0 < *(int *)(iVar18 + 0x14)) {
                  iVar13 = 0;
                  do {
                    if (*(int *)(*(int *)(iVar18 + 0x10) + iVar13) == iVar9) {
                      *(undefined4 *)(*(int *)(iVar18 + 0x10) + iVar13) = 0xfffff;
                    }
                    iVar10 = iVar10 + 1;
                    iVar13 = iVar13 + 4;
                  } while (iVar10 < *(int *)(iVar18 + 0x14));
                }
                fn_825A4198(param_1,*(undefined4 *)(iVar19 + 0x50),
                                  *(int *)(param_1 + 4) + iVar8 * 0x28,param_3,param_4);
                iVar8 = *(int *)(iVar19 + 0x50);
                iVar10 = fn_82CE5410();
                if (*(uint *)(param_1 + 0x20) == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
                  fn_82CE63B0(*(undefined4 *)(iVar10 + 0x10),(int *)(param_1 + 0x1c),0xc);
                }
                piVar12 = (int *)(*(int *)(param_1 + 0x20) * 0xc + *(int *)(param_1 + 0x1c));
                if (piVar12 != (int *)0x0) {
                  *piVar12 = iVar1;
                  piVar12[1] = iVar17;
                  piVar12[2] = iVar8;
                }
                iVar17 = 0;
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                if (0 < *(int *)(iVar19 + 0x44)) {
                  iVar8 = 0;
                  do {
                    puVar16 = (undefined4 *)(iVar8 + *(int *)(iVar19 + 0x40));
                    iVar10 = fn_82CE5410();
                    if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                      fn_82CE63B0(*(undefined4 *)(iVar10 + 0x10),param_3,4);
                    }
                    iVar17 = iVar17 + 1;
                    iVar8 = iVar8 + 4;
                    *(undefined4 *)(param_3[1] * 4 + *param_3) = *puVar16;
                    param_3[1] = param_3[1] + 1;
                  } while (iVar17 < *(int *)(iVar19 + 0x44));
                }
              }
            }
          }
          uVar11 = uVar11 & 0xffffffff;
        }
      }
      else {
        iVar8 = 0;
        if (0 < *(int *)(iVar17 + 0x7c)) {
          iVar10 = 0;
          do {
            if (*(int *)(iVar10 + *(int *)(iVar17 + 0x78)) == 0x201d) {
              bVar2 = true;
              goto LAB_825a3c60;
            }
            iVar8 = iVar8 + 1;
            iVar10 = iVar10 + 0x10;
          } while (iVar8 < *(int *)(iVar17 + 0x7c));
        }
        bVar2 = false;
LAB_825a3c60:
        if (!bVar2) goto LAB_825a3c68;
      }
      iVar14 = iVar14 + 1;
      iVar15 = iVar15 + 0x20;
    } while (iVar14 < param_2[2]);
  }
  if ((param_3[1] != 0) &&
     ((iVar14 = *(int *)(*(int *)(iVar1 + 0x10) + 0xc), iVar14 == 9 || (iVar14 == 10)))) {
    fn_82DEB238(iVar1,*param_3);
  }
  fn_82CE5410();
  return 0;
}

