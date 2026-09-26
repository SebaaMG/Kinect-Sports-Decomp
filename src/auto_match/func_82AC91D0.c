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
extern unsigned int *auStack_10c;
extern unsigned int *auStack_13c;
extern unsigned int *auStack_cc;
extern int fn_82AA66A8();
extern int fn_82ABDA10();
extern int fn_82ABE190();
extern int fn_82ABE9F0();
extern int fn_82AC6808();
extern int fn_82AC89B0();
extern int fn_82AC8A78();
extern int fn_82AC8D70();
extern int fn_82AC90A8();
extern int fn_82ACB4F0();
extern int fn_82AE9600();
extern int fn_82AEA6F8();
extern int fn_82AED5B8();
extern int fn_82F691F0();
extern unsigned int iStack_110;
extern unsigned int iStack_d0;
extern unsigned int uStack_114;
extern unsigned int uStack_118;


/* WARNING: Removing unreachable block (ram,0x82ac9cfc) */
/* WARNING: Removing unreachable block (ram,0x82ac9d04) */
/* WARNING: Removing unreachable block (ram,0x82ac9d10) */
/* WARNING: Removing unreachable block (ram,0x82ac9d18) */
/* WARNING: Removing unreachable block (ram,0x82ac9d28) */
/* WARNING: Removing unreachable block (ram,0x82ac9d34) */
/* WARNING: Removing unreachable block (ram,0x82ac9d44) */
/* WARNING: Type propagation algorithm not settling */

