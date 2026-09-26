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
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_82AD1978();
extern int fn_82AD6090();
extern int fn_82ADD120();
extern int fn_82ADD198();
extern int fn_82ADD600();
extern int fn_82AF50F8();
extern int fn_82AF5160();
extern int fn_82AFA378();
extern int fn_82AFE520();
extern int fn_82B0FC78();
extern int fn_82B161E8();
extern int fn_82B84350();
extern int fn_82B8AC10();
extern int fn_82B8D2B8();
extern int fn_82B8D3D0();
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


undefined8 fn_82B01CD0(int param_1,longlong param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  char cVar11;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar10;
  undefined4 uVar9;
  int *piVar12;
  uint uVar13;
  longlong lVar14;
  int *piVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uStack_f0;
  uint uStack_ec;
  uint auStack_e0 [4];
  int aiStack_d0 [4];
  uint auStack_c0 [4];
  uint auStack_b0 [4];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [144];
  
  cVar11 = fn_82B8D2B8();
  if (cVar11 == '\0') {
    return 0;
  }
  uVar25 = (uint)param_2;
  uVar20 = *(uint *)(param_3 + 8);
  uVar5 = *(uint *)(uVar25 + 8) >> 0x13;
  uVar19 = (ulonglong)uVar5 & 7;
  fn_82AF50F8(param_2,auStack_e0,auStack_c0,auStack_b0);
  fn_82AF50F8(param_3,aiStack_d0,auStack_90,auStack_a0);
  cVar11 = fn_82AF5160(param_1,uVar19,auStack_e0,auStack_c0,auStack_b0,uVar20 >> 0x13 & 7,
                             aiStack_d0,auStack_90);
  if (cVar11 == '\0') {
    return 0;
  }
  if (uStack_ec == 0) goto LAB_82b02238;
  uVar24 = (ulonglong)uStack_ec;
  uVar24 = (((0x8da691691448U >> (uVar24 & 0x7f)) >> (uVar24 & 0x7f)) >> (uVar24 & 0x7f) & 7) +
           uVar19;
  if (4 < uVar24) {
    return 0;
  }
  if (((*(uint *)(uVar25 + 8) >> 0x17 & 1) != 0) && ((*(uint *)(param_3 + 8) >> 0x17 & 1) != 0)) {
    uVar6 = fn_82ADD120(param_2);
    uVar6 = fn_82ADD198(param_1,uVar6);
    iVar7 = fn_82ADD600(param_1,uVar6);
    uVar6 = fn_82ADD120(param_3);
    uVar6 = fn_82ADD198(param_1,uVar6);
    iVar8 = fn_82ADD600(param_1,uVar6);
    if (iVar7 != iVar8) {
      return 0;
    }
  }
  puVar18 = auStack_e0;
  lVar14 = param_2 + 0x2c;
  for (uVar20 = 0; uVar20 < (*(uint *)(uVar25 + 8) >> 0x13 & 7); uVar20 = uVar20 + 1) {
    if (*(uint *)(*(int *)lVar14 + 0xc) != *puVar18) {
      return 0;
    }
    lVar14 = lVar14 + 4;
    puVar18 = puVar18 + 1;
  }
  piVar12 = aiStack_d0;
  piVar15 = (int *)(param_3 + 0x2c);
  for (uVar20 = 0; uVar20 < (*(uint *)(param_3 + 8) >> 0x13 & 7); uVar20 = uVar20 + 1) {
    if (*(int *)(*piVar15 + 0xc) != *piVar12) {
      return 0;
    }
    piVar15 = piVar15 + 1;
    piVar12 = piVar12 + 1;
  }
  lVar14 = fn_82B84350(param_1,*(undefined4 *)(uVar25 + 0x1c),0,uVar24);
  uVar2 = (uint)lVar14;
  uVar20 = uVar2 & 0xfffffffe;
  puVar18 = (uint *)((uVar25 & 0xfffffffe) + 0x24);
  *(uint *)(uVar20 + 0x24) = *puVar18;
  *(uint *)(*puVar18 & 0xfffffffe) = uVar20;
  *(uint *)(uVar20 + 0x28) = uVar25 & 0xfffffffe;
  *puVar18 = uVar20 + 0x28;
  if (((*(uint *)(param_3 + 8) >> 0x17 & 1) != 0) && ((*(uint *)(uVar25 + 8) >> 0x17 & 1) == 0)) {
    *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) | 0x800000;
    uVar10 = fn_82ADD120(param_3);
    *(undefined2 *)(uVar2 + 0x12) = uVar10;
    puVar18 = *(uint **)(param_1 + 0x294);
    if ((puVar18[1] & 1) == 0) {
      uVar20 = *puVar18 & 0xfffffffe;
      iVar7 = uVar20 - 4;
      if ((iVar7 == 0) || (*(uint *)(uVar20 + 8) < *(int *)(uVar20 + 4) + 1U)) goto LAB_82b01f58;
    }
    else {
LAB_82b01f58:
      iVar7 = fn_82AD6090(puVar18,1);
    }
    iVar8 = *(int *)(iVar7 + 8);
    *(int *)(iVar7 + 8) = iVar8 + 1;
    *(uint *)((iVar8 + 4) * 4 + iVar7) = uVar2;
  }
  lVar23 = lVar14 + 0x2c;
  for (uVar20 = 0; uVar20 < (*(uint *)(uVar25 + 8) >> 0x13 & 7); uVar20 = uVar20 + 1) {
    iVar7 = *(int *)((uVar25 - uVar2) + (int)(undefined4 *)lVar23);
    uVar9 = fn_82AD1978(lVar14,iVar7);
    *(undefined4 *)lVar23 = uVar9;
    if ((*(uint *)(uVar2 + 8) >> 0x17 & 1) != 0) {
      iVar7 = *(int *)(iVar7 + 0xc);
      if ((*(uint *)(iVar7 + 8) >> 0x17 & 1) == 0) {
        *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) | 0x800000;
        uVar10 = fn_82ADD120(param_3);
        *(undefined2 *)(iVar7 + 0x12) = uVar10;
        *(uint *)(iVar7 + 0x10) = *(uint *)(iVar7 + 0x10) & 0xfff8ffff;
        puVar18 = *(uint **)(param_1 + 0x294);
        if ((puVar18[1] & 1) == 0) {
          uVar3 = *puVar18 & 0xfffffffe;
          iVar8 = uVar3 - 4;
          if ((iVar8 == 0) || (*(uint *)(uVar3 + 8) < *(int *)(uVar3 + 4) + 1U)) goto LAB_82b02020;
        }
        else {
LAB_82b02020:
          iVar8 = fn_82AD6090(puVar18,1);
        }
        iVar1 = *(int *)(iVar8 + 8);
        *(int *)(iVar8 + 8) = iVar1 + 1;
        *(int *)((iVar1 + 4) * 4 + iVar8) = iVar7;
      }
    }
    lVar23 = lVar23 + 4;
  }
  lVar23 = (uVar19 + 10) * 4 + lVar14;
  uVar24 = uVar19;
  for (uVar20 = uStack_ec; uVar20 != 0; uVar20 = uVar20 - (uVar20 & ~(uVar20 - 1))) {
    lVar22 = -LZCOUNT(uVar20 & ~(uVar20 - 1));
    iVar7 = fn_82AD1978(lVar14,*(undefined4 *)
                                      ((int)((lVar22 + 0x2aU & 0xffffffff) << 2) + param_3));
    lVar23 = lVar23 + 4;
    *(int *)lVar23 = iVar7;
    uVar3 = (uint)((lVar22 + 0x1fU & 0xffffffff) << 1);
    iVar8 = (int)uVar24;
    uVar2 = *(uint *)(iVar7 + 0xc);
    uVar24 = uVar24 + 1;
    uStack_f0 = uStack_f0 & ~(3 << (uVar3 & 0x3e)) | iVar8 << (uVar3 & 0x3e);
    if ((uVar5 & 7) != 0) {
      iVar7 = 0;
      uVar21 = uVar19;
      lVar22 = lVar14 + 0x2c;
      do {
        if (*(uint *)((int)auStack_e0 + iVar7) == uVar2) {
          puVar18 = (uint *)*(int *)lVar22;
          uVar3 = puVar18[3];
          if (uVar3 != uVar2) {
            puVar16 = (uint *)(uVar3 + 4);
            for (puVar4 = *(uint **)(uVar3 + 4); puVar4 != puVar18; puVar4 = (uint *)puVar4[2]) {
              puVar16 = puVar4 + 2;
            }
            *puVar16 = puVar18[2];
            puVar18[2] = *(uint *)(uVar2 + 4);
            *(uint **)(uVar2 + 4) = puVar18;
            puVar18[3] = uVar2;
            uVar3 = *puVar18;
            uVar13 = (*(uint *)((int)auStack_c0 + iVar7) & 0x1b) << 5 | 0x1c80;
            *puVar18 = uVar13 | uVar3 & 0xfffffc9f;
            *puVar18 = uVar13 | uVar3 & 0xfffffc80 | *(uint *)((int)auStack_b0 + iVar7) & 0x1f;
            fn_82AFA378(param_1);
          }
        }
        uVar21 = uVar21 - 1;
        iVar7 = iVar7 + 4;
        lVar22 = lVar22 + 4;
      } while (uVar21 != 0);
    }
    if (((*(uint *)(uVar25 + 8) >> 0x17 & 1) != 0) && ((*(uint *)(uVar2 + 8) >> 0x17 & 1) == 0)) {
      *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) | 0x800000;
      uVar10 = fn_82ADD120(param_2);
      *(undefined2 *)(uVar2 + 0x12) = uVar10;
      *(uint *)(uVar2 + 0x10) = *(uint *)(uVar2 + 0x10) & 0xfff8ffff;
      puVar18 = *(uint **)(param_1 + 0x294);
      if ((puVar18[1] & 1) == 0) {
        uVar3 = *puVar18 & 0xfffffffe;
        iVar7 = uVar3 - 4;
        if ((iVar7 == 0) || (*(uint *)(uVar3 + 8) < *(int *)(uVar3 + 4) + 1U)) goto LAB_82b021dc;
      }
      else {
LAB_82b021dc:
        iVar7 = fn_82AD6090(puVar18,1);
      }
      iVar8 = *(int *)(iVar7 + 8);
      *(int *)(iVar7 + 8) = iVar8 + 1;
      *(uint *)((iVar8 + 4) * 4 + iVar7) = uVar2;
    }
  }
  fn_82AFE520(param_1,param_2,lVar14,0xe4,1,0);
  param_2 = lVar14;
