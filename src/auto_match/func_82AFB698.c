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
extern unsigned int *auStack_c0;
extern int fn_82AA66A8();
extern int fn_82ABF768();
extern int fn_82ACA920();
extern int fn_82AD1270();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82AD6090();
extern int fn_82AEFCD8();
extern int fn_82AF88B0();
extern int fn_82AFA378();
extern int fn_82AFA478();
extern int fn_82B168F8();
extern int fn_82B16910();
extern int fn_82B843F0();
extern int fn_82B86C90();
extern int fn_82B8A3A0();
extern int fn_82B8C058();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005710;
extern unsigned int lbl_821AAD20;


uint * fn_82AFB698(int param_1,int *param_2,uint *param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  char cVar11;
  ulonglong uVar2;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint *puVar9;
  undefined8 uVar3;
  int iVar10;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar16;
  longlong lVar15;
  ulonglong uVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  bool bVar21;
  int iVar22;
  ulonglong uVar23;
  double dVar24;
  undefined1 auStack_c0 [16];
  double adStack_b0 [22];
  
  uVar14 = (uint)param_2[2] >> 7 & 0x7f;
  if ((uVar14 == 0) || (2 < uVar14)) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c0);
  }
  bVar21 = true;
  dVar24 = (double)lbl_821AAD20;
  if (uVar14 == 2) {
    cVar11 = fn_82ABF768(lbl_82005710,param_3);
    if (cVar11 == '\0') {
      dVar24 = (double)lbl_82002AE0;
    }
    else {
      bVar21 = false;
    }
  }
  uVar14 = *param_5 >> 0x14 & 1;
  puVar20 = (uint *)param_2[0xc - uVar14];
  puVar7 = (uint *)param_2[uVar14 + 0xb];
  uVar14 = puVar20[3];
  uVar2 = fn_82B86C90(uVar14,adStack_b0,auStack_c0);
  uVar12 = 0;
  if (uVar2 != 0) {
    uVar5 = *puVar7;
    uVar18 = 0;
    if ((uVar5 & 0xe000000) != 0) {
      uVar6 = 0;
      do {
        uVar16 = (*puVar20 >> 5 & 0xff) >> (uVar6 & 0x3f) & 3;
        if ((((uint)(1 << uVar16) & uVar2) != 0) && (dVar24 == adStack_b0[uVar16])) {
          uVar12 = (uint)(1 << ((uVar5 >> 5 & 0xff) >> (uVar6 & 0x3f) & 3)) | uVar12;
        }
        uVar18 = uVar18 + 1;
        uVar6 = uVar6 + 2;
      } while (uVar18 < (uVar5 >> 0x19 & 7));
    }
  }
  uVar5 = *puVar7;
  uVar23 = (ulonglong)(uVar5 >> 0x19) & 7;
  uVar18 = uVar5 >> 5 & 0xff;
  if (puVar7[3] == param_3[3]) {
    uVar17 = 0;
    uVar16 = 0;
    uVar6 = *param_3 >> 0x19 & 7;
    if (uVar6 != 0) {
      uVar13 = 0;
      do {
        uVar16 = uVar16 + 1;
        uVar1 = uVar13 & 0x3f;
        uVar13 = uVar13 + 2;
        uVar17 = (uint)(1 << ((*param_3 >> 5 & 0xff) >> uVar1 & 3)) | uVar17;
      } while (uVar16 < uVar6);
    }
    uVar17 = uVar17 & ~uVar12;
    uVar12 = ((0x8da691691448U >> (uVar17 & 0x7f)) >> (uVar17 & 0x7f)) >> (uVar17 & 0x7f) & 7;
    lVar15 = uVar23 << 1;
    for (; (uVar17 & 0xffffffff) != 0; uVar17 = uVar17 - (uVar17 & ~(uVar17 - 1))) {
      uVar18 = uVar18 & ~(3 << ((uint)lVar15 & 0x3f)) |
               0x1f - (int)LZCOUNT((uint)uVar17 & ~((uint)uVar17 - 1)) << ((uint)lVar15 & 0x3f);
      lVar15 = lVar15 + 2;
    }
  }
  else {
    uVar12 = (ulonglong)(*param_3 >> 0x19) & 7;
    if ((*param_3 >> 0x19 & 7) != 0) {
      lVar15 = uVar23 << 1;
      uVar17 = uVar12;
      do {
        uVar6 = (uint)lVar15;
        lVar15 = lVar15 + 2;
        uVar18 = uVar18 & ~(3 << (uVar6 & 0x3f)) | (uVar18 & 3) << (uVar6 & 0x3f);
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  uVar18 = (uVar18 & 0xff) << 5 | uVar5 & 0xffffe01f;
  *puVar7 = uVar18;
  iVar10 = (int)uVar23;
  iVar22 = (int)uVar12 + iVar10;
  uVar5 = 0;
  iVar4 = fn_82B8C058(dVar24,param_1,uVar14,uVar18,0,0);
  if (iVar4 == 4) {
    fn_82AF88B0(puVar20,adStack_b0);
    *(double *)((int)adStack_b0 + (int)(uVar23 << 3)) = dVar24;
    uVar2 = (ulonglong)(uint)(1 << iVar10 + 1) - 1;
    uVar5 = fn_82B8A3A0((double)(float)adStack_b0[0],(double)(float)adStack_b0[1],
                              (double)(float)adStack_b0[2],(double)(float)adStack_b0[3],param_1);
    uVar14 = 0xe4;
    if (uVar12 != 0) {
      lVar15 = uVar23 << 1;
      do {
        uVar18 = (uint)lVar15;
        lVar15 = lVar15 + 2;
        uVar14 = uVar14 & ~(3 << (uVar18 & 0x3f)) | iVar10 << (uVar18 & 0x3f);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    puVar19 = (uint *)(puVar20[3] + 4);
    for (puVar9 = (uint *)*puVar19; puVar9 != puVar20; puVar9 = (uint *)puVar9[2]) {
      puVar19 = puVar9 + 2;
    }
    *puVar19 = puVar20[2];
    puVar20[2] = *(uint *)(uVar5 + 4);
    *(uint **)(uVar5 + 4) = puVar20;
    puVar20[3] = uVar5;
    *puVar20 = (uVar14 & 0xff) << 5 | *puVar20 & 0xffffe01f;
  }
  else {
    uVar14 = *puVar20 >> 5 & 0xff;
    if (uVar12 != 0) {
      lVar15 = uVar23 << 1;
      do {
        uVar18 = (uint)lVar15;
        lVar15 = lVar15 + 2;
        uVar14 = uVar14 & ~(3 << (uVar18 & 0x3f)) | iVar4 << (uVar18 & 0x3f);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    *puVar20 = (uVar14 & 0xff) << 5 | *puVar20 & 0xffffe01f;
  }
  uVar6 = fn_82B843F0(param_1,param_2);
  *(uint *)(uVar6 + 8) =
       ((1 << iVar22) + -1) * 2 & 0x1eU |
       iVar22 * 0x4000 & 0x1c000U | *(uint *)(uVar6 + 8) & 0xbbfe3fe1;
  *(short *)(uVar6 + 0xe) = (short)param_2[3];
  puVar7 = (uint *)fn_82ACA920(param_1,puVar7,puVar7[3]);
  uVar18 = iVar22 * 0x2000000 & 0xe000000;
  *puVar7 = *puVar7 & 0xf1ffffff | uVar18;
  uVar14 = *param_5;
  uVar8 = fn_82AD1978(uVar6,puVar7);
  *(undefined4 *)(((uVar14 >> 0x14 & 1) + 0xb) * 4 + uVar6) = uVar8;
  puVar9 = (uint *)fn_82ACA920(param_1,puVar20,puVar20[3]);
  *puVar9 = *puVar9 & 0xf1ffffff | uVar18;
  uVar14 = *param_5;
  uVar8 = fn_82AD1978(uVar6,puVar9);
  *(undefined4 *)((0xc - (uVar14 >> 0x14 & 1)) * 4 + uVar6) = uVar8;
  for (puVar20 = (uint *)*param_2; puVar20 != (uint *)0x0; puVar20 = (uint *)puVar20[1]) {
    if ((*puVar20 & 0xe000000) == 0) {
      fn_82AD1978(uVar6,puVar20);
    }
  }
  if (uVar5 != 0) {
    fn_82AEFCD8(uVar5);
    *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) | 0x1000000;
  }
  uVar14 = uVar6 & 0xfffffffe;
  puVar20 = (uint *)((param_4 & 0xfffffffe) + 0x24);
  uVar18 = 0;
  uVar5 = 0;
  *(uint *)(uVar14 + 0x24) = *puVar20;
  *(uint *)(*puVar20 & 0xfffffffe) = uVar14;
  *(uint *)(uVar14 + 0x28) = param_4 & 0xfffffffe;
  *puVar20 = uVar14 + 0x28;
  uVar14 = *param_3;
  uVar16 = uVar14 >> 0x19 & 7;
  if ((uVar14 >> 0x19 & 7) != 0) {
    uVar13 = 0;
    do {
      uVar12 = 0;
      if ((*puVar9 & 0xe000000) != 0) {
        uVar16 = 0;
        do {
          uVar1 = (*puVar9 >> 5 & 0xff) >> (uVar16 & 0x3f);
          if ((((!bVar21) ||
               ((((*puVar7 >> 5 & 0xff) >> (uVar16 & 0x3f) ^ (uVar14 >> 5 & 0xff) >> (uVar13 & 0x3f)
                 ) & 3) == 0)) && (((uint)(1 << (uVar1 & 3)) & uVar2) != 0)) &&
             (dVar24 == adStack_b0[uVar1 & 3])) {
            uVar3 = fn_82B168F8(param_3[3],(uVar14 >> 5 & 0xff) >> (uVar13 & 0x3f) & 3);
            fn_82B16910(uVar6,uVar12,0xf,uVar3);
            uVar18 = uVar18 & ~(3 << (uVar13 & 0x3f)) | (int)uVar12 << (uVar13 & 0x3f);
            break;
          }
          uVar12 = uVar12 + 1;
          uVar16 = uVar16 + 2;
        } while ((uVar12 & 0xffffffff) < ((ulonglong)(*puVar9 >> 0x19) & 7));
      }
      uVar14 = *param_3;
      uVar5 = uVar5 + 1;
      uVar13 = uVar13 + 2;
      uVar16 = uVar14 >> 0x19 & 7;
    } while (uVar5 < uVar16);
  }
  puVar20 = (uint *)fn_82AD17B0(param_1,uVar6);
  *puVar20 = uVar16 << 0x19 | *puVar20 & 0xf1ffffff;
  fn_82AD1270(puVar20,0);
  *puVar20 = (uVar18 & 0xff) << 5 | *puVar20 & 0xffffe01f;
  fn_82AFA378(param_1,param_2);
  fn_82AFA378(param_1,uVar6);
  if ((*(uint *)(param_1 + 0x28) & 0x2000000) != 0) {
    fn_82AFA478(param_1,uVar6,0);
  }
  if ((*(uint *)(uVar6 + 8) >> 0x17 & 1) == 0) {
    return puVar20;
  }
  *(uint *)(uVar6 + 0x10) = *(uint *)(uVar6 + 0x10) & 0xfff8ffff;
  puVar7 = *(uint **)(param_1 + 0x294);
  if ((puVar7[1] & 1) == 0) {
    uVar14 = *puVar7 & 0xfffffffe;
    iVar10 = uVar14 - 4;
    if ((iVar10 != 0) && (*(int *)(uVar14 + 4) + 1U <= *(uint *)(uVar14 + 8))) goto LAB_82afbcd8;
  }
  iVar10 = fn_82AD6090(puVar7,1);
LAB_82afbcd8:
  iVar4 = *(int *)(iVar10 + 8);
  *(int *)(iVar10 + 8) = iVar4 + 1;
  *(uint *)((iVar4 + 4) * 4 + iVar10) = uVar6;
  return puVar20;
}

