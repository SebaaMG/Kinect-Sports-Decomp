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


void fn_82A60170(void)

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
  float *pfVar51;
  uint uVar52;
  uint uVar53;
  float fVar54;
  uint *puVar55;
  longlong lVar56;
  ulonglong uVar57;
  float *pfVar59;
  ulonglong uVar58;
  float fStack_a8;
  float fStack_a4;
  
  puVar55 = (uint *)fn_82F6A510();
  pfVar59 = (float *)puVar55[2];
  pfVar51 = (float *)puVar55[3];
  uVar57 = (ulonglong)puVar55[1];
  uVar52 = puVar55[5];
  fVar1 = pfVar59[0x15];
  uVar53 = puVar55[8];
  fStack_a8 = pfVar59[0x16];
  fStack_a4 = pfVar59[0x17];
  fVar2 = *pfVar59;
  fVar3 = pfVar59[1];
  fVar4 = pfVar59[2];
  fVar5 = pfVar59[3];
  fVar6 = pfVar59[4];
  fVar7 = pfVar59[5];
  fVar8 = pfVar59[6];
  fVar9 = pfVar59[7];
  fVar10 = pfVar59[8];
  fVar11 = pfVar59[9];
  fVar12 = pfVar59[10];
  fVar13 = pfVar59[0xb];
  fVar14 = pfVar59[0xc];
  fVar15 = pfVar59[0xd];
  fVar16 = pfVar59[0xe];
  fVar17 = pfVar59[0xf];
  fVar18 = pfVar59[0x10];
  fVar19 = pfVar59[0x11];
  fVar20 = pfVar59[0x12];
  fVar21 = pfVar59[0x13];
  fVar22 = pfVar59[0x14];
  if (pfVar51 == (float *)0x0) {
    if (uVar52 != 0) {
      lVar56 = (ulonglong)(uVar52 - 1 >> 2) + 1;
      uVar58 = (ulonglong)*puVar55;
      do {
        pfVar59 = (float *)uVar58;
        fVar23 = *pfVar59;
        fVar45 = pfVar59[1];
        fVar46 = pfVar59[2];
        fVar47 = pfVar59[3];
        dataCacheBlockTouch(uVar58 + 0x40);
        dataCacheBlockTouch(uVar57 + 0xd8);
        fVar26 = fVar47 * fVar5 + fVar46 * fVar4;
        fVar25 = fVar47 * fVar9 + fVar46 * fVar8;
        fVar24 = fVar47 * fVar13 + fVar46 * fVar12;
        pfVar59 = (float *)uVar57;
        if (uVar53 == 0) {
          *pfVar59 = fVar23 * fVar2 + fVar45 * fVar3 + fVar26;
          pfVar59[1] = fVar23 * fVar6 + fVar45 * fVar7 + fVar25;
          pfVar59[2] = fVar23 * fVar10 + fVar45 * fVar11 + fVar24;
          pfVar59[3] = fVar23 * fVar14 + fVar45 * fVar15 + fVar47 * fVar17 + fVar46 * fVar16;
          pfVar59[4] = fVar23 * fVar18 + fVar45 * fVar19 + fVar47 * fVar21 + fVar46 * fVar20;
          pfVar59[5] = fVar23 * fVar22 + fVar45 * fVar1 + fVar47 * fStack_a4 + fVar46 * fStack_a8;
        }
        else {
          *pfVar59 = fVar23 * fVar2 + fVar45 * fVar3 + fVar26 + *pfVar59;
          pfVar59[1] = fVar23 * fVar6 + fVar45 * fVar7 + fVar25 + pfVar59[1];
          pfVar59[2] = fVar23 * fVar10 + fVar45 * fVar11 + fVar24 + pfVar59[2];
          pfVar59[3] = fVar23 * fVar14 + fVar45 * fVar15 + fVar47 * fVar17 + fVar46 * fVar16 +
                       pfVar59[3];
          pfVar59[4] = fVar23 * fVar18 + fVar45 * fVar19 + fVar47 * fVar21 + fVar46 * fVar20 +
                       pfVar59[4];
          pfVar59[5] = fVar23 * fVar22 + fVar45 * fVar1 + fVar47 * fStack_a4 + fVar46 * fStack_a8 +
                       pfVar59[5];
        }
        uVar57 = uVar57 + 0x18;
        lVar56 = lVar56 + -1;
        uVar58 = uVar58 + 0x10;
      } while (lVar56 != 0);
      fn_82F6A55C();
      return;
    }
  }
  else {
    fVar23 = pfVar51[9];
    fVar45 = pfVar51[10];
    fVar46 = pfVar51[0xb];
    fVar47 = pfVar51[0xc];
    fVar24 = pfVar51[0xd];
    fVar25 = pfVar51[0xe];
    fVar26 = pfVar51[0xf];
    fVar27 = pfVar51[0x10];
    fVar28 = pfVar51[0x11];
    fVar29 = pfVar51[0x12];
    fVar30 = pfVar51[0x13];
    fVar31 = pfVar51[0x14];
    fVar32 = pfVar51[0x15];
    fVar33 = pfVar51[0x16];
    fVar34 = pfVar51[0x17];
    fVar35 = *pfVar51;
    fVar36 = pfVar51[1];
    fVar37 = pfVar51[2];
    fVar38 = pfVar51[3];
    fVar39 = pfVar51[4];
    fVar40 = pfVar51[5];
    fVar41 = pfVar51[6];
    fVar42 = pfVar51[7];
    fVar43 = pfVar51[8];
    if (uVar52 != 0) {
      lVar56 = (ulonglong)(uVar52 - 1 >> 2) + 1;
      uVar58 = (ulonglong)*puVar55;
      do {
        pfVar59 = (float *)uVar58;
        fVar44 = *pfVar59;
        fVar48 = pfVar59[1];
        fVar49 = pfVar59[2];
        fVar50 = pfVar59[3];
        dataCacheBlockTouch(uVar58 + 0x40);
        dataCacheBlockTouch(uVar57 + 0xd8);
        fVar54 = fVar50 * fVar5 + fVar49 * fVar4;
        pfVar59 = (float *)uVar57;
        if (uVar53 == 0) {
          *pfVar59 = fVar44 * fVar2 + fVar48 * fVar3 + fVar54;
          pfVar59[1] = fVar44 * fVar6 + fVar48 * fVar7 + fVar50 * fVar9 + fVar49 * fVar8;
          pfVar59[2] = fVar44 * fVar10 + fVar48 * fVar11 + fVar50 * fVar13 + fVar49 * fVar12;
          pfVar59[3] = fVar44 * fVar14 + fVar48 * fVar15 + fVar50 * fVar17 + fVar49 * fVar16;
          pfVar59[4] = fVar44 * fVar18 + fVar48 * fVar19 + fVar50 * fVar21 + fVar49 * fVar20;
          pfVar59[5] = fVar44 * fVar22 + fVar48 * fVar1 + fVar50 * fStack_a4 + fVar49 * fStack_a8;
        }
        else {
          *pfVar59 = fVar44 * fVar2 + fVar48 * fVar3 + fVar54 + *pfVar59;
          pfVar59[1] = fVar44 * fVar6 + fVar48 * fVar7 + fVar50 * fVar9 + fVar49 * fVar8 +
                       pfVar59[1];
          pfVar59[2] = fVar44 * fVar10 + fVar48 * fVar11 + fVar50 * fVar13 + fVar49 * fVar12 +
                       pfVar59[2];
          pfVar59[3] = fVar44 * fVar14 + fVar48 * fVar15 + fVar50 * fVar17 + fVar49 * fVar16 +
                       pfVar59[3];
          pfVar59[4] = fVar44 * fVar18 + fVar48 * fVar19 + fVar50 * fVar21 + fVar49 * fVar20 +
                       pfVar59[4];
          pfVar59[5] = fVar44 * fVar22 + fVar48 * fVar1 + fVar50 * fStack_a4 + fVar49 * fStack_a8 +
                       pfVar59[5];
        }
        uVar57 = uVar57 + 0x18;
        fVar1 = fVar32 + fVar1;
        fStack_a8 = fVar33 + fStack_a8;
        fStack_a4 = fVar34 + fStack_a4;
        fVar2 = fVar35 + fVar2;
        fVar3 = fVar36 + fVar3;
        fVar4 = fVar37 + fVar4;
        fVar5 = fVar38 + fVar5;
        fVar6 = fVar39 + fVar6;
        fVar7 = fVar40 + fVar7;
        fVar8 = fVar41 + fVar8;
        fVar9 = fVar42 + fVar9;
        fVar10 = fVar43 + fVar10;
        fVar11 = fVar23 + fVar11;
        fVar12 = fVar45 + fVar12;
        fVar13 = fVar46 + fVar13;
        fVar14 = fVar47 + fVar14;
        fVar15 = fVar24 + fVar15;
        fVar16 = fVar25 + fVar16;
        fVar17 = fVar26 + fVar17;
        fVar18 = fVar27 + fVar18;
        fVar19 = fVar28 + fVar19;
        fVar20 = fVar29 + fVar20;
        fVar21 = fVar30 + fVar21;
        fVar22 = fVar31 + fVar22;
        lVar56 = lVar56 + -1;
        uVar58 = uVar58 + 0x10;
      } while (lVar56 != 0);
    }
  }
  fn_82F6A55C();
  return;
}

