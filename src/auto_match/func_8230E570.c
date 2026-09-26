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
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_822315A0();
extern int fn_822C72E0();
extern int fn_8230E7F0();
extern int fn_8230F388();
extern int fn_82310F58();
extern int fn_82368750();
extern int fn_823CC7A0();
extern int fn_823DB548();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_8230E570(void)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int in_r0;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  double extraout_f1;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [144];
  
  iVar5 = fn_82F6A540();
  dVar9 = extraout_f1;
  fn_8230F388();
  if ((*(int *)(iVar5 + 0x484) == 0) ||
     (iVar2 = *(int *)(iVar5 + 0x10), *(int *)(iVar2 + 0xfa4) == 0)) goto LAB_8230e7d0;
  dVar14 = (double)lbl_821CC160;
  if ((dVar14 < (double)*(float *)(iVar5 + 0x4e0)) &&
     ((fVar1 = (float)((double)*(float *)(iVar5 + 0x4e0) - dVar9), *(float *)(iVar5 + 0x4e0) = fVar1
      , (double)fVar1 <= dVar14 || ((double)*(float *)(iVar5 + 0x4d8) <= dVar9)))) {
    iVar6 = fn_823CC7A0();
    iVar2 = iVar6 * 300 + iVar2;
    iVar7 = fn_82310F58((double)*(float *)(iVar2 + 0x518),(double)*(float *)(iVar2 + 0x51c),
                              auStack_90,iVar5);
    iVar6 = *(int *)(iVar5 + 0x10);
    puVar4 = (undefined4 *)(in_r0 + iVar7 & 0xfffffff0);
    uVar15 = *puVar4;
    uVar16 = puVar4[1];
    uVar17 = puVar4[2];
    uVar18 = puVar4[3];
    puVar4 = (undefined4 *)(in_r0 + iVar5 + 0x4f0 & 0xfffffff0);
    *puVar4 = uVar15;
    puVar4[1] = uVar16;
    puVar4[2] = uVar17;
    puVar4[3] = uVar18;
    puVar4 = (undefined4 *)(*(int *)(iVar6 + 0xe10) + 0xc00U & 0xfffffff0);
    *puVar4 = uVar15;
    puVar4[1] = uVar16;
    puVar4[2] = uVar17;
    puVar4[3] = uVar18;
    dVar13 = (double)*(float *)(iVar2 + 0x510);
    dVar12 = (double)*(float *)(iVar2 + 0x514);
    dVar11 = (double)*(float *)(iVar5 + 0x4e0);
    dVar10 = (double)(float)(dVar12 - dVar13);
    iVar6 = fn_82368750(auStack_a0,*(undefined4 *)(iVar5 + 0x10),
                              *(undefined4 *)(*(int *)(iVar5 + 0xc) + 0x2c));
    iVar2 = *(int *)(*(int *)(iVar5 + 0x10) + 0x4b0);
    if (iVar2 != 0) {
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)(((double)(float)(dVar12 - dVar13) < dVar14) << 2) |
                    (uint)(NAN((double)(float)(dVar12 - dVar13)) || NAN(dVar14)) << 2)) < 0.0) {
        dVar13 = dVar12;
      }
      dVar12 = dVar14;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((-dVar10 < dVar14) << 2) |
                    (uint)(NAN(-dVar10) || NAN(dVar14)) << 2)) < 0.0) {
        dVar12 = dVar10;
      }
      dVar10 = dVar14;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((-dVar11 < dVar14) << 2) |
                    (uint)(NAN(-dVar11) || NAN(dVar14)) << 2)) < 0.0) {
        dVar10 = dVar11;
      }
      fn_823DB548(dVar10,dVar12,dVar13,iVar2,iVar6);
    }
    if (*(int *)(iVar6 + 4) != 0) {
      fn_822315A0();
    }
  }
  dVar13 = (double)*(float *)(iVar5 + 0x4dc);
  if (dVar14 < dVar13) {
    if (dVar13 <= dVar9) {
      uVar3 = *(uint *)(iVar5 + 0x4d4);
      if (uVar3 == 0) {
        uVar8 = 0xffffffff821ae940;
LAB_8230e778:
        fn_822C72E0(*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0xc) + 0x114) + 0x20),uVar8);
      }
      else {
        if (uVar3 == 1) {
          uVar8 = 0xffffffff821ae978;
          goto LAB_8230e778;
        }
        if (uVar3 < 3) {
          uVar8 = 0xffffffff821ae960;
          goto LAB_8230e778;
        }
        if (uVar3 == 3) {
          uVar8 = 0xffffffff821ae9b4;
          goto LAB_8230e778;
        }
        if (uVar3 < 5) {
          uVar8 = 0xffffffff821ae99c;
          goto LAB_8230e778;
        }
      }
      dVar13 = (double)*(float *)(iVar5 + 0x4dc);
      *(float *)(iVar5 + 0x4d8) = (float)(dVar9 - dVar13) + *(float *)(iVar5 + 0x4d8);
    }
    *(float *)(iVar5 + 0x4dc) = (float)(dVar13 - dVar9);
  }
  dVar13 = (double)*(float *)(iVar5 + 0x4d8);
  if (dVar14 < dVar13) {
    if (dVar13 <= dVar9) {
      fn_8230E7F0((double)(float)(dVar9 - dVar13),iVar5);
    }
    *(float *)(iVar5 + 0x4d8) = (float)((double)*(float *)(iVar5 + 0x4d8) - dVar9);
  }
LAB_8230e7d0:
  fn_82F6A58C();
  return;
}

