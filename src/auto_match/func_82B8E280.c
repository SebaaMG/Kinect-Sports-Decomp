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
extern unsigned int *auStack_c0;
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82AD18C0();
extern int fn_82AD1978();
extern int fn_82B80CD0();
extern int fn_82B80EF8();
extern int fn_82B83248();
extern int fn_82B837F8();
extern int fn_82B86570();
extern int fn_82B86888();
extern int fn_82B8A3E8();
extern int fn_82B8B0B8();
extern int fn_82B8CB58();
extern unsigned int lbl_82005710;
extern unsigned int stack0x00000044;
extern unsigned int uStack00000044;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 *
fn_82B8E280(undefined8 *param_1,undefined8 param_2,int param_3,int param_4,double *param_5,
             undefined8 param_6,ulonglong param_7)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined8 *puVar11;
  undefined8 uVar9;
  int iVar12;
  longlong lVar10;
  char cVar13;
  float *pfVar14;
  uint uVar15;
  float fVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  bool bVar20;
  double extraout_f1;
  double extraout_f1_00;
  double dVar21;
  undefined4 uStack00000044;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  ulonglong uStack_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  float afStack_a0 [40];
  
  uStack00000044 = (undefined4)param_7;
  uStack_a8 = 0;
  uStack_a4 = 0;
  bVar7 = false;
  bVar20 = false;
  if (param_4 != 0) {
    uVar15 = *(uint *)(param_3 + 8) >> 7 & 0x7f;
    if (uVar15 == 0x37) {
      for (iVar4 = *(int *)(param_3 + 4); iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
        iVar5 = *(int *)(iVar4 + 0x10);
        if ((iVar5 != 0) && ((*(uint *)(iVar5 + 8) & 0x3f80) == 0x3b00)) {
          puVar17 = *(uint **)(iVar5 + 0x2c);
          uVar15 = puVar17[3];
          if ((*(uint *)(uVar15 + 8) & 0x3f80) == 0x3e00) {
            uVar19 = *(uint *)(uVar15 + 8);
            dVar21 = *param_5;
            iVar12 = fn_82ABDD90(param_2,uVar19 >> 7 & 0x7f,uVar19 >> 0x13 & 7,uVar19 >> 0xe & 7);
            uVar19 = *(uint *)(uVar15 + 8);
            uVar6 = *(uint *)(iVar12 + (uVar15 - 8));
            iVar12 = fn_82ABDD90(param_2,uVar19 >> 7 & 0x7f,uVar19 >> 0x13 & 7,uVar19 >> 0xe & 7);
            uStack_b0 = (ulonglong)dVar21;
            lVar10 = fn_82B86570(param_2,*(uint *)(iVar12 + (uVar15 - 8)) & 0x7fff,
                                   (uStack_b0 & 0xffffffff) + ((ulonglong)(uVar6 >> 0xf) & 0x3fff),0
                                  );
            if (lVar10 != 0) {
              puVar18 = (uint *)(iVar5 + 4);
              while (puVar2 = (uint *)*puVar18, puVar2 != (uint *)0x0) {
                if (puVar2[4] != 0) {
                  uVar15 = *puVar2;
                  if (((uVar15 & 0x40000000) != 0) || (bVar7 = false, (uVar15 & 0xe000000) != 0)) {
                    bVar7 = true;
                  }
                  if (bVar7) {
                    *puVar2 = uVar15 & 0xffffffe0 | uVar15 - 8 & 0x1f;
                    cVar13 = fn_82B837F8(param_2,iVar5,puVar2,lVar10,*puVar17 >> 5 & 0xff,0);
                    if (cVar13 == '\0') {
                      *puVar2 = *puVar2 | 8;
                    }
                  }
                }
                if ((uint *)*puVar18 == puVar2) {
                  puVar18 = puVar2 + 2;
                }
              }
            }
          }
        }
      }
      goto LAB_82b8e760;
    }
    if (0x3a < uVar15) {
      if (uVar15 < 0x3f) {
        bVar7 = true;
        bVar20 = *param_5 == lbl_82005710;
      }
      else if (uVar15 == 0x70) {
        puVar17 = (uint *)(param_3 + 4);
        puVar11 = param_1;
        while (puVar18 = (uint *)*puVar17, puVar18 != (uint *)0x0) {
          piVar1 = (int *)puVar18[4];
          if ((piVar1 != (int *)0x0) && ((piVar1[2] & 0x3f80U) == 0x3800)) {
            puVar11 = (undefined8 *)fn_82B80CD0(*param_5,puVar11,param_7 & 3,*puVar18 & 0x1f);
            dVar21 = extraout_f1;
            for (puVar2 = (uint *)*piVar1; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[1]) {
              if (((((((int *)puVar2[3])[2] & 0x3f80U) != 0x3800) ||
                   (puVar3 = *(uint **)puVar2[3], puVar3 == (uint *)0x0)) || (puVar3[1] != 0)) ||
                 (uVar15 = puVar3[3], (*(uint *)(uVar15 + 8) & 0x3f80) != 16000)) goto LAB_82b8e42c;
              uVar19 = *puVar3 >> 5 & 3;
              uVar9 = fn_82B80EF8(uVar15,uVar19,*puVar3 & 0x1f);
              if (((~(ulonglong)*(uint *)(*(int *)(*(int *)(uVar15 & 0xfffff000) + 0x94) + 0x28) &
                   0xffffffff) >> 0xe & 1) == 0) {
                uVar15 = 0;
              }
              else {
                uVar15 = (*(uint *)(uVar15 + 0x14) >> 2 & 0xff) >> (uVar19 << 1) & 3;
              }
              puVar11 = (undefined8 *)fn_82B80CD0(uVar9,uVar15,*puVar2 & 0x1f);
              if (dVar21 != extraout_f1_00) goto LAB_82b8e42c;
            }
            fn_82B83248(piVar1,param_2);
            uVar9 = fn_82B8A3E8(dVar21,param_2);
            uVar9 = fn_82AD18C0(param_2,uVar9,0);
            puVar11 = (undefined8 *)fn_82AD1978(piVar1,uVar9);
          }
LAB_82b8e42c:
          if ((uint *)*puVar17 == puVar18) {
            puVar17 = puVar18 + 2;
          }
        }
      }
    }
  }
  uVar15 = 0;
  pfVar14 = afStack_a0;
  do {
    uVar19 = ((2 << (uVar15 + 1 & 0x1f)) - 1U &
              *(uint *)((int)&stack0x00000044 + (uVar15 >> 3 & 0x1ffffffc)) & -1 << (uVar15 & 0x1f))
             >> (uVar15 & 0x1f);
    if (uVar19 == 0) {
      fVar16 = (float)*param_5;
      uStack_b0 = CONCAT44(fVar16,(((U64)(uStack_b0) >> 32) & 0xFFFFFFFF));
      uStack_b8 = CONCAT44(fVar16,(((U64)(uStack_b8) >> 32) & 0xFFFFFFFF));
      if ((ABS(fVar16) == 0.0) || (bVar8 = false, ((uint)fVar16 & 0x7f800000) != 0)) {
        bVar8 = true;
      }
      if (!bVar8) {
        uStack_b8 = CONCAT44(fVar16,(((U64)(uStack_b8) >> 32) & 0xFFFFFFFF)) & 0x80000000ffffffff;
        fVar16 = (((U64)(uStack_b8) >> 0) & 0xFFFFFFFF);
      }
      *pfVar14 = fVar16;
    }
    else {
      if (uVar19 == 1) {
        fVar16 = (float)(int)*param_5;
        uStack_b8 = (ulonglong)(int)fVar16;
      }
      else {
        if (2 < uVar19) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_2,0x12c0);
        }
        uStack_b8 = (ulonglong)*param_5;
        fVar16 = (((U64)(uStack_b8) >> 32) & 0xFFFFFFFF);
      }
      *pfVar14 = fVar16;
    }
    uVar15 = uVar15 + 2;
    param_5 = param_5 + 1;
    pfVar14 = pfVar14 + 1;
  } while (uVar15 < 8);
  uVar9 = fn_82B86888(param_2,4,afStack_a0,param_7);
  auStack_c0[0] = 0;
  fn_82B8CB58(param_2,param_3,uVar9,0xe4,0,param_6,auStack_c0);
  uStack_a4 = 0;
  if (bVar7) {
    puVar17 = (uint *)(param_3 + 4);
    uStack_a4 = 0;
    while (puVar18 = (uint *)*puVar17, puVar18 != (uint *)0x0) {
      if (puVar18[4] != 0) {
        if (((*puVar18 & 0x40000000) == 0) || (bVar7 = true, (*puVar18 & 0xe000000) != 0)) {
          bVar7 = false;
        }
        if (bVar7) {
          uVar15 = fn_82B8B0B8(param_2,puVar18[4],puVar18,bVar20);
          uStack_a4 = uVar15 & 1 | uStack_a4;
        }
      }
      if ((uint *)*puVar17 == puVar18) {
        puVar17 = puVar18 + 2;
      }
    }
  }
  uStack_a8 = (undefined4)uVar9;
LAB_82b8e760:
  *param_1 = CONCAT44(uStack_a8,uStack_a4);
  return param_1;
}

