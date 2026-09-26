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
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_8223C478();
extern int fn_8224EA58();
extern int fn_8233E620();
extern int fn_8233EB88();
extern int fn_8265CA20();
extern int fn_8288B760();
extern int fn_828E9D28();
extern int fn_828E9DB8();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int iStack_78;
extern unsigned int lbl_82005748;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_7c;


void fn_82344720(void)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  int *piVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float afStack_b0 [4];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 *puStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  
  iVar4 = fn_82F6A548();
  iVar1 = *(int *)(iVar4 + 0x14);
  fn_8233EB88(afStack_b0,iVar1 + 0x4c,*(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50))
  ;
  iVar1 = *(int *)(**(int **)(iVar4 + 0xc) + 0x1a0);
  iVar6 = *(int *)(*(int *)(iVar1 + 0xc) + 0x174);
  if (*(int *)(*(int *)(iVar6 + 0x5c) + 0x1d4) == -1) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(*(int *)(iVar6 + 0x5c) + 0x1d4) * 4 +
                    *(int *)(*(int *)(iVar6 + 0x5c) + 0x1c4));
  }
  uVar8 = 0;
  puVar2 = *(uint **)(*(int *)(iVar6 + 0x5c) + 0x208);
  uVar7 = (ulonglong)*(uint *)(*(int *)(iVar9 + 0x48) + 0x1c);
  uVar5 = *puVar2;
  if (uVar5 == 0) {
    uVar8 = puVar2[1];
  }
  else if (uVar5 == 1) {
    uVar8 = puVar2[2];
  }
  else if (uVar5 < 3) {
    uVar8 = puVar2[3];
  }
  else if (uVar5 == 3) {
    uVar8 = puVar2[4];
  }
  pfVar10 = (float *)(uVar8 + 0x24);
  if (*(int *)(iVar1 + 0x24) == 0) {
    pfVar10 = (float *)(uVar8 + 0x14);
  }
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  afStack_b0[0] = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
  dVar16 = (double)lbl_821CA460;
  dVar13 = (double)((pfVar10[1] - *pfVar10) * (float)((double)afStack_b0[0] - dVar16) + *pfVar10);
  if (uVar7 != 0) {
    dVar14 = (double)lbl_8218E8E8;
    dVar15 = (double)lbl_82005748;
    do {
      uVar5 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      lbl_83265A28 = uVar5 * 0x19660d + 0x3c6ef35f;
      dVar12 = (double)(float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar16);
      if (dVar13 <= (double)(float)((double)(float)((double)(float)(uVar5 & 0x7fffff | 0x3f800000) -
                                                   dVar16) * dVar15)) {
        dVar12 = dVar12 * dVar14 + (double)lbl_82191FC8;
      }
      else {
        dVar12 = dVar12 * (double)lbl_82191FC8;
      }
      afStack_b0[0] = (float)dVar12;
      fn_8233E620((ulonglong)*(uint *)(iVar4 + 0x14) + 0x4c,afStack_b0);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (*(int *)(**(int **)(iVar4 + 0xc) + 0x168) == 0) {
    uVar5 = *(uint *)(**(int **)(iVar4 + 0xc) + 0x16c);
  }
  else {
    uVar5 = fn_8288B760();
    uVar5 = uVar5 & 0xff;
  }
  if ((uVar5 != 0) && (piVar11 = *(int **)(**(int **)(iVar4 + 0xc) + 0x168), piVar11 != (int *)0x0))
  {
    iVar1 = *(int *)(iVar4 + 0x14);
    iVar6 = (**(code **)(*piVar11 + 8))();
    piVar11 = (int *)(iVar6 + 0x534);
    (**(code **)(*piVar11 + 0x40))(piVar11,auStack_a0);
    puStack_80 = auStack_a0;
    iStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_7c = 0x10;
    fn_828E9D28(auStack_90,auStack_a0,0x10);
    uVar5 = 0;
    uVar8 = 0;
    do {
      iVar6 = *(int *)(iVar1 + 0x4c);
      if ((uint)(*(int *)(iVar1 + 0x50) - iVar6 >> 2) <= uVar5) break;
      uVar3 = *(undefined4 *)(uVar8 + iVar6);
      fn_8223C478(auStack_90,0x20,0);
      fn_828E9DB8(auStack_90,uVar3,0x20);
      uVar8 = uVar8 + 4;
      uVar5 = uVar5 + 1;
    } while (uVar8 < 0x10);
    fn_8224EA58(piVar11,auStack_a0);
    if (iStack_78 != 0) {
      fn_8265CA20();
    }
  }
  fn_82F6A594();
  return;
}

