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
#define ZEXT48(x) ((U64)((U32)(x)))
#define NAN(x) ((x) != (x))
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern unsigned int fStack_b8;
extern unsigned int fStack_d0;
extern int fn_82522D98();
extern int fn_82522ED8();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195634;
extern unsigned int lbl_82195D44;
extern unsigned int lbl_821CA820;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_821CEA60;
extern unsigned int lbl_831E796C;
extern unsigned int lbl_8329E430;
extern unsigned int lbl_8329E440;
extern unsigned int stack0x00000000;
extern unsigned int uStack_c0;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorAddFloatingPoint();
extern V16 vectorLogicalAnd();
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


undefined8 fn_82609158(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  float fVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float fVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int in_r0;
  int iVar15;
  short *psVar16;
  ushort *puVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  ushort uVar28;
  int iVar26;
  char *pcVar27;
  undefined2 *puVar29;
  undefined1 *puVar30;
  int iVar31;
  float *pfVar32;
  short sVar33;
  float *pfVar34;
  ulonglong uVar35;
  int iVar36;
  double dVar37;
  double dVar38;
  undefined1 in_vs32 [16];
  undefined1 auVar39 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  float fStack_d0;
  undefined8 uStack_c0;
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  
  dVar38 = (double)lbl_821CC160;
  if (*(short *)(param_1 + 0xb0) != 0) {
    if ((lbl_8329E440 & 1) == 0) {
      lbl_8329E440 = lbl_8329E440 | 1;
      puVar8 = (undefined4 *)((uint)(&lbl_821CEA60 + in_r0) & 0xfffffff0);
      uVar21 = *puVar8;
      uVar42 = puVar8[1];
      uVar43 = puVar8[2];
      uVar44 = puVar8[3];
      puVar8 = (undefined4 *)((uint)(&lbl_8329E430 + in_r0) & 0xfffffff0);
      *puVar8 = uVar21;
      puVar8[1] = uVar42;
      puVar8[2] = uVar43;
      puVar8[3] = uVar44;
    }
    else {
      puVar8 = (undefined4 *)((uint)(&lbl_8329E430 + in_r0) & 0xfffffff0);
      uVar21 = *puVar8;
      uVar42 = puVar8[1];
      uVar43 = puVar8[2];
      uVar44 = puVar8[3];
    }
    iVar24 = *(int *)(param_1 + 0xa0);
    uVar18 = *(uint *)(param_1 + 0xa4);
    puVar19 = (uint *)(param_1 + 0xa0);
    puVar8 = (undefined4 *)(iVar24 + 0x10U & 0xfffffff0);
    uVar45 = *puVar8;
    uVar46 = puVar8[1];
    uVar47 = puVar8[2];
    uVar48 = puVar8[3];{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs44,in_vs32); memcpy(auVar41, &_vt0, 16); }{ V16 _vt1 = vectorAddFloatingPoint(in_vs44,in_vs32); memcpy(auVar40, &_vt1, 16); }
    puVar8 = (undefined4 *)((int)&fStack_b0 + in_r0 & 0xfffffff0);
    *puVar8 = in_register_000100d0;
    puVar8[1] = in_register_000100d4;
    puVar8[2] = in_register_000100d8;
    puVar8[3] = in_vr13;
    if (iVar24 + 0x560U < uVar18) {
      lVar25 = (ulonglong)((uVar18 - (iVar24 + 0x560)) - 1) / 0x560 + 1;
      do {{ V16 _vt2 = vectorSubtractFloatingPoint(in_vs43,in_vs32); memcpy(auVar39, &_vt2, 16); }{ V16 _vt3 = vectorAddFloatingPoint(in_vs43,in_vs32); memcpy(in_vs43, &_vt3, 16); }{ V16 _vt4 = vectorMinimumFloatingPoint(auVar41,auVar39); memcpy(auVar41, &_vt4, 16); }{ V16 _vt5 = vectorMaximumFloatingPoint(auVar40,in_vs43); memcpy(auVar40, &_vt5, 16); }
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      puVar8 = (undefined4 *)((int)&fStack_b0 + in_r0 & 0xfffffff0);
      *puVar8 = in_register_000100d0;
      puVar8[1] = in_register_000100d4;
      puVar8[2] = in_register_000100d8;
      puVar8[3] = in_vr13;
    }{ V16 _vt6 = vectorSubtractFloatingPoint(auVar40,auVar41); memcpy(auVar40, &_vt6, 16); }
    puVar8 = (undefined4 *)(param_1 + 0x20U & 0xfffffff0);
    *puVar8 = in_register_000100d0;
    puVar8[1] = in_register_000100d4;
    puVar8[2] = in_register_000100d8;
    puVar8[3] = in_vr13;
    fVar4 = lbl_8218E8E8;
    puVar8 = (undefined4 *)(param_1 + 0x30U & 0xfffffff0);
    *puVar8 = uVar45;
    puVar8[1] = uVar46;
    puVar8[2] = uVar47;
    puVar8[3] = uVar48;
    puVar8 = (undefined4 *)((int)&uStack_c0 + in_r0 & 0xfffffff0);
    *puVar8 = uVar21;
    puVar8[1] = uVar42;
    puVar8[2] = uVar43;
    puVar8[3] = uVar44;
    iVar24 = (int)((((U64)(uStack_c0) >> 0) & 0xFFFFFFFF) + fVar4);
    iVar1 = (int)((((U64)(uStack_c0) >> 32) & 0xFFFFFFFF) + fVar4);
    iVar2 = (int)(fStack_b8 + fVar4);
    uStack_c0 = (longlong)iVar2;
    uVar35 = (longlong)(iVar2 * iVar1) * (longlong)iVar24;
    iVar15 = fn_82522D98((uVar35 & 0x7fffffff) << 1);
    if (0 < (int)uVar35) {
      puVar29 = (undefined2 *)(iVar15 + -2);
      uVar11 = uVar35 & 0xffffffff;
      while (uVar11 != 0) {
        puVar29 = puVar29 + 1;
        *puVar29 = 0xffff;
        uVar35 = uVar35 - 1;
        uVar11 = uVar35;
      }
    }
    uVar18 = *puVar19;
    if (uVar18 < *(uint *)(param_1 + 0xa4)) {
      puVar30 = (undefined1 *)(uVar18 - 0x512);
      lVar25 = (ulonglong)((*(uint *)(param_1 + 0xa4) - uVar18) - 1) / 0x560 + 1;
      sVar33 = 0;
      do {
        pfVar34 = (float *)(puVar30 + 0x52a);
        pfVar32 = (float *)(puVar30 + 0x522);
        uVar18 = (uint)(*(float *)(puVar30 + 0x526) - fStack_ac);
        uStack_c0 = (longlong)(int)uVar18;
        puVar30[0x55e] = (char)(int)(*pfVar32 - fStack_b0);
        puVar30[0x55f] = (char)uVar18;
        puVar30 = puVar30 + 0x560;
        *puVar30 = (char)(int)(*pfVar34 - fStack_a8);
        *(short *)((((uVar18 & 0xff) * iVar2 + ((int)(*pfVar34 - fStack_a8) & 0xffU)) * iVar24 +
                   ((int)(*pfVar32 - fStack_b0) & 0xffU)) * 2 + iVar15) = sVar33;
        lVar25 = lVar25 + -1;
        sVar33 = sVar33 + 1;
      } while (lVar25 != 0);
    }
    fVar14 = lbl_82195D44;
    fVar13 = lbl_82195634;
    fVar12 = lbl_82193CC0;
    fVar4 = lbl_82193AF0;
    sVar33 = 0;
    uVar5 = *(uint *)(param_1 + 0xa4);
    for (uVar18 = *puVar19; uVar18 < uVar5; uVar18 = uVar18 + 0x560) {
      iVar36 = 0;
      if ('\0' < *(char *)(uVar18 + 0x41)) {
        psVar16 = (short *)(uVar18 + 0x480);
        puVar17 = (ushort *)(uVar18 + 0xd0);
        do {
          if (fVar13 <= *(float *)(puVar17 + 8)) {
            if (fVar12 < *(float *)(puVar17 + 8)) {
              uVar28 = *puVar17 | 2;
              goto LAB_826093ec;
            }
          }
          else {
            uVar28 = *puVar17 | 1;
LAB_826093ec:
            *puVar17 = uVar28;
          }
          if (fVar13 <= *(float *)(puVar17 + 10)) {
            if (fVar12 < *(float *)(puVar17 + 10)) {
              uVar28 = *puVar17 | 8;
              goto LAB_82609418;
            }
          }
          else {
            uVar28 = *puVar17 | 4;
LAB_82609418:
            *puVar17 = uVar28;
          }
          if (fVar13 <= *(float *)(puVar17 + 0xc)) {
            if (fVar12 < *(float *)(puVar17 + 0xc)) {
              uVar28 = *puVar17 | 0x20;
              goto LAB_82609444;
            }
          }
          else {
            uVar28 = *puVar17 | 0x10;
LAB_82609444:
            *puVar17 = uVar28;
          }
          if (*psVar16 == -1) {
            puVar8 = (undefined4 *)((uint)(&lbl_821CA820 + in_r0) & 0xfffffff0);
            uVar21 = puVar8[1];
            uVar42 = puVar8[2];
            uVar43 = puVar8[3];{ V16 _vt7 = vectorLogicalAnd(auVar40,auVar41); memcpy(auVar41, &_vt7, 16); }
            uStack_c0 = 0;
            fStack_b8 = 0.0;
            puVar9 = (undefined4 *)((int)&fStack_b0 + in_r0 & 0xfffffff0);
            *puVar9 = *puVar8;
            puVar9[1] = uVar21;
            puVar9[2] = uVar42;
            puVar9[3] = uVar43;
            if (fStack_ac <= fStack_b0) {
              iVar26 = 2;
              if (fStack_a8 <= fStack_b0) {
                iVar26 = 0;
              }
            }
            else if (fStack_a8 <= fStack_ac) {
              iVar26 = 1;
            }
            else {
              iVar26 = 2;
            }
            uVar21 = 0xffffffff;
            if (dVar38 <= (double)*(float *)(puVar17 + (iVar26 + 4) * 2)) {
              uVar21 = 1;
            }
            *(undefined4 *)((int)&uStack_c0 + iVar26 * 4) = uVar21;
            if ((((int)(uint)*(byte *)(uVar18 + 0x4c) < iVar24) &&
                ((int)(uint)*(byte *)(uVar18 + 0x4d) < iVar1)) &&
               ((int)(uint)*(byte *)(uVar18 + 0x4e) < iVar2)) {
              uVar20 = (uint)*(ushort *)
                              ((((uint)*(byte *)(uVar18 + 0x4d) * iVar2 +
                                (uint)*(byte *)(uVar18 + 0x4e)) * iVar24 +
                               (uint)*(byte *)(uVar18 + 0x4c)) * 2 + iVar15);
            }
            else {
              uVar20 = 0xffff;
            }
            if ((*(float *)(puVar17 + 0x16) <= fVar4) && (uVar20 != 0xffff)) {
              iVar31 = 0;
              iVar26 = *(ushort *)(param_1 + 0xac) * uVar20 + *puVar19;
              cVar3 = *(char *)(iVar26 + 0x41);
              if ('\0' < cVar3) {
                iVar22 = iVar26 + 0xd0;
                do {
                  uVar21 = storeVectorElementWordIndexed(auVar41,0,ZEXT48(&stack0x00000000) - 0xd0);
                  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0xd0) = uVar21;
                  fStack_d0 = (float)(iVar1 >> 0x1f);
                  if (fStack_d0 < fVar14) {
                    dVar37 = (double)(*(float *)(puVar17 + 4) - *(float *)(iVar22 + 8));
                    iVar23 = iVar31 * 8 + iVar26;
                    fVar10 = *(float *)(iVar22 + 8);
                    if (*(float *)(&lbl_821954D8 +
                                  ((uint)(byte)((dVar37 < dVar38) << 2) |
                                  (uint)(NAN(dVar37) || NAN(dVar38)) << 2)) < 0.0) {
                      fVar10 = *(float *)(puVar17 + 4);
                    }
                    *(float *)(iVar23 + 0x484) = fVar10;
                    *(float *)(psVar16 + 2) = fVar10;
                    psVar16[1] = (short)iVar31;
                    *(short *)(iVar23 + 0x482) = (short)iVar36;
                    *psVar16 = (short)uVar20;
                    *(short *)((iVar31 + 0x90) * 8 + iVar26) = sVar33;
                    break;
                  }
                  iVar31 = iVar31 + 1;
                  iVar22 = iVar22 + 0x40;
                } while (iVar31 < cVar3);
              }
            }
            if (*psVar16 == -1) {
              *(char *)(uVar18 + 0x42) = *(char *)(uVar18 + 0x42) + '\x01';
              *puVar17 = *puVar17 | 0x80;
            }
          }
          iVar36 = iVar36 + 1;
          puVar17 = puVar17 + 0x20;
          psVar16 = psVar16 + 4;
        } while (iVar36 < *(char *)(uVar18 + 0x41));
      }
      sVar33 = sVar33 + 1;
    }
    fn_82522ED8();
  }
  pcVar6 = *(char **)(param_1 + 0xa0);
  pcVar7 = *(char **)(param_1 + 0xa4);
  pfVar34 = (float *)(param_1 + 0x144);
  puVar19 = &lbl_831E796C;
  do {
    uVar18 = *puVar19;
    dVar37 = dVar38;
    for (pcVar27 = pcVar6; pcVar27 < pcVar7; pcVar27 = pcVar27 + 0x560) {
      if (((*pcVar27 != '\x02') && ('\0' < pcVar27[0x42])) &&
         ((*(uint *)(param_1 + 0x144) & *(uint *)(pcVar27 + 0x4b4)) != 0)) {
        iVar24 = 0;
        if ('\0' < pcVar27[0x41]) {
          pfVar32 = (float *)(pcVar27 + 0xd8);
          do {
            if ((((uint)*(ushort *)(pfVar32 + -2) & (uVar18 | 0x80)) == (uVar18 | 0x80)) &&
               (0 < (int)uVar18)) {
              if ((int)uVar18 < 3) {
                fVar4 = pfVar32[2];
              }
              else if ((uVar18 == 4) || (uVar18 == 8)) {
                fVar4 = pfVar32[3];
              }
              else {
                if ((uVar18 != 0x10) && (uVar18 != 0x20)) goto LAB_82609730;
                fVar4 = pfVar32[4];
              }
              dVar37 = (double)(float)(ABS((double)(*pfVar32 * fVar4)) + dVar37);
            }
LAB_82609730:
            iVar24 = iVar24 + 1;
            pfVar32 = pfVar32 + 0x10;
          } while (iVar24 < pcVar27[0x41]);
        }
      }
    }
    puVar19 = puVar19 + 1;
    pfVar34 = pfVar34 + 1;
    *pfVar34 = (float)dVar37;
    if (-0x7ce1867d < (int)puVar19) {
      return 1;
    }
  } while( true );
}

