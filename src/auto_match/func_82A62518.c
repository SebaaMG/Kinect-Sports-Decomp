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
extern unsigned int fStack_a4;
extern unsigned int fStack_a8;
extern int fn_82F6A510();
extern int fn_82F6A55C();
extern unsigned int lbl_8201467C;


void fn_82A62518(void)

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
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  uint *puVar55;
  longlong lVar56;
  ulonglong uVar57;
  float *pfVar58;
  short *psVar60;
  ulonglong uVar59;
  float fStack_a8;
  float fStack_a4;
  
  puVar55 = (uint *)fn_82F6A510();
  pfVar58 = (float *)puVar55[2];
  pfVar1 = (float *)puVar55[3];
  uVar57 = (ulonglong)puVar55[1];
  uVar2 = puVar55[5];
  uVar3 = puVar55[8];
  fStack_a8 = pfVar58[0x16] * lbl_8201467C;
  fVar4 = pfVar58[0x15] * lbl_8201467C;
  fStack_a4 = pfVar58[0x17] * lbl_8201467C;
  fVar5 = pfVar58[1] * lbl_8201467C;
  fVar6 = pfVar58[2] * lbl_8201467C;
  fVar7 = pfVar58[10] * lbl_8201467C;
  fVar8 = pfVar58[0xb] * lbl_8201467C;
  fVar9 = pfVar58[0xc] * lbl_8201467C;
  fVar10 = pfVar58[0xd] * lbl_8201467C;
  fVar11 = pfVar58[0xe] * lbl_8201467C;
  fVar12 = pfVar58[0xf] * lbl_8201467C;
  fVar13 = pfVar58[0x10] * lbl_8201467C;
  fVar14 = pfVar58[0x11] * lbl_8201467C;
  fVar15 = pfVar58[0x12] * lbl_8201467C;
  fVar16 = *pfVar58 * lbl_8201467C;
  fVar17 = pfVar58[3] * lbl_8201467C;
  fVar18 = pfVar58[4] * lbl_8201467C;
  fVar19 = pfVar58[5] * lbl_8201467C;
  fVar20 = pfVar58[6] * lbl_8201467C;
  fVar21 = pfVar58[7] * lbl_8201467C;
  fVar22 = pfVar58[8] * lbl_8201467C;
  fVar23 = pfVar58[9] * lbl_8201467C;
  fVar24 = pfVar58[0x13] * lbl_8201467C;
  fVar25 = pfVar58[0x14] * lbl_8201467C;
  if (pfVar1 == (float *)0x0) {
    if (uVar2 != 0) {
      lVar56 = (ulonglong)(uVar2 - 1 >> 2) + 1;
      uVar59 = (ulonglong)*puVar55;
      do {
        psVar60 = (short *)uVar59;
        fVar27 = (float)(longlong)*psVar60;
        fVar26 = (float)(longlong)psVar60[1];
        fVar28 = (float)(longlong)psVar60[2];
        fVar29 = (float)(longlong)psVar60[3];
        dataCacheBlockTouch(uVar59 + 0x20);
        dataCacheBlockTouch(uVar57 + 0xd8);
        fVar31 = fVar29 * fVar17 + fVar28 * fVar6;
        fVar30 = fVar29 * fVar21 + fVar28 * fVar20;
        fVar32 = fVar29 * fVar8 + fVar28 * fVar7;
        pfVar58 = (float *)uVar57;
        if (uVar3 == 0) {
          *pfVar58 = fVar27 * fVar16 + fVar26 * fVar5 + fVar31;
          pfVar58[1] = fVar27 * fVar18 + fVar26 * fVar19 + fVar30;
          pfVar58[2] = fVar27 * fVar22 + fVar26 * fVar23 + fVar32;
          pfVar58[3] = fVar27 * fVar9 + fVar26 * fVar10 + fVar29 * fVar12 + fVar28 * fVar11;
          pfVar58[4] = fVar27 * fVar13 + fVar26 * fVar14 + fVar29 * fVar24 + fVar28 * fVar15;
          pfVar58[5] = fVar27 * fVar25 + fVar26 * fVar4 + fVar29 * fStack_a4 + fVar28 * fStack_a8;
        }
        else {
          *pfVar58 = fVar27 * fVar16 + fVar26 * fVar5 + fVar31 + *pfVar58;
          pfVar58[1] = fVar27 * fVar18 + fVar26 * fVar19 + fVar30 + pfVar58[1];
          pfVar58[2] = fVar27 * fVar22 + fVar26 * fVar23 + fVar32 + pfVar58[2];
          pfVar58[3] = fVar27 * fVar9 + fVar26 * fVar10 + fVar29 * fVar12 + fVar28 * fVar11 +
                       pfVar58[3];
          pfVar58[4] = fVar27 * fVar13 + fVar26 * fVar14 + fVar29 * fVar24 + fVar28 * fVar15 +
                       pfVar58[4];
          pfVar58[5] = fVar27 * fVar25 + fVar26 * fVar4 + fVar29 * fStack_a4 + fVar28 * fStack_a8 +
                       pfVar58[5];
        }
        uVar57 = uVar57 + 0x18;
        lVar56 = lVar56 + -1;
        uVar59 = uVar59 + 8;
      } while (lVar56 != 0);
      fn_82F6A55C();
      return;
    }
  }
  else {
    fVar26 = *pfVar1 * lbl_8201467C;
    fVar27 = pfVar1[1] * lbl_8201467C;
    fVar28 = pfVar1[2] * lbl_8201467C;
    fVar29 = pfVar1[3] * lbl_8201467C;
    fVar30 = pfVar1[4] * lbl_8201467C;
    fVar31 = pfVar1[5] * lbl_8201467C;
    fVar32 = pfVar1[6] * lbl_8201467C;
    fVar33 = pfVar1[7] * lbl_8201467C;
    fVar34 = pfVar1[8] * lbl_8201467C;
    fVar35 = pfVar1[9] * lbl_8201467C;
    fVar36 = pfVar1[10] * lbl_8201467C;
    fVar37 = pfVar1[0xb] * lbl_8201467C;
    fVar38 = pfVar1[0xc] * lbl_8201467C;
    fVar39 = pfVar1[0xd] * lbl_8201467C;
    fVar40 = pfVar1[0xe] * lbl_8201467C;
    fVar41 = pfVar1[0xf] * lbl_8201467C;
    fVar42 = pfVar1[0x10] * lbl_8201467C;
    fVar43 = pfVar1[0x11] * lbl_8201467C;
    fVar44 = pfVar1[0x12] * lbl_8201467C;
    fVar45 = pfVar1[0x13] * lbl_8201467C;
    fVar46 = pfVar1[0x14] * lbl_8201467C;
    fVar47 = pfVar1[0x15] * lbl_8201467C;
    fVar48 = pfVar1[0x16] * lbl_8201467C;
    fVar49 = pfVar1[0x17] * lbl_8201467C;
    if (uVar2 != 0) {
      lVar56 = (ulonglong)(uVar2 - 1 >> 2) + 1;
      uVar59 = (ulonglong)*puVar55;
      do {
        psVar60 = (short *)uVar59;
        fVar51 = (float)(longlong)*psVar60;
        fVar52 = (float)(longlong)psVar60[2];
        fVar50 = (float)(longlong)psVar60[1];
        fVar53 = (float)(longlong)psVar60[3];
        dataCacheBlockTouch(uVar59 + 0x20);
        dataCacheBlockTouch(uVar57 + 0xd8);
        fVar54 = fVar53 * fVar17 + fVar52 * fVar6;
        pfVar58 = (float *)uVar57;
        if (uVar3 == 0) {
          *pfVar58 = fVar51 * fVar16 + fVar50 * fVar5 + fVar54;
          pfVar58[1] = fVar51 * fVar18 + fVar50 * fVar19 + fVar53 * fVar21 + fVar52 * fVar20;
          pfVar58[2] = fVar51 * fVar22 + fVar50 * fVar23 + fVar53 * fVar8 + fVar52 * fVar7;
          pfVar58[3] = fVar51 * fVar9 + fVar50 * fVar10 + fVar53 * fVar12 + fVar52 * fVar11;
          pfVar58[4] = fVar51 * fVar13 + fVar50 * fVar14 + fVar53 * fVar24 + fVar52 * fVar15;
          pfVar58[5] = fVar51 * fVar25 + fVar50 * fVar4 + fVar53 * fStack_a4 + fVar52 * fStack_a8;
        }
        else {
          *pfVar58 = fVar51 * fVar16 + fVar50 * fVar5 + fVar54 + *pfVar58;
          pfVar58[1] = fVar51 * fVar18 + fVar50 * fVar19 + fVar53 * fVar21 + fVar52 * fVar20 +
                       pfVar58[1];
          pfVar58[2] = fVar51 * fVar22 + fVar50 * fVar23 + fVar53 * fVar8 + fVar52 * fVar7 +
                       pfVar58[2];
          pfVar58[3] = fVar51 * fVar9 + fVar50 * fVar10 + fVar53 * fVar12 + fVar52 * fVar11 +
                       pfVar58[3];
          pfVar58[4] = fVar51 * fVar13 + fVar50 * fVar14 + fVar53 * fVar24 + fVar52 * fVar15 +
                       pfVar58[4];
          pfVar58[5] = fVar51 * fVar25 + fVar50 * fVar4 + fVar53 * fStack_a4 + fVar52 * fStack_a8 +
                       pfVar58[5];
        }
        uVar57 = uVar57 + 0x18;
        fVar4 = fVar47 + fVar4;
        fStack_a8 = fVar48 + fStack_a8;
        fStack_a4 = fVar49 + fStack_a4;
        fVar16 = fVar26 + fVar16;
        fVar5 = fVar27 + fVar5;
        fVar6 = fVar28 + fVar6;
        fVar17 = fVar29 + fVar17;
        fVar18 = fVar30 + fVar18;
        fVar19 = fVar31 + fVar19;
        fVar20 = fVar32 + fVar20;
        fVar21 = fVar33 + fVar21;
        fVar22 = fVar34 + fVar22;
        fVar23 = fVar35 + fVar23;
        fVar7 = fVar36 + fVar7;
        fVar8 = fVar37 + fVar8;
        fVar9 = fVar38 + fVar9;
        fVar10 = fVar39 + fVar10;
        fVar11 = fVar40 + fVar11;
        fVar12 = fVar41 + fVar12;
        fVar13 = fVar42 + fVar13;
        fVar14 = fVar43 + fVar14;
        fVar15 = fVar44 + fVar15;
        fVar24 = fVar45 + fVar24;
        fVar25 = fVar46 + fVar25;
        lVar56 = lVar56 + -1;
        uVar59 = uVar59 + 8;
      } while (lVar56 != 0);
    }
  }
  fn_82F6A55C();
  return;
}

