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


void fn_82A61DE0(void)

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
  uint *puVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  float *pfVar35;
  
  puVar31 = (uint *)fn_82F6A510();
  pfVar35 = (float *)puVar31[2];
  pfVar1 = (float *)puVar31[3];
  uVar34 = (ulonglong)puVar31[1];
  uVar2 = puVar31[5];
  uVar3 = puVar31[8];
  fVar4 = *pfVar35 * lbl_8201467C;
  fVar5 = pfVar35[1] * lbl_8201467C;
  fVar6 = pfVar35[2] * lbl_8201467C;
  fVar7 = pfVar35[3] * lbl_8201467C;
  fVar8 = pfVar35[4] * lbl_8201467C;
  fVar9 = pfVar35[5] * lbl_8201467C;
  fVar10 = pfVar35[6] * lbl_8201467C;
  fVar11 = pfVar35[7] * lbl_8201467C;
  fVar12 = pfVar35[8] * lbl_8201467C;
  fVar13 = pfVar35[9] * lbl_8201467C;
  fVar14 = pfVar35[10] * lbl_8201467C;
  fVar15 = pfVar35[0xb] * lbl_8201467C;
  if (pfVar1 == (float *)0x0) {
    if (uVar2 != 0) {
      lVar32 = (ulonglong)(uVar2 - 1 >> 1) + 1;
      uVar33 = (ulonglong)*puVar31;
      do {
        fVar16 = (float)(longlong)*(short *)uVar33;
        fVar18 = (float)(longlong)((short *)uVar33)[1];
        dataCacheBlockTouch(uVar33 + 0x1c);
        dataCacheBlockTouch(uVar34 + 0xd8);
        fVar17 = fVar18 * fVar5 + fVar16 * fVar4;
        pfVar35 = (float *)uVar34;
        if (uVar3 == 0) {
          *pfVar35 = fVar17;
          pfVar35[1] = fVar18 * fVar7 + fVar16 * fVar6;
          pfVar35[2] = fVar18 * fVar9 + fVar16 * fVar8;
          pfVar35[3] = fVar18 * fVar11 + fVar16 * fVar10;
          pfVar35[4] = fVar18 * fVar13 + fVar16 * fVar12;
          pfVar35[5] = fVar18 * fVar15 + fVar16 * fVar14;
        }
        else {
          *pfVar35 = fVar17 + *pfVar35;
          pfVar35[1] = fVar18 * fVar7 + fVar16 * fVar6 + pfVar35[1];
          pfVar35[2] = fVar18 * fVar9 + fVar16 * fVar8 + pfVar35[2];
          pfVar35[3] = fVar18 * fVar11 + fVar16 * fVar10 + pfVar35[3];
          pfVar35[4] = fVar18 * fVar13 + fVar16 * fVar12 + pfVar35[4];
          pfVar35[5] = fVar18 * fVar15 + fVar16 * fVar14 + pfVar35[5];
        }
        uVar34 = uVar34 + 0x18;
        lVar32 = lVar32 + -1;
        uVar33 = uVar33 + 4;
      } while (lVar32 != 0);
      fn_82F6A55C();
      return;
    }
  }
  else {
    fVar16 = *pfVar1 * lbl_8201467C;
    fVar17 = pfVar1[2] * lbl_8201467C;
    fVar18 = pfVar1[4] * lbl_8201467C;
    fVar19 = pfVar1[6] * lbl_8201467C;
    fVar20 = pfVar1[8] * lbl_8201467C;
    fVar21 = pfVar1[1] * lbl_8201467C;
    fVar22 = pfVar1[3] * lbl_8201467C;
    fVar23 = pfVar1[5] * lbl_8201467C;
    fVar24 = pfVar1[7] * lbl_8201467C;
    fVar25 = pfVar1[9] * lbl_8201467C;
    fVar26 = pfVar1[10] * lbl_8201467C;
    fVar27 = pfVar1[0xb] * lbl_8201467C;
    if (uVar2 != 0) {
      lVar32 = (ulonglong)(uVar2 - 1 >> 1) + 1;
      uVar33 = (ulonglong)*puVar31;
      do {
        fVar28 = (float)(longlong)*(short *)uVar33;
        fVar29 = (float)(longlong)((short *)uVar33)[1];
        dataCacheBlockTouch(uVar33 + 0x1c);
        dataCacheBlockTouch(uVar34 + 0xd8);
        fVar30 = fVar29 * fVar5 + fVar28 * fVar4;
        pfVar35 = (float *)uVar34;
        if (uVar3 == 0) {
          *pfVar35 = fVar30;
          pfVar35[1] = fVar29 * fVar7 + fVar28 * fVar6;
          pfVar35[2] = fVar29 * fVar9 + fVar28 * fVar8;
          pfVar35[3] = fVar29 * fVar11 + fVar28 * fVar10;
          pfVar35[4] = fVar29 * fVar13 + fVar28 * fVar12;
          pfVar35[5] = fVar29 * fVar15 + fVar28 * fVar14;
        }
        else {
          *pfVar35 = fVar30 + *pfVar35;
          pfVar35[1] = fVar29 * fVar7 + fVar28 * fVar6 + pfVar35[1];
          pfVar35[2] = fVar29 * fVar9 + fVar28 * fVar8 + pfVar35[2];
          pfVar35[3] = fVar29 * fVar11 + fVar28 * fVar10 + pfVar35[3];
          pfVar35[4] = fVar29 * fVar13 + fVar28 * fVar12 + pfVar35[4];
          pfVar35[5] = fVar29 * fVar15 + fVar28 * fVar14 + pfVar35[5];
        }
        uVar34 = uVar34 + 0x18;
        fVar4 = fVar16 + fVar4;
        fVar5 = fVar21 + fVar5;
        fVar6 = fVar17 + fVar6;
        fVar7 = fVar22 + fVar7;
        fVar8 = fVar18 + fVar8;
        fVar9 = fVar23 + fVar9;
        fVar10 = fVar19 + fVar10;
        fVar11 = fVar24 + fVar11;
        fVar12 = fVar20 + fVar12;
        fVar13 = fVar25 + fVar13;
        fVar14 = fVar26 + fVar14;
        fVar15 = fVar27 + fVar15;
        lVar32 = lVar32 + -1;
        uVar33 = uVar33 + 4;
      } while (lVar32 != 0);
    }
  }
  fn_82F6A55C();
  return;
}

