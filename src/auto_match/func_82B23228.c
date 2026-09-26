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
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82ABF768();
extern int fn_82AD1978();
extern int fn_82B471E8();
extern int fn_82B84350();
extern int fn_82B86888();
extern int fn_82B8AC10();
extern int fn_82B8AE98();
extern unsigned int lbl_82005710;
extern unsigned int uStack_74;
extern unsigned int uStack_80;
extern unsigned int uStack_88;


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82B23228(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar5;
  undefined4 uVar9;
  char cVar10;
  ulonglong uVar11;
  uint uVar12;
  int *piVar13;
  undefined4 *puVar14;
  float *pfVar15;
  undefined4 *puVar16;
  int *piVar17;
  uint uVar18;
  uint *puVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  uint auStack_90 [2];
  ulonglong uStack_88;
  ulonglong uStack_80;
  undefined4 uStack_74;
  undefined1 auStack_70 [112];
  
  bVar4 = false;
  for (uVar6 = *(uint *)((-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4)) +
                        0x14); ((uVar6 & 1) == 0 && (uVar6 != 0));
      uVar6 = *(uint *)((uVar6 & 0xfffffffe) + 0x28)) {
    if (((*(uint *)(uVar6 + 8) & 0x3f80) == 16000) && ((*(uint *)(uVar6 + 0x14) >> 2 & 0xff) != 0))
    {
      uVar12 = 0;
      if ((*(uint *)(uVar6 + 8) & 0x1c000) != 0) {
        uVar18 = 0;
        pfVar15 = (float *)(uVar6 + 0x2c);
        do {
          uVar8 = ((2 << (uVar18 + 1 & 0x1f)) - 1U &
                   *(uint *)((int)auStack_90 + (uVar18 >> 3 & 0x1ffffffc)) & -1 << (uVar18 & 0x1f))
                  >> (uVar18 & 0x1f);
          if (uVar8 == 1) {
            uVar11 = (ulonglong)(int)*pfVar15;
            uStack_80 = uVar11;
LAB_82b23318:
            *pfVar15 = (float)(longlong)uVar11;
          }
          else if (uVar8 == 2) {
            uVar11 = (ulonglong)(uint)*pfVar15;
            uStack_88 = uVar11;
            goto LAB_82b23318;
          }
          uVar12 = uVar12 + 1;
          pfVar15 = pfVar15 + 1;
          uVar18 = uVar18 + 2;
        } while (uVar12 < (*(uint *)(uVar6 + 8) >> 0xe & 7));
      }
      bVar4 = true;
      *(uint *)(uVar6 + 0x14) = *(uint *)(uVar6 + 0x14) & 0xfffffc03;
    }
  }
  if (bVar4) {
    uVar12 = 0;
    uVar6 = *(uint *)((-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4)) + 0x14);
