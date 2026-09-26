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
extern float fRam8327fb48;
extern int fn_8254C278();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int iStack_a0;
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821954E0;
extern unsigned int lbl_821955A8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327FBA4;
extern unsigned int lbl_8327FBA8;
extern unsigned int lbl_8327FBAC;
extern unsigned int lbl_8327FBB0;
extern unsigned int lbl_8327FBB4;
extern unsigned int uRam8327fb4c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8254C3A8(void)

{
  int iVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar10;
  longlong lVar9;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double extraout_f1;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  int aiStack_b0 [4];
  int iStack_a0;
  
  piVar6 = (int *)fn_82F6A53C();
  dVar18 = (double)*(float *)(*piVar6 + 0x82c);
  dVar20 = (double)lbl_821CA460;
  iVar10 = piVar6[0x79] - (int)(extraout_f1 * (double)lbl_821954E0);
  iVar1 = iVar10 / 0x8235;
  piVar6[0x79] = iVar10 % 0x8235;
  dVar17 = extraout_f1;
  if (piVar6[0x38] != 0) {
    dVar22 = (double)((float)(dVar18 - (double)(float)piVar6[0x39]) / (float)piVar6[0x3a]);
    if (dVar22 <= dVar20) {
      if (piVar6[0x3b] == 1) {
        dVar22 = (double)(float)(dVar20 - dVar22);
      }
      uVar11 = 0;
      if ((piVar6[3] - piVar6[2]) / 0x60 != 0) {
        iVar10 = 0;
        do {
          iVar14 = iVar10 + piVar6[2];
          if (piVar6[0x3b] == 1) {
            if (dVar22 < (double)*(float *)(iVar14 + 0x50)) goto code_r0x8254c5b0;
code_r0x8254c500:
            bVar4 = false;
          }
          else {
            if (dVar22 <= (double)*(float *)(iVar14 + 0x50)) goto code_r0x8254c500;
code_r0x8254c5b0:
            bVar4 = true;
          }
          if ((bVar4) && (*(int *)(iVar14 + 0x54) == 0)) {
            fn_8254C278(dVar18,(double)fRam8327fb48,piVar6,iVar14,3);
            *(undefined4 *)(iVar14 + 0x4c) = 1;
            uVar5 = uRam8327fb4c;
            *(undefined4 *)(iVar14 + 0x54) = 1;
            *(undefined4 *)(iVar14 + 0x48) = uVar5;
          }
          uVar11 = uVar11 + 1;
          iVar10 = iVar10 + 0x60;
        } while (uVar11 < (uint)((piVar6[3] - piVar6[2]) / 0x60));
      }
    }
    else {
      uVar11 = 0;
      if ((piVar6[3] - piVar6[2]) / 0x60 != 0) {
        iVar10 = 0;
        do {
          uVar11 = uVar11 + 1;
          iVar14 = iVar10 + piVar6[2];
          iVar10 = iVar10 + 0x60;
          *(undefined4 *)(iVar14 + 0x54) = 0;
        } while (uVar11 < (uint)((piVar6[3] - piVar6[2]) / 0x60));
      }
      piVar6[0x38] = 0;
    }
  }
  iVar10 = 0;
  puVar13 = (uint *)(piVar6 + 2);
  lVar9 = 0;
  while( true ) {
    uVar11 = (int)(piVar6[3] - *puVar13) / 0x60;
    uVar8 = uVar11;
    if (7 < (int)uVar11) {
      uVar8 = 8;
    }
    if ((int)uVar8 <= iVar10) break;
    dataCacheBlockTouch(lVar9 + (ulonglong)*puVar13);
    iVar10 = iVar10 + 1;
    lVar9 = lVar9 + 0x60;
  }
  uVar8 = 0;
  if (uVar11 != 0) {
    dVar21 = (double)lbl_821955A8;
    lVar9 = 0;
    dVar22 = (double)lbl_8218E8FC;
    dVar19 = (double)lbl_82193AF0;
    dVar23 = (double)lbl_821CC160;
    do {
      if (uVar8 + 8 < uVar11) {
        dataCacheBlockTouch(lVar9 + (ulonglong)*puVar13 + 0x300);
      }
      uVar11 = *puVar13;
      iVar10 = (int)(lVar9 + (ulonglong)uVar11);
      if (*(int *)(iVar10 + 0x34) == 0) {
        if ((*(int *)(iVar10 + 0x4c) != 0) &&
           (fVar2 = (float)((double)*(float *)(iVar10 + 0x48) - dVar17),
           *(float *)(iVar10 + 0x48) = fVar2, (double)fVar2 <= dVar23)) {
          *(float *)(iVar10 + 0x48) = (float)dVar23;
          *(undefined4 *)(iVar10 + 0x4c) = 0;
          if (piVar6[1] == 0) {
            iVar14 = 0;
          }
          else {
            iStack_a0 = (int)lbl_8327FBB4;
            aiStack_b0[0] = (int)lbl_8327FBA4;
            aiStack_b0[1] = (int)lbl_8327FBA8;
            aiStack_b0[3] = (int)lbl_8327FBB0;
            aiStack_b0[2] = (int)lbl_8327FBAC;
            dVar16 = (double)(longlong)(aiStack_b0[piVar6[0x73]] + -1);
            dVar15 = dVar23;
            if ((dVar23 <= dVar16) && (dVar15 = dVar16, dVar21 < dVar16)) {
              dVar15 = dVar21;
            }
            iVar14 = (int)((double)(float)(dVar15 * dVar19) * dVar22);
          }
          fn_8254C278(dVar18,(double)(float)piVar6[0x78],piVar6,lVar9 + (ulonglong)uVar11,iVar14);
        }
      }
      else {
        dVar15 = (double)((float)(dVar18 - (double)*(float *)(iVar10 + 0x44)) /
                         *(float *)(iVar10 + 0x40));
        if (*(float *)(&lbl_821954D8 +
                      ((uint)(byte)((dVar15 < dVar23) << 2) |
                      (uint)(NAN(dVar15) || NAN(dVar23)) << 2)) < 0.0) {
          dVar15 = dVar23;
        }
        dVar16 = dVar20;
        if (*(float *)(&lbl_821954D8 +
                      ((uint)(byte)(((double)(float)(dVar15 - dVar20) < dVar23) << 2) |
                      (uint)(NAN((double)(float)(dVar15 - dVar20)) || NAN(dVar23)) << 2)) < 0.0) {
          dVar16 = dVar15;
        }
        *(float *)(iVar10 + 0x24) = (float)dVar16;
        if (dVar20 <= dVar16) {
          *(float *)(iVar10 + 0x24) = (float)dVar23;
          *(undefined4 *)(iVar10 + 0x34) = 0;
          *(undefined4 *)(iVar10 + 0x18) = *(undefined4 *)(iVar10 + 0x28);
          *(undefined4 *)(iVar10 + 0x1c) = *(undefined4 *)(iVar10 + 0x20);
        }
      }
      uVar8 = uVar8 + 1;
      iVar14 = piVar6[10];
      lVar9 = lVar9 + 0x60;
      iVar7 = *(int *)(iVar10 + 0x1c) + iVar1;
      iVar3 = *(int *)(*(int *)(iVar10 + 0x18) * 0x18 + iVar14 + 4);
      iVar12 = *(int *)(iVar10 + 0x20) + iVar1;
      *(int *)(iVar10 + 0x1c) = iVar7 - (iVar7 / iVar3) * iVar3;
      iVar14 = *(int *)(*(int *)(iVar10 + 0x28) * 0x18 + iVar14 + 4);
      *(int *)(iVar10 + 0x20) = iVar12 - (iVar12 / iVar14) * iVar14;
      uVar11 = (int)(piVar6[3] - *puVar13) / 0x60;
    } while (uVar8 < uVar11);
  }
  fn_82F6A588();
  return;
}

