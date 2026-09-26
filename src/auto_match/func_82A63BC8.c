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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
extern int fn_82A63B70();
extern int fn_82A63B98();
extern int fn_82A67290();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_8201467C;
extern unsigned int lbl_8201DFEC;
extern unsigned int lbl_82057518;
extern unsigned int lbl_8208E080;
extern unsigned int lbl_8208E084;
extern unsigned int lbl_8208E088;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_82A672C0;
extern unsigned int lbl_82A67308;
extern unsigned int lbl_82A67350;
extern unsigned int lbl_82A67380;


void fn_82A63BC8(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 *puVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float *pfVar24;
  code *pcVar25;
  int *piVar26;
  float *pfVar27;
  float *pfVar28;
  int iVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  
  puVar10 = (undefined4 *)fn_82F6A548();
  fVar9 = lbl_821AAD20;
  fVar8 = lbl_8208E088;
  fVar7 = lbl_8208E084;
  fVar6 = lbl_8208E080;
  fVar5 = lbl_82057518;
  fVar4 = lbl_8201DFEC;
  fVar3 = lbl_8201467C;
  piVar26 = (int *)*puVar10;
  pfVar18 = (float *)puVar10[1];
  uVar21 = puVar10[6];
  uVar17 = puVar10[7];
  iVar1 = puVar10[8];
  if (puVar10[9] != 0) {
    uVar17 = 1;
    uVar21 = 1;
  }
  iVar29 = puVar10[4];
  if (iVar29 == 1) {
    iVar19 = 2;
    iVar20 = 2;
    pcVar25 = fn_82A63B70;
  }
  else if (iVar29 == 2) {
    iVar19 = 3;
    iVar20 = 3;
    pcVar25 = (code *)&lbl_82A672C0;
  }
  else {
    if (iVar29 == 3) {
      pcVar25 = fn_82A63B98;
    }
    else {
      if (iVar29 == 4) {
        iVar19 = 3;
        iVar20 = 3;
        pcVar25 = (code *)&lbl_82A67308;
        goto LAB_82a63c94;
      }
      if (iVar29 == 5) {
        pcVar25 = (code *)&lbl_82A67350;
      }
      else {
        if (iVar29 == 0) {
          iVar19 = 1;
          iVar20 = 1;
          pcVar25 = fn_82A67290;
          goto LAB_82a63c94;
        }
        pcVar25 = (code *)&lbl_82A67380;
      }
    }
    iVar19 = 4;
    iVar20 = 4;
  }
LAB_82a63c94:
  if (puVar10[3] == 0) {
    uVar11 = (uint)puVar10[5] / uVar21;
    uVar22 = 0;
    if (uVar11 != 0) {
      iVar20 = puVar10[2];
      do {
        uVar23 = 0;
        if (uVar17 != 0) {
          iVar16 = iVar20 + -4;
          pfVar28 = pfVar18;
          do {
            uVar13 = 0;
            fVar2 = fVar9;
            if (uVar21 != 0) {
              iVar15 = 0;
              piVar14 = piVar26;
              piVar12 = piVar26;
              do {
                if (iVar29 == 1) {
                  fVar2 = (float)(longlong)*(short *)piVar12 * *(float *)(iVar16 + 4) * fVar3 +
                          fVar2;
                }
                else if (iVar29 == 2) {
                  fVar2 = (float)(longlong)
                                 ((int)((uint)CONCAT21(CONCAT11(*(undefined1 *)
                                                                 ((int)piVar26 + iVar15 + 2),
                                                                *(undefined1 *)
                                                                 ((int)piVar26 + iVar15 + 1)),
                                                       *(undefined1 *)(iVar15 + (int)piVar26)) << 8)
                                 >> 0xc) * *(float *)(iVar16 + 4) * fVar7 + fVar2;
                }
                else if (iVar29 == 3) {
                  fVar2 = (float)(longlong)(*piVar14 >> 0xc) * *(float *)(iVar16 + 4) * fVar7 +
                          fVar2;
                }
                else if (iVar29 == 4) {
                  fVar2 = (float)(longlong)
                                 ((int)((uint)CONCAT21(CONCAT11(*(undefined1 *)
                                                                 ((int)piVar26 + iVar15 + 2),
                                                                *(undefined1 *)
                                                                 ((int)piVar26 + iVar15 + 1)),
                                                       *(undefined1 *)(iVar15 + (int)piVar26)) << 8)
                                 >> 8) * *(float *)(iVar16 + 4) * fVar5 + fVar2;
                }
                else if (iVar29 == 5) {
                  fVar2 = (float)(longlong)(*piVar14 >> 8) * *(float *)(iVar16 + 4) * fVar5 + fVar2;
                }
                else if (iVar29 == 0) {
                  fVar2 = ((float)*(byte *)(uVar13 + (int)piVar26) - fVar4) * *(float *)(iVar16 + 4)
                          * fVar6 + fVar2;
                }
                else {
                  fVar2 = (float)(longlong)*piVar14 * *(float *)(iVar16 + 4) * fVar8 + fVar2;
                }
                iVar16 = iVar16 + 4;
                uVar13 = uVar13 + 1;
                piVar12 = (int *)((int)piVar12 + 2);
                iVar15 = iVar15 + 3;
                piVar14 = piVar14 + 1;
              } while (uVar13 < uVar21);
            }
            if (iVar1 == 0) {
              *pfVar28 = fVar2;
            }
            else {
              *pfVar28 = *pfVar28 + fVar2;
            }
            uVar23 = uVar23 + 1;
            pfVar28 = pfVar28 + 1;
          } while (uVar23 < uVar17);
        }
        uVar22 = uVar22 + 1;
        piVar26 = (int *)(iVar19 * uVar21 + (int)piVar26);
        pfVar18 = pfVar18 + uVar17;
      } while (uVar22 < uVar11);
    }
  }
  else {
    uVar11 = (uint)puVar10[5] / uVar21;
    uVar22 = 0;
    if (uVar11 != 0) {
      do {
        if (uVar17 != 0) {
          pfVar28 = (float *)(puVar10[3] + -4);
          pfVar27 = (float *)(puVar10[2] + -4);
          dVar31 = (double)uVar22;
          pfVar24 = pfVar18;
          uVar23 = uVar17;
          do {
            dVar34 = (double)pfVar28[1];
            dVar32 = (double)pfVar27[1];
            dVar30 = (double)(*pcVar25)(piVar26);
            pfVar28 = pfVar28 + 1;
            pfVar27 = pfVar27 + 1;
            dVar30 = (double)(float)(dVar30 * (double)(float)(dVar34 * dVar31 + dVar32));
            if (1 < uVar21) {
              iVar29 = uVar21 - 1;
              piVar14 = piVar26;
              do {
                piVar14 = (int *)(iVar20 + (int)piVar14);
                pfVar28 = pfVar28 + 1;
                dVar33 = (double)*pfVar28;
                pfVar27 = pfVar27 + 1;
                dVar34 = (double)*pfVar27;
                dVar32 = (double)(*pcVar25)(piVar14);
                iVar29 = iVar29 + -1;
                dVar30 = (double)(float)(dVar32 * (double)(float)(dVar33 * dVar31 + dVar34) + dVar30
                                        );
              } while (iVar29 != 0);
            }
            if (iVar1 == 0) {
              *pfVar24 = (float)dVar30;
            }
            else {
              *pfVar24 = (float)((double)*pfVar24 + dVar30);
            }
            uVar23 = uVar23 - 1;
            pfVar24 = pfVar24 + 1;
          } while (uVar23 != 0);
        }
        uVar22 = uVar22 + 1;
        piVar26 = (int *)(iVar19 * uVar21 + (int)piVar26);
        pfVar18 = pfVar18 + uVar17;
      } while (uVar22 < uVar11);
      fn_82F6A594();
      return;
    }
  }
  fn_82F6A594();
  return;
}

