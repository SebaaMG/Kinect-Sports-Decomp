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
extern int fn_82C4E5E8();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200E1A8;
extern unsigned int lbl_8201467C;
extern unsigned int lbl_821AAD20;


void fn_82C45200(undefined8 param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7,float *param_8)

{
  float fVar1;
  ulonglong *puVar2;
  float fVar3;
  int iVar4;
  int iVar6;
  undefined8 uVar5;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  int iVar44;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  
  iVar6 = fn_82F6A548();
  puVar2 = *(ulonglong **)(iVar6 + 0x54);
  uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar8 = uVar7 + 0x10;
  uVar32 = 2;
  iVar44 = 0;
  iVar4 = 0;
  if ((uVar8 & 0xffffffff) < 2) {
    do {
      iVar44 = iVar4;
      if ((uVar8 & 0xffffffff) == 0) break;
      uVar32 = uVar32 - uVar8;
      *(int *)(puVar2 + 1) = (int)(uVar7 - uVar8);
      iVar44 = ((int)(*puVar2 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar32 & 0x3f)) + iVar44;
      *puVar2 = *puVar2 << (uVar8 & 0x7f);
      if ((longlong)(uVar7 - uVar8) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar8 = uVar7 + 0x10;
      iVar4 = iVar44;
    } while ((uVar8 & 0xffffffff) < (uVar32 & 0xffffffff));
  }
  *(int *)(puVar2 + 1) = (int)(uVar7 - uVar32);
  iVar44 = (int)(*puVar2 >> (0x40 - uVar32 & 0x7f)) + iVar44;
  *puVar2 = *puVar2 << (uVar32 & 0x7f);
  if ((longlong)(uVar7 - uVar32) < 0) {
    fn_82C4E5E8(puVar2);
  }
  *(int *)(iVar6 + 0x3c44) = iVar44;
  fVar3 = lbl_821AAD20;
  fVar1 = lbl_82002AE0;
  lVar20 = 0;
  dVar46 = (double)lbl_821AAD20;
  dVar45 = (double)lbl_82002AE0;
  if (iVar44 == 0) {
    *param_2 = lbl_82002AE0;
    uVar32 = 0xf;
    *param_3 = fVar3;
    *param_5 = fVar3;
    *param_6 = fVar1;
    puVar2 = *(ulonglong **)(iVar6 + 0x54);
    uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
    uVar8 = uVar7 + 0x10;
    if ((uVar8 & 0xffffffff) < 0xf) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar32 = uVar32 - uVar8;
        *(int *)(puVar2 + 1) = (int)(uVar7 - uVar8);
        lVar20 = (ulonglong)(uint)((int)(*puVar2 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar32 & 0x3f))
                 + lVar20;
        *puVar2 = *puVar2 << (uVar8 & 0x7f);
        if ((longlong)(uVar7 - uVar8) < 0) {
          fn_82C4E5E8(puVar2);
        }
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar8 = uVar7 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar32 & 0xffffffff));
    }
    uVar8 = *puVar2;
    *(int *)(puVar2 + 1) = (int)(uVar7 - uVar32);
    *puVar2 = uVar8 << (uVar32 & 0x7f);
    if ((longlong)(uVar7 - uVar32) < 0) {
      fn_82C4E5E8(puVar2);
    }
    puVar2 = *(ulonglong **)(iVar6 + 0x54);
    uVar33 = 0xf;
    lVar21 = 0;
    uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
    uVar9 = uVar7 + 0x10;
    if ((uVar9 & 0xffffffff) < 0xf) {
      do {
        if ((uVar9 & 0xffffffff) == 0) break;
        uVar33 = uVar33 - uVar9;
        *(int *)(puVar2 + 1) = (int)(uVar7 - uVar9);
        lVar21 = (ulonglong)(uint)((int)(*puVar2 >> (0x40 - uVar9 & 0x7f)) << ((uint)uVar33 & 0x3f))
                 + lVar21;
        *puVar2 = *puVar2 << (uVar9 & 0x7f);
        if ((longlong)(uVar7 - uVar9) < 0) {
          fn_82C4E5E8(puVar2);
        }
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar9 = uVar7 + 0x10;
      } while ((uVar9 & 0xffffffff) < (uVar33 & 0xffffffff));
    }
    uVar9 = *puVar2;
    *(int *)(puVar2 + 1) = (int)(uVar7 - uVar33);
    *puVar2 = uVar9 << (uVar33 & 0x7f);
    if ((longlong)(uVar7 - uVar33) < 0) {
      fn_82C4E5E8(puVar2);
    }
    puVar2 = *(ulonglong **)(iVar6 + 0x54);
    uVar34 = 0xf;
    lVar22 = 0;
    uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
    uVar10 = uVar7 + 0x10;
    if ((uVar10 & 0xffffffff) < 0xf) {
      do {
        if ((uVar10 & 0xffffffff) == 0) break;
        uVar34 = uVar34 - uVar10;
        *(int *)(puVar2 + 1) = (int)(uVar7 - uVar10);
        lVar22 = (ulonglong)
                 (uint)((int)(*puVar2 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar34 & 0x3f)) + lVar22;
        *puVar2 = *puVar2 << (uVar10 & 0x7f);
        if ((longlong)(uVar7 - uVar10) < 0) {
          fn_82C4E5E8(puVar2);
        }
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar10 = uVar7 + 0x10;
      } while ((uVar10 & 0xffffffff) < (uVar34 & 0xffffffff));
    }
    uVar10 = *puVar2;
    *(int *)(puVar2 + 1) = (int)(uVar7 - uVar34);
    *puVar2 = uVar10 << (uVar34 & 0x7f);
    if ((longlong)(uVar7 - uVar34) < 0) {
      fn_82C4E5E8(puVar2);
    }
    puVar2 = *(ulonglong **)(iVar6 + 0x54);
    uVar35 = 0xf;
    lVar23 = 0;
    uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
    uVar11 = uVar7 + 0x10;
    if ((uVar11 & 0xffffffff) < 0xf) {
      do {
        if ((uVar11 & 0xffffffff) == 0) break;
        uVar35 = uVar35 - uVar11;
        *(int *)(puVar2 + 1) = (int)(uVar7 - uVar11);
        lVar23 = (ulonglong)
                 (uint)((int)(*puVar2 >> (0x40 - uVar11 & 0x7f)) << ((uint)uVar35 & 0x3f)) + lVar23;
        *puVar2 = *puVar2 << (uVar11 & 0x7f);
        if ((longlong)(uVar7 - uVar11) < 0) {
          fn_82C4E5E8(puVar2);
        }
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar11 = uVar7 + 0x10;
      } while ((uVar11 & 0xffffffff) < (uVar35 & 0xffffffff));
    }
    uVar11 = *puVar2;
    *(int *)(puVar2 + 1) = (int)(uVar7 - uVar35);
    *puVar2 = uVar11 << (uVar35 & 0x7f);
    if ((longlong)(uVar7 - uVar35) < 0) {
      fn_82C4E5E8(puVar2);
    }
    dVar48 = (double)lbl_8201467C;
    dVar47 = (double)lbl_8200E1A8;
    *param_4 = (float)((double)((uVar9 >> (0x40 - uVar33 & 0x7f) & 0xffffffff) + lVar21 +
                                ((uVar8 >> (0x40 - uVar32 & 0x7f) & 0xffffffff) + lVar20 & 0x1ffff)
                                * 0x8000 & 0xffffffff) * dVar48 - dVar47);
    *param_7 = (float)((double)((uVar11 >> (0x40 - uVar35 & 0x7f) & 0xffffffff) + lVar23 +
                                ((uVar10 >> (0x40 - uVar34 & 0x7f) & 0xffffffff) + lVar22 & 0x1ffff)
                                * 0x8000 & 0xffffffff) * dVar48 - dVar47);
  }
  else if (iVar44 == 1) {
    *param_3 = lbl_821AAD20;
    uVar32 = 0xf;
    *param_5 = fVar3;
    puVar2 = *(ulonglong **)(iVar6 + 0x54);
    uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
    uVar8 = uVar7 + 0x10;
    if ((uVar8 & 0xffffffff) < 0xf) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar32 = uVar32 - uVar8;
        *(int *)(puVar2 + 1) = (int)(uVar7 - uVar8);
        lVar20 = (ulonglong)(uint)((int)(*puVar2 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar32 & 0x3f))
                 + lVar20;
        *puVar2 = *puVar2 << (uVar8 & 0x7f);
        if ((longlong)(uVar7 - uVar8) < 0) {
          fn_82C4E5E8(puVar2);
        }
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar8 = uVar7 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar32 & 0xffffffff));
    }
    uVar8 = *puVar2;
    *(int *)(puVar2 + 1) = (int)(uVar7 - uVar32);
    *puVar2 = uVar8 << (uVar32 & 0x7f);
    if ((longlong)(uVar7 - uVar32) < 0) {
      fn_82C4E5E8(puVar2);
    }
    puVar2 = *(ulonglong **)(iVar6 + 0x54);
    uVar33 = 0xf;
    lVar21 = 0;
    uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
    uVar9 = uVar7 + 0x10;
    if ((uVar9 & 0xffffffff) < 0xf) {
      do {
        if ((uVar9 & 0xffffffff) == 0) break;
        uVar33 = uVar33 - uVar9;
        *(int *)(puVar2 + 1) = (int)(uVar7 - uVar9);
        lVar21 = (ulonglong)(uint)((int)(*puVar2 >> (0x40 - uVar9 & 0x7f)) << ((uint)uVar33 & 0x3f))
                 + lVar21;
        *puVar2 = *puVar2 << (uVar9 & 0x7f);
        if ((longlong)(uVar7 - uVar9) < 0) {
          fn_82C4E5E8(puVar2);
        }
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar9 = uVar7 + 0x10;
      } while ((uVar9 & 0xffffffff) < (uVar33 & 0xffffffff));
    }
    uVar9 = *puVar2;
    *(int *)(puVar2 + 1) = (int)(uVar7 - uVar33);
    *puVar2 = uVar9 << (uVar33 & 0x7f);
    if ((longlong)(uVar7 - uVar33) < 0) {
      fn_82C4E5E8(puVar2);
    }
    puVar2 = *(ulonglong **)(iVar6 + 0x54);
    uVar34 = 0xf;
    lVar22 = 0;
    uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
    uVar10 = uVar7 + 0x10;
    if ((uVar10 & 0xffffffff) < 0xf) {
      do {
        if ((uVar10 & 0xffffffff) == 0) break;
        uVar34 = uVar34 - uVar10;
        *(int *)(puVar2 + 1) = (int)(uVar7 - uVar10);
        lVar22 = (ulonglong)
                 (uint)((int)(*puVar2 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar34 & 0x3f)) + lVar22;
        *puVar2 = *puVar2 << (uVar10 & 0x7f);
        if ((longlong)(uVar7 - uVar10) < 0) {
          fn_82C4E5E8(puVar2);
        }
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar10 = uVar7 + 0x10;
      } while ((uVar10 & 0xffffffff) < (uVar34 & 0xffffffff));
    }
    uVar10 = *puVar2;
    *(int *)(puVar2 + 1) = (int)(uVar7 - uVar34);
    *puVar2 = uVar10 << (uVar34 & 0x7f);
    if ((longlong)(uVar7 - uVar34) < 0) {
      fn_82C4E5E8(puVar2);
    }
    puVar2 = *(ulonglong **)(iVar6 + 0x54);
    uVar35 = 0xf;
    lVar23 = 0;
    uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
    uVar11 = uVar7 + 0x10;
    if ((uVar11 & 0xffffffff) < 0xf) {
      do {
        if ((uVar11 & 0xffffffff) == 0) break;
        uVar35 = uVar35 - uVar11;
        *(int *)(puVar2 + 1) = (int)(uVar7 - uVar11);
        lVar23 = (ulonglong)
                 (uint)((int)(*puVar2 >> (0x40 - uVar11 & 0x7f)) << ((uint)uVar35 & 0x3f)) + lVar23;
        *puVar2 = *puVar2 << (uVar11 & 0x7f);
        if ((longlong)(uVar7 - uVar11) < 0) {
          fn_82C4E5E8(puVar2);
        }
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar11 = uVar7 + 0x10;
      } while ((uVar11 & 0xffffffff) < (uVar35 & 0xffffffff));
    }
    uVar11 = *puVar2;
    *(int *)(puVar2 + 1) = (int)(uVar7 - uVar35);
    *puVar2 = uVar11 << (uVar35 & 0x7f);
    if ((longlong)(uVar7 - uVar35) < 0) {
      fn_82C4E5E8(puVar2);
    }
    puVar2 = *(ulonglong **)(iVar6 + 0x54);
    uVar36 = 0xf;
    lVar24 = 0;
    uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
    uVar12 = uVar7 + 0x10;
    if ((uVar12 & 0xffffffff) < 0xf) {
      do {
        if ((uVar12 & 0xffffffff) == 0) break;
        uVar36 = uVar36 - uVar12;
        *(int *)(puVar2 + 1) = (int)(uVar7 - uVar12);
        lVar24 = (ulonglong)
                 (uint)((int)(*puVar2 >> (0x40 - uVar12 & 0x7f)) << ((uint)uVar36 & 0x3f)) + lVar24;
        *puVar2 = *puVar2 << (uVar12 & 0x7f);
        if ((longlong)(uVar7 - uVar12) < 0) {
          fn_82C4E5E8(puVar2);
        }
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar12 = uVar7 + 0x10;
      } while ((uVar12 & 0xffffffff) < (uVar36 & 0xffffffff));
    }
    uVar12 = *puVar2;
    *(int *)(puVar2 + 1) = (int)(uVar7 - uVar36);
    *puVar2 = uVar12 << (uVar36 & 0x7f);
    if ((longlong)(uVar7 - uVar36) < 0) {
      fn_82C4E5E8(puVar2);
    }
    puVar2 = *(ulonglong **)(iVar6 + 0x54);
    uVar37 = 0xf;
    lVar25 = 0;
    uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
    uVar13 = uVar7 + 0x10;
    if ((uVar13 & 0xffffffff) < 0xf) {
      do {
        if ((uVar13 & 0xffffffff) == 0) break;
        uVar37 = uVar37 - uVar13;
        *(int *)(puVar2 + 1) = (int)(uVar7 - uVar13);
        lVar25 = (ulonglong)
                 (uint)((int)(*puVar2 >> (0x40 - uVar13 & 0x7f)) << ((uint)uVar37 & 0x3f)) + lVar25;
        *puVar2 = *puVar2 << (uVar13 & 0x7f);
        if ((longlong)(uVar7 - uVar13) < 0) {
          fn_82C4E5E8(puVar2);
        }
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar13 = uVar7 + 0x10;
      } while ((uVar13 & 0xffffffff) < (uVar37 & 0xffffffff));
    }
    uVar13 = *puVar2;
    *(int *)(puVar2 + 1) = (int)(uVar7 - uVar37);
    *puVar2 = uVar13 << (uVar37 & 0x7f);
    if ((longlong)(uVar7 - uVar37) < 0) {
      fn_82C4E5E8(puVar2);
    }
    dVar48 = (double)lbl_8201467C;
    dVar47 = (double)lbl_8200E1A8;
    fVar1 = (float)((double)((uVar9 >> (0x40 - uVar33 & 0x7f) & 0xffffffff) + lVar21 +
                             ((uVar8 >> (0x40 - uVar32 & 0x7f) & 0xffffffff) + lVar20 & 0x1ffff) *
                             0x8000 & 0xffffffff) * dVar48 - dVar47);
    *param_6 = fVar1;
    *param_2 = fVar1;
    *param_4 = (float)((double)((uVar11 >> (0x40 - uVar35 & 0x7f) & 0xffffffff) + lVar23 +
                                ((uVar10 >> (0x40 - uVar34 & 0x7f) & 0xffffffff) + lVar22 & 0x1ffff)
                                * 0x8000 & 0xffffffff) * dVar48 - dVar47);
    *param_7 = (float)((double)((uVar13 >> (0x40 - uVar37 & 0x7f) & 0xffffffff) + lVar25 +
                                ((uVar12 >> (0x40 - uVar36 & 0x7f) & 0xffffffff) + lVar24 & 0x1ffff)
                                * 0x8000 & 0xffffffff) * dVar48 - dVar47);
  }
  else {
    uVar7 = 0xf;
    if (iVar44 == 2) {
      *param_3 = lbl_821AAD20;
      *param_5 = fVar3;
      puVar2 = *(ulonglong **)(iVar6 + 0x54);
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar32 = uVar8 + 0x10;
      if ((uVar32 & 0xffffffff) < 0xf) {
        do {
          if ((uVar32 & 0xffffffff) == 0) break;
          uVar7 = uVar7 - uVar32;
          *(int *)(puVar2 + 1) = (int)(uVar8 - uVar32);
          lVar20 = (ulonglong)
                   (uint)((int)(*puVar2 >> (0x40 - uVar32 & 0x7f)) << ((uint)uVar7 & 0x3f)) + lVar20
          ;
          *puVar2 = *puVar2 << (uVar32 & 0x7f);
          if ((longlong)(uVar8 - uVar32) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar32 = uVar8 + 0x10;
        } while ((uVar32 & 0xffffffff) < (uVar7 & 0xffffffff));
      }
      uVar32 = *puVar2;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar7);
      *puVar2 = uVar32 << (uVar7 & 0x7f);
      if ((longlong)(uVar8 - uVar7) < 0) {
        fn_82C4E5E8(puVar2);
      }
      puVar2 = *(ulonglong **)(iVar6 + 0x54);
      uVar33 = 0xf;
      lVar21 = 0;
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar9 = uVar8 + 0x10;
      if ((uVar9 & 0xffffffff) < 0xf) {
        do {
          if ((uVar9 & 0xffffffff) == 0) break;
          uVar33 = uVar33 - uVar9;
          *(int *)(puVar2 + 1) = (int)(uVar8 - uVar9);
          lVar21 = (ulonglong)
                   (uint)((int)(*puVar2 >> (0x40 - uVar9 & 0x7f)) << ((uint)uVar33 & 0x3f)) + lVar21
          ;
          *puVar2 = *puVar2 << (uVar9 & 0x7f);
          if ((longlong)(uVar8 - uVar9) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar9 = uVar8 + 0x10;
        } while ((uVar9 & 0xffffffff) < (uVar33 & 0xffffffff));
      }
      uVar9 = *puVar2;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar33);
      *puVar2 = uVar9 << (uVar33 & 0x7f);
      if ((longlong)(uVar8 - uVar33) < 0) {
        fn_82C4E5E8(puVar2);
      }
      puVar2 = *(ulonglong **)(iVar6 + 0x54);
      uVar34 = 0xf;
      lVar22 = 0;
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar10 = uVar8 + 0x10;
      if ((uVar10 & 0xffffffff) < 0xf) {
        do {
          if ((uVar10 & 0xffffffff) == 0) break;
          uVar34 = uVar34 - uVar10;
          *(int *)(puVar2 + 1) = (int)(uVar8 - uVar10);
          lVar22 = (ulonglong)
                   (uint)((int)(*puVar2 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar34 & 0x3f)) +
                   lVar22;
          *puVar2 = *puVar2 << (uVar10 & 0x7f);
          if ((longlong)(uVar8 - uVar10) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar10 = uVar8 + 0x10;
        } while ((uVar10 & 0xffffffff) < (uVar34 & 0xffffffff));
      }
      uVar10 = *puVar2;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar34);
      *puVar2 = uVar10 << (uVar34 & 0x7f);
      if ((longlong)(uVar8 - uVar34) < 0) {
        fn_82C4E5E8(puVar2);
      }
      puVar2 = *(ulonglong **)(iVar6 + 0x54);
      uVar35 = 0xf;
      lVar23 = 0;
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar11 = uVar8 + 0x10;
      if ((uVar11 & 0xffffffff) < 0xf) {
        do {
          if ((uVar11 & 0xffffffff) == 0) break;
          uVar35 = uVar35 - uVar11;
          *(int *)(puVar2 + 1) = (int)(uVar8 - uVar11);
          lVar23 = (ulonglong)
                   (uint)((int)(*puVar2 >> (0x40 - uVar11 & 0x7f)) << ((uint)uVar35 & 0x3f)) +
                   lVar23;
          *puVar2 = *puVar2 << (uVar11 & 0x7f);
          if ((longlong)(uVar8 - uVar11) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar11 = uVar8 + 0x10;
        } while ((uVar11 & 0xffffffff) < (uVar35 & 0xffffffff));
      }
      uVar11 = *puVar2;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar35);
      *puVar2 = uVar11 << (uVar35 & 0x7f);
      if ((longlong)(uVar8 - uVar35) < 0) {
        fn_82C4E5E8(puVar2);
      }
      puVar2 = *(ulonglong **)(iVar6 + 0x54);
      uVar36 = 0xf;
      lVar24 = 0;
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar12 = uVar8 + 0x10;
      if ((uVar12 & 0xffffffff) < 0xf) {
        do {
          if ((uVar12 & 0xffffffff) == 0) break;
          uVar36 = uVar36 - uVar12;
          *(int *)(puVar2 + 1) = (int)(uVar8 - uVar12);
          lVar24 = (ulonglong)
                   (uint)((int)(*puVar2 >> (0x40 - uVar12 & 0x7f)) << ((uint)uVar36 & 0x3f)) +
                   lVar24;
          *puVar2 = *puVar2 << (uVar12 & 0x7f);
          if ((longlong)(uVar8 - uVar12) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar12 = uVar8 + 0x10;
        } while ((uVar12 & 0xffffffff) < (uVar36 & 0xffffffff));
      }
      uVar12 = *puVar2;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar36);
      *puVar2 = uVar12 << (uVar36 & 0x7f);
      if ((longlong)(uVar8 - uVar36) < 0) {
        fn_82C4E5E8(puVar2);
      }
      puVar2 = *(ulonglong **)(iVar6 + 0x54);
      uVar37 = 0xf;
      lVar25 = 0;
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar13 = uVar8 + 0x10;
      if ((uVar13 & 0xffffffff) < 0xf) {
        do {
          if ((uVar13 & 0xffffffff) == 0) break;
          uVar37 = uVar37 - uVar13;
          *(int *)(puVar2 + 1) = (int)(uVar8 - uVar13);
          lVar25 = (ulonglong)
                   (uint)((int)(*puVar2 >> (0x40 - uVar13 & 0x7f)) << ((uint)uVar37 & 0x3f)) +
                   lVar25;
          *puVar2 = *puVar2 << (uVar13 & 0x7f);
          if ((longlong)(uVar8 - uVar13) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar13 = uVar8 + 0x10;
        } while ((uVar13 & 0xffffffff) < (uVar37 & 0xffffffff));
      }
      uVar13 = *puVar2;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar37);
      *puVar2 = uVar13 << (uVar37 & 0x7f);
      if ((longlong)(uVar8 - uVar37) < 0) {
        fn_82C4E5E8(puVar2);
      }
      puVar2 = *(ulonglong **)(iVar6 + 0x54);
      uVar38 = 0xf;
      lVar26 = 0;
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar14 = uVar8 + 0x10;
      if ((uVar14 & 0xffffffff) < 0xf) {
        do {
          if ((uVar14 & 0xffffffff) == 0) break;
          uVar38 = uVar38 - uVar14;
          *(int *)(puVar2 + 1) = (int)(uVar8 - uVar14);
          lVar26 = (ulonglong)
                   (uint)((int)(*puVar2 >> (0x40 - uVar14 & 0x7f)) << ((uint)uVar38 & 0x3f)) +
                   lVar26;
          *puVar2 = *puVar2 << (uVar14 & 0x7f);
          if ((longlong)(uVar8 - uVar14) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar14 = uVar8 + 0x10;
        } while ((uVar14 & 0xffffffff) < (uVar38 & 0xffffffff));
      }
      uVar14 = *puVar2;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar38);
      *puVar2 = uVar14 << (uVar38 & 0x7f);
      if ((longlong)(uVar8 - uVar38) < 0) {
        fn_82C4E5E8(puVar2);
      }
      puVar2 = *(ulonglong **)(iVar6 + 0x54);
      uVar39 = 0xf;
      lVar27 = 0;
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar15 = uVar8 + 0x10;
      if ((uVar15 & 0xffffffff) < 0xf) {
        do {
          if ((uVar15 & 0xffffffff) == 0) break;
          uVar39 = uVar39 - uVar15;
          *(int *)(puVar2 + 1) = (int)(uVar8 - uVar15);
          lVar27 = (ulonglong)
                   (uint)((int)(*puVar2 >> (0x40 - uVar15 & 0x7f)) << ((uint)uVar39 & 0x3f)) +
                   lVar27;
          *puVar2 = *puVar2 << (uVar15 & 0x7f);
          if ((longlong)(uVar8 - uVar15) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar15 = uVar8 + 0x10;
        } while ((uVar15 & 0xffffffff) < (uVar39 & 0xffffffff));
      }
      uVar15 = *puVar2;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar39);
      *puVar2 = uVar15 << (uVar39 & 0x7f);
      if ((longlong)(uVar8 - uVar39) < 0) {
        fn_82C4E5E8(puVar2);
      }
      dVar48 = (double)lbl_8201467C;
      dVar47 = (double)lbl_8200E1A8;
      *param_2 = (float)((double)((uVar9 >> (0x40 - uVar33 & 0x7f) & 0xffffffff) + lVar21 +
                                  ((uVar32 >> (0x40 - uVar7 & 0x7f) & 0xffffffff) + lVar20 & 0x1ffff
                                  ) * 0x8000 & 0xffffffff) * dVar48 - dVar47);
      *param_4 = (float)((double)((uVar11 >> (0x40 - uVar35 & 0x7f) & 0xffffffff) + lVar23 +
                                  ((uVar10 >> (0x40 - uVar34 & 0x7f) & 0xffffffff) + lVar22 &
                                  0x1ffff) * 0x8000 & 0xffffffff) * dVar48 - dVar47);
      *param_6 = (float)((double)((uVar13 >> (0x40 - uVar37 & 0x7f) & 0xffffffff) + lVar25 +
                                  ((uVar12 >> (0x40 - uVar36 & 0x7f) & 0xffffffff) + lVar24 &
                                  0x1ffff) * 0x8000 & 0xffffffff) * dVar48 - dVar47);
      *param_7 = (float)((double)((uVar15 >> (0x40 - uVar39 & 0x7f) & 0xffffffff) + lVar27 +
                                  ((uVar14 >> (0x40 - uVar38 & 0x7f) & 0xffffffff) + lVar26 &
                                  0x1ffff) * 0x8000 & 0xffffffff) * dVar48 - dVar47);
    }
    else {
      puVar2 = *(ulonglong **)(iVar6 + 0x54);
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar32 = uVar8 + 0x10;
      if ((uVar32 & 0xffffffff) < 0xf) {
        do {
          if ((uVar32 & 0xffffffff) == 0) break;
          uVar7 = uVar7 - uVar32;
          *(int *)(puVar2 + 1) = (int)(uVar8 - uVar32);
          lVar20 = (ulonglong)
                   (uint)((int)(*puVar2 >> (0x40 - uVar32 & 0x7f)) << ((uint)uVar7 & 0x3f)) + lVar20
          ;
          *puVar2 = *puVar2 << (uVar32 & 0x7f);
          if ((longlong)(uVar8 - uVar32) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar32 = uVar8 + 0x10;
        } while ((uVar32 & 0xffffffff) < (uVar7 & 0xffffffff));
      }
      uVar32 = *puVar2;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar7);
      *puVar2 = uVar32 << (uVar7 & 0x7f);
      if ((longlong)(uVar8 - uVar7) < 0) {
        fn_82C4E5E8(puVar2);
      }
      puVar2 = *(ulonglong **)(iVar6 + 0x54);
      uVar33 = 0xf;
      lVar21 = 0;
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar9 = uVar8 + 0x10;
      if ((uVar9 & 0xffffffff) < 0xf) {
        do {
          if ((uVar9 & 0xffffffff) == 0) break;
          uVar33 = uVar33 - uVar9;
          *(int *)(puVar2 + 1) = (int)(uVar8 - uVar9);
          lVar21 = (ulonglong)
                   (uint)((int)(*puVar2 >> (0x40 - uVar9 & 0x7f)) << ((uint)uVar33 & 0x3f)) + lVar21
          ;
          *puVar2 = *puVar2 << (uVar9 & 0x7f);
          if ((longlong)(uVar8 - uVar9) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar9 = uVar8 + 0x10;
        } while ((uVar9 & 0xffffffff) < (uVar33 & 0xffffffff));
      }
      uVar9 = *puVar2;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar33);
      *puVar2 = uVar9 << (uVar33 & 0x7f);
      if ((longlong)(uVar8 - uVar33) < 0) {
        fn_82C4E5E8(puVar2);
      }
      puVar2 = *(ulonglong **)(iVar6 + 0x54);
      uVar34 = 0xf;
      lVar22 = 0;
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar10 = uVar8 + 0x10;
      if ((uVar10 & 0xffffffff) < 0xf) {
        do {
          if ((uVar10 & 0xffffffff) == 0) break;
          uVar34 = uVar34 - uVar10;
          *(int *)(puVar2 + 1) = (int)(uVar8 - uVar10);
          lVar22 = (ulonglong)
                   (uint)((int)(*puVar2 >> (0x40 - uVar10 & 0x7f)) << ((uint)uVar34 & 0x3f)) +
                   lVar22;
          *puVar2 = *puVar2 << (uVar10 & 0x7f);
          if ((longlong)(uVar8 - uVar10) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar10 = uVar8 + 0x10;
        } while ((uVar10 & 0xffffffff) < (uVar34 & 0xffffffff));
      }
      uVar10 = *puVar2;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar34);
      *puVar2 = uVar10 << (uVar34 & 0x7f);
      if ((longlong)(uVar8 - uVar34) < 0) {
        fn_82C4E5E8(puVar2);
      }
      puVar2 = *(ulonglong **)(iVar6 + 0x54);
      uVar35 = 0xf;
      lVar23 = 0;
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar11 = uVar8 + 0x10;
      if ((uVar11 & 0xffffffff) < 0xf) {
        do {
          if ((uVar11 & 0xffffffff) == 0) break;
          uVar35 = uVar35 - uVar11;
          *(int *)(puVar2 + 1) = (int)(uVar8 - uVar11);
          lVar23 = (ulonglong)
                   (uint)((int)(*puVar2 >> (0x40 - uVar11 & 0x7f)) << ((uint)uVar35 & 0x3f)) +
                   lVar23;
          *puVar2 = *puVar2 << (uVar11 & 0x7f);
          if ((longlong)(uVar8 - uVar11) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar11 = uVar8 + 0x10;
        } while ((uVar11 & 0xffffffff) < (uVar35 & 0xffffffff));
      }
      uVar11 = *puVar2;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar35);
      *puVar2 = uVar11 << (uVar35 & 0x7f);
      if ((longlong)(uVar8 - uVar35) < 0) {
        fn_82C4E5E8(puVar2);
      }
      puVar2 = *(ulonglong **)(iVar6 + 0x54);
      uVar36 = 0xf;
      lVar24 = 0;
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar12 = uVar8 + 0x10;
      if ((uVar12 & 0xffffffff) < 0xf) {
        do {
          if ((uVar12 & 0xffffffff) == 0) break;
          uVar36 = uVar36 - uVar12;
          *(int *)(puVar2 + 1) = (int)(uVar8 - uVar12);
          lVar24 = (ulonglong)
                   (uint)((int)(*puVar2 >> (0x40 - uVar12 & 0x7f)) << ((uint)uVar36 & 0x3f)) +
                   lVar24;
          *puVar2 = *puVar2 << (uVar12 & 0x7f);
          if ((longlong)(uVar8 - uVar12) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar12 = uVar8 + 0x10;
        } while ((uVar12 & 0xffffffff) < (uVar36 & 0xffffffff));
      }
      uVar12 = *puVar2;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar36);
      *puVar2 = uVar12 << (uVar36 & 0x7f);
      if ((longlong)(uVar8 - uVar36) < 0) {
        fn_82C4E5E8(puVar2);
      }
      puVar2 = *(ulonglong **)(iVar6 + 0x54);
      uVar37 = 0xf;
      lVar25 = 0;
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar13 = uVar8 + 0x10;
      if ((uVar13 & 0xffffffff) < 0xf) {
        do {
          if ((uVar13 & 0xffffffff) == 0) break;
          uVar37 = uVar37 - uVar13;
          *(int *)(puVar2 + 1) = (int)(uVar8 - uVar13);
          lVar25 = (ulonglong)
                   (uint)((int)(*puVar2 >> (0x40 - uVar13 & 0x7f)) << ((uint)uVar37 & 0x3f)) +
                   lVar25;
          *puVar2 = *puVar2 << (uVar13 & 0x7f);
          if ((longlong)(uVar8 - uVar13) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar13 = uVar8 + 0x10;
        } while ((uVar13 & 0xffffffff) < (uVar37 & 0xffffffff));
      }
      uVar13 = *puVar2;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar37);
      *puVar2 = uVar13 << (uVar37 & 0x7f);
      if ((longlong)(uVar8 - uVar37) < 0) {
        fn_82C4E5E8(puVar2);
      }
      puVar2 = *(ulonglong **)(iVar6 + 0x54);
      uVar38 = 0xf;
      lVar26 = 0;
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar14 = uVar8 + 0x10;
      if ((uVar14 & 0xffffffff) < 0xf) {
        do {
          if ((uVar14 & 0xffffffff) == 0) break;
          uVar38 = uVar38 - uVar14;
          *(int *)(puVar2 + 1) = (int)(uVar8 - uVar14);
          lVar26 = (ulonglong)
                   (uint)((int)(*puVar2 >> (0x40 - uVar14 & 0x7f)) << ((uint)uVar38 & 0x3f)) +
                   lVar26;
          *puVar2 = *puVar2 << (uVar14 & 0x7f);
          if ((longlong)(uVar8 - uVar14) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar14 = uVar8 + 0x10;
        } while ((uVar14 & 0xffffffff) < (uVar38 & 0xffffffff));
      }
      uVar14 = *puVar2;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar38);
      *puVar2 = uVar14 << (uVar38 & 0x7f);
      if ((longlong)(uVar8 - uVar38) < 0) {
        fn_82C4E5E8(puVar2);
      }
      puVar2 = *(ulonglong **)(iVar6 + 0x54);
      uVar39 = 0xf;
      lVar27 = 0;
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar15 = uVar8 + 0x10;
      if ((uVar15 & 0xffffffff) < 0xf) {
        do {
          if ((uVar15 & 0xffffffff) == 0) break;
          uVar39 = uVar39 - uVar15;
          *(int *)(puVar2 + 1) = (int)(uVar8 - uVar15);
          lVar27 = (ulonglong)
                   (uint)((int)(*puVar2 >> (0x40 - uVar15 & 0x7f)) << ((uint)uVar39 & 0x3f)) +
                   lVar27;
          *puVar2 = *puVar2 << (uVar15 & 0x7f);
          if ((longlong)(uVar8 - uVar15) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar15 = uVar8 + 0x10;
        } while ((uVar15 & 0xffffffff) < (uVar39 & 0xffffffff));
      }
      uVar15 = *puVar2;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar39);
      *puVar2 = uVar15 << (uVar39 & 0x7f);
      if ((longlong)(uVar8 - uVar39) < 0) {
        fn_82C4E5E8(puVar2);
      }
      puVar2 = *(ulonglong **)(iVar6 + 0x54);
      uVar40 = 0xf;
      lVar28 = 0;
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar16 = uVar8 + 0x10;
      if ((uVar16 & 0xffffffff) < 0xf) {
        do {
          if ((uVar16 & 0xffffffff) == 0) break;
          uVar40 = uVar40 - uVar16;
          *(int *)(puVar2 + 1) = (int)(uVar8 - uVar16);
          lVar28 = (ulonglong)
                   (uint)((int)(*puVar2 >> (0x40 - uVar16 & 0x7f)) << ((uint)uVar40 & 0x3f)) +
                   lVar28;
          *puVar2 = *puVar2 << (uVar16 & 0x7f);
          if ((longlong)(uVar8 - uVar16) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar16 = uVar8 + 0x10;
        } while ((uVar16 & 0xffffffff) < (uVar40 & 0xffffffff));
      }
      uVar16 = *puVar2;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar40);
      *puVar2 = uVar16 << (uVar40 & 0x7f);
      if ((longlong)(uVar8 - uVar40) < 0) {
        fn_82C4E5E8(puVar2);
      }
      puVar2 = *(ulonglong **)(iVar6 + 0x54);
      uVar41 = 0xf;
      lVar29 = 0;
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar17 = uVar8 + 0x10;
      if ((uVar17 & 0xffffffff) < 0xf) {
        do {
          if ((uVar17 & 0xffffffff) == 0) break;
          uVar41 = uVar41 - uVar17;
          *(int *)(puVar2 + 1) = (int)(uVar8 - uVar17);
          lVar29 = (ulonglong)
                   (uint)((int)(*puVar2 >> (0x40 - uVar17 & 0x7f)) << ((uint)uVar41 & 0x3f)) +
                   lVar29;
          *puVar2 = *puVar2 << (uVar17 & 0x7f);
          if ((longlong)(uVar8 - uVar17) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar17 = uVar8 + 0x10;
        } while ((uVar17 & 0xffffffff) < (uVar41 & 0xffffffff));
      }
      uVar17 = *puVar2;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar41);
      *puVar2 = uVar17 << (uVar41 & 0x7f);
      if ((longlong)(uVar8 - uVar41) < 0) {
        fn_82C4E5E8(puVar2);
      }
      puVar2 = *(ulonglong **)(iVar6 + 0x54);
      uVar42 = 0xf;
      lVar30 = 0;
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar18 = uVar8 + 0x10;
      if ((uVar18 & 0xffffffff) < 0xf) {
        do {
          if ((uVar18 & 0xffffffff) == 0) break;
          uVar42 = uVar42 - uVar18;
          *(int *)(puVar2 + 1) = (int)(uVar8 - uVar18);
          lVar30 = (ulonglong)
                   (uint)((int)(*puVar2 >> (0x40 - uVar18 & 0x7f)) << ((uint)uVar42 & 0x3f)) +
                   lVar30;
          *puVar2 = *puVar2 << (uVar18 & 0x7f);
          if ((longlong)(uVar8 - uVar18) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar18 = uVar8 + 0x10;
        } while ((uVar18 & 0xffffffff) < (uVar42 & 0xffffffff));
      }
      uVar18 = *puVar2;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar42);
      *puVar2 = uVar18 << (uVar42 & 0x7f);
      if ((longlong)(uVar8 - uVar42) < 0) {
        fn_82C4E5E8(puVar2);
      }
      puVar2 = *(ulonglong **)(iVar6 + 0x54);
      uVar43 = 0xf;
      lVar31 = 0;
      uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar19 = uVar8 + 0x10;
      if ((uVar19 & 0xffffffff) < 0xf) {
        do {
          if ((uVar19 & 0xffffffff) == 0) break;
          uVar43 = uVar43 - uVar19;
          *(int *)(puVar2 + 1) = (int)(uVar8 - uVar19);
          lVar31 = (ulonglong)
                   (uint)((int)(*puVar2 >> (0x40 - uVar19 & 0x7f)) << ((uint)uVar43 & 0x3f)) +
                   lVar31;
          *puVar2 = *puVar2 << (uVar19 & 0x7f);
          if ((longlong)(uVar8 - uVar19) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar8 = (ulonglong)*(uint *)(puVar2 + 1);
          uVar19 = uVar8 + 0x10;
        } while ((uVar19 & 0xffffffff) < (uVar43 & 0xffffffff));
      }
      uVar19 = *puVar2;
      *(int *)(puVar2 + 1) = (int)(uVar8 - uVar43);
      *puVar2 = uVar19 << (uVar43 & 0x7f);
      if ((longlong)(uVar8 - uVar43) < 0) {
        fn_82C4E5E8(puVar2);
      }
      dVar48 = (double)lbl_8201467C;
      dVar47 = (double)lbl_8200E1A8;
      *param_2 = (float)((double)((uVar9 >> (0x40 - uVar33 & 0x7f) & 0xffffffff) + lVar21 +
                                  ((uVar32 >> (0x40 - uVar7 & 0x7f) & 0xffffffff) + lVar20 & 0x1ffff
                                  ) * 0x8000 & 0xffffffff) * dVar48 - dVar47);
      *param_3 = (float)((double)((uVar11 >> (0x40 - uVar35 & 0x7f) & 0xffffffff) + lVar23 +
                                  ((uVar10 >> (0x40 - uVar34 & 0x7f) & 0xffffffff) + lVar22 &
                                  0x1ffff) * 0x8000 & 0xffffffff) * dVar48 - dVar47);
      *param_4 = (float)((double)((uVar13 >> (0x40 - uVar37 & 0x7f) & 0xffffffff) + lVar25 +
                                  ((uVar12 >> (0x40 - uVar36 & 0x7f) & 0xffffffff) + lVar24 &
                                  0x1ffff) * 0x8000 & 0xffffffff) * dVar48 - dVar47);
      *param_5 = (float)((double)((uVar15 >> (0x40 - uVar39 & 0x7f) & 0xffffffff) + lVar27 +
                                  ((uVar14 >> (0x40 - uVar38 & 0x7f) & 0xffffffff) + lVar26 &
                                  0x1ffff) * 0x8000 & 0xffffffff) * dVar48 - dVar47);
      *param_6 = (float)((double)((uVar17 >> (0x40 - uVar41 & 0x7f) & 0xffffffff) + lVar29 +
                                  ((uVar16 >> (0x40 - uVar40 & 0x7f) & 0xffffffff) + lVar28 &
                                  0x1ffff) * 0x8000 & 0xffffffff) * dVar48 - dVar47);
      *param_7 = (float)((double)((uVar19 >> (0x40 - uVar43 & 0x7f) & 0xffffffff) + lVar31 +
                                  ((uVar18 >> (0x40 - uVar42 & 0x7f) & 0xffffffff) + lVar30 &
                                  0x1ffff) * 0x8000 & 0xffffffff) * dVar48 - dVar47);
    }
  }
  puVar2 = *(ulonglong **)(iVar6 + 0x54);
  uVar32 = 1;
  lVar20 = 0;
  uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
  uVar8 = uVar7 + 0x10;
  if ((uVar8 & 0xffffffff) == 0) {
    do {
      if ((uVar8 & 0xffffffff) == 0) break;
      uVar32 = uVar32 - uVar8;
      *(int *)(puVar2 + 1) = (int)(uVar7 - uVar8);
      lVar20 = (ulonglong)(uint)((int)(*puVar2 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar32 & 0x3f)) +
               lVar20;
      *puVar2 = *puVar2 << (uVar8 & 0x7f);
      if ((longlong)(uVar7 - uVar8) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      uVar8 = uVar7 + 0x10;
    } while ((uVar8 & 0xffffffff) < (uVar32 & 0xffffffff));
  }
  uVar8 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar7 - uVar32);
  *puVar2 = uVar8 << (uVar32 & 0x7f);
  if ((longlong)(uVar7 - uVar32) < 0) {
    fn_82C4E5E8(puVar2);
  }
  if (((uVar8 >> (0x40 - uVar32 & 0x7f) & 0xffffffff) + lVar20 & 0xffffffff) == 0) {
    *param_8 = (float)dVar45;
  }
  else {
    puVar2 = *(ulonglong **)(iVar6 + 0x54);
    uVar32 = 0xf;
    lVar20 = 0;
    uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
    uVar8 = uVar7 + 0x10;
    if ((uVar8 & 0xffffffff) < 0xf) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar32 = uVar32 - uVar8;
        *(int *)(puVar2 + 1) = (int)(uVar7 - uVar8);
        lVar20 = (ulonglong)(uint)((int)(*puVar2 >> (0x40 - uVar8 & 0x7f)) << ((uint)uVar32 & 0x3f))
                 + lVar20;
        *puVar2 = *puVar2 << (uVar8 & 0x7f);
        if ((longlong)(uVar7 - uVar8) < 0) {
          fn_82C4E5E8(puVar2);
        }
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar8 = uVar7 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar32 & 0xffffffff));
    }
    uVar8 = *puVar2;
    *(int *)(puVar2 + 1) = (int)(uVar7 - uVar32);
    *puVar2 = uVar8 << (uVar32 & 0x7f);
    if ((longlong)(uVar7 - uVar32) < 0) {
      fn_82C4E5E8(puVar2);
    }
    puVar2 = *(ulonglong **)(iVar6 + 0x54);
    uVar33 = 0xf;
    lVar21 = 0;
    uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
    uVar9 = uVar7 + 0x10;
    if ((uVar9 & 0xffffffff) < 0xf) {
      do {
        if ((uVar9 & 0xffffffff) == 0) break;
        uVar33 = uVar33 - uVar9;
        *(int *)(puVar2 + 1) = (int)(uVar7 - uVar9);
        lVar21 = (ulonglong)(uint)((int)(*puVar2 >> (0x40 - uVar9 & 0x7f)) << ((uint)uVar33 & 0x3f))
                 + lVar21;
        *puVar2 = *puVar2 << (uVar9 & 0x7f);
        if ((longlong)(uVar7 - uVar9) < 0) {
          fn_82C4E5E8(puVar2);
        }
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
        uVar9 = uVar7 + 0x10;
      } while ((uVar9 & 0xffffffff) < (uVar33 & 0xffffffff));
    }
    uVar9 = *puVar2;
    *(int *)(puVar2 + 1) = (int)(uVar7 - uVar33);
    *puVar2 = uVar9 << (uVar33 & 0x7f);
    if ((longlong)(uVar7 - uVar33) < 0) {
      fn_82C4E5E8(puVar2);
    }
    *param_8 = (float)((double)((uVar9 >> (0x40 - uVar33 & 0x7f) & 0xffffffff) + lVar21 +
                                ((uVar8 >> (0x40 - uVar32 & 0x7f) & 0xffffffff) + lVar20 & 0x1ffff)
                                * 0x8000 & 0xffffffff) * dVar48 - dVar47);
  }
  if (((*(int *)(*(int *)(iVar6 + 0x54) + 0x14) != 0) || ((double)*param_2 < dVar46)) ||
     (uVar5 = 0, (double)*param_6 < dVar46)) {
    uVar5 = 1;
  }
  fn_82F6A594(uVar5);
  return;
}

