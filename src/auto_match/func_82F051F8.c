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
extern unsigned int iStack_104;
extern unsigned int iStack_108;
extern unsigned int iStack_124;
extern unsigned int iStack_138;
extern unsigned int iStack_170;
extern unsigned int iStack_180;
extern unsigned int iStack_194;
extern unsigned int iStack_19c;
extern unsigned int iStack_1a0;
extern unsigned int iStack_1a8;
extern unsigned int iStack_e8;
extern unsigned int iStack_f8;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C28;
extern unsigned int lbl_82002D08;
extern unsigned int lbl_8200BF40;
extern unsigned int lbl_8200D8C4;
extern unsigned int uStack_110;
extern unsigned int uStack_160;


void fn_82F051F8(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  int iVar37;
  int iVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  int iVar46;
  ulonglong uVar45;
  uint uVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  uint uVar51;
  uint uVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  int iVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  int iVar63;
  uint uVar64;
  uint uVar65;
  int iVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  longlong lVar71;
  int iStack_1a8;
  int iStack_1a0;
  int iStack_19c;
  int iStack_194;
  int iStack_180;
  int iStack_170;
  uint uStack_160;
  int iStack_138;
  int iStack_124;
  uint uStack_110;
  int iStack_108;
  int iStack_104;
  int iStack_f8;
  int iStack_e8;
  
  uVar16 = *(uint *)(param_1 + 0x31c);
  iVar54 = *(int *)(param_1 + 0x1abc);
  iVar37 = uVar16 * 4;
  uStack_110 = (int)uVar16 >> 4;
  iVar53 = iVar37 + iVar54;
  if (uStack_110 != 0) {
    iVar38 = uStack_110 * 0x10;
    iVar66 = 0;
    iVar55 = 0;
    *(undefined4 *)(param_1 + 0x1c28) = 0;
    iVar63 = 0;
    iVar59 = 0;
    uVar47 = 0;
    iVar48 = 0;
    iVar49 = 0;
    iVar50 = 0;
    iVar46 = 2;
    if (2 < iVar38 + -2) {
      if (1 < iVar38 + -4) {
        iVar63 = 0;
        iVar59 = 0;
        iVar55 = 0;
        iVar46 = 2;
        iVar66 = 0;
        do {
          bVar1 = *(byte *)(iVar46 + iVar54);
          pbVar29 = (byte *)(iVar53 + -2 + iVar46);
          pbVar30 = (byte *)(iVar53 + 2 + iVar46);
          bVar2 = *(byte *)(iVar54 + 1 + iVar46);
          pbVar31 = (byte *)(iVar53 + -1 + iVar46);
          pbVar32 = (byte *)(iVar53 + 3 + iVar46);
          iVar46 = iVar46 + 2;
          iVar66 = iVar66 + (-(uint)(bVar1 < 0x40) & 1) + (-(uint)(0xc0 < bVar1) & 1);
          iVar63 = ((int)(((uint)bVar1 - (uint)*pbVar29) - 1 ^ (uint)bVar1 - (uint)*pbVar30) >> 0xf
                   & 1U) + iVar63;
          iVar59 = ((int)(((uint)bVar2 - (uint)*pbVar31) - 1 ^ (uint)bVar2 - (uint)*pbVar32) >> 0xf
                   & 1U) + iVar59;
          iVar55 = iVar55 + (-(uint)(bVar2 < 0x40) & 1) + (-(uint)(0xc0 < bVar2) & 1);
        } while (iVar46 < iVar38 + -3);
      }
      if (iVar46 < iVar38 + -2) {
        bVar1 = *(byte *)(iVar46 + iVar54);
        uVar47 = (int)(((uint)bVar1 - (uint)*(byte *)(iVar46 + iVar53 + -2)) - 1 ^
                      (uint)bVar1 - (uint)*(byte *)(iVar46 + iVar53 + 2)) >> 0xf & 1;
        iVar49 = (-(uint)(bVar1 < 0x40) & 1) + (-(uint)(0xc0 < bVar1) & 1);
      }
      iVar50 = iVar55 + iVar66 + iVar49;
      iVar48 = iVar59 + iVar63 + uVar47;
    }
    if (((int)(uStack_110 << 2) < iVar50) && (iVar48 < (int)(uStack_110 * 5))) {
      iStack_104 = uVar16 * 3 + iVar54;
      iStack_19c = 0;
      iStack_1a0 = 0;
      iStack_170 = 0;
      iStack_f8 = uVar16 + iVar54 + 8;
      iStack_180 = 0;
      iStack_108 = uVar16 * 7 + iVar54 + 8;
      iVar54 = 0;
      iVar53 = 0;
      iVar38 = iStack_104 + 8;
      iStack_194 = 0;
      if (*(int *)(param_1 + 0x1c24) == 3) {
        if (0 < (int)uStack_110) {
          iStack_194 = 0;
          iStack_e8 = iStack_104 + (uVar16 & 0x7fffffff) * -2 + 2;
          iStack_124 = iVar37 + iStack_104 + 2;
          iStack_138 = (3 - uVar16) * 3 + iStack_104;
          do {
            lVar71 = 2;
            iVar37 = 0;
            do {
              iVar63 = iVar37 + iVar38;
              bVar1 = *(byte *)(iVar37 + iVar38 + 1);
              bVar2 = *(byte *)(iVar63 + (iStack_138 - iVar38) + -1);
              bVar3 = *(byte *)(iVar63 + (iStack_104 - iVar38));
              bVar4 = *(byte *)(iStack_104 + 1 + iVar37);
              bVar5 = *(byte *)(iVar37 + iVar38);
              bVar6 = *(byte *)(iVar63 + (iStack_138 - iVar38) + -9);
              uVar60 = (uint)bVar5 - (uint)*(byte *)(iVar63 + (iStack_108 - iVar38));
              uVar56 = (uint)bVar3 - (uint)*(byte *)(iVar63 + (iStack_124 - iVar38) + -2);
              uVar16 = (int)uVar60 >> 0x1f;
              uVar47 = (int)uVar56 >> 0x1f;
              uVar17 = (int)((uint)bVar2 - (uint)bVar5) >> 0x1f;
              uVar18 = (int)((uint)bVar6 - (uint)bVar3) >> 0x1f;
              uVar39 = (uint)bVar4;
              uVar40 = (uint)bVar1;
              uVar51 = (uint)bVar1 - (uint)*(byte *)(iVar37 + iStack_108 + 1);
              uVar42 = (uint)bVar4 - (uint)*(byte *)(iStack_124 + -1 + iVar37);
              bVar7 = *(byte *)(iStack_138 + iVar37);
              uVar19 = (int)uVar42 >> 0x1f;
              uVar20 = (int)uVar51 >> 0x1f;
              uVar21 = (int)((uint)bVar7 - (uint)bVar1) >> 0x1f;
              bVar8 = *(byte *)(iStack_138 + -8 + iVar37);
              uVar44 = (uint)bVar8 - (uint)bVar4;
              bVar4 = *(byte *)(iStack_104 + 2 + iVar37);
              uVar22 = (int)uVar44 >> 0x1f;
              bVar9 = *(byte *)(iVar38 + 2 + iVar37);
              uVar64 = (uint)bVar4 - (uint)*(byte *)(iStack_124 + iVar37);
              uVar23 = (int)uVar64 >> 0x1f;
              uVar67 = (uint)bVar9 - (uint)*(byte *)(iStack_108 + 2 + iVar37);
              bVar10 = *(byte *)(iStack_138 + 1 + iVar37);
              uVar24 = (int)uVar67 >> 0x1f;
              bVar11 = *(byte *)(iStack_138 + -7 + iVar37);
              uVar52 = (uint)bVar11 - (uint)bVar4;
              uVar25 = (int)((uint)bVar10 - (uint)bVar9) >> 0x1f;
              uStack_160 = (uint)*(byte *)(iStack_124 + 1 + iVar37);
              uVar26 = (int)uVar52 >> 0x1f;
              bVar12 = *(byte *)(iStack_104 + 3 + iVar37);
              uVar43 = (uint)bVar12;
              bVar13 = *(byte *)(iVar38 + 3 + iVar37);
              uVar41 = (uint)bVar13;
              uVar61 = uVar41 - *(byte *)(iStack_108 + 3 + iVar37);
              uVar27 = (int)(uVar43 - uStack_160) >> 0x1f;
              uVar28 = (int)uVar61 >> 0x1f;
              uVar70 = (uint)bVar11;
              iVar53 = ((uVar43 - uStack_160 ^ uVar27) - uVar27) + ((uVar61 ^ uVar28) - uVar28) +
                       ((uVar64 ^ uVar23) - uVar23) + ((uVar67 ^ uVar24) - uVar24) +
                       ((uVar42 ^ uVar19) - uVar19) + ((uVar51 ^ uVar20) - uVar20) +
                       ((uVar60 ^ uVar16) - uVar16) + ((uVar56 ^ uVar47) - uVar47) + iVar53;
              iStack_194 = iStack_194 + (uint)bVar5 + (uint)bVar3 + uVar40 + uVar39 + (uint)bVar9 +
                           (uint)bVar4 + uVar41 + uVar43;
              bVar11 = *(byte *)(iStack_138 + 2 + iVar37);
              bVar14 = *(byte *)(iStack_138 + -6 + iVar37);
              iVar54 = (uint)bVar13 * (uint)bVar13 + (uint)bVar12 * (uint)bVar12 +
                       (uint)bVar9 * (uint)bVar9 + (uint)bVar4 * (uint)bVar4 +
                       uVar40 * uVar40 + uVar39 * uVar39 +
                       (uint)bVar5 * (uint)bVar5 + (uint)bVar3 * (uint)bVar3 + iVar54;
              uVar16 = (int)(bVar11 - uVar41) >> 0x1f;
              uVar47 = (int)(bVar14 - uVar43) >> 0x1f;
              iStack_19c = iStack_19c + (uint)*(byte *)(iVar63 + (iStack_f8 - iVar38)) +
                           (uint)*(byte *)(iVar63 + (iStack_e8 - iVar38) + -2) +
                           (uint)*(byte *)(iStack_f8 + 1 + iVar37) +
                           (uint)*(byte *)(iStack_e8 + -1 + iVar37) +
                           (uint)*(byte *)(iStack_f8 + 2 + iVar37) +
                           (uint)*(byte *)(iStack_e8 + iVar37) +
                           (uint)*(byte *)(iStack_f8 + 3 + iVar37) +
                           (uint)*(byte *)(iStack_e8 + 1 + iVar37);
              iStack_180 = ((bVar11 - uVar41 ^ uVar16) - uVar16) +
                           ((bVar14 - uVar43 ^ uVar47) - uVar47) +
                           (((uint)bVar10 - (uint)bVar9 ^ uVar25) - uVar25) +
                           ((uVar52 ^ uVar26) - uVar26) +
                           (((uint)bVar7 - (uint)bVar1 ^ uVar21) - uVar21) +
                           ((uVar44 ^ uVar22) - uVar22) +
                           (((uint)bVar2 - (uint)bVar5 ^ uVar17) - uVar17) +
                           (((uint)bVar6 - (uint)bVar3 ^ uVar18) - uVar18) + iStack_180;
              iStack_1a0 = iStack_1a0 + (uint)bVar2 + (uint)bVar6 + (uint)bVar7 + (uint)bVar8 +
                           (uint)bVar10 + uVar70 + (uint)bVar11 + (uint)bVar14;
              iStack_170 = (uint)bVar11 * (uint)bVar11 + (uint)bVar14 * (uint)bVar14 +
                           (uint)bVar10 * (uint)bVar10 + uVar70 * uVar70 +
                           (uint)bVar7 * (uint)bVar7 + (uint)bVar8 * (uint)bVar8 +
                           (uint)bVar2 * (uint)bVar2 + (uint)bVar6 * (uint)bVar6 + iStack_170;
              iVar37 = iVar37 + 4;
              lVar71 = lVar71 + -1;
            } while (lVar71 != 0);
            iStack_138 = iStack_138 + 0x10;
            iStack_f8 = iStack_f8 + 0x10;
            iStack_104 = iStack_104 + 0x10;
            uVar45 = (ulonglong)uStack_110;
            iStack_124 = iStack_124 + 0x10;
            iStack_e8 = iStack_e8 + 0x10;
            uStack_110 = (uint)(uVar45 - 1);
            iStack_108 = iStack_108 + 0x10;
            iVar38 = iVar38 + 0x10;
          } while (uVar45 - 1 != 0);
        }
      }
      else if (*(int *)(param_1 + 0x1c24) == 2) {
        if (0 < (int)uStack_110) {
          iStack_124 = iStack_104 + (uVar16 & 0x7fffffff) * -2 + 2;
          iStack_138 = iVar37 + iStack_104 + 2;
          iStack_1a8 = (3 - uVar16) * 3 + iStack_104;
          do {
            lVar71 = 2;
            iVar37 = 0;
            do {
              iVar63 = iVar37 + iVar38;
              bVar1 = *(byte *)(iVar37 + iVar38);
              bVar2 = *(byte *)(iStack_1a8 + iVar37);
              bVar3 = *(byte *)(iVar63 + (iStack_1a8 - iVar38) + -1);
              bVar4 = *(byte *)(iStack_104 + 1 + iVar37);
              bVar5 = *(byte *)(iVar63 + (iStack_1a8 - iVar38) + -9);
              uVar51 = (uint)bVar4 - (uint)*(byte *)(iStack_138 + -1 + iVar37);
              bVar6 = *(byte *)(iVar37 + iVar38 + 1);
              uVar67 = (uint)bVar6 - (uint)*(byte *)(iVar37 + iStack_108 + 1);
              uVar43 = (uint)bVar1 - (uint)*(byte *)(iVar63 + (iStack_108 - iVar38));
              uVar16 = (int)uVar43 >> 0x1f;
              bVar7 = *(byte *)(iVar63 + (iStack_104 - iVar38));
              uVar60 = (uint)bVar7 - (uint)*(byte *)(iVar63 + (iStack_138 - iVar38) + -2);
              bVar8 = *(byte *)(iStack_1a8 + -8 + iVar37);
              uVar47 = (int)uVar60 >> 0x1f;
              uVar17 = (int)((uint)bVar3 - (uint)bVar1) >> 0x1f;
              uVar18 = (int)((uint)bVar5 - (uint)bVar7) >> 0x1f;
              uVar19 = (int)uVar51 >> 0x1f;
              uVar20 = (int)uVar67 >> 0x1f;
              uVar41 = (uint)bVar4;
              uVar21 = (int)((uint)bVar2 - (uint)bVar6) >> 0x1f;
              bVar4 = *(byte *)(iStack_1a8 + 1 + iVar37);
              uVar22 = (int)(bVar8 - uVar41) >> 0x1f;
              bVar9 = *(byte *)(iStack_1a8 + -7 + iVar37);
              bVar10 = *(byte *)(iStack_104 + 2 + iVar37);
              uVar64 = (uint)bVar10 - (uint)*(byte *)(iStack_138 + iVar37);
              uStack_160 = (uint)*(byte *)(iStack_108 + 2 + iVar37);
              bVar11 = *(byte *)(iVar38 + 2 + iVar37);
              uVar52 = (uint)bVar4 - (uint)bVar11;
              uStack_160 = bVar11 - uStack_160;
              uVar23 = (int)uVar64 >> 0x1f;
              uVar24 = (int)uStack_160 >> 0x1f;
              uVar25 = (int)uVar52 >> 0x1f;
              uVar70 = (uint)bVar9 - (uint)bVar10;
              uVar26 = (int)uVar70 >> 0x1f;
              bVar12 = *(byte *)(iVar38 + 3 + iVar37);
              uVar42 = (uint)bVar12;
              bVar13 = *(byte *)(iStack_1a8 + 2 + iVar37);
              uVar57 = uVar42 - *(byte *)(iStack_108 + 3 + iVar37);
              bVar14 = *(byte *)(iStack_1a8 + -6 + iVar37);
              bVar15 = *(byte *)(iStack_104 + 3 + iVar37);
              uVar44 = (uint)bVar15;
              uVar65 = uVar44 - *(byte *)(iStack_138 + 1 + iVar37);
              uVar61 = bVar13 - uVar42;
              uVar27 = (int)uVar65 >> 0x1f;
              uVar56 = bVar14 - uVar44;
              uVar28 = (int)uVar57 >> 0x1f;
              uVar39 = (int)uVar61 >> 0x1f;
              uVar40 = (int)uVar56 >> 0x1f;
              iVar53 = ((uVar65 ^ uVar27) - uVar27) + ((uVar57 ^ uVar28) - uVar28) +
                       ((uVar64 ^ uVar23) - uVar23) + ((uStack_160 ^ uVar24) - uVar24) +
                       ((uVar51 ^ uVar19) - uVar19) + ((uVar67 ^ uVar20) - uVar20) +
                       ((uVar43 ^ uVar16) - uVar16) + ((uVar60 ^ uVar47) - uVar47) + iVar53;
              iStack_170 = (uint)bVar13 * (uint)bVar13 + (uint)bVar14 * (uint)bVar14 +
                           (uint)bVar4 * (uint)bVar4 + (uint)bVar9 * (uint)bVar9 +
                           (uint)bVar2 * (uint)bVar2 + (uint)bVar8 * (uint)bVar8 +
                           (uint)bVar3 * (uint)bVar3 + (uint)bVar5 * (uint)bVar5 + iStack_170;
              iStack_1a0 = iStack_1a0 + (uint)bVar3 + (uint)bVar5 + (uint)bVar2 + (uint)bVar8 +
                           (uint)bVar4 + (uint)bVar9 + (uint)bVar13 + (uint)bVar14;
              iStack_194 = iStack_194 + (uint)bVar1 + (uint)bVar7 + (uint)bVar6 + uVar41 +
                           (uint)bVar11 + (uint)bVar10 + uVar42 + uVar44;
              iVar54 = (uint)bVar12 * (uint)bVar12 + (uint)bVar15 * (uint)bVar15 +
                       (uint)bVar11 * (uint)bVar11 + (uint)bVar10 * (uint)bVar10 +
                       (uint)bVar6 * (uint)bVar6 + uVar41 * uVar41 +
                       (uint)bVar1 * (uint)bVar1 + (uint)bVar7 * (uint)bVar7 + iVar54;
              iStack_180 = ((uVar61 ^ uVar39) - uVar39) + ((uVar56 ^ uVar40) - uVar40) +
                           ((uVar52 ^ uVar25) - uVar25) + ((uVar70 ^ uVar26) - uVar26) +
                           (((uint)bVar2 - (uint)bVar6 ^ uVar21) - uVar21) +
                           ((bVar8 - uVar41 ^ uVar22) - uVar22) +
                           (((uint)bVar3 - (uint)bVar1 ^ uVar17) - uVar17) +
                           (((uint)bVar5 - (uint)bVar7 ^ uVar18) - uVar18) + iStack_180;
              iStack_19c = iStack_19c + (uint)*(byte *)(iVar63 + (iStack_f8 - iVar38)) +
                           (uint)*(byte *)(iVar63 + (iStack_124 - iVar38) + -2) +
                           (uint)*(byte *)(iStack_f8 + 1 + iVar37) +
                           (uint)*(byte *)(iStack_124 + -1 + iVar37) +
                           (uint)*(byte *)(iStack_f8 + 2 + iVar37) +
                           (uint)*(byte *)(iStack_124 + iVar37) +
                           (uint)*(byte *)(iStack_f8 + 3 + iVar37) +
                           (uint)*(byte *)(iStack_124 + 1 + iVar37);
              iVar37 = iVar37 + 4;
              lVar71 = lVar71 + -1;
            } while (lVar71 != 0);
            uVar45 = (ulonglong)uStack_110;
            iStack_f8 = iStack_f8 + 0x10;
            iStack_138 = iStack_138 + 0x10;
            iStack_1a8 = iStack_1a8 + 0x10;
            iStack_124 = iStack_124 + 0x10;
            uStack_110 = (uint)(uVar45 - 1);
            iStack_104 = iStack_104 + 0x10;
            iVar38 = iVar38 + 0x10;
            iStack_108 = iStack_108 + 0x10;
          } while (uVar45 - 1 != 0);
        }
      }
      else if (0 < (int)uStack_110) {
        iVar63 = iVar37 + iStack_104 + 2;
        iVar37 = (3 - uVar16) * 3 + iStack_104;
        do {
          lVar71 = 2;
          iVar59 = 0;
          do {
            bVar1 = *(byte *)(iVar59 + iVar38);
            iVar55 = iVar59 + iVar38;
            bVar2 = *(byte *)(iVar37 + iVar59);
            bVar3 = *(byte *)(iVar55 + (iVar37 - iVar38) + -1);
            bVar4 = *(byte *)(iVar59 + iVar38 + 1);
            bVar5 = *(byte *)(iVar55 + (iVar37 - iVar38) + -9);
            uVar61 = (uint)bVar3 - (uint)bVar1;
            uVar60 = (uint)bVar2 - (uint)bVar4;
            uVar64 = (uint)bVar4 - (uint)*(byte *)(iVar59 + iStack_108 + 1);
            bVar6 = *(byte *)(iStack_104 + 1 + iVar59);
            bVar7 = *(byte *)(iVar55 + (iStack_104 - iVar38));
            uVar57 = (uint)bVar7 - (uint)*(byte *)(iVar55 + (iVar63 - iVar38) + -2);
            uVar56 = (uint)bVar6 - (uint)*(byte *)(iVar63 + -1 + iVar59);
            uVar68 = (uint)bVar1 - (uint)*(byte *)(iVar55 + (iStack_108 - iVar38));
            uVar16 = (int)uVar68 >> 0x1f;
            uVar47 = (int)uVar57 >> 0x1f;
            uVar17 = (int)uVar61 >> 0x1f;
            bVar8 = *(byte *)(iVar37 + -8 + iVar59);
            uVar18 = (int)((uint)bVar5 - (uint)bVar7) >> 0x1f;
            bVar9 = *(byte *)(iVar38 + 2 + iVar59);
            uVar51 = (uint)*(byte *)(iStack_104 + 2 + iVar59);
            uVar19 = (int)uVar56 >> 0x1f;
            uVar20 = (int)uVar64 >> 0x1f;
            uVar52 = (uint)bVar8 - (uint)bVar6;
            uVar21 = (int)uVar60 >> 0x1f;
            uVar22 = (int)uVar52 >> 0x1f;
            bVar10 = *(byte *)(iVar37 + 1 + iVar59);
            uVar41 = (uint)bVar9 - (uint)*(byte *)(iStack_108 + 2 + iVar59);
            uVar62 = uVar51 - *(byte *)(iVar63 + iVar59);
            uVar43 = (uint)bVar10 - (uint)bVar9;
            bVar11 = *(byte *)(iVar37 + -7 + iVar59);
            uVar23 = (int)uVar41 >> 0x1f;
            uVar24 = (int)uVar62 >> 0x1f;
            uVar25 = (int)uVar43 >> 0x1f;
            uVar67 = bVar11 - uVar51;
            bVar12 = *(byte *)(iVar38 + 3 + iVar59);
            uVar42 = (uint)bVar12;
            uVar26 = (int)uVar67 >> 0x1f;
            bVar13 = *(byte *)(iVar37 + 2 + iVar59);
            bVar14 = *(byte *)(iStack_104 + 3 + iVar59);
            uVar44 = (uint)bVar14;
            bVar15 = *(byte *)(iVar37 + -6 + iVar59);
            uVar65 = uVar42 - *(byte *)(iStack_108 + 3 + iVar59);
            uVar69 = uVar44 - *(byte *)(iVar63 + 1 + iVar59);
            uVar58 = bVar13 - uVar42;
            uVar27 = (int)uVar65 >> 0x1f;
            uVar70 = bVar15 - uVar44;
            uVar28 = (int)uVar69 >> 0x1f;
            uVar39 = (int)uVar58 >> 0x1f;
            uVar40 = (int)uVar70 >> 0x1f;
            iVar53 = ((uVar65 ^ uVar27) - uVar27) + ((uVar69 ^ uVar28) - uVar28) +
                     ((uVar41 ^ uVar23) - uVar23) + ((uVar62 ^ uVar24) - uVar24) +
                     ((uVar56 ^ uVar19) - uVar19) + ((uVar64 ^ uVar20) - uVar20) +
                     ((uVar68 ^ uVar16) - uVar16) + ((uVar57 ^ uVar47) - uVar47) + iVar53;
            iStack_194 = iStack_194 + (uint)bVar1 + (uint)bVar7 + (uint)bVar4 + (uint)bVar6 +
                         (uint)bVar9 + uVar51 + uVar42 + uVar44;
            iVar54 = (uint)bVar12 * (uint)bVar12 + (uint)bVar14 * (uint)bVar14 +
                     (uint)bVar9 * (uint)bVar9 + uVar51 * uVar51 +
                     (uint)bVar4 * (uint)bVar4 + (uint)bVar6 * (uint)bVar6 +
                     (uint)bVar1 * (uint)bVar1 + (uint)bVar7 * (uint)bVar7 + iVar54;
            iStack_1a0 = iStack_1a0 + (uint)bVar3 + (uint)bVar5 + (uint)bVar2 + (uint)bVar8 +
                         (uint)bVar10 + (uint)bVar11 + (uint)bVar13 + (uint)bVar15;
            iStack_170 = (uint)bVar13 * (uint)bVar13 + (uint)bVar15 * (uint)bVar15 +
                         (uint)bVar10 * (uint)bVar10 + (uint)bVar11 * (uint)bVar11 +
                         (uint)bVar2 * (uint)bVar2 + (uint)bVar8 * (uint)bVar8 +
                         (uint)bVar3 * (uint)bVar3 + (uint)bVar5 * (uint)bVar5 + iStack_170;
            iStack_180 = ((uVar58 ^ uVar39) - uVar39) + ((uVar70 ^ uVar40) - uVar40) +
                         ((uVar43 ^ uVar25) - uVar25) + ((uVar67 ^ uVar26) - uVar26) +
                         ((uVar60 ^ uVar21) - uVar21) + ((uVar52 ^ uVar22) - uVar22) +
                         ((uVar61 ^ uVar17) - uVar17) +
                         (((uint)bVar5 - (uint)bVar7 ^ uVar18) - uVar18) + iStack_180;
            iVar59 = iVar59 + 4;
            lVar71 = lVar71 + -1;
          } while (lVar71 != 0);
          uVar45 = (ulonglong)uStack_110;
          iStack_104 = iStack_104 + 0x10;
          iVar63 = iVar63 + 0x10;
          iVar37 = iVar37 + 0x10;
          iStack_108 = iStack_108 + 0x10;
          uStack_110 = (uint)(uVar45 - 1);
          iVar38 = iVar38 + 0x10;
        } while (uVar45 - 1 != 0);
      }
      fVar33 = lbl_82002AE0 /
               ((float)(((ulonglong)*(uint *)(param_1 + 0x2d0) & 0xfffffff) << 4) + lbl_82002D08);
      fVar35 = (float)(longlong)iVar54 * fVar33 -
               (float)(longlong)iStack_194 * fVar33 * (float)(longlong)iStack_194 * fVar33;
      fVar34 = (float)(longlong)iStack_170 * fVar33 -
               (float)(longlong)iStack_1a0 * fVar33 * (float)(longlong)iStack_1a0 * fVar33;
      fVar33 = fVar33 * 0.0 -
               (float)(longlong)iStack_19c * fVar33 * (float)(longlong)iStack_19c * fVar33;
      fVar36 = fVar35 * lbl_8200D8C4 * lbl_82002C28;
      fVar35 = fVar35 * lbl_8200BF40 * lbl_82002C28;
      if ((((iVar53 < iStack_180) || (fVar34 < fVar35)) || (fVar36 < fVar34)) &&
         ((*(undefined4 *)(param_1 + 0x1c28) = 1, 1 < *(int *)(param_1 + 0x1c24) &&
          (((iVar53 < 0 || (fVar33 < fVar35)) || (fVar36 < fVar33)))))) {
        *(undefined4 *)(param_1 + 0x1c28) = 2;
      }
    }
  }
  return;
}

