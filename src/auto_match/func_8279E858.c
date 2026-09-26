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
extern unsigned int *auStack_11c;
extern unsigned int fStack_16c;
extern unsigned int fStack_170;
extern unsigned int fStack_184;
extern unsigned int fStack_188;
extern unsigned int fStack_18c;
extern unsigned int fStack_190;
extern unsigned int fStack_194;
extern unsigned int fStack_198;
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_82683F88();
extern int fn_8268ACE8();
extern int fn_8268AFB0();
extern int fn_8268AFD8();
extern int fn_8268B330();
extern int fn_8268C750();
extern int fn_8268CCB0();
extern int fn_826C6368();
extern int fn_827553F0();
extern int fn_82755510();
extern int fn_82773860();
extern int fn_8278B238();
extern int fn_8278B458();
extern int fn_8278C028();
extern int fn_8278FE08();
extern int fn_82794B88();
extern int fn_8279A300();
extern int fn_8279A400();
extern int fn_8279A488();
extern int fn_8279A510();
extern int fn_8279AD50();
extern int fn_8279B6A8();
extern int fn_8279B930();
extern int fn_8279BB50();
extern int fn_8279D630();
extern int fn_8279DB08();
extern int fn_8279E2A8();
extern int fn_82F68918();
extern int fn_82F6A528();
extern int fn_82F6A574();
extern unsigned int iStack_17c;
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82005730;
extern unsigned int lbl_820151C0;
extern unsigned int lbl_820153EC;
extern unsigned int lbl_8201546C;
extern unsigned int lbl_82015BD0;
extern unsigned int lbl_82015BD4;
extern unsigned int lbl_820885C8;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_120;
extern unsigned int uStack_138;
extern unsigned int uStack_150;
extern unsigned int uStack_174;
extern unsigned int uStack_178;
extern unsigned int uStack_180;
extern unsigned int uStack_19c;
extern unsigned int uStack_1a0;
extern U64 storeWordConditionalIndexed();


