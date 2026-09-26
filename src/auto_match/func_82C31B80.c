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
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int lbl_8208EE34;
extern unsigned int lbl_821AAD20;


void fn_82C31B80(undefined8 param_1,int param_2)

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
  undefined4 uVar31;
  ushort uVar32;
  int iVar33;
  int *piVar34;
  float *pfVar35;
  float *pfVar36;
  float *pfVar37;
  float *pfVar38;
  int iVar39;
  undefined4 *puVar40;
  int iVar41;
  short *psVar42;
  bool bVar43;
  undefined4 uVar44;
  int iVar45;
  int iVar46;
  longlong lVar47;
  float *pfVar48;
  int iVar49;
  uint uVar50;
  int *piVar51;
  int iVar53;
  longlong lVar52;
  int iVar54;
  int iVar55;
  float *pfVar56;
  uint uVar57;
  int *piVar58;
  short sVar59;
  int iVar60;
  int iVar61;
  
  iVar45 = fn_82F6A538();
  uVar44 = lbl_821AAD20;
  fVar1 = lbl_8208EE34;
  iVar53 = *(int *)(iVar45 + 0x3c);
  iVar33 = *(int *)(iVar45 + 0x228);
  bVar43 = true;
  iVar60 = *(int *)(iVar45 + 0x140);
  if ((iVar53 < 3) || ((*(int *)(iVar45 + 0x240) != 0 && (*(int *)(iVar45 + 0x23c) != 0)))) {
    if (0 < *(short *)(iVar45 + 0x244)) {
      iVar55 = 0;
      iVar49 = 0;
      bVar43 = true;
      do {
        psVar42 = (short *)(iVar49 + *(int *)(iVar45 + 0x248));
        sVar59 = (short)iVar55 + 1;
        iVar55 = (int)sVar59;
        iVar49 = iVar55 << 1;
        bVar43 = (bool)(*(int *)(*psVar42 * 0x6f0 + iVar60 + 0x28) == 0 & bVar43);
      } while (sVar59 < *(short *)(iVar45 + 0x244));
    }
    if ((iVar53 < 3) && (param_2 == 0)) {
      if ((*(int *)(iVar60 + 0x44) != 0) && (!bVar43)) {
        pfVar56 = *(float **)(*(int *)(iVar45 + 0x140) + 0x38);
        pfVar48 = *(float **)(*(int *)(iVar45 + 0x140) + 0x728);
        if (*(short *)(iVar45 + 0x22) != 0) {
          iVar53 = 0;
          do {
            iVar33 = iVar53 * 0x6f0;
            sVar59 = (short)iVar53 + 1;
            iVar53 = (int)sVar59;
            *(undefined4 *)(iVar33 + *(int *)(iVar45 + 0x140) + 0x28) = 1;
          } while ((int)sVar59 < (int)(uint)*(ushort *)(iVar45 + 0x22));
        }
        lVar52 = (longlong)*(short *)(iVar60 + 0x78);
        if (3 < *(short *)(iVar60 + 0x78)) {
          lVar47 = ((lVar52 - 4U & 0xffffffff) >> 2) + 1;
          lVar52 = lVar52 - (lVar47 * 4 & 0xfffffffcU);
          do {
            fVar1 = *pfVar56;
            fVar2 = *pfVar48;
            *pfVar56 = fVar2 + fVar1;
            *pfVar48 = fVar1 - fVar2;
            fVar1 = pfVar56[1];
            fVar2 = pfVar48[1];
            pfVar56[1] = fVar2 + fVar1;
            pfVar48[1] = fVar1 - fVar2;
            fVar1 = pfVar56[2];
            fVar2 = pfVar48[2];
            pfVar56[2] = fVar2 + fVar1;
            pfVar48[2] = fVar1 - fVar2;
            fVar1 = pfVar56[3];
            fVar2 = pfVar48[3];
            pfVar56[3] = fVar2 + fVar1;
            pfVar48[3] = fVar1 - fVar2;
            pfVar56 = pfVar56 + 4;
            pfVar48 = pfVar48 + 4;
            lVar47 = lVar47 + -1;
          } while (lVar47 != 0);
        }
        if (0 < (int)lVar52) {
          iVar53 = (int)pfVar48 - (int)pfVar56;
          do {
            fVar1 = *pfVar56;
            fVar2 = *(float *)(iVar53 + (int)pfVar56);
            *pfVar56 = fVar2 + fVar1;
            *(float *)(iVar53 + (int)pfVar56) = fVar1 - fVar2;
            pfVar56 = pfVar56 + 1;
            lVar52 = lVar52 + -1;
          } while (lVar52 != 0);
          fn_82F6A584(0);
          return;
        }
      }
    }
    else if ((2 < iVar53) &&
            ((uVar32 = *(ushort *)(iVar45 + 0x2da), !bVar43 &&
             (iVar53 = 0, 0 < *(int *)(iVar45 + 0x23c))))) {
      do {
        piVar58 = (int *)(iVar53 * 0x98 + *(int *)(iVar45 + 0x240));
        iVar60 = piVar58[1];
        if ((piVar58[2] == param_2) &&
           ((iVar49 = *piVar58, iVar49 != 1 && ((piVar58[3] != 1 || (piVar58[4] != 2)))))) {
          if ((*(short *)(iVar45 + 0x22) == 2) && ((piVar58[3] == 1 && (piVar58[4] == 1)))) {
            iVar60 = 0;
            if (0 < *(int *)(iVar45 + 0x130)) {
              uVar50 = (uint)uVar32;
              iVar49 = 0;
              pfVar48 = (float *)(*(int *)(*(int *)(iVar45 + 0x140) + 0x728) + -4);
              pfVar56 = (float *)(*(int *)(*(int *)(iVar45 + 0x140) + 0x38) + -4);
              do {
                iVar55 = *(int *)(*(int *)(iVar45 + 0x134) + iVar49);
                if (*(int *)((int)piVar58 + iVar49 + 0x18) == 1) {
                  while( true ) {
                    uVar57 = *(uint *)(*(int *)(iVar45 + 0x134) + iVar49 + 4);
                    if ((int)uVar50 < (int)uVar57) {
                      uVar57 = uVar50;
                    }
                    if ((int)uVar57 <= iVar55) break;
                    fVar2 = pfVar48[1];
                    iVar55 = iVar55 + 1;
                    fVar3 = pfVar56[1];
                    pfVar56[1] = fVar3 - fVar2;
                    pfVar48[1] = fVar3 + fVar2;
                    pfVar56 = pfVar56 + 1;
                    pfVar48 = pfVar48 + 1;
                  }
                }
                else {
                  while( true ) {
                    uVar57 = *(uint *)(*(int *)(iVar45 + 0x134) + iVar49 + 4);
                    if ((int)uVar50 < (int)uVar57) {
                      uVar57 = uVar50;
                    }
                    if ((int)uVar57 <= iVar55) break;
                    pfVar35 = pfVar56 + 1;
                    iVar55 = iVar55 + 1;
                    pfVar56 = pfVar56 + 1;
                    *pfVar56 = *pfVar35 * fVar1;
                    pfVar35 = pfVar48 + 1;
                    pfVar48 = pfVar48 + 1;
                    *pfVar48 = *pfVar35 * fVar1;
                  }
                }
                iVar60 = iVar60 + 1;
                iVar49 = iVar49 + 4;
              } while (iVar60 < *(int *)(iVar45 + 0x130));
            }
          }
          else {
            piVar34 = *(int **)(iVar45 + 0x22c);
            pfVar56 = (float *)piVar58[0x25];
            if (0 < *(short *)(iVar45 + 0x244)) {
              iVar46 = 0;
              piVar51 = piVar34 + -1;
              iVar55 = 0;
              do {
                sVar59 = *(short *)(iVar55 + *(int *)(iVar45 + 0x248));
                if (*(int *)(sVar59 * 4 + iVar60) == 1) {
                  piVar51 = piVar51 + 1;
                  *piVar51 = *(int *)(sVar59 * 0x6f0 + *(int *)(iVar45 + 0x140) + 0x90);
                }
                sVar59 = (short)iVar46 + 1;
                iVar46 = (int)sVar59;
                iVar55 = iVar46 << 1;
              } while (sVar59 < *(short *)(iVar45 + 0x244));
            }
            if (iVar49 == 2) {
              iVar60 = 0;
              if (0 < *(int *)(iVar45 + 0x130)) {
                iVar49 = 0;
                do {
                  if (*(int *)((int)piVar58 + iVar49 + 0x18) == 1) {
                    iVar55 = *(int *)(*(int *)(iVar45 + 0x134) + iVar49);
                    while( true ) {
                      uVar50 = *(uint *)(*(int *)(iVar45 + 0x134) + iVar49 + 4);
                      if ((int)(uint)uVar32 < (int)uVar50) {
                        uVar50 = (uint)uVar32;
                      }
                      if ((int)uVar50 <= iVar55) break;
                      pfVar48 = (float *)*piVar34;
                      fVar2 = *pfVar56;
                      pfVar35 = (float *)piVar34[1];
                      fVar3 = pfVar56[3];
                      fVar4 = pfVar56[1];
                      fVar5 = pfVar56[2];
                      iVar55 = iVar55 + 1;
                      *piVar34 = (int)(pfVar48 + 1);
                      fVar6 = *pfVar48;
                      piVar34[1] = (int)(pfVar35 + 1);
                      fVar7 = *pfVar35;
                      *pfVar48 = fVar4 * fVar7 + fVar6 * fVar2;
                      *pfVar35 = fVar5 * fVar6 + fVar3 * fVar7;
                    }
                  }
                  else {
                    piVar51 = (int *)(*(int *)(iVar45 + 0x134) + iVar49);
                    *piVar34 = (piVar51[1] - *piVar51) * 4 + *piVar34;
                    piVar51 = (int *)(*(int *)(iVar45 + 0x134) + iVar49);
                    piVar34[1] = (piVar51[1] - *piVar51) * 4 + piVar34[1];
                  }
                  iVar60 = iVar60 + 1;
                  iVar49 = iVar49 + 4;
                } while (iVar60 < *(int *)(iVar45 + 0x130));
              }
            }
            else if (iVar49 == 3) {
              iVar60 = 0;
              if (0 < *(int *)(iVar45 + 0x130)) {
                iVar49 = 0;
                do {
                  if (*(int *)((int)piVar58 + iVar49 + 0x18) == 1) {
                    iVar55 = *(int *)(*(int *)(iVar45 + 0x134) + iVar49);
                    while( true ) {
                      uVar50 = *(uint *)(*(int *)(iVar45 + 0x134) + iVar49 + 4);
                      if ((int)(uint)uVar32 < (int)uVar50) {
                        uVar50 = (uint)uVar32;
                      }
                      if ((int)uVar50 <= iVar55) break;
                      pfVar48 = (float *)piVar34[2];
                      fVar2 = pfVar56[2];
                      pfVar35 = (float *)piVar34[1];
                      fVar3 = pfVar56[4];
                      fVar4 = pfVar56[7];
                      pfVar36 = (float *)*piVar34;
                      fVar5 = pfVar56[1];
                      fVar6 = pfVar56[3];
                      fVar7 = *pfVar48;
                      fVar8 = *pfVar35;
                      fVar9 = *pfVar36;
                      fVar10 = pfVar56[6];
                      fVar11 = *pfVar56;
                      iVar55 = iVar55 + 1;
                      fVar12 = pfVar56[5];
                      *piVar34 = (int)(pfVar36 + 1);
                      fVar13 = pfVar56[8];
                      piVar34[1] = (int)(pfVar35 + 1);
                      piVar34[2] = (int)(pfVar48 + 1);
                      *pfVar36 = fVar9 * fVar11 + fVar5 * fVar8 + fVar2 * fVar7;
                      *pfVar35 = fVar12 * fVar7 + fVar6 * fVar9 + fVar3 * fVar8;
                      *pfVar48 = fVar13 * fVar7 + fVar10 * fVar9 + fVar4 * fVar8;
                    }
                  }
                  else {
                    piVar51 = (int *)(*(int *)(iVar45 + 0x134) + iVar49);
                    *piVar34 = (piVar51[1] - *piVar51) * 4 + *piVar34;
                    piVar51 = (int *)(*(int *)(iVar45 + 0x134) + iVar49);
                    piVar34[1] = (piVar51[1] - *piVar51) * 4 + piVar34[1];
                    piVar51 = (int *)(*(int *)(iVar45 + 0x134) + iVar49);
                    piVar34[2] = (piVar51[1] - *piVar51) * 4 + piVar34[2];
                  }
                  iVar60 = iVar60 + 1;
                  iVar49 = iVar49 + 4;
                } while (iVar60 < *(int *)(iVar45 + 0x130));
              }
            }
            else if (iVar49 == 4) {
              iVar60 = 0;
              if (0 < *(int *)(iVar45 + 0x130)) {
                iVar49 = 0;
                do {
                  if (*(int *)((int)piVar58 + iVar49 + 0x18) == 1) {
                    iVar55 = *(int *)(iVar49 + *(int *)(iVar45 + 0x134));
                    while( true ) {
                      uVar50 = *(uint *)(iVar49 + *(int *)(iVar45 + 0x134) + 4);
                      if ((int)(uint)uVar32 < (int)uVar50) {
                        uVar50 = (uint)uVar32;
                      }
                      if ((int)uVar50 <= iVar55) break;
                      pfVar48 = (float *)piVar34[2];
                      fVar2 = pfVar56[2];
                      pfVar35 = (float *)piVar34[1];
                      fVar3 = pfVar56[5];
                      fVar4 = pfVar56[9];
                      pfVar36 = (float *)*piVar34;
                      fVar5 = pfVar56[0xd];
                      pfVar37 = (float *)piVar34[3];
                      fVar6 = pfVar56[1];
                      fVar7 = *pfVar48;
                      fVar8 = *pfVar35;
                      fVar9 = *pfVar36;
                      fVar10 = pfVar56[4];
                      fVar11 = pfVar56[8];
                      fVar12 = pfVar56[0xc];
                      fVar13 = *pfVar37;
                      fVar14 = pfVar56[3];
                      *piVar34 = (int)(pfVar36 + 1);
                      fVar15 = pfVar56[6];
                      piVar34[1] = (int)(pfVar35 + 1);
                      fVar16 = pfVar56[10];
                      piVar34[2] = (int)(pfVar48 + 1);
                      fVar17 = pfVar56[0xe];
                      piVar34[3] = (int)(pfVar37 + 1);
                      fVar18 = pfVar56[7];
                      fVar19 = pfVar56[0xb];
                      fVar20 = pfVar56[0xf];
                      iVar55 = iVar55 + 1;
                      *pfVar36 = *pfVar56 * fVar9 + fVar14 * fVar13 + fVar6 * fVar8 + fVar2 * fVar7;
                      *pfVar35 = fVar18 * fVar13 + fVar15 * fVar7 + fVar10 * fVar9 + fVar3 * fVar8;
                      *pfVar48 = fVar19 * fVar13 + fVar16 * fVar7 + fVar11 * fVar9 + fVar4 * fVar8;
                      *pfVar37 = fVar20 * fVar13 + fVar17 * fVar7 + fVar12 * fVar9 + fVar5 * fVar8;
                    }
                  }
                  else {
                    piVar51 = (int *)(iVar49 + *(int *)(iVar45 + 0x134));
                    *piVar34 = (piVar51[1] - *piVar51) * 4 + *piVar34;
                    piVar51 = (int *)(iVar49 + *(int *)(iVar45 + 0x134));
                    piVar34[1] = (piVar51[1] - *piVar51) * 4 + piVar34[1];
                    piVar51 = (int *)(iVar49 + *(int *)(iVar45 + 0x134));
                    piVar34[2] = (piVar51[1] - *piVar51) * 4 + piVar34[2];
                    piVar51 = (int *)(iVar49 + *(int *)(iVar45 + 0x134));
                    piVar34[3] = (piVar51[1] - *piVar51) * 4 + piVar34[3];
                  }
                  iVar60 = iVar60 + 1;
                  iVar49 = iVar49 + 4;
                } while (iVar60 < *(int *)(iVar45 + 0x130));
              }
            }
            else {
              iVar60 = 0;
              if (iVar49 == 5) {
                if (0 < *(int *)(iVar45 + 0x130)) {
                  iVar49 = 0;
                  do {
                    if (*(int *)((int)piVar58 + iVar49 + 0x18) == 1) {
                      iVar55 = *(int *)(iVar49 + *(int *)(iVar45 + 0x134));
                      while( true ) {
                        uVar50 = *(uint *)(iVar49 + *(int *)(iVar45 + 0x134) + 4);
                        if ((int)(uint)uVar32 < (int)uVar50) {
                          uVar50 = (uint)uVar32;
                        }
                        if ((int)uVar50 <= iVar55) break;
                        pfVar48 = (float *)piVar34[2];
                        fVar2 = pfVar56[2];
                        pfVar35 = (float *)piVar34[1];
                        fVar3 = pfVar56[6];
                        fVar4 = pfVar56[0xb];
                        pfVar36 = (float *)*piVar34;
                        fVar5 = pfVar56[0x10];
                        pfVar37 = (float *)piVar34[3];
                        fVar6 = pfVar56[0x15];
                        pfVar38 = (float *)piVar34[4];
                        fVar7 = *pfVar48;
                        fVar8 = *pfVar35;
                        fVar9 = pfVar56[1];
                        fVar10 = *pfVar36;
                        fVar11 = pfVar56[5];
                        fVar12 = pfVar56[10];
                        fVar13 = pfVar56[0xf];
                        fVar14 = pfVar56[0x14];
                        fVar15 = *pfVar37;
                        fVar16 = pfVar56[3];
                        fVar17 = pfVar56[7];
                        *piVar34 = (int)(pfVar36 + 1);
                        fVar18 = pfVar56[0xc];
                        fVar19 = pfVar56[0x11];
                        fVar20 = pfVar56[0x16];
                        fVar21 = *pfVar38;
                        fVar22 = pfVar56[4];
                        fVar23 = pfVar56[8];
                        piVar34[1] = (int)(pfVar35 + 1);
                        fVar24 = pfVar56[0xd];
                        piVar34[2] = (int)(pfVar48 + 1);
                        fVar25 = pfVar56[0x12];
                        piVar34[3] = (int)(pfVar37 + 1);
                        fVar26 = pfVar56[0x17];
                        piVar34[4] = (int)(pfVar38 + 1);
                        iVar55 = iVar55 + 1;
                        fVar27 = pfVar56[9];
                        fVar28 = pfVar56[0xe];
                        fVar29 = pfVar56[0x13];
                        fVar30 = pfVar56[0x18];
                        *pfVar36 = *pfVar56 * fVar10 +
                                   fVar22 * fVar21 + fVar16 * fVar15 + fVar9 * fVar8 + fVar2 * fVar7
                        ;
                        *pfVar35 = fVar27 * fVar21 +
                                   fVar23 * fVar15 +
                                   fVar17 * fVar7 + fVar11 * fVar10 + fVar3 * fVar8;
                        *pfVar48 = fVar28 * fVar21 +
                                   fVar24 * fVar15 +
                                   fVar18 * fVar7 + fVar12 * fVar10 + fVar4 * fVar8;
                        *pfVar37 = fVar29 * fVar21 +
                                   fVar25 * fVar15 +
                                   fVar19 * fVar7 + fVar13 * fVar10 + fVar5 * fVar8;
                        *pfVar38 = fVar30 * fVar21 +
                                   fVar26 * fVar15 +
                                   fVar20 * fVar7 + fVar14 * fVar10 + fVar6 * fVar8;
                      }
                    }
                    else {
                      piVar51 = (int *)(iVar49 + *(int *)(iVar45 + 0x134));
                      *piVar34 = (piVar51[1] - *piVar51) * 4 + *piVar34;
                      piVar51 = (int *)(iVar49 + *(int *)(iVar45 + 0x134));
                      piVar34[1] = (piVar51[1] - *piVar51) * 4 + piVar34[1];
                      piVar51 = (int *)(iVar49 + *(int *)(iVar45 + 0x134));
                      piVar34[2] = (piVar51[1] - *piVar51) * 4 + piVar34[2];
                      piVar51 = (int *)(iVar49 + *(int *)(iVar45 + 0x134));
                      piVar34[3] = (piVar51[1] - *piVar51) * 4 + piVar34[3];
                      piVar51 = (int *)(iVar49 + *(int *)(iVar45 + 0x134));
                      piVar34[4] = (piVar51[1] - *piVar51) * 4 + piVar34[4];
                    }
                    iVar60 = iVar60 + 1;
                    iVar49 = iVar49 + 4;
                  } while (iVar60 < *(int *)(iVar45 + 0x130));
                }
              }
              else if (0 < *(int *)(iVar45 + 0x130)) {
                iVar55 = 0;
                do {
                  if (*(int *)((int)piVar58 + iVar55 + 0x18) == 1) {
                    iVar46 = *(int *)(iVar55 + *(int *)(iVar45 + 0x134));
                    while( true ) {
                      uVar50 = *(uint *)(iVar55 + *(int *)(iVar45 + 0x134) + 4);
                      if ((int)(uint)uVar32 < (int)uVar50) {
                        uVar50 = (uint)uVar32;
                      }
                      if ((int)uVar50 <= iVar46) break;
                      if (0 < iVar49) {
                        iVar61 = 0;
                        do {
                          iVar39 = piVar58[0x25];
                          iVar41 = iVar61 * 4;
                          *(undefined4 *)(iVar41 + iVar33) = uVar44;
                          iVar54 = 0;
                          do {
                            sVar59 = (short)iVar54 + 1;
                            *(float *)(iVar41 + iVar33) =
                                 *(float *)piVar34[iVar54] *
                                 *(float *)(iVar54 * 4 + iVar61 * iVar49 * 4 + iVar39) +
                                 *(float *)(iVar41 + iVar33);
                            iVar54 = (int)sVar59;
                          } while (sVar59 < iVar49);
                          iVar61 = (int)(short)((short)iVar61 + 1);
                        } while (iVar61 < iVar49);
                        iVar61 = 0;
                        do {
                          sVar59 = (short)iVar61 + 1;
                          puVar40 = (undefined4 *)piVar34[iVar61];
                          uVar31 = *(undefined4 *)(iVar61 * 4 + iVar33);
                          piVar34[iVar61] = (int)(puVar40 + 1);
                          *puVar40 = uVar31;
                          iVar61 = (int)sVar59;
                        } while (sVar59 < iVar49);
                      }
                      iVar46 = iVar46 + 1;
                    }
                  }
                  else if (0 < iVar49) {
                    iVar46 = 0;
                    do {
                      sVar59 = (short)iVar46 + 1;
                      piVar51 = (int *)(iVar55 + *(int *)(iVar45 + 0x134));
                      piVar34[iVar46] = (piVar51[1] - *piVar51) * 4 + piVar34[iVar46];
                      iVar46 = (int)sVar59;
                    } while (sVar59 < iVar49);
                  }
                  iVar60 = iVar60 + 1;
                  iVar55 = iVar55 + 4;
                } while (iVar60 < *(int *)(iVar45 + 0x130));
              }
            }
          }
        }
        iVar53 = iVar53 + 1;
      } while (iVar53 < *(int *)(iVar45 + 0x23c));
    }
    fn_82F6A584(0);
  }
  else {
    fn_82F6A584(0xffffffff80070057);
  }
  return;
}

