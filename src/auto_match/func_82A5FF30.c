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


void fn_82A5FF30(void)

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
  float *pfVar25;
  uint uVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  uint *puVar30;
  longlong lVar31;
  ulonglong uVar32;
  float *pfVar34;
  ulonglong uVar33;
  
  puVar30 = (uint *)fn_82F6A510();
  pfVar34 = (float *)puVar30[2];
  pfVar25 = (float *)puVar30[3];
  uVar32 = (ulonglong)puVar30[1];
  uVar26 = puVar30[5];
  uVar27 = puVar30[8];
  fVar1 = *pfVar34;
  fVar2 = pfVar34[1];
  fVar3 = pfVar34[2];
  fVar4 = pfVar34[3];
  fVar5 = pfVar34[4];
  fVar6 = pfVar34[5];
  fVar7 = pfVar34[6];
  fVar8 = pfVar34[7];
  fVar9 = pfVar34[8];
  fVar10 = pfVar34[9];
  fVar11 = pfVar34[10];
  fVar12 = pfVar34[0xb];
  if (pfVar25 == (float *)0x0) {
    if (uVar26 != 0) {
      lVar31 = (ulonglong)(uVar26 - 1) / 6 + 1;
      uVar33 = (ulonglong)*puVar30;
      do {
        pfVar34 = (float *)uVar33;
        dataCacheBlockTouch(uVar33 + 0x78);
        dataCacheBlockTouch(uVar32 + 0x48);
        fVar13 = *pfVar34 * fVar1 +
                 pfVar34[1] * fVar2 +
                 pfVar34[2] * fVar3 + pfVar34[3] * fVar4 + pfVar34[5] * fVar6 + pfVar34[4] * fVar5;
        fVar14 = *pfVar34 * fVar7 +
                 pfVar34[1] * fVar8 +
                 pfVar34[2] * fVar9 +
                 pfVar34[3] * fVar10 + pfVar34[5] * fVar12 + pfVar34[4] * fVar11;
        pfVar34 = (float *)uVar32;
        if (uVar27 == 0) {
          *pfVar34 = fVar13;
          pfVar34[1] = fVar14;
        }
        else {
          *pfVar34 = fVar13 + *pfVar34;
          pfVar34[1] = fVar14 + pfVar34[1];
        }
        uVar32 = uVar32 + 8;
        lVar31 = lVar31 + -1;
        uVar33 = uVar33 + 0x18;
      } while (lVar31 != 0);
      fn_82F6A55C();
      return;
    }
  }
  else {
    fVar13 = *pfVar25;
    fVar14 = pfVar25[1];
    fVar15 = pfVar25[2];
    fVar16 = pfVar25[3];
    fVar17 = pfVar25[4];
    fVar18 = pfVar25[5];
    fVar19 = pfVar25[6];
    fVar20 = pfVar25[7];
    fVar21 = pfVar25[8];
    fVar22 = pfVar25[9];
    fVar23 = pfVar25[10];
    fVar24 = pfVar25[0xb];
    if (uVar26 != 0) {
      lVar31 = (ulonglong)(uVar26 - 1) / 6 + 1;
      uVar33 = (ulonglong)*puVar30;
      do {
        pfVar34 = (float *)uVar33;
        dataCacheBlockTouch(uVar33 + 0x78);
        dataCacheBlockTouch(uVar32 + 0x48);
        fVar29 = *pfVar34 * fVar1 +
                 pfVar34[1] * fVar2 +
                 pfVar34[2] * fVar3 + pfVar34[3] * fVar4 + pfVar34[5] * fVar6 + pfVar34[4] * fVar5;
        fVar28 = *pfVar34 * fVar7 +
                 pfVar34[1] * fVar8 +
                 pfVar34[2] * fVar9 +
                 pfVar34[3] * fVar10 + pfVar34[5] * fVar12 + pfVar34[4] * fVar11;
        pfVar34 = (float *)uVar32;
        if (uVar27 == 0) {
          *pfVar34 = fVar29;
          pfVar34[1] = fVar28;
        }
        else {
          *pfVar34 = fVar29 + *pfVar34;
          pfVar34[1] = fVar28 + pfVar34[1];
        }
        uVar32 = uVar32 + 8;
        fVar1 = fVar13 + fVar1;
        fVar2 = fVar14 + fVar2;
        fVar3 = fVar15 + fVar3;
        fVar4 = fVar16 + fVar4;
        fVar5 = fVar17 + fVar5;
        fVar6 = fVar18 + fVar6;
        fVar7 = fVar19 + fVar7;
        fVar8 = fVar20 + fVar8;
        fVar9 = fVar21 + fVar9;
        fVar10 = fVar22 + fVar10;
        fVar11 = fVar23 + fVar11;
        fVar12 = fVar24 + fVar12;
        lVar31 = lVar31 + -1;
        uVar33 = uVar33 + 0x18;
      } while (lVar31 != 0);
    }
  }
  fn_82F6A55C();
  return;
}

