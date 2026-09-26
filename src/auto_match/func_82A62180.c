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
extern int fn_82F6A510();
extern int fn_82F6A55C();
extern unsigned int lbl_8201467C;


void fn_82A62180(void)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint *puVar30;
  longlong lVar31;
  ulonglong uVar32;
  float *pfVar33;
  short *psVar35;
  ulonglong uVar34;
  
  puVar30 = (uint *)fn_82F6A510();
  pfVar33 = (float *)puVar30[2];
  pfVar1 = (float *)puVar30[3];
  uVar32 = (ulonglong)puVar30[1];
  uVar2 = puVar30[5];
  uVar3 = puVar30[8];
  fVar4 = *pfVar33 * lbl_8201467C;
  fVar5 = pfVar33[1] * lbl_8201467C;
  fVar6 = pfVar33[2] * lbl_8201467C;
  fVar7 = pfVar33[3] * lbl_8201467C;
  fVar8 = pfVar33[4] * lbl_8201467C;
  fVar9 = pfVar33[5] * lbl_8201467C;
  fVar10 = pfVar33[6] * lbl_8201467C;
  fVar11 = pfVar33[7] * lbl_8201467C;
  fVar12 = pfVar33[8] * lbl_8201467C;
  fVar13 = pfVar33[9] * lbl_8201467C;
  fVar14 = pfVar33[10] * lbl_8201467C;
  fVar15 = pfVar33[0xb] * lbl_8201467C;
  if (pfVar1 == (float *)0x0) {
    if (uVar2 != 0) {
      lVar31 = (ulonglong)(uVar2 - 1) / 6 + 1;
      uVar34 = (ulonglong)*puVar30;
      do {
        psVar35 = (short *)uVar34;
        dataCacheBlockTouch(uVar34 + 0x3c);
        dataCacheBlockTouch(uVar32 + 0x48);
        fVar16 = (float)(longlong)*psVar35 * fVar4 +
                 (float)(longlong)psVar35[1] * fVar5 +
                 (float)(longlong)psVar35[2] * fVar6 +
                 (float)(longlong)psVar35[3] * fVar7 +
                 (float)(longlong)psVar35[5] * fVar9 + (float)(longlong)psVar35[4] * fVar8;
        fVar17 = (float)(longlong)*psVar35 * fVar10 +
                 (float)(longlong)psVar35[1] * fVar11 +
                 (float)(longlong)psVar35[2] * fVar12 +
                 (float)(longlong)psVar35[3] * fVar13 +
                 (float)(longlong)psVar35[5] * fVar15 + (float)(longlong)psVar35[4] * fVar14;
        pfVar33 = (float *)uVar32;
        if (uVar3 == 0) {
          *pfVar33 = fVar16;
          pfVar33[1] = fVar17;
        }
        else {
          *pfVar33 = fVar16 + *pfVar33;
          pfVar33[1] = fVar17 + pfVar33[1];
        }
        uVar32 = uVar32 + 8;
        lVar31 = lVar31 + -1;
        uVar34 = uVar34 + 0xc;
      } while (lVar31 != 0);
      fn_82F6A55C();
      return;
    }
  }
  else {
    fVar16 = *pfVar1 * lbl_8201467C;
    fVar17 = pfVar1[1] * lbl_8201467C;
    fVar18 = pfVar1[2] * lbl_8201467C;
    fVar19 = pfVar1[3] * lbl_8201467C;
    fVar20 = pfVar1[4] * lbl_8201467C;
    fVar21 = pfVar1[5] * lbl_8201467C;
    fVar22 = pfVar1[6] * lbl_8201467C;
    fVar23 = pfVar1[7] * lbl_8201467C;
    fVar24 = pfVar1[8] * lbl_8201467C;
    fVar25 = pfVar1[9] * lbl_8201467C;
    fVar26 = pfVar1[10] * lbl_8201467C;
    fVar27 = pfVar1[0xb] * lbl_8201467C;
    if (uVar2 != 0) {
      lVar31 = (ulonglong)(uVar2 - 1) / 6 + 1;
      uVar34 = (ulonglong)*puVar30;
      do {
        psVar35 = (short *)uVar34;
        dataCacheBlockTouch(uVar34 + 0x3c);
        dataCacheBlockTouch(uVar32 + 0x48);
        fVar29 = (float)(longlong)*psVar35 * fVar4 +
                 (float)(longlong)psVar35[1] * fVar5 +
                 (float)(longlong)psVar35[2] * fVar6 +
                 (float)(longlong)psVar35[3] * fVar7 +
                 (float)(longlong)psVar35[5] * fVar9 + (float)(longlong)psVar35[4] * fVar8;
        fVar28 = (float)(longlong)*psVar35 * fVar10 +
                 (float)(longlong)psVar35[1] * fVar11 +
                 (float)(longlong)psVar35[2] * fVar12 +
                 (float)(longlong)psVar35[3] * fVar13 +
                 (float)(longlong)psVar35[5] * fVar15 + (float)(longlong)psVar35[4] * fVar14;
        pfVar33 = (float *)uVar32;
        if (uVar3 == 0) {
          *pfVar33 = fVar29;
          pfVar33[1] = fVar28;
        }
        else {
          *pfVar33 = fVar29 + *pfVar33;
          pfVar33[1] = fVar28 + pfVar33[1];
        }
        uVar32 = uVar32 + 8;
        fVar4 = fVar16 + fVar4;
        fVar5 = fVar17 + fVar5;
        fVar6 = fVar18 + fVar6;
        fVar7 = fVar19 + fVar7;
        fVar8 = fVar20 + fVar8;
        fVar9 = fVar21 + fVar9;
        fVar10 = fVar22 + fVar10;
        fVar11 = fVar23 + fVar11;
        fVar12 = fVar24 + fVar12;
        fVar13 = fVar25 + fVar13;
        fVar14 = fVar26 + fVar14;
        fVar15 = fVar27 + fVar15;
        lVar31 = lVar31 + -1;
        uVar34 = uVar34 + 0xc;
      } while (lVar31 != 0);
    }
  }
  fn_82F6A55C();
  return;
}

