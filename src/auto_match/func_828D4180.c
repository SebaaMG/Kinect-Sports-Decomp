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
extern unsigned int *auStack_7c;
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern unsigned int fStack_84;
extern int fn_823AB478();
extern int fn_825089A0();
extern int fn_8289F350();
extern int fn_828B6380();
extern int fn_828B6758();
extern int fn_828B6768();
extern int fn_828B7DC0();
extern int fn_828B9208();
extern int fn_828C3D70();
extern int fn_828C4360();
extern int fn_828D3770();
extern int fn_828D3860();
extern int fn_828D3EE8();
extern int fn_828D3F40();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200D898;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_78;
extern unsigned int uStack_90;


void fn_828D4180(void)

{
  float fVar1;
  byte bVar2;
  bool bVar3;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar4;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  float *pfVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 uStack_90;
  undefined4 *puStack_8c;
  undefined1 auStack_88 [4];
  float fStack_84;
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  ulonglong uStack_78;
  
  iVar5 = fn_82F6A544();
  fn_828C3D70(auStack_88,*(undefined4 *)(iVar5 + 0x28));
  piVar6 = (int *)fn_825089A0();
  dVar13 = (double)(**(code **)(*piVar6 + 8))();
  fVar1 = *(float *)(iVar5 + 0x30) + lbl_8200D898;
  puVar10 = *(undefined4 **)(iVar5 + 4);
  bVar3 = true;
  if (puVar10 != *(undefined4 **)(iVar5 + 8)) {
    do {
      iVar7 = fn_8289F350(*(undefined4 *)(iVar5 + 0x24),*puVar10);
      if (iVar7 == 0) {
        fn_828D3EE8(puVar10 + 5,*(undefined4 *)(iVar5 + 8),puVar10);
        fn_828D3F40((ulonglong)*(uint *)(iVar5 + 8) - 0x14,(ulonglong)*(uint *)(iVar5 + 8),
                      iVar5 + 0x10,uStack_90);
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + -0x14;
      }
      else {
        piVar6 = puVar10 + 2;
        iVar7 = puVar10[1];
        puVar10 = puVar10 + 5;
        bVar2 = 1;
        if (iVar7 != *piVar6) {
          do {
            if ((*(int *)(iVar7 + 0xc) == 1) || (*(int *)(iVar7 + 0xc) == 0)) {
              if (dVar13 <= (double)fVar1) {
                bVar2 = 0;
              }
              else {
                *(undefined4 *)(iVar7 + 0xc) = 3;
              }
            }
            iVar7 = iVar7 + 0x50;
          } while (iVar7 != *piVar6);
        }
        bVar3 = (bool)(bVar2 & bVar3);
      }
    } while (puVar10 != *(undefined4 **)(iVar5 + 8));
  }
  if (bVar3) {
    uVar4 = fn_828C4360(auStack_88);
    fn_828B6758(&puStack_8c,uVar4);
    uVar4 = fn_828C4360(auStack_88);
    piVar6 = (int *)fn_828B6768(auStack_80,uVar4);
    if (puStack_8c != (undefined4 *)*piVar6) {
      dVar13 = (double)lbl_82002C5C;
      dVar14 = (double)lbl_82002AE0;
      dVar15 = (double)lbl_821AAD20;
      do {
        puVar10 = puStack_8c;
        iVar7 = *(int *)(iVar5 + 4);
        fStack_84 = (float)dVar14;
        bVar3 = false;
        uVar12 = 0;
        dVar16 = dVar14;
        dVar17 = dVar15;
        if (iVar7 != *(int *)(iVar5 + 8)) {
          do {
            iVar9 = *(int *)(iVar7 + 4);
            if (iVar9 != *(int *)(iVar7 + 8)) {
              do {
                iVar8 = fn_823AB478(*puVar10);
                if (*(int *)(iVar9 + 8) == iVar8) {
                  pfVar11 = (float *)(iVar9 + 0x10);
                  if (dVar15 < (double)*(float *)(iVar9 + 0x10)) {
                    dVar17 = (double)(float)((double)*(float *)(iVar9 + 0x10) + dVar17);
                    uVar12 = uVar12 + 1;
                    if (dVar16 <= (double)*pfVar11) {
                      pfVar11 = &fStack_84;
                    }
                    fStack_84 = *pfVar11;
                    dVar16 = (double)fStack_84;
                    goto LAB_828d4370;
                  }
                  break;
                }
                iVar9 = iVar9 + 0x50;
              } while (iVar9 != *(int *)(iVar7 + 8));
            }
            bVar3 = true;
LAB_828d4370:
            iVar7 = iVar7 + 0x14;
          } while (iVar7 != *(int *)(iVar5 + 8));
        }
        iVar7 = *(int *)(iVar5 + 0x14);
        if (iVar7 != *(int *)(iVar5 + 0x18)) {
          do {
            iVar9 = fn_823AB478(*puVar10);
            if (*(int *)(iVar7 + 8) == iVar9) {
              pfVar11 = (float *)(iVar7 + 0x10);
              if (dVar15 < (double)*(float *)(iVar7 + 0x10)) {
                dVar17 = (double)(float)((double)*(float *)(iVar7 + 0x10) + dVar17);
                uVar12 = uVar12 + 1;
                if (dVar16 <= (double)*pfVar11) {
                  pfVar11 = &fStack_84;
                }
                dVar16 = (double)*pfVar11;
                goto LAB_828d43b8;
              }
              break;
            }
            iVar7 = iVar7 + 0x50;
          } while (iVar7 != *(int *)(iVar5 + 0x18));
        }
        bVar3 = true;
LAB_828d43b8:
        if (bVar3) {
          uVar4 = fn_828C4360(auStack_88);
          puStack_8c = (undefined4 *)fn_828B7DC0(auStack_7c,uVar4,&puStack_8c);
          puStack_8c = (undefined4 *)*puStack_8c;
        }
        else {
          uStack_78 = uVar12 & 0xffffffff;
          fn_828B9208((double)(float)((double)(float)((double)(float)(dVar17 / (double)uStack_78) +
                                                      dVar16) * dVar13),*puVar10);
          puStack_8c = puStack_8c + 2;
        }
        uVar4 = fn_828C4360(auStack_88);
        puVar10 = (undefined4 *)fn_828B6768(auStack_80,uVar4);
      } while (puStack_8c != (undefined4 *)*puVar10);
    }
    iVar7 = *(int *)(iVar5 + 0x18);
    if (*(int *)(iVar5 + 0x14) != iVar7) {
      uVar4 = fn_828D3770(iVar7,iVar7,*(int *)(iVar5 + 0x14),uStack_90);
      fn_828D3860(uVar4,*(undefined4 *)(iVar5 + 0x18),iVar5 + 0x20,uStack_90);
      *(int *)(iVar5 + 0x18) = (int)uVar4;
    }
    if (*(int *)(iVar5 + 4) != *(int *)(iVar5 + 8)) {
      uVar4 = fn_828D3EE8(*(int *)(iVar5 + 8));
      fn_828D3F40(uVar4,*(undefined4 *)(iVar5 + 8),iVar5 + 0x10,uStack_90);
      *(int *)(iVar5 + 8) = (int)uVar4;
    }
    *(undefined4 *)(iVar5 + 0x2c) = 3;
    piVar6 = (int *)fn_825089A0();
    dVar13 = (double)(**(code **)(*piVar6 + 8))();
    *(float *)(iVar5 + 0x30) = (float)dVar13;
  }
  fn_828B6380(auStack_88);
  fn_82F6A590();
  return;
}