LAB_82b02238:
  fn_82B8D3D0(param_1,param_2,param_3,1,0);
  puVar18 = (uint *)(param_3 + 4);
  while( true ) {
    puVar4 = (uint *)*puVar18;
    uVar20 = (uint)param_2;
    if (puVar4 == (uint *)0x0) break;
    if (puVar4[4] != 0) {
      puVar17 = (uint *)(puVar4[3] + 4);
      for (puVar16 = (uint *)*puVar17; puVar16 != puVar4; puVar16 = (uint *)puVar16[2]) {
        puVar17 = puVar16 + 2;
      }
      *puVar17 = puVar4[2];
      puVar4[2] = *(uint *)(uVar20 + 4);
      *(uint **)(uVar20 + 4) = puVar4;
      uVar25 = *puVar4;
      puVar4[3] = uVar20;
      *puVar4 = ((((uStack_f0 >> (uVar25 >> 10 & 6) & 3) << 2 | uStack_f0 >> (uVar25 >> 8 & 6) & 3)
                  << 2 | uStack_f0 >> (uVar25 >> 6 & 6) & 3) << 2 |
                uStack_f0 >> (uVar25 >> 4 & 6) & 3) << 5 | uVar25 & 0xffffe01f;
    }
    if ((uint *)*puVar18 == puVar4) {
      puVar18 = puVar4 + 2;
    }
  }
  fn_82B8AC10(param_1,param_3,*(undefined4 *)(param_1 + 0x28c),1);
  if (uStack_ec != 0) {
    lVar14 = param_2 + 0x28;
    for (uVar25 = 0; uVar25 < (*(uint *)(uVar20 + 8) >> 0x13 & 7); uVar25 = uVar25 + 1) {
      lVar14 = lVar14 + 4;
      fn_82B161E8(param_1,*(undefined4 *)(*(int *)lVar14 + 0xc),
                        *(undefined4 *)(param_1 + 0x294));
    }
    fn_82B0FC78(param_1,param_2);
    *(uint *)(uVar20 + 8) = *(uint *)(uVar20 + 8) | 0x1000000;
  }
  return 1;
}

