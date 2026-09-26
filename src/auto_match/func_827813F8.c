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
extern unsigned int *auStack_7c;
extern int fn_8277E998();
extern int fn_82780C88();
extern int fn_82781330();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_80;


/* WARNING: Type propagation algorithm not settling */

undefined8 fn_827813F8(int param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  char cVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  uint uVar26;
  float *pfVar27;
  uint *puVar28;
  uint uVar29;
  uint *puVar30;
  uint uVar31;
  ulonglong uVar32;
  float *pfVar34;
  ulonglong uVar33;
  ulonglong uVar35;
  float *pfVar36;
  uint *puVar37;
  bool bVar38;
  bool bVar39;
  double dVar40;
  uint uStack_80;
  uint auStack_7c [31];
  
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  puVar28 = (uint *)(param_1 + 0x194);
  puVar30 = (uint *)(param_1 + 0x1a4);
  puVar37 = *(uint **)(*(int *)((param_2 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x160)) +
                      (param_2 & 0x3f) * 0x18);
  if (puVar37 != (uint *)0x0) {
    bVar38 = true;
    pfVar36 = (float *)(*(int *)(((*puVar37 & 0xbfffffff) >> 8 & 0xfffffc) +
                                *(int *)(param_1 + 0x110)) + (*puVar37 & 0x3ff) * 8);
    dVar40 = (double)lbl_821AAD20;
    pfVar27 = pfVar36;
    pfVar25 = pfVar36;
    pfVar34 = pfVar36;
    do {
      pfVar24 = pfVar34;
      pfVar23 = pfVar25;
      if ((*puVar37 >> 0x1e & 1) == 0) {
        fn_8277E998(puVar30,puVar37);
        if ((bVar38) &&
           (pfVar25 = pfVar27 + 1, fVar1 = *pfVar27,
           pfVar24 = (float *)(*(int *)((*puVar37 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x110)) +
                              (*puVar37 & 0x3ff) * 8), pfVar27 = pfVar34,
           dVar40 < (double)((pfVar34[1] - *pfVar25) * (*pfVar24 - *pfVar34) -
                            (pfVar24[1] - pfVar34[1]) * (*pfVar34 - fVar1)))) {
          bVar38 = false;
        }
      }
      else {
        uStack_80 = *puVar37 & 0xbfffffff;
        fn_8277E998(puVar28,&uStack_80);
        if ((bVar38) &&
           (pfVar34 = pfVar36 + 1, fVar1 = *pfVar36,
           pfVar23 = (float *)(*(int *)(((*puVar37 & 0xbfffffff) >> 8 & 0xfffffc) +
                                       *(int *)(param_1 + 0x110)) + (*puVar37 & 0x3ff) * 8),
           pfVar36 = pfVar25,
           (double)((pfVar25[1] - *pfVar34) * (*pfVar23 - *pfVar25) -
                   (pfVar23[1] - pfVar25[1]) * (*pfVar25 - fVar1)) < dVar40)) {
          bVar38 = false;
        }
      }
      pfVar25 = pfVar23;
      pfVar34 = pfVar24;
      puVar37 = (uint *)puVar37[1];
    } while (puVar37 != (uint *)0x0);
    if ((*puVar28 < 2) || (*puVar30 < 2)) {
      return 0;
    }
    if (!bVar38) {
      puVar37 = (uint *)(param_1 + 0x174);
      uVar31 = 1;
      iVar8 = *(int *)**(undefined4 **)(param_1 + 0x1a0);
      iVar9 = *(int *)**(undefined4 **)(param_1 + 0x1b0);
      *(undefined4 *)(param_1 + 0x174) = 0;
      bVar38 = iVar9 == iVar8;
      uVar32 = (ulonglong)bVar38;
      uStack_80 = *(uint *)**(undefined4 **)(param_1 + 0x1a0) | 0x40000000;
      fn_8277E998(puVar37,&uStack_80);
      uVar10 = *(uint *)(**(int **)(param_1 + 0x1a0) + 4);
      if (uVar10 < *(uint *)(**(int **)(param_1 + 0x1b0) + (uint)bVar38 * 4)) {
        uStack_80 = uVar10 | 0x40000000;
        uVar31 = 2;
        fn_8277E998(puVar37,&uStack_80);
      }
      else {
        fn_8277E998(puVar37);
        uVar32 = uVar32 + 1;
      }
      uVar10 = *puVar28;
      uVar29 = uVar31 - 1;
      uVar20 = *puVar30;
      do {
        if (uVar10 <= uVar31) {
          if ((ulonglong)uVar20 <= (uVar32 & 0xffffffff)) {
            uVar10 = *puVar37;
            uVar17 = *(undefined4 *)
                      (*(int *)((*puVar28 - 1 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) +
                      ((*puVar28 - 1) * 4 & 0x3fc));
            while( true ) {
              if (uVar10 < 2) {
                return 1;
              }
              uVar10 = *(uint *)(*(int *)((*puVar37 - 1 >> 6 & 0x3fffffc) +
                                         *(int *)(param_1 + 0x180)) + ((*puVar37 - 1) * 4 & 0x3fc));
              if (*puVar37 != 0) {
                *puVar37 = *puVar37 - 1;
              }
              iVar8 = *(int *)(((uint)(((ulonglong)*puVar37 - 1 & 0xffffffff) >> 6) & 0x3fffffc) +
                              *(int *)(param_1 + 0x180));
              iVar9 = (int)(((ulonglong)*puVar37 - 1 & 0xff) << 2);
              if ((uVar10 >> 0x1e & 1) == 0) {
                uVar31 = *(uint *)(iVar8 + iVar9);
                uVar20 = uVar10;
              }
              else {
                uVar20 = *(uint *)(iVar8 + iVar9);
                uVar31 = uVar10;
              }
              cVar16 = fn_82781330(param_1,uVar17,uVar31,uVar20);
              if (cVar16 == '\0') break;
              uVar10 = *puVar37;
            }
            return 0;
          }
          uVar35 = (ulonglong)
                   *(uint *)(*(int *)(((uint)uVar32 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1b0)) +
                            ((uint)((uVar32 & 0xffffffff) << 2) & 0x3fc));
          goto LAB_82781690;
        }
        if ((uVar32 & 0xffffffff) < (ulonglong)uVar20) {
          if ((uVar32 & 0xffffffff) == 0) {
            uVar33 = (ulonglong)
                     *(uint *)(*(int *)((uVar31 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) +
                              (uVar31 & 0xff) * 4);
            uVar35 = (ulonglong)*(uint *)**(undefined4 **)(param_1 + 0x1b0);
            if (uVar33 < uVar35) goto LAB_8278176c;
            uVar32 = 1;
          }
          else {
            iVar8 = *(int *)(param_1 + 0x110);
            uVar11 = *(uint *)(*(int *)((uVar31 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) +
                              (uVar31 & 0xff) * 4);
            uVar33 = (ulonglong)uVar11;
            uVar26 = *(uint *)(*(int *)(((uint)(uVar32 - 1) >> 6 & 0x3fffffc) +
                                       *(int *)(param_1 + 0x1b0)) +
                              ((uint)((uVar32 - 1 & 0xffffffff) << 2) & 0x3fc));
            uVar22 = *(uint *)(*(int *)((uVar29 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) +
                              (uVar29 & 0xff) * 4);
            iVar14 = (uVar11 & 0x3ff) * 8;
            iVar15 = (uVar22 & 0x3ff) * 8;
            iVar9 = *(int *)((uVar11 >> 8 & 0xfffffc) + iVar8);
            pfVar27 = (float *)(*(int *)((uVar26 >> 8 & 0xfffffc) + iVar8) + (uVar26 & 0x3ff) * 8);
            iVar13 = *(int *)((uVar22 >> 8 & 0xfffffc) + iVar8);
            iVar21 = iVar9 + iVar14;
            uVar11 = *(uint *)(*(int *)(((uint)uVar32 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1b0))
                              + ((uint)((uVar32 & 0xffffffff) << 2) & 0x3fc));
            uVar35 = (ulonglong)uVar11;
            fVar6 = *(float *)(iVar9 + iVar14);
            fVar1 = *pfVar27;
            fVar12 = fVar6 - fVar1;
            fVar7 = *(float *)(iVar13 + iVar15);
            fVar5 = *(float *)(iVar21 + 4);
            fVar2 = *(float *)(iVar13 + iVar15 + 4);
            pfVar25 = (float *)(*(int *)((uVar11 >> 8 & 0xfffffc) + iVar8) + (uVar11 & 0x3ff) * 8);
            bVar38 = (double)((pfVar27[1] - fVar2) * fVar12 - (fVar5 - pfVar27[1]) * (fVar1 - fVar7)
                             ) <= dVar40;
            fVar3 = *pfVar25;
            fVar4 = pfVar25[1];
            bVar39 = (double)((pfVar27[1] - fVar2) * (fVar3 - fVar1) -
                             (fVar4 - pfVar27[1]) * (fVar1 - fVar7)) <= dVar40;
            if ((bVar38) && (bVar39)) {
              bVar38 = (double)((pfVar25[1] - pfVar27[1]) * (fVar6 - fVar3) -
                               (fVar5 - pfVar25[1]) * (fVar3 - fVar1)) <= dVar40;
              fVar1 = *(float *)(iVar21 + 4);
              bVar39 = dVar40 <= (double)((fVar1 - fVar2) * (fVar3 - fVar6) -
                                         (fVar4 - fVar1) * (fVar6 - fVar7));
            }
            if ((bVar38) && (bVar39)) {
              if ((fVar4 - fVar2) * (fVar4 - fVar2) + (fVar3 - fVar7) * (fVar3 - fVar7) <=
                  (fVar5 - pfVar27[1]) * (fVar5 - pfVar27[1]) + fVar12 * fVar12) {
LAB_82781690:
                uVar32 = uVar32 + 1;
                goto LAB_82781694;
              }
            }
            else if (!bVar38) {
              if (!bVar39) {
                return 0;
              }
              goto LAB_82781690;
            }
LAB_8278176c:
            uVar35 = uVar33 | 0x40000000;
            uVar31 = uVar31 + 1;
            uVar29 = uVar29 + 1;
          }
        }
        else {
          uVar11 = uVar31 >> 6;
          uVar26 = uVar31 & 0xff;
          uVar31 = uVar31 + 1;
          uVar29 = uVar29 + 1;
          uVar35 = (ulonglong)
                   *(uint *)(*(int *)((uVar11 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) + uVar26 * 4
                            ) | 0x40000000;
        }
LAB_82781694:
        uVar11 = *puVar37;
        uVar33 = uVar35 >> 0x1e & 1;
        uStack_80 = (uint)uVar35;
        auStack_7c[0] =
             *(uint *)(*(int *)((uVar11 - 1 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x180)) +
                      ((uVar11 - 1) * 4 & 0x3fc));
        if (uVar33 == ((ulonglong)(auStack_7c[0] >> 0x1e) & 1)) {
          if (1 < *puVar37) {
            uVar11 = uStack_80 & 0xbfffffff;
            do {
              iVar8 = *(int *)(param_1 + 0x110);
              uVar26 = *puVar37 - 1;
              uVar22 = *puVar37 - 2;
              pfVar27 = (float *)(*(int *)(iVar8 + (uVar11 >> 8 & 0xfffffc)) +
                                 ((uint)((uVar35 & 0xbfffffff) << 3) & 0x1ff8));
              uVar26 = *(uint *)(*(int *)((uVar26 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x180)) +
                                (uVar26 * 4 & 0x3fc));
              uVar22 = *(uint *)(*(int *)((uVar22 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x180)) +
                                (uVar22 * 4 & 0x3fc));
              iVar13 = (uVar22 & 0x3ff) * 8;
              iVar9 = *(int *)(((uVar22 & 0xbfffffff) >> 8 & 0xfffffc) + iVar8);
              pfVar25 = (float *)(*(int *)(((uVar26 & 0xbfffffff) >> 8 & 0xfffffc) + iVar8) +
                                 (uVar26 & 0x3ff) * 8);
              fVar1 = pfVar25[1];
              fVar5 = *pfVar25;
              if ((uint)((double)((fVar1 - pfVar27[1]) * (*(float *)(iVar9 + iVar13) - fVar5) -
                                 (*(float *)(iVar9 + iVar13 + 4) - fVar1) * (fVar5 - *pfVar27)) <
                        dVar40) != (uVar26 >> 0x1e & 1)) break;
              uVar18 = uVar22;
              if ((uVar26 >> 0x1e & 1) != 0) {
                uVar18 = uVar26;
                uVar26 = uVar22;
              }
              cVar16 = fn_82781330(param_1,uVar35,uVar18,uVar26);
              if (cVar16 == '\0') {
                return 0;
              }
              if (*puVar37 != 0) {
                *puVar37 = *puVar37 - 1;
              }
            } while (1 < *puVar37);
          }
        }
        else {
          while (1 < uVar11) {
            uVar17 = *(undefined4 *)
                      (*(int *)((uVar11 - 1 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x180)) +
                      ((uVar11 - 1) * 4 & 0x3fc));
            if (*puVar37 != 0) {
              *puVar37 = *puVar37 - 1;
            }
            iVar8 = *(int *)(((uint)(((ulonglong)*puVar37 - 1 & 0xffffffff) >> 6) & 0x3fffffc) +
                            *(int *)(param_1 + 0x180));
            iVar9 = (int)(((ulonglong)*puVar37 - 1 & 0xff) << 2);
            if (uVar33 == 0) {
              uVar19 = *(undefined4 *)(iVar8 + iVar9);
            }
            else {
              uVar19 = uVar17;
              uVar17 = *(undefined4 *)(iVar8 + iVar9);
            }
            cVar16 = fn_82781330(param_1,uVar35,uVar17,uVar19);
            if (cVar16 == '\0') {
              return 0;
            }
            uVar11 = *puVar37;
          }
          if (*puVar37 != 0) {
            *puVar37 = *puVar37 - 1;
          }
          fn_8277E998(puVar37,auStack_7c);
        }
        fn_8277E998(puVar37,&uStack_80);
      } while( true );
    }
    fn_82780C88(param_1);
  }
  return 1;
}

