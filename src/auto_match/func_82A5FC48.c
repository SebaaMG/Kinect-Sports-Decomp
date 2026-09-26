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


void fn_82A5FC48(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
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
  float *pfVar27;
  uint uVar28;
  uint uVar29;
  float fVar30;
  uint *puVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  float *pfVar35;
  
  puVar31 = (uint *)fn_82F6A510();
  pfVar35 = (float *)puVar31[2];
  pfVar27 = (float *)puVar31[3];
  uVar34 = (ulonglong)puVar31[1];
  uVar28 = puVar31[5];
  uVar29 = puVar31[8];
  fVar1 = *pfVar35;
  fVar2 = pfVar35[1];
  fVar3 = pfVar35[2];
  fVar4 = pfVar35[3];
  fVar5 = pfVar35[4];
  fVar6 = pfVar35[5];
  fVar7 = pfVar35[6];
  fVar8 = pfVar35[7];
  fVar9 = pfVar35[8];
  fVar10 = pfVar35[9];
  fVar11 = pfVar35[10];
  fVar12 = pfVar35[0xb];
  if (pfVar27 == (float *)0x0) {
    if (uVar28 != 0) {
      lVar32 = (ulonglong)(uVar28 - 1 >> 1) + 1;
      uVar33 = (ulonglong)*puVar31;
      do {
        fVar13 = *(float *)uVar33;
        fVar25 = ((float *)uVar33)[1];
        dataCacheBlockTouch(uVar33 + 0x38);
        dataCacheBlockTouch(uVar34 + 0xd8);
        fVar14 = fVar25 * fVar2 + fVar13 * fVar1;
        pfVar35 = (float *)uVar34;
        if (uVar29 == 0) {
          *pfVar35 = fVar14;
          pfVar35[1] = fVar25 * fVar4 + fVar13 * fVar3;
          pfVar35[2] = fVar25 * fVar6 + fVar13 * fVar5;
          pfVar35[3] = fVar25 * fVar8 + fVar13 * fVar7;
          pfVar35[4] = fVar25 * fVar10 + fVar13 * fVar9;
          pfVar35[5] = fVar25 * fVar12 + fVar13 * fVar11;
        }
        else {
          *pfVar35 = fVar14 + *pfVar35;
          pfVar35[1] = fVar25 * fVar4 + fVar13 * fVar3 + pfVar35[1];
          pfVar35[2] = fVar25 * fVar6 + fVar13 * fVar5 + pfVar35[2];
          pfVar35[3] = fVar25 * fVar8 + fVar13 * fVar7 + pfVar35[3];
          pfVar35[4] = fVar25 * fVar10 + fVar13 * fVar9 + pfVar35[4];
          pfVar35[5] = fVar25 * fVar12 + fVar13 * fVar11 + pfVar35[5];
        }
        uVar34 = uVar34 + 0x18;
        lVar32 = lVar32 + -1;
        uVar33 = uVar33 + 8;
      } while (lVar32 != 0);
      fn_82F6A55C();
      return;
    }
  }
  else {
    fVar13 = *pfVar27;
    fVar25 = pfVar27[1];
    fVar14 = pfVar27[2];
    fVar15 = pfVar27[3];
    fVar16 = pfVar27[4];
    fVar17 = pfVar27[5];
    fVar18 = pfVar27[6];
    fVar19 = pfVar27[7];
    fVar20 = pfVar27[8];
    fVar21 = pfVar27[9];
    fVar22 = pfVar27[10];
    fVar23 = pfVar27[0xb];
    if (uVar28 != 0) {
      lVar32 = (ulonglong)(uVar28 - 1 >> 1) + 1;
      uVar33 = (ulonglong)*puVar31;
      do {
        fVar24 = *(float *)uVar33;
        fVar26 = ((float *)uVar33)[1];
        dataCacheBlockTouch(uVar33 + 0x38);
        dataCacheBlockTouch(uVar34 + 0xd8);
        fVar30 = fVar26 * fVar2 + fVar24 * fVar1;
        pfVar35 = (float *)uVar34;
        if (uVar29 == 0) {
          *pfVar35 = fVar30;
          pfVar35[1] = fVar26 * fVar4 + fVar24 * fVar3;
          pfVar35[2] = fVar26 * fVar6 + fVar24 * fVar5;
          pfVar35[3] = fVar26 * fVar8 + fVar24 * fVar7;
          pfVar35[4] = fVar26 * fVar10 + fVar24 * fVar9;
          pfVar35[5] = fVar26 * fVar12 + fVar24 * fVar11;
        }
        else {
          *pfVar35 = fVar30 + *pfVar35;
          pfVar35[1] = fVar26 * fVar4 + fVar24 * fVar3 + pfVar35[1];
          pfVar35[2] = fVar26 * fVar6 + fVar24 * fVar5 + pfVar35[2];
          pfVar35[3] = fVar26 * fVar8 + fVar24 * fVar7 + pfVar35[3];
          pfVar35[4] = fVar26 * fVar10 + fVar24 * fVar9 + pfVar35[4];
          pfVar35[5] = fVar26 * fVar12 + fVar24 * fVar11 + pfVar35[5];
        }
        uVar34 = uVar34 + 0x18;
        fVar1 = fVar13 + fVar1;
        fVar2 = fVar25 + fVar2;
        fVar3 = fVar14 + fVar3;
        fVar4 = fVar15 + fVar4;
        fVar5 = fVar16 + fVar5;
        fVar6 = fVar17 + fVar6;
        fVar7 = fVar18 + fVar7;
        fVar8 = fVar19 + fVar8;
        fVar9 = fVar20 + fVar9;
        fVar10 = fVar21 + fVar10;
        fVar11 = fVar22 + fVar11;
        fVar12 = fVar23 + fVar12;
        lVar32 = lVar32 + -1;
        uVar33 = uVar33 + 8;
      } while (lVar32 != 0);
    }
  }
  fn_82F6A55C();
  return;
}

