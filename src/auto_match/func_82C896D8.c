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
extern int fn_82C89170();
extern unsigned int iStack0000003c;
extern unsigned int lbl_820FD928;
extern unsigned int lbl_820FD929;
extern unsigned int lbl_820FD92A;
extern unsigned int lbl_820FD92B;
extern unsigned int lbl_820FD92C;
extern unsigned int lbl_820FD92D;
extern unsigned int lbl_820FD92E;
extern unsigned int lbl_820FD92F;
extern unsigned int lbl_821063CC;


void fn_82C896D8(int *param_1,undefined4 param_2,undefined1 *param_3,int param_4,short *param_5,
                  int param_6)

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
  byte bVar16;
  short sVar17;
  ushort uVar18;
  ushort *puVar19;
  ushort *puVar20;
  short *psVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  ushort *puVar27;
  uint uVar28;
  byte *pbVar29;
  byte *pbVar31;
  int iVar32;
  longlong lVar30;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined1 *puVar36;
  short *psVar37;
  ushort *puVar38;
  char *pcVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  uint uVar46;
  int iVar47;
  longlong lVar48;
  int iStack0000003c;
  
  if (param_1[3] == 0) {
    switch(param_2) {
    case 0:
      iStack0000003c = param_6;
      fn_82C89170(param_1);
      psVar37 = param_5 + -1;
      lVar48 = 8;
      puVar38 = (ushort *)&lbl_821063CC;
      puVar27 = (ushort *)(param_1[10] + -2);
      do {
        puVar19 = (ushort *)param_1[0xb];
        puVar27 = puVar27 + 1;
        uVar18 = *puVar27;
        *param_3 = *(undefined1 *)
                    (((int)((uint)*puVar19 * (uint)puVar38[2] + (uint)puVar38[3] * (uint)uVar18 +
                           0x8000) >> 0x10) + (int)psVar37[1] + *param_1);
        param_3[1] = *(undefined1 *)
                      (((int)((uint)puVar19[1] * (uint)puVar38[4] + (uint)puVar38[5] * (uint)uVar18
                             + 0x8000) >> 0x10) + (int)psVar37[2] + *param_1);
        uVar46 = (uint)uVar18;
        param_3[2] = *(undefined1 *)
                      (((int)((uint)puVar19[2] * (uint)puVar38[6] + puVar38[7] * uVar46 + 0x8000) >>
                       0x10) + (int)psVar37[3] + *param_1);
        param_3[3] = *(undefined1 *)
                      (((int)((uint)puVar19[3] * (uint)puVar38[8] + puVar38[9] * uVar46 + 0x8000) >>
                       0x10) + (int)psVar37[4] + *param_1);
        param_3[4] = *(undefined1 *)
                      (((int)((uint)puVar19[4] * (uint)puVar38[10] + puVar38[0xb] * uVar46 + 0x8000)
                       >> 0x10) + (int)psVar37[5] + *param_1);
        param_3[5] = *(undefined1 *)
                      (((int)((uint)puVar19[5] * (uint)puVar38[0xc] + puVar38[0xd] * uVar46 + 0x8000
                             ) >> 0x10) + (int)psVar37[6] + *param_1);
        param_3[6] = *(undefined1 *)
                      (((int)((uint)puVar19[6] * (uint)puVar38[0xe] +
                              (uint)puVar38[0xf] * (uint)uVar18 + 0x8000) >> 0x10) + (int)psVar37[7]
                      + *param_1);
        puVar20 = puVar38 + 0x11;
        puVar38 = puVar38 + 0x10;
        psVar37 = psVar37 + 8;
        param_3[7] = *(undefined1 *)
                      (((int)((uint)puVar19[7] * (uint)*puVar38 + (uint)*puVar20 * (uint)uVar18 +
                             0x8000) >> 0x10) + (int)*psVar37 + *param_1);
        param_3 = param_3 + param_4;
        lVar48 = lVar48 + -1;
      } while (lVar48 != 0);
      break;
    case 1:
      psVar37 = param_5 + -1;
      pcVar39 = "\x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0e\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f";
      lVar48 = 8;
      do {
        *param_3 = *(undefined1 *)
                    ((uint)*(byte *)((int)*pcVar39 + param_1[6]) + (int)psVar37[1] + *param_1);
        param_3[1] = *(undefined1 *)
                      ((uint)*(byte *)((int)pcVar39[1] + param_1[6]) + (int)psVar37[2] + *param_1);
        param_3[2] = *(undefined1 *)
                      ((uint)*(byte *)((int)pcVar39[2] + param_1[6]) + (int)psVar37[3] + *param_1);
        param_3[3] = *(undefined1 *)
                      ((uint)*(byte *)((int)pcVar39[3] + param_1[6]) + (int)psVar37[4] + *param_1);
        param_3[4] = *(undefined1 *)
                      ((uint)*(byte *)((int)pcVar39[4] + param_1[6]) + (int)psVar37[5] + *param_1);
        param_3[5] = *(undefined1 *)
                      ((uint)*(byte *)((int)pcVar39[5] + param_1[6]) + (int)psVar37[6] + *param_1);
        param_3[6] = *(undefined1 *)
                      ((uint)*(byte *)((int)pcVar39[6] + param_1[6]) + (int)psVar37[7] + *param_1);
        psVar37 = psVar37 + 8;
        param_3[7] = *(undefined1 *)
                      ((uint)*(byte *)((int)pcVar39[7] + param_1[6]) + (int)*psVar37 + *param_1);
        pcVar39 = pcVar39 + 2;
        param_3 = param_3 + param_4;
        lVar48 = lVar48 + -1;
      } while (lVar48 != 0);
      break;
    case 2:
      iVar32 = 0;
      psVar37 = param_5 + -1;
      lVar48 = 8;
      do {
        iVar35 = param_1[6] + iVar32;
        iVar32 = iVar32 + 1;
        *param_3 = *(undefined1 *)((uint)*(byte *)(iVar35 + 1) + (int)psVar37[1] + *param_1);
        param_3[1] = *(undefined1 *)((uint)*(byte *)(iVar35 + 2) + (int)psVar37[2] + *param_1);
        param_3[2] = *(undefined1 *)((uint)*(byte *)(iVar35 + 3) + (int)psVar37[3] + *param_1);
        param_3[3] = *(undefined1 *)((uint)*(byte *)(iVar35 + 4) + (int)psVar37[4] + *param_1);
        param_3[4] = *(undefined1 *)((uint)*(byte *)(iVar35 + 5) + (int)psVar37[5] + *param_1);
        param_3[5] = *(undefined1 *)((uint)*(byte *)(iVar35 + 6) + (int)psVar37[6] + *param_1);
        param_3[6] = *(undefined1 *)((uint)*(byte *)(iVar35 + 7) + (int)psVar37[7] + *param_1);
        psVar37 = psVar37 + 8;
        param_3[7] = *(undefined1 *)((uint)*(byte *)(iVar35 + 8) + (int)*psVar37 + *param_1);
        param_3 = param_3 + param_4;
        lVar48 = lVar48 + -1;
      } while (lVar48 != 0);
      break;
    case 3:
      iVar32 = 0;
      psVar37 = param_5 + -1;
      lVar48 = 8;
      do {
        iVar32 = iVar32 + 1;
        pbVar29 = (byte *)((iVar32 >> 1) + param_1[6]);
        *param_3 = *(undefined1 *)((uint)*pbVar29 + (int)psVar37[1] + *param_1);
        param_3[1] = *(undefined1 *)((uint)pbVar29[1] + (int)psVar37[2] + *param_1);
        param_3[2] = *(undefined1 *)((uint)pbVar29[2] + (int)psVar37[3] + *param_1);
        param_3[3] = *(undefined1 *)((uint)pbVar29[3] + (int)psVar37[4] + *param_1);
        param_3[4] = *(undefined1 *)((uint)pbVar29[4] + (int)psVar37[5] + *param_1);
        param_3[5] = *(undefined1 *)((uint)pbVar29[5] + (int)psVar37[6] + *param_1);
        param_3[6] = *(undefined1 *)((uint)pbVar29[6] + (int)psVar37[7] + *param_1);
        psVar37 = psVar37 + 8;
        param_3[7] = *(undefined1 *)((uint)pbVar29[7] + (int)*psVar37 + *param_1);
        param_3 = param_3 + param_4;
        lVar48 = lVar48 + -1;
      } while (lVar48 != 0);
      break;
    case 4:
      pbVar29 = (byte *)param_1[6];
      psVar37 = param_5 + -1;
      lVar48 = 8;
      bVar15 = pbVar29[0x10];
      bVar9 = *pbVar29;
      bVar10 = pbVar29[0x11];
      bVar11 = pbVar29[1];
      bVar12 = pbVar29[0x12];
      bVar13 = pbVar29[2];
      bVar14 = pbVar29[0x13];
      bVar16 = pbVar29[3];
      bVar1 = pbVar29[4];
      bVar2 = pbVar29[0x14];
      bVar3 = pbVar29[0x15];
      bVar4 = pbVar29[5];
      bVar5 = pbVar29[0x16];
      bVar6 = pbVar29[6];
      bVar7 = pbVar29[0x17];
      bVar8 = pbVar29[7];
      do {
        *param_3 = *(undefined1 *)
                    ((int)psVar37[1] + ((int)((uint)bVar15 + (uint)bVar9 + 1) >> 1 & 0xffU) +
                    *param_1);
        param_3[1] = *(undefined1 *)
                      ((int)psVar37[2] + ((int)((uint)bVar10 + (uint)bVar11 + 1) >> 1 & 0xffU) +
                      *param_1);
        param_3[2] = *(undefined1 *)
                      ((int)psVar37[3] + ((int)((uint)bVar12 + (uint)bVar13 + 1) >> 1 & 0xffU) +
                      *param_1);
        param_3[3] = *(undefined1 *)
                      ((int)psVar37[4] + ((int)((uint)bVar14 + (uint)bVar16 + 1) >> 1 & 0xffU) +
                      *param_1);
        param_3[4] = *(undefined1 *)
                      ((int)psVar37[5] + ((int)((uint)bVar2 + (uint)bVar1 + 1) >> 1 & 0xffU) +
                      *param_1);
        param_3[5] = *(undefined1 *)
                      ((int)psVar37[6] + ((int)((uint)bVar3 + (uint)bVar4 + 1) >> 1 & 0xffU) +
                      *param_1);
        param_3[6] = *(undefined1 *)
                      ((int)psVar37[7] + ((int)((uint)bVar5 + (uint)bVar6 + 1) >> 1 & 0xffU) +
                      *param_1);
        psVar37 = psVar37 + 8;
        param_3[7] = *(undefined1 *)
                      ((int)*psVar37 + ((int)((uint)bVar7 + (uint)bVar8 + 1) >> 1 & 0xffU) +
                      *param_1);
        param_3 = param_3 + param_4;
        lVar48 = lVar48 + -1;
      } while (lVar48 != 0);
      break;
    case 5:
      iVar32 = 1;
      psVar37 = param_5 + -1;
      do {
        lVar48 = 8;
        if (iVar32 < 1) {
          lVar30 = (ulonglong)((uint)-iVar32 >> 1) + 1;
          lVar48 = 8 - lVar30;
          iVar35 = iVar32;
          do {
            psVar21 = psVar37 + 1;
            psVar37 = psVar37 + 1;
            pbVar29 = (byte *)(param_1[5] + iVar35);
            iVar35 = iVar35 + 2;
            *param_3 = *(undefined1 *)((uint)*pbVar29 + (int)*psVar21 + *param_1);
            param_3 = param_3 + 1;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
        }
        if (0 < (int)lVar48) {
          pbVar29 = (byte *)(param_1[6] + -1);
          do {
            psVar37 = psVar37 + 1;
            pbVar29 = pbVar29 + 1;
            *param_3 = *(undefined1 *)((uint)*pbVar29 + (int)*psVar37 + *param_1);
            param_3 = param_3 + 1;
            lVar48 = lVar48 + -1;
          } while (lVar48 != 0);
        }
        iVar32 = iVar32 + -1;
        param_3 = param_3 + param_4 + -8;
      } while (-7 < iVar32);
      break;
    case 6:
      iVar32 = 0;
      psVar37 = param_5 + -1;
      lVar48 = 8;
      do {
        pbVar29 = (byte *)(param_1[6] - iVar32);
        iVar32 = iVar32 + 1;
        *param_3 = *(undefined1 *)((uint)pbVar29[-1] + (int)psVar37[1] + *param_1);
        param_3[1] = *(undefined1 *)((uint)*pbVar29 + (int)psVar37[2] + *param_1);
        param_3[2] = *(undefined1 *)((uint)pbVar29[1] + (int)psVar37[3] + *param_1);
        param_3[3] = *(undefined1 *)((uint)pbVar29[2] + (int)psVar37[4] + *param_1);
        param_3[4] = *(undefined1 *)((uint)pbVar29[3] + (int)psVar37[5] + *param_1);
        param_3[5] = *(undefined1 *)((uint)pbVar29[4] + (int)psVar37[6] + *param_1);
        param_3[6] = *(undefined1 *)((uint)pbVar29[5] + (int)psVar37[7] + *param_1);
        psVar37 = psVar37 + 8;
        param_3[7] = *(undefined1 *)((uint)pbVar29[6] + (int)*psVar37 + *param_1);
        param_3 = param_3 + param_4;
        lVar48 = lVar48 + -1;
      } while (lVar48 != 0);
      break;
    case 7:
      uVar46 = 0;
      psVar37 = param_5;
      do {
        if (0 < (int)uVar46) {
          pbVar29 = (byte *)((param_1[5] - uVar46) + -1);
          uVar28 = uVar46;
          do {
            *param_3 = *(undefined1 *)((int)*psVar37 + (uint)pbVar29[1] + *param_1);
            psVar21 = psVar37 + 1;
            pbVar29 = pbVar29 + 1;
            psVar37 = psVar37 + 2;
            param_3[1] = *(undefined1 *)((int)*psVar21 + (uint)*pbVar29 + *param_1);
            param_3 = param_3 + 2;
            uVar28 = uVar28 - 1;
          } while (uVar28 != 0);
        }
        sVar17 = *psVar37;
        psVar37 = psVar37 + 1;
        iVar32 = (uVar46 & 0x7fffffff) * -2 + 7;
        puVar36 = param_3 + 1;
        *param_3 = *(undefined1 *)((uint)*(byte *)param_1[5] + (int)sVar17 + *param_1);
        bVar15 = *(byte *)(param_1[6] + -1);
        if (0 < iVar32) {
          pbVar29 = (byte *)(param_1[6] + -1);
          do {
            uVar28 = (uint)bVar15;
            pbVar29 = pbVar29 + 1;
            bVar15 = *pbVar29;
            sVar17 = *psVar37;
            psVar37 = psVar37 + 1;
            *puVar36 = *(undefined1 *)(((int)(bVar15 + uVar28 + 1) >> 1) + (int)sVar17 + *param_1);
            puVar36 = puVar36 + 1;
            iVar32 = iVar32 + -1;
          } while (iVar32 != 0);
        }
        uVar46 = uVar46 + 1;
        param_3 = puVar36 + param_4 + -8;
      } while ((int)uVar46 < 4);
      if ((int)uVar46 < 8) {
        iVar32 = 8 - uVar46;
        do {
          pbVar29 = (byte *)(param_1[5] - uVar46);
          uVar46 = uVar46 + 1;
          *param_3 = *(undefined1 *)((int)*psVar37 + (uint)*pbVar29 + *param_1);
          param_3[1] = *(undefined1 *)((int)psVar37[1] + (uint)*pbVar29 + *param_1);
          param_3[2] = *(undefined1 *)((uint)pbVar29[1] + (int)psVar37[2] + *param_1);
          param_3[3] = *(undefined1 *)((uint)pbVar29[1] + (int)psVar37[3] + *param_1);
          param_3[4] = *(undefined1 *)((int)psVar37[4] + (uint)pbVar29[2] + *param_1);
          param_3[5] = *(undefined1 *)((int)psVar37[5] + (uint)pbVar29[2] + *param_1);
          param_3[6] = *(undefined1 *)((int)psVar37[6] + (uint)pbVar29[3] + *param_1);
          psVar21 = psVar37 + 7;
          psVar37 = psVar37 + 8;
          param_3[7] = *(undefined1 *)((int)*psVar21 + (uint)pbVar29[3] + *param_1);
          param_3 = param_3 + param_4;
          iVar32 = iVar32 + -1;
        } while (iVar32 != 0);
      }
      break;
    case 8:
      pbVar29 = (byte *)param_1[5];
      pbVar31 = (byte *)(param_1[1] + -2);
      psVar37 = param_5 + -1;
      lVar48 = 8;
      do {
        pbVar29 = pbVar29 + -1;
        iVar32 = (int)((uint)*pbVar31 + (uint)*pbVar29 + 1) >> 1;
        *param_3 = *(undefined1 *)((int)psVar37[1] + *param_1 + iVar32);
        param_3[1] = *(undefined1 *)((int)psVar37[2] + *param_1 + iVar32);
        param_3[2] = *(undefined1 *)((int)psVar37[3] + *param_1 + iVar32);
        param_3[3] = *(undefined1 *)((int)psVar37[4] + *param_1 + iVar32);
        param_3[4] = *(undefined1 *)((int)psVar37[5] + *param_1 + iVar32);
        param_3[5] = *(undefined1 *)((int)psVar37[6] + *param_1 + iVar32);
        param_3[6] = *(undefined1 *)((int)psVar37[7] + *param_1 + iVar32);
        psVar37 = psVar37 + 8;
        param_3[7] = *(undefined1 *)((int)*psVar37 + *param_1 + iVar32);
        param_3 = param_3 + param_4;
        pbVar31 = pbVar31 + param_1[2];
        lVar48 = lVar48 + -1;
      } while (lVar48 != 0);
      break;
    case 9:
      psVar37 = param_5 + -1;
      lVar48 = 8;
      iVar32 = 0;
      do {
        *param_3 = *(undefined1 *)
                    ((uint)*(byte *)((int)(char)(&lbl_820FD928)[iVar32] + param_1[5]) +
                     (int)psVar37[1] + *param_1);
        param_3[1] = *(undefined1 *)
                      ((uint)*(byte *)((int)(char)(&lbl_820FD929)[iVar32] + param_1[5]) +
                       (int)psVar37[2] + *param_1);
        param_3[2] = *(undefined1 *)
                      ((uint)*(byte *)((int)(char)(&lbl_820FD92A)[iVar32] + param_1[5]) +
                       (int)psVar37[3] + *param_1);
        param_3[3] = *(undefined1 *)
                      ((uint)*(byte *)((int)(char)(&lbl_820FD92B)[iVar32] + param_1[5]) +
                       (int)psVar37[4] + *param_1);
        param_3[4] = *(undefined1 *)
                      ((uint)*(byte *)((int)(char)(&lbl_820FD92C)[iVar32] + param_1[5]) +
                       (int)psVar37[5] + *param_1);
        param_3[5] = *(undefined1 *)
                      ((uint)*(byte *)((int)(char)(&lbl_820FD92D)[iVar32] + param_1[5]) +
                       (int)psVar37[6] + *param_1);
        param_3[6] = *(undefined1 *)
                      ((uint)*(byte *)((int)(char)(&lbl_820FD92E)[iVar32] + param_1[5]) +
                       (int)psVar37[7] + *param_1);
        psVar37 = psVar37 + 8;
        param_3[7] = *(undefined1 *)
                      ((uint)*(byte *)((int)(char)(&lbl_820FD92F)[iVar32] + param_1[5]) +
                       (int)*psVar37 + *param_1);
        param_3 = param_3 + param_4;
        lVar48 = lVar48 + -1;
        iVar32 = iVar32 + 1;
      } while (lVar48 != 0);
      break;
    case 10:
      iVar32 = param_1[6];
      psVar37 = param_5 + -1;
      pbVar29 = (byte *)param_1[5];
      lVar48 = 8;
      bVar15 = *(byte *)(iVar32 + 6);
      bVar9 = *(byte *)(iVar32 + 3);
      bVar10 = *(byte *)(iVar32 + 5);
      bVar11 = *(byte *)(iVar32 + 7);
      bVar12 = *(byte *)(iVar32 + 2);
      bVar13 = *(byte *)(iVar32 + 4);
      bVar14 = *(byte *)(iVar32 + 1);
      do {
        pbVar29 = pbVar29 + -1;
        bVar16 = *pbVar29;
        *param_3 = *(undefined1 *)((int)psVar37[1] + *param_1 + ((int)((uint)bVar16 * 8 + 4) >> 3));
        param_3[1] = *(undefined1 *)
                      ((int)psVar37[2] + *param_1 + ((int)(bVar14 + 4 + (uint)bVar16 * 7) >> 3));
        param_3[2] = *(undefined1 *)
                      ((int)psVar37[3] + *param_1 +
                      ((int)((bVar12 + 2) * 2 + (uint)bVar16 * 6) >> 3));
        param_3[3] = *(undefined1 *)
                      ((int)psVar37[4] + *param_1 +
                      ((int)((uint)bVar9 + (uint)bVar9 * 2 + 4 + (uint)bVar16 * 5) >> 3));
        param_3[4] = *(undefined1 *)
                      ((int)psVar37[5] + *param_1 +
                      ((int)((bVar13 + 1) * 4 + (uint)bVar16 * 4) >> 3));
        param_3[5] = *(undefined1 *)
                      ((int)psVar37[6] + *param_1 +
                      ((int)((uint)bVar10 + (uint)bVar10 * 4 + 4 + (uint)bVar16 * 3) >> 3));
        param_3[6] = *(undefined1 *)
                      ((int)psVar37[7] + *param_1 +
                      ((int)((uint)bVar15 * 6 + 4 + (uint)bVar16 * 2) >> 3));
        psVar37 = psVar37 + 8;
        param_3[7] = *(undefined1 *)
                      (((int)(((((uint)bVar11 * 8 - (uint)bVar11) + 4) - (uint)bVar16) +
                             (uint)bVar16 * 2) >> 3) + (int)*psVar37 + *param_1);
        param_3 = param_3 + param_4;
        lVar48 = lVar48 + -1;
      } while (lVar48 != 0);
      break;
    case 0xb:
      pbVar31 = (byte *)param_1[6];
      psVar37 = param_5 + -1;
      pbVar29 = (byte *)param_1[5];
      iVar45 = 0;
      lVar48 = 8;
      iVar32 = (uint)*pbVar31 << 3;
      iVar35 = (uint)pbVar31[1] << 3;
      iVar26 = (uint)pbVar31[2] << 3;
      iVar25 = (uint)pbVar31[3] << 3;
      iVar23 = (uint)pbVar31[5] << 3;
      iVar24 = (uint)pbVar31[4] << 3;
      iVar22 = (uint)pbVar31[6] << 3;
      iVar47 = (uint)pbVar31[7] << 3;
      do {
        pbVar29 = pbVar29 + -1;
        pbVar31 = (byte *)param_1[6];
        iVar33 = (uint)*pbVar29 * iVar45 + 4;
        iVar44 = iVar32 + iVar33;
        iVar43 = iVar35 + iVar33;
        iVar42 = iVar25 + iVar33;
        iVar41 = iVar24 + iVar33;
        iVar40 = iVar23 + iVar33;
        iVar34 = iVar47 + iVar33;
        iVar32 = iVar32 - (uint)*pbVar31;
        *param_3 = *(undefined1 *)((int)psVar37[1] + *param_1 + (iVar44 >> 3));
        iVar35 = iVar35 - (uint)pbVar31[1];
        param_3[1] = *(undefined1 *)((int)psVar37[2] + *param_1 + (iVar43 >> 3));
        bVar15 = pbVar31[2];
        param_3[2] = *(undefined1 *)((int)psVar37[3] + *param_1 + (iVar26 + iVar33 >> 3));
        iVar26 = iVar26 - (uint)bVar15;
        iVar25 = iVar25 - (uint)pbVar31[3];
        param_3[3] = *(undefined1 *)((int)psVar37[4] + *param_1 + (iVar42 >> 3));
        iVar24 = iVar24 - (uint)pbVar31[4];
        param_3[4] = *(undefined1 *)((int)psVar37[5] + *param_1 + (iVar41 >> 3));
        iVar23 = iVar23 - (uint)pbVar31[5];
        param_3[5] = *(undefined1 *)((int)psVar37[6] + *param_1 + (iVar40 >> 3));
        bVar15 = pbVar31[6];
        param_3[6] = *(undefined1 *)((int)psVar37[7] + *param_1 + (iVar22 + iVar33 >> 3));
        iVar22 = iVar22 - (uint)bVar15;
        psVar37 = psVar37 + 8;
        iVar47 = iVar47 - (uint)pbVar31[7];
        iVar45 = iVar45 + 1;
        param_3[7] = *(undefined1 *)((int)*psVar37 + *param_1 + (iVar34 >> 3));
        param_3 = param_3 + param_4;
        lVar48 = lVar48 + -1;
      } while (lVar48 != 0);
    }
  }
  else {
    iVar32 = param_1[4];
    psVar37 = param_5 + -1;
    lVar48 = 8;
    do {
      *param_3 = *(undefined1 *)((int)psVar37[1] + *param_1 + iVar32);
      param_3[1] = *(undefined1 *)((int)psVar37[2] + *param_1 + iVar32);
      param_3[2] = *(undefined1 *)((int)psVar37[3] + *param_1 + iVar32);
      param_3[3] = *(undefined1 *)((int)psVar37[4] + *param_1 + iVar32);
      param_3[4] = *(undefined1 *)((int)psVar37[5] + *param_1 + iVar32);
      param_3[5] = *(undefined1 *)((int)psVar37[6] + *param_1 + iVar32);
      param_3[6] = *(undefined1 *)((int)psVar37[7] + *param_1 + iVar32);
      psVar37 = psVar37 + 8;
      param_3[7] = *(undefined1 *)((int)*psVar37 + *param_1 + iVar32);
      param_3 = param_3 + param_4;
      lVar48 = lVar48 + -1;
    } while (lVar48 != 0);
  }
  if (param_6 != 0) {
    param_5[0] = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    param_5[3] = 0;
    param_5[4] = 0;
    param_5[5] = 0;
    param_5[6] = 0;
    param_5[7] = 0;
    param_5[8] = 0;
    param_5[9] = 0;
    param_5[10] = 0;
    param_5[0xb] = 0;
    param_5[0xc] = 0;
    param_5[0xd] = 0;
    param_5[0xe] = 0;
    param_5[0xf] = 0;
    param_5[0x10] = 0;
    param_5[0x11] = 0;
    param_5[0x12] = 0;
    param_5[0x13] = 0;
    param_5[0x14] = 0;
    param_5[0x15] = 0;
    param_5[0x16] = 0;
    param_5[0x17] = 0;
    param_5[0x18] = 0;
    param_5[0x19] = 0;
    param_5[0x1a] = 0;
    param_5[0x1b] = 0;
    param_5[0x1c] = 0;
    param_5[0x1d] = 0;
    param_5[0x1e] = 0;
    param_5[0x1f] = 0;
    param_5[0x20] = 0;
    param_5[0x21] = 0;
    param_5[0x22] = 0;
    param_5[0x23] = 0;
    param_5[0x24] = 0;
    param_5[0x25] = 0;
    param_5[0x26] = 0;
    param_5[0x27] = 0;
    param_5[0x28] = 0;
    param_5[0x29] = 0;
    param_5[0x2a] = 0;
    param_5[0x2b] = 0;
    param_5[0x2c] = 0;
    param_5[0x2d] = 0;
    param_5[0x2e] = 0;
    param_5[0x2f] = 0;
    param_5[0x30] = 0;
    param_5[0x31] = 0;
    param_5[0x32] = 0;
    param_5[0x33] = 0;
    param_5[0x34] = 0;
    param_5[0x35] = 0;
    param_5[0x36] = 0;
    param_5[0x37] = 0;
    param_5[0x38] = 0;
    param_5[0x39] = 0;
    param_5[0x3a] = 0;
    param_5[0x3b] = 0;
    param_5[0x3c] = 0;
    param_5[0x3d] = 0;
    param_5[0x3e] = 0;
    param_5[0x3f] = 0;
  }
  return;
}

