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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_480;
extern unsigned int *fStack_490;
extern unsigned int *fStack_494;
extern unsigned int fStack_498;
extern unsigned int fStack_49c;
extern unsigned int fStack_4a0;
extern int fn_8267FC98();
extern int fn_82680AC8();
extern int fn_82759140();
extern int fn_82759248();
extern int fn_82759ED8();
extern int fn_82F68918();
extern int fn_82F6A534();
extern int fn_82F6A580();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8201435C;
extern unsigned int lbl_820145FC;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_4bd;
extern unsigned int uStack_4be;
extern unsigned int uStack_4bf;
extern unsigned int uStack_4c0;
extern unsigned int uStack_81;
extern unsigned int uStack_82;
extern unsigned int uStack_83;
extern unsigned int uStack_84;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8275A5A0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar5;
  ulonglong uVar4;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 uStack_4c0;
  undefined1 uStack_4bf;
  undefined1 uStack_4be;
  undefined1 uStack_4bd;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  float fStack_490;
  undefined4 auStack_480 [255];
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  
  iVar5 = fn_82F6A534();
  iVar6 = 0;
  dVar19 = (double)lbl_82002AE0;
  dVar13 = dVar19;
  if (*(char *)(iVar5 + 8) != '\0') {
    dVar13 = (double)lbl_820145FC;
  }
  fn_82759ED8(dVar13,auStack_480,*(undefined4 *)(iVar5 + 0xc),*(undefined2 *)(iVar5 + 10));
  cVar2 = *(char *)(iVar5 + 9);
  if (cVar2 == '\x10') {
    iVar6 = fn_82680AC8(1,0x100,1,param_3);
    if ((iVar6 != 0) && (uVar7 = 0, *(int *)(iVar6 + 0xc) != 0)) {
      do {
        uVar8 = uVar7;
        if (0xff < uVar7) {
          uVar8 = 0xff;
        }
        uVar3 = auStack_480[uVar8];
        uStack_4be = (undefined1)((uint)uVar3 >> 8);
        uStack_4bf = (undefined1)((uint)uVar3 >> 0x10);
        uStack_4c0 = (undefined1)((uint)uVar3 >> 0x18);
        uStack_4bd = (undefined1)uVar3;
        fn_8267FC98(iVar6 + 8,uVar7,0,
                        CONCAT31(CONCAT21(CONCAT11(uStack_4c0,uStack_4bd),uStack_4be),uStack_4bf));
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(iVar6 + 0xc));
    }
  }
  else if (cVar2 == '\x12') {
    uVar4 = fn_82759248(iVar5,param_2);
    iVar6 = fn_82680AC8(1,uVar4,uVar4,param_3);
    if (iVar6 != 0) {
      uVar9 = uVar4 - 1;
      uVar10 = 1;
      dVar17 = (double)lbl_82002C5C;
      dVar13 = (double)(float)((double)*(uint *)(iVar6 + 0x10) * dVar17);
      if (1 < (uVar9 & 0xffffffff)) {
        dVar21 = (double)(float)(dVar19 / (double)(float)(dVar13 - dVar19));
        dVar19 = (double)lbl_8201435C;
        do {
          uVar11 = 1;
          fVar1 = (float)((double)(float)((double)(uVar10 & 0xffffffff) - dVar13) + dVar17);
          dVar18 = (double)(fVar1 * fVar1);
          do {
            dVar20 = (double)(float)((double)(float)((double)(uVar11 & 0xffffffff) - dVar13) +
                                    dVar17);
            dVar20 = (double)fn_82F68918((double)(float)((double)(float)((double)SQRT((float)(
                                                  dVar20 * dVar20 + dVar18)) * dVar21) * dVar19 +
                                                  dVar17));
            uVar7 = (uint)dVar20;
            if (0xff < (int)uVar7) {
              uVar7 = 0xff;
            }
            if (0xff < uVar7) {
              uVar7 = 0xff;
            }
            uVar3 = auStack_480[uVar7];
            uStack_4be = (undefined1)((uint)uVar3 >> 8);
            uStack_4bf = (undefined1)((uint)uVar3 >> 0x10);
            uStack_4c0 = (undefined1)((uint)uVar3 >> 0x18);
            uStack_4bd = (undefined1)uVar3;
            fn_8267FC98(iVar6 + 8,uVar11,uVar10,
                            CONCAT31(CONCAT21(CONCAT11(uStack_4c0,uStack_4bd),uStack_4be),uStack_4bf
                                    ));
            uVar11 = uVar11 + 1;
          } while ((uVar11 & 0xffffffff) < (uVar9 & 0xffffffff));
          uVar10 = uVar10 + 1;
        } while ((uVar10 & 0xffffffff) < (uVar9 & 0xffffffff));
      }
      uVar9 = 1;
      if (1 < (uVar4 & 0xffffffff)) {
        iVar5 = iVar6 + 8;
        uVar3 = CONCAT31(CONCAT21(CONCAT11(uStack_84,uStack_81),uStack_82),uStack_83);
        do {
          fn_8267FC98(iVar5,uVar9,0,uVar3);
          fn_8267FC98(iVar5,(ulonglong)*(uint *)(iVar6 + 0xc) - 1,uVar9,uVar3);
          fn_8267FC98(iVar5,(*(uint *)(iVar6 + 0xc) - uVar9) + -1,
                          (ulonglong)*(uint *)(iVar6 + 0x10) - 1,uVar3);
          fn_8267FC98(iVar5,0,(*(uint *)(iVar6 + 0x10) - uVar9) + -1,uVar3);
          uVar9 = uVar9 + 1;
        } while ((uVar9 & 0xffffffff) < (uVar4 & 0xffffffff));
      }
    }
  }
  else if (cVar2 == '\x13') {
    uVar4 = fn_82759248(iVar5,param_2);
    iVar6 = fn_82680AC8(1,uVar4,uVar4,param_3);
    if (iVar6 != 0) {
      uVar9 = uVar4 - 1;
      dVar21 = (double)lbl_82002C5C;
      fStack_498 = lbl_821AAD20;
      dVar17 = (double)(float)((double)*(uint *)(iVar6 + 0x10) * dVar21);
      fStack_4a0 = (float)(dVar17 - dVar19);
      dVar13 = (double)fStack_4a0;
      fStack_49c = (float)((double)*(float *)(iVar5 + 0x10) * dVar13);
      fn_82759140(&fStack_4a0);
      uVar10 = 1;
      if (1 < (uVar9 & 0xffffffff)) {
        dVar13 = (double)(float)(dVar19 / dVar13);
        dVar18 = (double)fStack_498;
        dVar20 = (double)fStack_49c;
        dVar19 = (double)lbl_8201435C;
        do {
          uVar11 = 1;
          dVar12 = (double)(float)((double)(float)((double)(float)((double)(uVar10 & 0xffffffff) -
                                                                  dVar17) + dVar21) - dVar18);
          dVar16 = (double)(float)(dVar20 * dVar12);
          dVar15 = (double)(float)(dVar12 * dVar12);
          dVar12 = (double)(float)(dVar18 * dVar12);
          do {
            dVar14 = (double)(float)((double)(float)((double)(float)((double)(uVar11 & 0xffffffff) -
                                                                    dVar17) + dVar21) - dVar20);
            fVar1 = (float)(dVar18 * dVar14 - dVar16);
            dVar14 = (double)fn_82F68918((double)(float)((double)(float)((double)((float)((double)(
                                                  float)(dVar20 * dVar14 +
                                                        (double)SQRT(ABS((float)(dVar14 * dVar14 +
                                                                                dVar15) * fStack_494
                                                                         - fVar1 * fVar1))) + dVar12
                                                  ) * fStack_490) * dVar13) * dVar19 + dVar21));
            uVar7 = (uint)dVar14;
            if (0xff < (int)uVar7) {
              uVar7 = 0xff;
            }
            if (0xff < uVar7) {
              uVar7 = 0xff;
            }
            uVar3 = auStack_480[uVar7];
            uStack_4be = (undefined1)((uint)uVar3 >> 8);
            uStack_4c0 = (undefined1)((uint)uVar3 >> 0x18);
            uStack_4bd = (undefined1)uVar3;
            uStack_4bf = (undefined1)((uint)uVar3 >> 0x10);
            fn_8267FC98(iVar6 + 8,uVar11,uVar10,
                            CONCAT31(CONCAT21(CONCAT11(uStack_4c0,uStack_4bd),uStack_4be),uStack_4bf
                                    ));
            uVar11 = uVar11 + 1;
          } while ((uVar11 & 0xffffffff) < (uVar9 & 0xffffffff));
          uVar10 = uVar10 + 1;
        } while ((uVar10 & 0xffffffff) < (uVar9 & 0xffffffff));
      }
      uVar9 = 1;
      if (1 < (uVar4 & 0xffffffff)) {
        iVar5 = iVar6 + 8;
        uVar3 = CONCAT31(CONCAT21(CONCAT11(uStack_84,uStack_81),uStack_82),uStack_83);
        do {
          fn_8267FC98(iVar5,uVar9,0,uVar3);
          fn_8267FC98(iVar5,(ulonglong)*(uint *)(iVar6 + 0xc) - 1,uVar9,uVar3);
          fn_8267FC98(iVar5,(*(uint *)(iVar6 + 0xc) - uVar9) + -1,
                          (ulonglong)*(uint *)(iVar6 + 0x10) - 1,uVar3);
          fn_8267FC98(iVar5,0,(*(uint *)(iVar6 + 0x10) - uVar9) + -1,uVar3);
          uVar9 = uVar9 + 1;
        } while ((uVar9 & 0xffffffff) < (uVar4 & 0xffffffff));
      }
    }
  }
  fn_82F6A580(iVar6);
  return;
}