void fn_82AC91D0(int param_1,int param_2,char param_3,int *param_4)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  char cVar7;
  undefined4 uVar5;
  int iVar6;
  longlong lVar8;
  uint uVar10;
  undefined4 *puVar11;
  longlong lVar9;
  int iVar12;
  uint *puVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  int *piVar20;
  uint *puVar22;
  ulonglong uVar21;
  uint uVar23;
  int *piVar24;
  char cStack00000027;
  undefined1 auStack_13c [28];
  char cStack_120;
  uint uStack_118;
  uint uStack_114;
  int iStack_110;
  undefined1 auStack_10c [48];
  int *piStack_dc;
  int iStack_d0;
  undefined1 auStack_cc [48];
  int *piStack_9c;
  
  cStack_120 = '\x01' - (param_4 == (int *)0x0);
  iVar12 = 0;
  puVar13 = (uint *)(param_2 + 0x1c);
  cStack00000027 = param_3;
  if (*(int *)(param_1 + 0x2dc) != 0) {
    fn_82AC6808(param_1,*(int *)(param_1 + 0x2dc),0,0);
    *(undefined4 *)(param_1 + 0x2dc) = 0;
  }
  fn_82ACB4F0(param_1,param_2,cStack_120);
  uVar16 = *puVar13;
  do {
    piVar14 = (int *)(-(uint)((uVar16 & 1) == 0) & uVar16);
    if (piVar14 == (int *)0x0) {
      if (*(int *)(param_1 + 0x2dc) != 0) {
        fn_82AC6808(param_1,*(int *)(param_1 + 0x2dc),iVar12 * 0xc,0);
        *(undefined4 *)(param_1 + 0x2dc) = 0;
      }
      return;
    }
    cVar7 = fn_82AC8D70(param_1,piVar14);
    if (cVar7 != '\0') {
      if (*(int *)(param_1 + 0x2dc) == 0) {
        iVar12 = (*(uint *)((-(uint)((*puVar13 & 1) == 0) & *puVar13) + 0x14) & 0x1fff) + 1;
        uVar5 = fn_82ABE9F0(param_1,iVar12 * 0xc,0);
        *(undefined4 *)(param_1 + 0x2dc) = uVar5;
        for (piVar15 = (int *)*puVar13; (((uint)piVar15 & 1) == 0 && (piVar15 != (int *)0x0));
            piVar15 = *(int **)(((uint)piVar15 & 0xfffffffe) + 0x28)) {
          cVar7 = fn_82AC8D70(param_1,piVar15);
          if (cVar7 != '\0') {
            uVar16 = 0x1fff;
            for (iVar6 = *piVar15; iVar6 != 0; iVar6 = *(int *)(iVar6 + 4)) {
              if (((*(byte *)(*(int *)(iVar6 + 0xc) + 0x10) & 1) != 0) &&
                 (uVar17 = *(uint *)(*(int *)(iVar6 + 0xc) + 0x14) & 0x1fff, uVar17 < uVar16)) {
                uVar16 = uVar17;
              }
            }
            if (((*(uint *)(param_2 + 0x30) >> 0x17 & 1) != 0) &&
               (cVar7 = fn_82ABDA10(piVar15), cVar7 != '\0')) {
              uVar16 = (piVar15[5] & 0x1fffU) + 1;
            }
            uVar17 = 0;
            puVar22 = (uint *)0x0;
            for (puVar1 = (uint *)piVar15[1]; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
              uVar10 = puVar1[4];
              if (uVar10 != 0) {
                cVar7 = fn_82ABE190(puVar1);
                if (cVar7 != '\0') {
                  puVar22 = puVar1;
                }
                if ((*(uint *)(uVar10 + 8) & 0x3f80) == 0x3800) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = *(uint *)(uVar10 + 0x14) & 0x1fff;
                }
                if (uVar17 < uVar10 + 1) {
                  uVar17 = uVar10 + 1;
                }
              }
            }
            uVar10 = piVar15[5] & 0x1fff;
            if (uVar17 == uVar10) {
              uVar17 = uVar17 + 1;
            }
            piVar24 = piVar15;
            piVar3 = param_4;
            uVar23 = uVar16;
            uVar18 = uVar17;
            if (puVar22 == (uint *)0x0) {
joined_r0x82ac9488:
              do {
                uVar16 = uVar23;
                if (piVar3 == (int *)0x0) break;
                if (((*(byte *)(piVar24 + 4) & 1) != 0) && ((piVar24[5] & 0x1fffU) != uVar10))
                goto LAB_82ac94c8;
                piVar24 = *(int **)(((uint)piVar24 & 0xfffffffe) + 0x28);
                piVar3 = piVar24;
                uVar23 = uVar16;
              } while (((uint)piVar24 & 1) == 0);
            }
            else {
              piVar20 = piVar15;
              if (param_4 != (int *)0x0) {
                do {
                  if (((*(byte *)(piVar20 + 4) & 1) != 0) && ((piVar20[5] & 0x1fffU) != uVar10))
                  break;
                  uVar2 = *(uint *)(((uint)piVar20 & 0xfffffffe) + 0x24);
                  if ((uVar2 & 1) != 0) {
                    piVar20 = (int *)0x0;
                    break;
                  }
                  piVar20 = (int *)((uVar2 & 0xfffffffe) - 0x28);
                } while (piVar20 != (int *)0x0);
                uVar21 = ((ulonglong)(*puVar22 >> 0xc) & 0x1fe0 | (ulonglong)(uint)piVar15[2] & 0x1e
                         ) >> 1;
                if (piVar20 != (int *)0x0) {
                  while (((uVar2 = piVar20[5] & 0x1fff, uVar23 = uVar16, uVar2 < uVar16 &&
                          (cVar7 = fn_82AC89B0(piVar20,uVar21), uVar23 = uVar2, cVar7 == '\0')) &&
                         (cVar7 = fn_82AC8A78(piVar20,uVar21), cVar7 == '\0'))) {
                    uVar2 = *(uint *)(((uint)piVar20 & 0xfffffffe) + 0x24);
                    uVar23 = uVar16;
                    if (((uVar2 & 1) != 0) ||
                       (piVar20 = (int *)((uVar2 & 0xfffffffe) - 0x28), piVar20 == (int *)0x0))
                    break;
                  }
                }
                goto joined_r0x82ac9488;
              }
            }
LAB_82ac9564:
            puVar11 = (undefined4 *)(uVar10 * 0xc + *(int *)(param_1 + 0x2dc));
            if (puVar11[1] != 0) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c0);
            }
            *puVar11 = piVar15;
            puVar11[1] = uVar16;
            puVar11[2] = uVar18;
          }
        }
      }
      piVar15 = *(int **)(param_1 + 0x2dc);
      piVar24 = piVar15 + (piVar14[5] & 0x1fffU) * 3;
      for (; piVar15 < piVar24; piVar15 = piVar15 + 3) {
        if ((piVar15[1] != 0) && ((uint)piVar24[2] <= (uint)piVar15[1])) {
          piVar3 = (int *)*piVar15;
          uVar16 = (uint)piVar14[2] >> 7 & 0x7f;
          if ((uVar16 == 0) || (lVar8 = 1, 0x1f < uVar16)) {
            lVar8 = 0;
          }
          uVar17 = (uint)piVar3[2] >> 7 & 0x7f;
          if ((uVar17 == 0) || (lVar9 = 1, 0x1f < uVar17)) {
            lVar9 = 0;
          }
          if (lVar8 != lVar9) {
            for (iVar6 = *piVar14; iVar6 != 0; iVar6 = *(int *)(iVar6 + 4)) {
              if (*(int **)(iVar6 + 0xc) == piVar3) {
                bVar4 = true;
                goto LAB_82ac9654;
              }
            }
            bVar4 = false;
LAB_82ac9654:
            if (!bVar4) {
              for (iVar6 = *piVar3; iVar6 != 0; iVar6 = *(int *)(iVar6 + 4)) {
                if (*(int **)(iVar6 + 0xc) == piVar14) {
                  bVar4 = true;
                  goto LAB_82ac9688;
                }
              }
              bVar4 = false;
LAB_82ac9688:
              if (!bVar4) {
                if ((uVar16 == 0) || (bVar4 = true, 0x1f < uVar16)) {
                  bVar4 = false;
                }
                piVar20 = piVar3;
                piVar19 = piVar14;
                if (bVar4) {
                  piVar20 = piVar14;
                  piVar19 = piVar3;
                }
                cVar7 = fn_82AE9600(param_1,piVar20,piVar19);
                if (cVar7 != '\0') {
                  uVar16 = piVar24[1];
                  if ((uint)piVar15[1] <= (uint)piVar24[1]) {
                    uVar16 = piVar15[1];
                  }
                  uVar17 = piVar24[2];
                  if ((uint)piVar24[2] <= (uint)piVar15[2]) {
                    uVar17 = piVar15[2];
                  }
                  if (uVar17 <= uVar16) {
                    if (param_4 != (int *)0x0) {
                      param_4[2] = 0;
                      param_4[3] = 0;
                      param_4[4] = 0;
                      param_4[5] = 0;
                      param_4[6] = 0;
                      param_4[7] = 0;
                      param_4[8] = 0;
                      param_4[9] = 0;
                      param_4[10] = 0;
                      param_4[0xb] = 0;
                      param_4[0xc] = 0;
                      param_4[0xd] = 0;
                      param_4[0xe] = 0;
                      param_4[0xf] = 0;
                      param_4[0x10] = 0;
                      param_4[0x11] = 0;
                      param_4[0x12] = 0;
                      fn_82AC90A8(param_1,param_2,param_4);
                    }
                    iStack_110 = param_1;
                    piStack_dc = param_4;
                    /* WARNING: Subroutine does not return */
                    fn_82F691F0(auStack_10c,0,0x24);
                  }
                    /* WARNING: Subroutine does not return */
                  fn_82AA66A8(param_1,0x12c0);
                }
              }
            }
          }
        }
      }
      if ((cStack00000027 != '\0') && ((*(uint *)(param_2 + 0x4c) & 0x7ffff) == 0)) {
        uVar16 = piVar14[2];
        uVar17 = uVar16 >> 7 & 0x7f;
        if ((uVar17 == 0) || (bVar4 = true, 0x1f < uVar17)) {
          bVar4 = false;
        }
        if ((((bVar4) && ((uVar16 & 0x1c000) == 0x4000)) && ((uVar16 >> 0x19 & 1) == 0)) &&
           (iVar6 = fn_82AEA6F8(piVar14), iVar6 == 1)) {
          uStack_118 = (uint)&uStack_114 | 1;
          uStack_114 = (uint)auStack_13c | 1;
          fn_82AED5B8(param_1,piVar14,&uStack_118);
          if ((uStack_114 & 1) == 0) {
            if (param_4 != (int *)0x0) {
              param_4[2] = 0;
              param_4[3] = 0;
              param_4[4] = 0;
              param_4[5] = 0;
              param_4[6] = 0;
              param_4[7] = 0;
              param_4[8] = 0;
              param_4[9] = 0;
              param_4[10] = 0;
              param_4[0xb] = 0;
              param_4[0xc] = 0;
              param_4[0xd] = 0;
              param_4[0xe] = 0;
              param_4[0xf] = 0;
              param_4[0x10] = 0;
              param_4[0x11] = 0;
              param_4[0x12] = 0;
              fn_82AC90A8(param_1,param_2,param_4);
            }
            iStack_d0 = param_1;
            piStack_9c = param_4;
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(auStack_cc,0,0x24);
          }
        }
      }
    }
    uVar16 = *(uint *)(((uint)piVar14 & 0xfffffffe) + 0x28);
  } while( true );
LAB_82ac94c8:
  uVar23 = (piVar24[5] & 0x1fffU) + 1;
  uVar18 = uVar17;
  if (uVar23 <= uVar17) goto LAB_82ac9564;
  for (puVar1 = (uint *)piVar24[1]; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
    if ((puVar1[4] != 0) && (cVar7 = fn_82ABE190(puVar1), cVar7 != '\0')) {
      uVar21 = ((ulonglong)(*puVar1 >> 0xc) & 0x1fe0 | (ulonglong)(uint)piVar24[2] & 0x1e) >> 1;
      cVar7 = fn_82AC89B0(piVar15,uVar21);
      uVar18 = uVar23;
      if ((cVar7 != '\0') || (cVar7 = fn_82AC8A78(piVar15,uVar21), cVar7 != '\0'))
      goto LAB_82ac9564;
      break;
    }
  }
  piVar24 = *(int **)(((uint)piVar24 & 0xfffffffe) + 0x28);
  uVar18 = uVar17;
  if ((((uint)piVar24 & 1) != 0) || (piVar24 == (int *)0x0)) goto LAB_82ac9564;
  goto LAB_82ac94c8;
}