joined_r0x82b23390:
    uVar18 = uVar6;
    if ((uVar6 & 1) == 0) {
      do {
        if (uVar18 == 0) break;
        if ((*(uint *)(uVar18 + 8) & 0x3f80) == 16000) {
          uVar8 = 0;
          uVar6 = 0;
          if ((*(uint *)(uVar18 + 8) >> 0xe & 7) != 0) {
            puVar14 = &uStack_74;
            puVar16 = (undefined4 *)(uVar18 + 0x28);
            do {
              puVar16 = puVar16 + 1;
              uVar8 = uVar8 + 1;
              puVar14 = puVar14 + 1;
              *puVar14 = *puVar16;
              uVar6 = *(uint *)(uVar18 + 8) >> 0xe & 7;
            } while (uVar8 < uVar6);
          }
          uVar6 = fn_82B86888(param_1,uVar6,auStack_70,0);
          if (uVar6 != uVar18) {
            piVar13 = (int *)(uVar18 + 4);
            while (iVar7 = *piVar13, iVar7 != 0) {
              if (*(int *)(iVar7 + 0x10) != 0) {
                piVar17 = (int *)(*(int *)(iVar7 + 0xc) + 4);
                for (iVar1 = *piVar17; iVar1 != iVar7; iVar1 = *(int *)(iVar1 + 8)) {
                  piVar17 = (int *)(iVar1 + 8);
                }
                *piVar17 = *(int *)(iVar7 + 8);
                *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(uVar6 + 4);
                *(int *)(uVar6 + 4) = iVar7;
                *(uint *)(iVar7 + 0xc) = uVar6;
              }
              if (*piVar13 == iVar7) {
                piVar13 = (int *)(iVar7 + 8);
              }
            }
            fn_82B8AC10(param_1,uVar18,0,1);
          }
        }
        if (uVar12 == 0) {
          uVar6 = *(uint *)(param_1 + 4);
          uVar8 = *(uint *)((-(uint)((uVar6 & 1) == 0) & uVar6) + 0x14);
          if (uVar18 == (-(uint)((uVar8 & 1) == 0) & uVar8)) goto LAB_82b234a0;
          uVar6 = *(uint *)((-(uint)((uVar6 & 1) == 0) & uVar6) + 0x14);
        }
        else {
          uVar6 = *(uint *)((uVar12 & 0xfffffffe) + 0x28);
          if (uVar18 != (-(uint)((uVar6 & 1) == 0) & uVar6)) goto joined_r0x82b23390;
LAB_82b234a0:
          uVar6 = *(uint *)((uVar18 & 0xfffffffe) + 0x28);
          uVar12 = uVar18;
        }
        uVar18 = uVar6;
        if ((uVar6 & 1) != 0) break;
      } while( true );
    }
  }
  if ((*(uint *)(param_1 + 0x2c) & 0x600) != 0) {
    uVar6 = *(uint *)(param_1 + 4);
    uVar21 = lbl_82005710;
joined_r0x82b23524:
    if (((uVar6 & 1) == 0) && (uVar6 != 0)) {
LAB_82b2353c:
      uVar12 = *(uint *)(uVar6 + 0x1c);
      do {
        uVar12 = -(uint)((uVar12 & 1) == 0) & uVar12;
        if (uVar12 == 0) {
          uVar6 = *(uint *)((uVar6 & 0xfffffffe) + 4);
          goto joined_r0x82b23524;
        }
        uVar18 = *(uint *)(uVar12 + 8);
        uVar8 = uVar12;
        if ((uVar18 & 0x3f80) == 0x3380) {
          iVar7 = fn_82ABDD90(param_1,0x67,uVar18 >> 0x13 & 7,0);
          uVar8 = *(uint *)(iVar7 + (uVar12 - 4));
          if (5 < uVar8) goto LAB_82b236ac;
          uVar20 = (ulonglong)(uVar18 >> 0xe) & 7;
          uVar2 = *(undefined4 *)(uVar12 + 0x2c);
          uVar8 = fn_82B84350(param_1,*(undefined4 *)(uVar12 + 0x1c),0,uVar20);
          uVar3 = uVar8 & 0xfffffffe;
          puVar19 = (uint *)((uVar12 & 0xfffffffe) + 0x24);
          uVar11 = 0;
          *(uint *)(uVar3 + 0x24) = *puVar19;
          *(uint *)(*puVar19 & 0xfffffffe) = uVar3;
          *(uint *)(uVar3 + 0x28) = uVar12 & 0xfffffffe;
          *puVar19 = uVar3 + 0x28;
          if ((uVar18 >> 0xe & 7) != 0) {
            puVar16 = (undefined4 *)(uVar8 + 0x28);
            do {
              uVar5 = fn_82B471E8(param_1,uVar2,uVar11);
              uVar9 = fn_82AD1978(uVar8,uVar5);
              uVar11 = uVar11 + 1;
              puVar16 = puVar16 + 1;
              *puVar16 = uVar9;
            } while ((uVar11 & 0xffffffff) < uVar20);
          }
          piVar13 = (int *)(uVar12 + 4);
          while (iVar7 = *piVar13, iVar7 != 0) {
            if (*(int *)(iVar7 + 0x10) != 0) {
              piVar17 = (int *)(*(int *)(iVar7 + 0xc) + 4);
              for (iVar1 = *piVar17; iVar1 != iVar7; iVar1 = *(int *)(iVar1 + 8)) {
                piVar17 = (int *)(iVar1 + 8);
              }
              *piVar17 = *(int *)(iVar7 + 8);
              *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(uVar8 + 4);
              *(int *)(uVar8 + 4) = iVar7;
              *(uint *)(iVar7 + 0xc) = uVar8;
            }
            if (*piVar13 == iVar7) {
              piVar13 = (int *)(iVar7 + 8);
            }
          }
          fn_82B8AC10(param_1,uVar12,0,1);
        }
        uVar12 = *(uint *)((uVar8 & 0xfffffffe) + 0x28);
      } while( true );
    }
  }
  return;
LAB_82b236ac:
  if (uVar8 != 0xf) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xe22);
  }
  cVar10 = fn_82ABF768(uVar21,*(undefined4 *)(uVar12 + 0x2c));
  if (cVar10 != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xe3b);
  }
  *(uint *)(uVar12 + 8) = *(uint *)(uVar12 + 8) & 0xfdffffff;
  fn_82B8AE98(param_1,uVar12);
  goto LAB_82b2353c;
}

