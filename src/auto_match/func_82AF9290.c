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
#define NAN(x) ((x) != (x))
extern double _seed_nan;
extern unsigned int *auStack_f8;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern int fn_82AA66A8();
extern int fn_82AD1270();
extern int fn_82AD17B0();
extern int fn_82AEFCD8();
extern int fn_82AF4BA8();
extern int fn_82B86888();
extern unsigned int lbl_821AAD20;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 fn_82AF9290(undefined8 param_1,int *param_2,int *param_3,int *param_4)

{
  uint *puVar1;
  uint *puVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  uint *puVar8;
  longlong lVar9;
  float *pfVar10;
  float fVar11;
  ulonglong uVar12;
  uint uVar14;
  ulonglong uVar13;
  uint uVar16;
  longlong lVar15;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 uVar22;
  int iVar23;
  longlong lVar24;
  ulonglong uVar25;
  double dVar26;
  float afStack_110 [2];
  uint *apuStack_108 [4];
  uint auStack_f8 [4];
  int *apiStack_e8 [6];
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float afStack_c0 [48];
  
  puVar8 = (uint *)*param_2;
  puVar1 = (uint *)*param_3;
  puVar2 = (uint *)*param_4;
  uVar21 = puVar8[3];
  uVar14 = puVar1[3];
  uVar16 = puVar2[3];
  uVar20 = *(uint *)(uVar21 + 8) >> 7 & 0x7f;
  if ((uVar20 == 0x7d) || (bVar5 = false, uVar20 == 0x7c)) {
    bVar5 = true;
  }
  if (bVar5) {
    uVar20 = *puVar8;
    fn_82AF4BA8(param_1,uVar21,uVar20 >> 0x19 & 7,uVar20 >> 5 & 0xff,uVar20 & 0x1f,afStack_c0);
    apuStack_108[0] = puVar8;
    auStack_f8[0] = uVar21;
    apiStack_e8[0] = param_2;
  }
  uVar20 = (uint)bVar5;
  uVar21 = *(uint *)(uVar14 + 8) >> 7 & 0x7f;
  if ((uVar21 == 0x7d) || (bVar6 = false, uVar21 == 0x7c)) {
    bVar6 = true;
  }
  if (bVar6) {
    uVar21 = *puVar1;
    fn_82AF4BA8(param_1,uVar14,uVar21 >> 0x19 & 7,uVar21 >> 5 & 0xff,uVar21 & 0x1f,
                  afStack_c0 + uVar20 * 4);
    apuStack_108[bVar5] = puVar1;
    auStack_f8[bVar5] = uVar14;
    uVar20 = uVar20 + 1;
    apiStack_e8[bVar5] = param_3;
  }
  uVar21 = *(uint *)(uVar16 + 8) >> 7 & 0x7f;
  if ((uVar21 == 0x7d) || (bVar5 = false, uVar21 == 0x7c)) {
    bVar5 = true;
  }
  uVar21 = uVar20;
  if (bVar5) {
    uVar21 = *puVar2;
    fn_82AF4BA8(param_1,uVar16,uVar21 >> 0x19 & 7,uVar21 >> 5 & 0xff,uVar21 & 0x1f,
                  afStack_c0 + uVar20 * 4);
    apuStack_108[uVar20] = puVar2;
    auStack_f8[uVar20] = uVar16;
    uVar21 = uVar20 + 1;
    apiStack_e8[uVar20] = param_4;
  }
  if (uVar21 != 1) {
    uVar14 = 0;
    uVar16 = 0;
    lVar24 = 3;
    do {
      uVar17 = uVar16 + 3;
      uVar20 = uVar16 >> 3;
      uVar18 = uVar16 & 0x1f;
      uVar16 = uVar16 + 4;
      uVar14 = ((2 << (uVar17 & 0x1f)) - 1U & *(uint *)((int)afStack_110 + (uVar20 & 0x1ffffffc)) &
               -1 << uVar18) >> uVar18 | uVar14;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    if ((uVar14 & 5) == 5) {
      return 0;
    }
    uVar16 = 0;
    if (uVar21 != 0) {
      lVar24 = 0;
      dVar26 = (double)lbl_821AAD20;
      do {
        iVar23 = (int)lVar24;
        if ((*(uint *)(*(int *)((int)auStack_f8 + iVar23) + 8) & 0x3f80) == 16000) {
          lVar9 = 0;
          uVar18 = 0;
          bVar6 = true;
          bVar5 = false;
          fStack_d0 = (float)dVar26;
          fStack_cc = (float)dVar26;
          uVar20 = **(uint **)((int)apuStack_108 + iVar23) >> 0x19;
          uVar19 = (ulonglong)uVar20 & 7;
          fStack_c8 = (float)dVar26;
          fStack_c4 = (float)dVar26;
          uVar13 = (ulonglong)(uint)(1 << (int)uVar19) - 1;
          if (uVar13 != 0) {
            pfVar10 = &fStack_d0;
            do {
              fVar11 = -(_seed_nan);
              afStack_110[0] = -(_seed_nan);
              lVar15 = 0;
              uVar25 = uVar19;
              if ((uVar20 & 7) != 0) {
                do {
                  if ((((uint)(1 << ((uint)lVar15 & 0x3f)) & uVar13) != 0) &&
                     (fVar3 = *(float *)((int)afStack_c0 +
                                        (int)((lVar24 + lVar15 & 0xffffffffU) << 2)),
                     (uint)fVar3 <= (uint)fVar11)) {
                    fVar11 = fVar3;
                  }
                  lVar15 = lVar15 + 1;
                  uVar25 = uVar25 - 1;
                  afStack_110[0] = fVar11;
                } while (uVar25 != 0);
              }
              lVar15 = 0;
              if ((uVar20 & 7) != 0) {
                uVar17 = 0;
                uVar25 = uVar19;
                do {
                  uVar12 = (ulonglong)(uint)(1 << ((uint)lVar15 & 0x3f));
                  if (((uVar12 & uVar13) != 0) &&
                     (*(float *)((int)afStack_c0 + (int)((lVar24 + lVar15 & 0xffffffffU) << 2)) ==
                      afStack_110[0])) {
                    uVar13 = uVar13 - uVar12;
                    uVar18 = uVar18 & ~(3 << (uVar17 & 0x3f)) | (int)lVar9 << (uVar17 & 0x3f);
                  }
                  lVar15 = lVar15 + 1;
                  uVar17 = uVar17 + 2;
                  uVar25 = uVar25 - 1;
                } while (uVar25 != 0);
              }
              *pfVar10 = afStack_110[0];
              if ((double)afStack_110[0] <= dVar26) {
                if ((double)afStack_110[0] < dVar26) {
                  bVar5 = true;
                }
              }
              else {
                bVar6 = false;
              }
              lVar9 = lVar9 + 1;
              pfVar10 = pfVar10 + 1;
            } while ((uVar13 & 0xffffffff) != 0);
          }
          uVar7 = fn_82B86888(param_1,lVar9,&fStack_d0,0);
          *(int *)((int)auStack_f8 + iVar23) = (int)uVar7;
          uVar22 = 0;
          if (((uVar14 & 4) != 0) && (uVar22 = 2, bVar5)) {
            if (!bVar6) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c0);
            }
            uVar22 = 6;
          }
          puVar8 = (uint *)fn_82AD17B0(param_1,uVar7);
          *puVar8 = (uint)(uVar19 << 0x19) | *puVar8 & 0xf1ffffff;
          fn_82AD1270(puVar8,uVar22);
          uVar20 = *puVar8;
          *(uint **)((int)apuStack_108 + iVar23) = puVar8;
          *puVar8 = (uVar18 & 0xff) << 5 | uVar20 & 0xffffe01f;
        }
        uVar16 = uVar16 + 1;
        lVar24 = lVar24 + 4;
      } while (uVar16 < uVar21);
    }
    puVar8 = apuStack_108[0];
    if ((2 < uVar21) && ((*apuStack_108[2] & 0x18) != (*apuStack_108[1] & 0x18))) {
      if ((*apuStack_108[2] & 0x18) != (*apuStack_108[0] & 0x18)) {
        return 0;
      }
      apuStack_108[0] = apuStack_108[1];
      apuStack_108[1] = puVar8;
    }
    if (uVar21 != 0) {
      iVar23 = 0;
      do {
        iVar4 = *(int *)((int)auStack_f8 + iVar23);
        **(undefined4 **)((int)apiStack_e8 + iVar23) = *(undefined4 *)((int)apuStack_108 + iVar23);
        if ((*(uint *)(iVar4 + 8) & 0x3f80) == 16000) {
          fn_82AEFCD8(iVar4);
          *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) | 0x1000000;
        }
        uVar21 = uVar21 - 1;
        iVar23 = iVar23 + 4;
      } while (uVar21 != 0);
    }
  }
  return 1;
}

