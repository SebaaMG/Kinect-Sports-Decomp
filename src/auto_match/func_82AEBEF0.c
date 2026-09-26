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
extern int fn_82AA66A8();
extern int fn_82AC86B0();
extern int fn_82AC9F80();
extern int fn_82AD1978();
extern int fn_82AD1A40();
extern int fn_82AE93B0();
extern int fn_82AEB338();
extern int fn_82B81C88();
extern int fn_82B8B280();
extern int fn_82B8BCB0();
extern int fn_82B8D488();


int * fn_82AEBEF0(undefined8 param_1,int param_2,undefined4 *param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  char cVar10;
  undefined8 uVar8;
  int iVar9;
  bool bVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  int *piVar18;
  
  do {
    uVar17 = *(uint *)(param_2 + 0x1c);
    piVar14 = (int *)0x0;
    piVar16 = (int *)0x0;
    piVar13 = (int *)0x0;
    piVar12 = (int *)0x0;
    while( true ) {
      piVar18 = (int *)(-(uint)((uVar17 & 1) == 0) & uVar17);
      if (piVar18 == (int *)0x0) {
        uVar17 = *(uint *)(param_2 + 0x24);
        if (((uVar17 & 1) != 0) || (uVar17 == 0)) goto LAB_82aec588;
        goto LAB_82aec568;
      }
      uVar17 = piVar18[2];
      if ((uVar17 & 0x40) == 0) {
        bVar11 = false;
      }
      else {
        uVar4 = uVar17 >> 7 & 0x7f;
        if (((uVar4 == 0x1e) || (uVar4 == 0x37)) || (bVar11 = false, uVar4 == 0x38)) {
          bVar11 = true;
        }
      }
      piVar15 = piVar18;
      if (!bVar11) {
        uVar4 = uVar17 >> 7 & 0x7f;
        if ((uVar4 < 0x5b) || (bVar11 = true, 0x5e < uVar4)) {
          bVar11 = false;
        }
        if ((bVar11) || (bVar11 = false, uVar4 == 0x7b)) {
          bVar11 = true;
        }
        piVar15 = piVar12;
        if ((bVar11) || ((iVar9 = fn_82AC86B0(piVar18), iVar9 != 0 && (iVar9 != 1)))) {
          piVar16 = piVar18;
        }
      }
      uVar17 = uVar17 >> 7 & 0x7f;
      if (((uVar17 < 0x19) || (0x1c < uVar17)) && ((uVar17 < 0x43 || (0x47 < uVar17)))) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (((bVar11) && (piVar12 = *(int **)(param_2 + 0x1c), ((uint)piVar12 & 1) == 0)) &&
         (piVar12 != (int *)0x0)) break;
LAB_82aec0a8:
      uVar17 = piVar18[2];
      uVar4 = uVar17 >> 7 & 0x7f;
      if ((uVar4 != 0x60) || (bVar11 = true, (uVar17 & 0x380000) < 0x80001)) {
        bVar11 = false;
      }
      if (bVar11) {
LAB_82aec0f8:
        if ((uVar4 != 0x60) || (bVar11 = true, (uVar17 & 0x380000) != 0)) {
          bVar11 = false;
        }
        piVar12 = piVar18;
        if (bVar11) {
          puVar1 = (uint *)*piVar18;
          while( true ) {
            if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c0);
            }
            if (((*puVar1 & 0x40000000) == 0) || (bVar11 = true, (*puVar1 & 0xe000000) != 0)) {
              bVar11 = false;
            }
            if (bVar11) break;
            puVar1 = (uint *)puVar1[1];
          }
          piVar12 = (int *)puVar1[3];
        }
        for (puVar1 = (uint *)piVar12[1]; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
          uVar17 = puVar1[4];
          if (uVar17 != 0) {
            if (((*puVar1 & 0x40000000) == 0) || (bVar11 = true, (*puVar1 & 0xe000000) != 0)) {
              bVar11 = false;
            }
            if (bVar11) {
              for (puVar2 = (uint *)piVar18[1]; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[2]) {
                piVar12 = (int *)puVar2[4];
                if (piVar12 != (int *)0x0) {
                  if (((*puVar2 & 0x40000000) == 0) || (bVar11 = true, (*puVar2 & 0xe000000) != 0))
                  {
                    bVar11 = false;
                  }
                  if ((!bVar11) && (cVar10 = fn_82AEB338(piVar12), cVar10 != '\0')) {
                    for (iVar9 = *piVar12; iVar9 != 0; iVar9 = *(int *)(iVar9 + 4)) {
                      if (*(uint *)(iVar9 + 0xc) == uVar17) {
                        bVar11 = true;
                        goto LAB_82aec20c;
                      }
                    }
                    bVar11 = false;
LAB_82aec20c:
                    if (!bVar11) {
                      fn_82AD1A40(piVar12,uVar17,param_1);
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        if ((uVar4 != 0x60) || (bVar11 = true, (uVar17 & 0x380000) != 0)) {
          bVar11 = false;
        }
        if (bVar11) goto LAB_82aec0f8;
      }
      piVar12 = piVar18;
      if ((piVar18[2] & 0x3f80U) == 0x2f00) {
LAB_82aec248:
        puVar1 = (uint *)piVar12[1];
        do {
          if (puVar1 == (uint *)0x0) break;
          if (puVar1[4] != 0) {
            uVar17 = *puVar1;
            if (((uVar17 & 0x40000000) != 0) || (bVar11 = true, (uVar17 & 0xe000000) != 0)) {
              bVar11 = false;
            }
            if ((!bVar11) || (bVar11 = true, (uVar17 & 0x1ffe000) == 0)) {
              bVar11 = false;
            }
            if ((bVar11) && ((uVar17 >> 0xd & 0xfff) == 3)) goto LAB_82aec2b4;
          }
          puVar1 = (uint *)puVar1[2];
        } while( true );
      }
LAB_82aec304:
      if ((piVar18[2] & 0x3f80U) == 0x2f80) {
        for (uVar17 = *(uint *)(param_2 + 0x1c); ((uVar17 & 1) == 0 && (uVar17 != 0));
            uVar17 = *(uint *)((uVar17 & 0xfffffffe) + 0x28)) {
          if ((*(uint *)(uVar17 + 8) & 0x3f80) == 0x3000) {
            fn_82AD1A40(piVar18,uVar17,param_1);
          }
        }
      }
      piVar12 = piVar18 + 1;
      bVar11 = false;
      for (puVar1 = (uint *)piVar18[1]; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
        if (puVar1[4] != 0) {
          uVar17 = *puVar1;
          uVar4 = uVar17 >> 0x1e & 1;
          if ((uVar4 != 0) || (bVar7 = false, (uVar17 & 0xe000000) != 0)) {
            bVar7 = true;
          }
          if (bVar7) {
            if ((*(uint *)(puVar1[4] + 8) & 0x3f80) == 0x3800) {
              if (!bVar11) {
                piVar18[8] = (int)piVar14;
                bVar11 = true;
                piVar14 = piVar18;
              }
            }
            else {
              iVar9 = 1;
              uVar5 = (uint)piVar18[2] >> 7 & 0x7f;
              if ((uVar5 < 0x60) || (bVar7 = true, 0x66 < uVar5)) {
                bVar7 = false;
              }
              if (bVar7) {
                iVar9 = 3;
              }
              else {
                if ((uVar4 == 0) || (bVar7 = true, (uVar17 & 0xe000000) != 0)) {
                  bVar7 = false;
                }
                if ((bVar7) && ((uVar17 & 0x1ffe000) == 0)) {
                  iVar9 = 2;
                }
              }
              *puVar1 = iVar9 << 0x1c | uVar17 & 0xcfffffff;
            }
          }
        }
      }
      if (((!bVar11) && (((uint)piVar18[2] >> 0x19 & 1) != 0)) && (*piVar12 == 0)) {
        for (iVar9 = *piVar18; iVar9 != 0; iVar9 = *(int *)(iVar9 + 4)) {
          iVar3 = *(int *)(*(int *)(iVar9 + 0xc) + 4);
          while( true ) {
            if (iVar3 == 0) {
              piVar18[8] = (int)piVar14;
              piVar14 = piVar18;
              goto LAB_82aec4cc;
            }
            if ((*(int *)(iVar3 + 0x10) != 0) && (iVar3 == -0x7cddc358)) break;
            iVar3 = *(int *)(iVar3 + 8);
          }
        }
        piVar18[8] = (int)piVar13;
        for (iVar9 = *piVar12; iVar9 != 0; iVar9 = *(int *)(iVar9 + 8)) {
          piVar12 = (int *)(iVar9 + 8);
        }
        *piVar12 = -0x7cddc358;
        piVar13 = piVar18;
      }
LAB_82aec4cc:
      iVar9 = fn_82B81C88(param_1,piVar18);
      piVar18[4] = (iVar9 + 1U & 7) << 0x15 | piVar18[4] & 0xff1fffffU;
      fn_82AE93B0(piVar18);
      uVar17 = *(uint *)(((uint)piVar18 & 0xfffffffe) + 0x28);
      piVar12 = piVar15;
    }
LAB_82aec030:
    if ((piVar12[2] & 0x3f80U) != 0x3080) {
LAB_82aec090:
      piVar12 = *(int **)(((uint)piVar12 & 0xfffffffe) + 0x28);
      if ((((uint)piVar12 & 1) != 0) || (piVar12 == (int *)0x0)) goto LAB_82aec0a8;
      goto LAB_82aec030;
    }
    for (iVar9 = *piVar12; iVar9 != 0; iVar9 = *(int *)(iVar9 + 4)) {
      if (*(int **)(iVar9 + 0xc) == piVar18) {
        bVar11 = true;
        goto LAB_82aec06c;
      }
    }
    bVar11 = false;
LAB_82aec06c:
    if ((bVar11) || (cVar10 = fn_82B8BCB0(param_1,piVar18,piVar12,0), cVar10 == '\0'))
    goto LAB_82aec090;
    fn_82B8D488(param_1,piVar18,piVar12,0);
    fn_82AD1A40(piVar12,piVar18,param_1);
    for (; piVar14 != (int *)0x0; piVar14 = (int *)piVar14[8]) {
    }
    for (; piVar13 != (int *)0x0; piVar13 = (int *)piVar13[8]) {
    }
  } while( true );
LAB_82aec2b4:
  piVar12 = (int *)puVar1[4];
  if ((piVar12[2] & 0x3f80U) == 0x2f00) goto LAB_82aec304;
  uVar8 = fn_82AC9F80(param_1,piVar18,8);
  fn_82AD1978(piVar12,uVar8);
  uVar8 = fn_82AC9F80(param_1,piVar18,5);
  fn_82AD1978(piVar12,uVar8);
  goto LAB_82aec248;
  while (uVar17 != 0) {
LAB_82aec568:
    fn_82AE93B0(uVar17);
    uVar17 = *(uint *)((uVar17 & 0xfffffffe) + 0x28);
    if ((uVar17 & 1) != 0) break;
  }
LAB_82aec588:
  if ((piVar12 != (int *)0x0) && (piVar16 != (int *)0x0)) {
LAB_82aec598:
    for (uVar17 = *(uint *)(param_2 + 0x1c); uVar17 = -(uint)((uVar17 & 1) == 0) & uVar17,
        uVar17 != 0; uVar17 = *(uint *)((uVar17 & 0xfffffffe) + 0x28)) {
      if ((*(uint *)(uVar17 + 8) & 0x40) == 0) {
        bVar11 = false;
      }
      else {
        uVar4 = *(uint *)(uVar17 + 8) >> 7 & 0x7f;
        if (((uVar4 == 0x1e) || (uVar4 == 0x37)) || (bVar11 = false, uVar4 == 0x38)) {
          bVar11 = true;
        }
      }
      if (bVar11) {
        for (uVar4 = *(uint *)(param_2 + 0x1c); ((uVar4 & 1) == 0 && (uVar4 != 0));
            uVar4 = *(uint *)((uVar4 & 0xfffffffe) + 0x28)) {
          iVar9 = fn_82AC86B0(uVar4);
          if ((iVar9 == 0) || (iVar9 == 1)) {
            uVar5 = *(uint *)(uVar4 + 8) >> 7 & 0x7f;
            if ((uVar5 < 0x5b) || (bVar11 = true, 0x5e < uVar5)) {
              bVar11 = false;
            }
            if ((bVar11) || (bVar11 = false, uVar5 == 0x7b)) {
              bVar11 = true;
            }
            if (bVar11) goto LAB_82aec668;
          }
          else {
LAB_82aec668:
            for (puVar1 = *(uint **)(uVar17 + 4); puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2])
            {
              uVar5 = puVar1[4];
              if (uVar5 != 0) {
                if (((*puVar1 & 0x40000000) == 0) || (bVar11 = true, (*puVar1 & 0xe000000) != 0)) {
                  bVar11 = false;
                }
                if ((bVar11) &&
                   (cVar10 = fn_82B8B280(uVar4,uVar5,0,1,param_1), cVar10 != '\0')) {
                  for (puVar2 = *(uint **)(uVar17 + 4); puVar2 != (uint *)0x0;
                      puVar2 = (uint *)puVar2[2]) {
                    uVar6 = puVar2[4];
                    if (uVar6 != 0) {
                      if (((*puVar2 & 0x40000000) == 0) ||
                         (bVar11 = true, (*puVar2 & 0xe000000) != 0)) {
                        bVar11 = false;
                      }
                      if ((((bVar11) &&
                           (cVar10 = fn_82B8B280(uVar4,uVar6,0,1,param_1), cVar10 == '\0')) &&
                          (cVar10 = fn_82B8B280(uVar6,uVar4,0,1,param_1), cVar10 == '\0')) &&
                         (((*(uint *)(uVar6 + 0x14) >> 0xd & 0x1fff) <=
                           (*(uint *)(uVar5 + 0x14) >> 0xd & 0x1fff) + 1 &&
                          (cVar10 = fn_82B8BCB0(param_1,uVar6,uVar4,0), cVar10 != '\0')))) {
                        fn_82B8D488(param_1,uVar6,uVar4,0);
                        fn_82AD1A40(uVar4,uVar6,param_1);
                        goto LAB_82aec598;
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
  *param_3 = piVar13;
  return piVar14;
}