void fn_8279E858(void)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  float fVar4;
  ulonglong uVar5;
  bool bVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  int *piVar11;
  int *piVar12;
  uint *puVar13;
  undefined2 uVar20;
  int iVar14;
  char cVar21;
  undefined8 uVar10;
  int iVar15;
  int iVar16;
  int *piVar17;
  uint *puVar18;
  int iVar19;
  ulonglong uVar22;
  undefined1 uVar26;
  longlong lVar23;
  uint uVar24;
  ushort uVar25;
  undefined2 *puVar27;
  int iVar28;
  int *piVar29;
  char in_RESERVE;
  byte bVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  uint uStack_1a0;
  uint uStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  uint uStack_180;
  int iStack_17c;
  uint uStack_178;
  undefined4 uStack_174;
  float fStack_170;
  float fStack_16c;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  ulonglong uStack_150;
  longlong lStack_148;
  longlong lStack_140;
  ulonglong uStack_138;
  longlong lStack_130;
  undefined4 uStack_120;
  undefined4 auStack_11c [71];
  
  piVar11 = (int *)fn_82F6A528();
  bVar9 = false;
  bVar8 = false;
  fn_8279DB08();
  piVar11[0x23] = 0;
  uVar25 = *(ushort *)(piVar11[2] + 0x16);
  if (((uVar25 >> 7 & 1) == 0) || (bVar6 = true, (uVar25 & 0x8000) == 0)) {
    bVar6 = false;
  }
  if (bVar6) {
    piVar29 = piVar11 + 0x25;
    puVar27 = (undefined2 *)(piVar11[0x27] * 8 + piVar11[0x25]);
    puVar27[2] = 0;
    puVar27[3] = 0;
    piVar12 = (int *)fn_8279B6A8(piVar11 + 4);
    iVar16 = *piVar12;
    piVar11[0x32] = iVar16;
    if (iVar16 != 0) {
      puVar13 = (uint *)fn_8279E2A8(*piVar11,piVar11 + 0x31,0);
      if (puVar13 != (uint *)0x0) {
        *puVar13 = *puVar13 + 1;
      }
      uVar20 = (**(code **)(**(int **)(puVar13[5] + 0xc) + 0xc))(*(int **)(puVar13[5] + 0xc),0x2022)
      ;
      *puVar27 = uVar20;
      puVar27[1] = 300;
      puVar27[3] = puVar27[3] & 0xffbf;
      dVar32 = (double)fn_8279A510(piVar11);
      fn_82755510((double)(float)(dVar32 * (double)lbl_820151C0),puVar27);
      puVar27[2] = puVar27[2] & 0xfff;
      iVar14 = piVar11[0x27] * 8 + *piVar29;
      iVar16 = *(int *)(piVar11[0x32] + 0x20);
      *(ushort *)(iVar14 + 6) = *(ushort *)(iVar14 + 6) | 0x4000;
      iVar14 = piVar11[0x27] * 8 + *piVar29;
      *(ushort *)(iVar14 + 6) = *(ushort *)(iVar14 + 6) | 0x2000;
      *(uint **)(piVar11[0x29] * 4 + piVar11[0x26]) = puVar13;
      piVar11[0x29] = piVar11[0x29] + 1;
      *puVar13 = *puVar13 + 1;
      iVar14 = piVar11[0x27] * 8 + *piVar29;
      *(ushort *)(iVar14 + 6) = *(ushort *)(iVar14 + 6) | 0x4000;
      iVar14 = piVar11[0x27] * 8 + *piVar29;
      *(ushort *)(iVar14 + 6) = *(ushort *)(iVar14 + 6) | 0x1000;
      *(int *)(piVar11[0x29] * 4 + piVar11[0x26]) = iVar16;
      piVar11[0x29] = piVar11[0x29] + 1;
      if ((*piVar29 == 0) || (bVar6 = false, (uint)piVar11[0x28] <= (uint)piVar11[0x27])) {
        bVar6 = true;
      }
      if (!bVar6) {
        piVar11[0x27] = piVar11[0x27] + 1;
      }
      *puVar13 = *puVar13 + 1;
      puVar18 = (uint *)piVar11[5];
      if ((puVar18 != (uint *)0x0) &&
         (uVar24 = *puVar18, *puVar18 = (uint)((ulonglong)uVar24 - 1), (ulonglong)uVar24 - 1 == 0))
      {
        fn_826C6368(puVar18);
        fn_8267BE38(puVar18);
      }
      piVar11[5] = (int)puVar13;
      piVar11[10] = iVar16;
      uVar24 = *puVar13;
      *puVar13 = (uint)((ulonglong)uVar24 - 1);
      if ((ulonglong)uVar24 - 1 == 0) {
        fn_826C6368(puVar13);
        fn_8267BE38(puVar13);
      }
    }
    piVar11[0x23] = 700;
    piVar11[0x11] = 700;
    piVar11[0x22] = -300;
  }
  else {
    piVar11[0x22] = *(short *)(piVar11[2] + 0xe) * 0x14;
  }
  iVar16 = piVar11[2];
  piVar11[0x23] =
       ((uint)*(ushort *)(iVar16 + 0x12) + (uint)*(ushort *)(iVar16 + 0xc)) * 0x14 + piVar11[0x23];
  piVar11[0x24] = (uint)*(ushort *)(iVar16 + 0x14) * 0x14;
  iVar14 = fn_8278B238(iVar16,piVar11 + 0xb7);
  dVar40 = (double)lbl_82015BD4;
  dVar41 = (double)lbl_82005344;
  dVar36 = (double)lbl_820885C8;
  dVar38 = (double)lbl_82015BD0;
  dVar39 = (double)lbl_8201546C;
  dVar42 = (double)lbl_821AAD20;
  dVar33 = (double)lbl_820153EC;
  dVar34 = (double)lbl_8200133C;
  dVar35 = (double)lbl_82002AE0;
  dVar37 = (double)lbl_82002C5C;
  iVar16 = 0;
  dVar32 = lbl_82005730;
  do {
    if ((piVar11[0x1d] == 0) || (bVar6 = false, *(uint *)(piVar11[0x1d] + 4) <= (uint)piVar11[0x1e])
       ) {
      bVar6 = true;
    }
    if (bVar6) {
      if (piVar11[3] != 0) {
        fn_8279BB50(piVar11);
      }
      if ((piVar11[0x13e] != 0) && (piVar11[0x13e] != (int)piVar11 + 0x2f6)) {
        fn_82794B88(*(undefined4 *)(*piVar11 + 8));
        fn_8267BE38(piVar11[0x13e]);
      }
      if (iVar16 != 0) {
        fn_8267C498(iVar16);
      }
      fn_82F6A574();
      return;
    }
    piVar29 = piVar11 + 4;
    piVar12 = (int *)fn_8279B6A8(piVar29);
    if ((((piVar11[0xba] == 1) && ((*(byte *)(*piVar11 + 0x13d) & 8) != 0)) && (iVar16 == 0)) &&
       (cVar21 = fn_82773860(7,piVar11[6] & 0xffff,*(undefined2 *)(piVar12 + 2)), cVar21 != '\0'
       )) {
      fn_8279B930(piVar11 + 0x8b,piVar29);
    }
    if ((piVar11[0xba] == 1) && (*(char *)(piVar11 + 0xbd) != '\0')) {
      dVar43 = (double)(float)piVar11[0xb6];
      if ((piVar11[0x11] == 0) && (piVar11[0x40] == 0)) {
        fn_8279B930(piVar11 + 0x35,piVar29);
      }
      lStack_168 = (longlong)piVar11[0x11];
      if (((float)(dVar43 * dVar37) < (float)lStack_168) && (piVar11[0x6b] == 0)) {
        fn_8279B930(piVar11 + 0x60,piVar29);
      }
    }
    piVar11[0xb9] = 1;
    if (iVar16 != 0) {
      fn_8267C498(iVar16);
    }
    iVar15 = 0;
    if (*(int *)(*piVar11 + 0x18) == 0) {
LAB_8279ed08:
      iVar16 = iVar15;
      if (((*piVar12 != 0) && ((*(ushort *)(*piVar12 + 0x2a) >> 9 & 1) != 0)) &&
         (*(short *)(piVar12 + 2) != 0)) {
        iVar16 = fn_8278B458();
        if (iVar16 != 0) {
          *(int *)(iVar16 + 4) = *(int *)(iVar16 + 4) + 1;
        }
        if (iVar15 != 0) {
          fn_8267C498(iVar15);
        }
      }
    }
    else {
      uVar10 = fn_8278FE08(piVar11 + 0x17,&uStack_174);
      iVar15 = fn_8279AD50(*(undefined4 *)(*piVar11 + 0x18),uVar10,uStack_174,&iStack_17c);
      if (iVar15 == 0) goto LAB_8279ed08;
      *(int *)(iVar15 + 4) = *(int *)(iVar15 + 4) + 1;
      piVar11[0xb9] = iStack_17c;
      iVar16 = iVar15;
    }
    piVar11[0x142] = (int)(float)dVar35;
    piVar11[0x149] = (int)(float)dVar34;
    piVar11[0x140] = 0;
    if (iVar16 == 0) {
      *(bool *)((int)piVar11 + 0x529) = *(short *)(piVar12 + 2) == 0xa0;
      sVar2 = *(short *)(piVar12 + 2);
      if (sVar2 == 0) {
LAB_8279edd8:
        uVar26 = 1;
      }
      else {
        if (*(char *)((int)piVar11 + 0x529) == '\0') {
          if (((sVar2 == 9) || (sVar2 == 0xd)) ||
             ((sVar2 == 0x20 || (bVar6 = false, sVar2 == 0x3000)))) {
            bVar6 = true;
          }
          if (bVar6) goto LAB_8279edd8;
        }
        uVar26 = 0;
      }
      *(undefined1 *)(piVar11 + 0x14a) = uVar26;
      if ((piVar11[0x34] != 0) && (piVar11[0x32] == *piVar12)) {
        piVar17 = (int *)piVar11[0x34];
        if (piVar17 != (int *)0x0) {
          *piVar17 = *piVar17 + 1;
        }
        puVar13 = (uint *)piVar11[0x141];
        if ((puVar13 != (uint *)0x0) &&
           (uVar24 = *puVar13, *puVar13 = (uint)((ulonglong)uVar24 - 1), (ulonglong)uVar24 - 1 == 0)
           ) {
          fn_826C6368(puVar13);
          fn_8267BE38(puVar13);
        }
        piVar11[0x141] = piVar11[0x34];
LAB_8279eebc:
        piVar11[0x140] = *(int *)(piVar11[0x141] + 0x14);
        dVar43 = (double)fn_8279A510(piVar11);
        piVar11[0x149] = (int)(float)dVar43;
        piVar11[0x142] = (int)(float)(dVar43 * dVar33);
        sVar2 = *(short *)(piVar12 + 2);
        if ((sVar2 == (ushort)((-(ushort)((*(byte *)(*(int *)(*piVar11 + 8) + 0x20) & 2) != 0) & 3)
                              + 10)) || (sVar2 == 0)) {
          uVar10 = (**(code **)(**(int **)(piVar11[0x140] + 0xc) + 0xc))
                             (*(int **)(piVar11[0x140] + 0xc),0x20);
          piVar11[0x143] = (int)uVar10;
          dVar43 = (double)(**(code **)(**(int **)(piVar11[0x140] + 0xc) + 0x20))
                                     (*(int **)(piVar11[0x140] + 0xc),uVar10);
          dVar43 = (double)(float)(dVar43 * (double)(float)piVar11[0x142]) * dVar37;
LAB_8279f298:
          piVar11[0x144] = (int)(float)dVar43;
        }
        else {
          if (sVar2 != 9) {
            iVar15 = (**(code **)(**(int **)(piVar11[0x140] + 0xc) + 0xc))();
            piVar11[0x143] = iVar15;
            if (((iVar15 == -1) && (piVar11[0x24f] != 0)) &&
               ((*(byte *)(*piVar11 + 0x13f) & 0x10) == 0)) {
              uStack_120 = 1;
              fn_8268AFB0(auStack_11c,lbl_831E7E64);
              bVar30 = *(byte *)(piVar11[0x32] + 0x28);
              uVar25 = *(ushort *)(piVar11[0x32] + 0x2a);
              bVar1 = *(byte *)(*piVar11 + 0x13d);
              puVar13 = (uint *)fn_8278C028();
              puVar13 = (uint *)fn_827553F0(*(undefined4 *)(*piVar11 + 0xc),
                                                  ((ulonglong)*puVar13 & 0xfffffffc) + 8,
                                                  -((bVar30 & 1) != 0) & 2U | (bVar30 >> 1 & 1) != 0
                                                  | -((bVar1 >> 5 & 1) != 0) & 0x10U,
                                                  (uVar25 >> 0xc & 1) == 0,&uStack_120);
              if (*(int **)(*piVar11 + 0x10) == (int *)0x0) {
                bVar8 = true;
                uVar10 = fn_8268B330(&uStack_180);
              }
              else {
                bVar9 = true;
                uVar10 = (**(code **)(**(int **)(*piVar11 + 0x10) + 0x24))(&uStack_178);
              }
              fn_8268C750(&uStack_1a0,uVar10);
              bVar6 = !bVar8;
              if (!bVar6) {
                bVar8 = false;
                lVar23 = ((ulonglong)uStack_180 & 0xfffffffc) + 4;
                do {
                  puVar18 = (uint *)lVar23;
                  uVar22 = (ulonglong)*puVar18;
                  if (in_RESERVE != '\0') {
                    uVar24 = storeWordConditionalIndexed(uVar22 - 1,0,lVar23);
                    *puVar18 = uVar24;
                    bVar6 = true;
                  }
                } while (!bVar6);
                if (uVar22 == 1) {
                  fn_8267BE38();
                }
              }
              bVar30 = !bVar9 << 1;
              if (bVar9) {
                bVar9 = false;
                lVar23 = ((ulonglong)uStack_178 & 0xfffffffc) + 4;
                do {
                  puVar18 = (uint *)lVar23;
                  uVar22 = (ulonglong)*puVar18;
                  if (in_RESERVE != '\0') {
                    uVar24 = storeWordConditionalIndexed(uVar22 - 1,0,lVar23);
                    *puVar18 = uVar24;
                    bVar30 = 2;
                  }
                } while (!(bool)(bVar30 >> 1));
                bVar30 = (uVar22 == 1) << 1;
                if (uVar22 == 1) {
                  fn_8267BE38();
                }
              }
              (**(code **)(**(int **)(piVar11[0x140] + 0xc) + 0x44))(&uStack_19c);
              uVar10 = (**(code **)(**(int **)(piVar11[0x140] + 0xc) + 0x38))();
              uVar22 = (ulonglong)uStack_19c;
              uVar5 = (ulonglong)uStack_1a0;
              puVar18 = (uint *)fn_8278C028(piVar11[0x32]);
              fn_82683F88((ulonglong)(uint)piVar11[0x24f] + 0xc,0xffffffff82015b78,
                                ((ulonglong)*puVar18 & 0xfffffffc) + 8,
                                (char)*(undefined2 *)(piVar12 + 2),*(undefined2 *)(piVar12 + 2),
                                (uVar5 & 0xfffffffc) + 8,uVar10,(uVar22 & 0xfffffffc) + 8);
              *(byte *)(*piVar11 + 0x13f) = *(byte *)(*piVar11 + 0x13f) | 0x10;
              lVar23 = ((ulonglong)uStack_19c & 0xfffffffc) + 4;
              do {
                puVar18 = (uint *)lVar23;
                uVar22 = (ulonglong)*puVar18;
                if (in_RESERVE != '\0') {
                  uVar24 = storeWordConditionalIndexed(uVar22 - 1,0,lVar23);
                  *puVar18 = uVar24;
                  bVar30 = 2;
                }
              } while (!(bool)(bVar30 >> 1 & 1));
              bVar30 = (uVar22 == 1) << 1;
              if (uVar22 == 1) {
                fn_8267BE38();
              }
              lVar23 = ((ulonglong)uStack_1a0 & 0xfffffffc) + 4;
              do {
                puVar18 = (uint *)lVar23;
                uVar22 = (ulonglong)*puVar18;
                if (in_RESERVE != '\0') {
                  uVar24 = storeWordConditionalIndexed(uVar22 - 1,0,lVar23);
                  *puVar18 = uVar24;
                  bVar30 = 2;
                }
              } while (!(bool)(bVar30 >> 1 & 1));
              if (uVar22 == 1) {
                fn_8267BE38();
              }
              if ((puVar13 != (uint *)0x0) &&
                 (uVar24 = *puVar13, *puVar13 = (uint)((ulonglong)uVar24 - 1),
                 (ulonglong)uVar24 - 1 == 0)) {
                fn_826C6368(puVar13);
                fn_8267BE38(puVar13);
              }
              fn_8268AFD8(auStack_11c);
            }
            dVar43 = (double)(**(code **)(**(int **)(piVar11[0x140] + 0xc) + 0x20))
                                       (*(int **)(piVar11[0x140] + 0xc),piVar11[0x143]);
            dVar43 = dVar43 * (double)(float)piVar11[0x142];
            goto LAB_8279f298;
          }
          piVar11[0x144] = (int)(float)dVar42;
          piVar11[0x143] = -1;
        }
        if (*piVar29 == 0) {
          dVar43 = (double)(float)piVar11[8];
          if (dVar43 <= dVar42) {
            iVar15 = (int)(dVar43 - dVar32);
          }
          else {
            iVar15 = (int)(dVar43 + dVar32);
          }
        }
        else {
          dVar43 = dVar42;
          if (*(char *)(piVar11 + 0x2d) != '\0') {
            if (*piVar29 != 0) {
              piVar17 = *(int **)(*(int *)(piVar11[5] + 0x14) + 0xc);
              dVar42 = (double)(**(code **)(*piVar17 + 0x24))
                                         (piVar17,piVar11[6],*(undefined2 *)(piVar12 + 2));
            }
            dVar42 = (double)(float)(dVar42 * (double)(float)piVar11[0x142]);
          }
          dVar31 = (double)(float)(dVar42 + (double)(float)piVar11[8]);
          dVar42 = dVar43;
          if (dVar31 <= dVar43) {
            iVar15 = (int)(dVar31 - dVar32);
          }
          else {
            iVar15 = (int)(dVar31 + dVar32);
          }
        }
        dVar43 = (double)(float)piVar11[0x144];
        piVar11[0x145] = iVar15;
        if (dVar43 <= dVar42) {
          dVar43 = dVar43 - dVar32;
        }
        else {
          dVar43 = dVar43 + dVar32;
        }
        piVar11[0x146] = (int)dVar43;
        uVar24 = -(uint)(*(char *)(piVar11 + 0x14a) == '\0') & (int)dVar43;
        goto LAB_8279f458;
      }
      piVar11[0x32] = *piVar12;
      piVar17 = (int *)fn_8279E2A8(*piVar11,piVar11 + 0x31,*(short *)(piVar12 + 2) == 0);
      if (piVar17 != (int *)0x0) {
        *piVar17 = *piVar17 + 1;
      }
      puVar13 = (uint *)piVar11[0x141];
      if ((puVar13 != (uint *)0x0) &&
         (uVar24 = *puVar13, *puVar13 = (uint)((ulonglong)uVar24 - 1), (ulonglong)uVar24 - 1 == 0))
      {
        fn_826C6368(puVar13);
        fn_8267BE38(puVar13);
      }
      piVar11[0x141] = (int)piVar17;
      if (piVar17 != (int *)0x0) goto LAB_8279eebc;
    }
    else {
      piVar11[0x32] = *piVar12;
      uStack_138 = (ulonglong)*(uint *)(iVar16 + 0x18);
      dVar43 = (double)uStack_138;
      if (dVar43 <= dVar42) {
        dVar43 = dVar43 - dVar32;
      }
      else {
        dVar43 = dVar43 + dVar32;
      }
      uVar24 = (uint)dVar43;
      lStack_140 = (longlong)(int)uVar24;
      dVar43 = (double)(float)piVar11[8];
      piVar11[0x146] = uVar24;
      piVar11[0x144] = (int)(float)((double)lStack_140 + dVar36);
      if (dVar43 <= dVar42) {
        dVar43 = dVar43 - dVar32;
      }
      else {
        dVar43 = dVar43 + dVar32;
      }
      piVar11[0x145] = (int)dVar43;
      piVar11[0x143] = -1;
      *(undefined1 *)(piVar11 + 0x14a) = 0;
      *(undefined1 *)((int)piVar11 + 0x529) = 0;
LAB_8279f458:
      piVar11[0x147] = uVar24;
      piVar11[0x148] = piVar11[0x145] + piVar11[0x11];
      cVar21 = fn_8279D630(piVar11);
      if (cVar21 == '\0') {
        iVar15 = *piVar29;
        if (iVar15 != 0) {
          uVar24 = piVar11[0x145];
          if ((int)uVar24 < 0) {
            uVar24 = (uVar24 ^ (int)uVar24 >> 0x1f) - ((int)uVar24 >> 0x1f);
            *(ushort *)(iVar15 + 6) = *(ushort *)(iVar15 + 6) | 0x40;
          }
          else {
            *(ushort *)(iVar15 + 6) = *(ushort *)(iVar15 + 6) & 0xffbf;
          }
          *(short *)(iVar15 + 2) = (short)uVar24;
        }
        iVar15 = piVar11[0x27];
        iVar19 = piVar11[0x25];
        piVar17 = piVar11 + 0x25;
        iVar28 = iVar15 * 8 + iVar19;
        *(undefined2 *)(iVar28 + 4) = 0;
        *(undefined2 *)(iVar28 + 6) = 0;
        *(short *)(iVar15 * 8 + iVar19) = (short)piVar11[0x143];
        cVar21 = fn_8279A400(piVar29);
        if (cVar21 != '\0') {
          *(ushort *)(iVar28 + 6) = *(ushort *)(iVar28 + 6) | 4;
        }
        if (iVar16 == 0) {
          iVar15 = *(int *)(piVar11[0x32] + 0x20);
          fn_82755510((double)(float)piVar11[0x149],iVar28);
          piVar3 = (int *)piVar11[0x141];
          if (piVar3 != (int *)piVar11[5]) {
            iVar19 = piVar11[0x27] * 8 + *piVar17;
            *(ushort *)(iVar19 + 6) = *(ushort *)(iVar19 + 6) | 0x4000;
            iVar19 = piVar11[0x27] * 8 + *piVar17;
            *(ushort *)(iVar19 + 6) = *(ushort *)(iVar19 + 6) | 0x2000;
            *(int **)(piVar11[0x26] + piVar11[0x29] * 4) = piVar3;
            piVar11[0x29] = piVar11[0x29] + 1;
            *piVar3 = *piVar3 + 1;
          }
          if (iVar15 != piVar11[10]) {
            iVar19 = piVar11[0x27] * 8 + *piVar17;
            *(ushort *)(iVar19 + 6) = *(ushort *)(iVar19 + 6) | 0x4000;
            iVar19 = piVar11[0x27] * 8 + *piVar17;
            *(ushort *)(iVar19 + 6) = *(ushort *)(iVar19 + 6) | 0x1000;
            *(int *)(piVar11[0x26] + piVar11[0x29] * 4) = iVar15;
            piVar11[0x29] = piVar11[0x29] + 1;
          }
          sVar2 = *(short *)(piVar12 + 2);
          if (sVar2 == (ushort)((-(ushort)((*(byte *)(*(int *)(*piVar11 + 8) + 0x20) & 2) != 0) & 3)
                               + 10)) {
            if (sVar2 == 0) goto LAB_8279f84c;
            *(ushort *)(iVar28 + 4) = *(ushort *)(iVar28 + 4) & 0xfff | 0x1000;
LAB_8279f868:
            *(ushort *)(iVar28 + 6) = *(ushort *)(iVar28 + 6) | 0x300;
            piVar11[0x146] = 0;
            *(undefined1 *)((int)piVar11 + 0xb5) = 1;
            if (piVar12[1] == 0) goto LAB_8279f888;
          }
          else {
            if (sVar2 == 0) {
LAB_8279f84c:
              *(ushort *)(iVar28 + 4) = *(ushort *)(iVar28 + 4) & 0xfff;
              goto LAB_8279f868;
            }
            if ((*(char *)(piVar11 + 0x14a) == '\0') && (*(char *)((int)piVar11 + 0x529) == '\0')) {
LAB_8279f820:
              piVar11[0x2b] = 0;
              piVar11[0x12] = piVar11[0x147] + piVar11[0x148];
            }
            else {
              uVar25 = *(ushort *)(iVar28 + 6) | 2;
              *(ushort *)(iVar28 + 6) = uVar25;
              if (piVar11[0x143] < 0) {
LAB_8279f7f0:
                *(ushort *)(iVar28 + 6) = uVar25 | 0x200;
              }
              else {
                fStack_190 = (float)dVar42;
                fStack_184 = (float)dVar42;
                fStack_18c = (float)dVar42;
                fStack_188 = (float)dVar42;
                (**(code **)(**(int **)(piVar11[0x140] + 0xc) + 0x30))
                          (*(int **)(piVar11[0x140] + 0xc),piVar11[0x143],&fStack_190);
                if ((fStack_188 <= fStack_190) || (bVar6 = false, fStack_184 <= fStack_18c)) {
                  bVar6 = true;
                }
                if (bVar6) {
                  uVar25 = *(ushort *)(iVar28 + 6);
                  goto LAB_8279f7f0;
                }
              }
              piVar11[0x2a] = piVar11[0x2a] + 1;
              if (*(char *)(piVar11 + 0x14a) == '\0') goto LAB_8279f820;
              piVar11[0x2b] = piVar11[0x2b] + 1;
            }
            *(ushort *)(iVar28 + 4) = *(ushort *)(iVar28 + 4) & 0xfff | 0x1000;
LAB_8279f888:
            fn_8279A488((double)(float)piVar11[0x142],piVar29,piVar11[0x140]);
          }
          if ((*(byte *)(piVar11[0x32] + 0x28) & 4) == 0) {
            uVar25 = *(ushort *)(iVar28 + 6) & 0xfbff;
          }
          else {
            uVar25 = *(ushort *)(iVar28 + 6) | 0x400;
          }
          *(ushort *)(iVar28 + 6) = uVar25;
          if ((*(ushort *)(piVar11[0x32] + 0x2a) & 0x100) == 0) {
LAB_8279f8e4:
            bVar6 = false;
          }
          else {
            iVar19 = fn_8268ACE8(piVar11[0x32] + 0x10);
            bVar6 = true;
            if (iVar19 == 0) goto LAB_8279f8e4;
          }
          if (bVar6) {
            uVar25 = *(ushort *)(iVar28 + 6) | 0x80;
          }
          else {
            uVar25 = *(ushort *)(iVar28 + 6) & 0xff7f;
          }
          *(ushort *)(iVar28 + 6) = uVar25;
          piVar3 = (int *)piVar11[0x141];
          if (piVar3 != (int *)0x0) {
            *piVar3 = *piVar3 + 1;
          }
          puVar13 = (uint *)piVar11[5];
          if ((puVar13 != (uint *)0x0) &&
             (uVar24 = *puVar13, *puVar13 = (uint)((ulonglong)uVar24 - 1),
             (ulonglong)uVar24 - 1 == 0)) {
            fn_826C6368(puVar13);
            fn_8267BE38(puVar13);
          }
          piVar11[5] = piVar11[0x141];
          piVar11[10] = iVar15;
          *(byte *)(piVar11 + 0x2d) = *(byte *)(piVar11[0x32] + 0x28) >> 3 & 1;
        }
        else {
          iVar15 = piVar11[0x27] * 8 + *piVar17;
          *(ushort *)(iVar15 + 6) = *(ushort *)(iVar15 + 6) | 0x4000;
          iVar15 = piVar11[0x27] * 8 + *piVar17;
          *(ushort *)(iVar15 + 6) = *(ushort *)(iVar15 + 6) | 0x800;
          *(int *)(piVar11[0x26] + piVar11[0x29] * 4) = iVar16;
          piVar11[0x29] = piVar11[0x29] + 1;
          *(int *)(iVar16 + 4) = *(int *)(iVar16 + 4) + 1;
          *(ushort *)(iVar28 + 4) = (short)piVar11[0xb9] << 0xc | *(ushort *)(iVar28 + 4) & 0xfff;
          fStack_198 = (float)dVar42;
          fStack_194 = (float)dVar42;
          *(undefined1 *)(piVar11 + 0x2d) = 0;
          fn_8268CCB0(iVar16 + 0x20,&fStack_170,&fStack_198);
          fVar4 = -fStack_16c;
          fStack_194 = fStack_16c;
          fStack_198 = fStack_170;
          fVar7 = (float)piVar11[0x14];
          if ((float)piVar11[0x14] <= fVar4) {
            fVar7 = fVar4;
          }
          piVar11[0x14] = (int)fVar7;
          uStack_150 = (ulonglong)*(uint *)(iVar16 + 0x1c);
          fVar7 = (float)uStack_150 - fVar4;
          if ((float)uStack_150 - fVar4 < (float)piVar11[0x15]) {
            fVar7 = (float)piVar11[0x15];
          }
          piVar11[0x15] = (int)fVar7;
          piVar11[0x2b] = 0;
          piVar11[0x12] = piVar11[0x147] + piVar11[0x148];
          if ((*(ushort *)(piVar11[0x32] + 0x2a) & 0x100) == 0) {
LAB_8279f620:
            bVar6 = false;
          }
          else {
            iVar15 = fn_8268ACE8(piVar11[0x32] + 0x10);
            bVar6 = true;
            if (iVar15 == 0) goto LAB_8279f620;
          }
          if (bVar6) {
            uVar25 = *(ushort *)(iVar28 + 6) | 0x80;
          }
          else {
            uVar25 = *(ushort *)(iVar28 + 6) & 0xff7f;
          }
          *(ushort *)(iVar28 + 6) = uVar25;
        }
        if (*(short *)(piVar12 + 2) == 9) {
          uVar24 = piVar11[0xb8];
          if (uVar24 < (uint)piVar11[0xb7]) {
            iVar15 = *(int *)(uVar24 * 4 + iVar14);
            piVar11[0xb8] = uVar24 + 1;
            iVar15 = iVar15 * 0x14;
            if (iVar15 <= piVar11[0x148]) goto LAB_8279fa1c;
            lStack_130 = (longlong)(iVar15 - piVar11[0x148]);
            fVar4 = (float)lStack_130;
          }
          else {
            dVar43 = (double)fn_82F68918((double)(float)((double)(float)((double)(float)piVar11[
                                                  0x149] * dVar41 + dVar40) * dVar39));
            lStack_160 = (longlong)piVar11[0x148];
            dVar31 = (double)(float)((double)(float)dVar43 * dVar38);
            dVar43 = (double)fn_82F68918((double)(float)((double)(float)((double)lStack_160 +
                                                                         dVar31) / dVar31));
            lStack_158 = (longlong)piVar11[0x148];
            fVar4 = (float)((double)(float)dVar43 * dVar31) - (float)lStack_158;
          }
          piVar11[0x144] = (int)fVar4;
        }
LAB_8279fa1c:
        uVar25 = *(ushort *)(iVar28 + 4);
        *piVar29 = iVar28;
        piVar11[0x13] = (uint)(uVar25 >> 0xc) + piVar11[0x13];
        uVar25 = *(ushort *)(piVar12 + 2);
        piVar11[8] = piVar11[0x144];
        piVar11[7] = piVar11[0x143];
        piVar11[0x11] = piVar11[0x148];
        piVar11[6] = (uint)uVar25;
        if ((*(ushort *)(piVar11[0x32] + 0x2a) >> 1 & 1) != 0) {
          lStack_148 = (longlong)*(short *)(piVar11[0x32] + 0x24);
          piVar11[8] = (int)((float)lStack_148 + (float)piVar11[0x144]);
        }
        piVar11[9] = piVar11[0x146];
        if ((*piVar17 == 0) || (bVar6 = false, (uint)piVar11[0x28] <= (uint)piVar11[0x27])) {
          bVar6 = true;
        }
        if (!bVar6) {
          piVar11[0x27] = piVar11[0x27] + 1;
        }
      }
    }
    fn_8279A300(piVar29,piVar11[0xb9]);
  } while( true );
}

