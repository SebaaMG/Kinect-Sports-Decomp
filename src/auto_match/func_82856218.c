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
extern unsigned int *auStack_2e0;
extern unsigned int *auStack_320;
extern unsigned int *auStack_360;
extern unsigned int *auStack_3a0;
extern unsigned int *auStack_3b0;
extern unsigned int *auStack_3f0;
extern unsigned int *auStack_430;
extern unsigned int *auStack_470;
extern unsigned int *auStack_4a0;
extern unsigned int *auStack_4ec;
extern unsigned int fStack_494;
extern int fn_82630750();
extern int fn_826308A0();
extern int fn_826310E0();
extern int fn_82631920();
extern int fn_82639030();
extern int fn_82639F78();
extern int fn_8263A120();
extern int fn_82640680();
extern int fn_82640A98();
extern int fn_82640F10();
extern int fn_827F9658();
extern int fn_8280AC48();
extern int fn_8280AE70();
extern int fn_8280CB70();
extern int fn_8280CC30();
extern int fn_8280CD18();
extern int fn_8280CED8();
extern int fn_82810360();
extern int fn_828116B8();
extern int fn_828461E8();
extern int fn_82851B40();
extern int fn_82851EA0();
extern int fn_82852D70();
extern int fn_82853700();
extern int fn_82853BC0();
extern int fn_82853C40();
extern int fn_82855BE8();
extern int fn_82857D38();
extern int fn_82858E98();
extern int fn_82860C68();
extern int fn_82860CB0();
extern unsigned int lbl_82015BE0;
extern unsigned int lbl_82195F48;
extern unsigned int lbl_82195F4C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_3a8;
extern unsigned int uStack_474;
extern unsigned int uStack_478;
extern unsigned int uStack_47c;
extern unsigned int uStack_484;
extern unsigned int uStack_488;
extern unsigned int uStack_48c;
extern unsigned int uStack_4a4;
extern unsigned int uStack_4a8;
extern unsigned int uStack_4ac;
extern unsigned int uStack_4c0;
extern unsigned int uStack_4c8;
extern unsigned int uStack_4d0;
extern unsigned int uStack_4d4;
extern unsigned int uStack_4d8;
extern unsigned int uStack_4dc;
extern unsigned int uStack_4e0;


void fn_82856218(uint *param_1,int param_2,ulonglong param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  ushort *puVar7;
  ushort *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  int iVar16;
  uint uVar17;
  ulonglong uVar15;
  undefined4 *puVar20;
  int *piVar21;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar22;
  ulonglong *puVar23;
  byte *pbVar24;
  longlong lVar25;
  double dVar26;
  double dVar27;
  ushort *puStack_4f0;
  undefined4 auStack_4ec [3];
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  uint uStack_4d8;
  uint uStack_4d4;
  ulonglong uStack_4d0;
  ulonglong uStack_4c8;
  ulonglong uStack_4c0;
  longlong lStack_4b8;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined1 auStack_4a0 [12];
  float fStack_494;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined1 auStack_470 [64];
  uint auStack_430 [16];
  uint auStack_3f0 [16];
  undefined1 auStack_3b0 [8];
  undefined4 uStack_3a8;
  undefined1 auStack_3a0 [64];
  undefined1 auStack_360 [64];
  undefined1 auStack_320 [64];
  undefined1 auStack_2e0 [64];
  int aiStack_2a0 [168];
  
  puVar3 = *(undefined4 **)(param_2 + 0x120);
  puStack_4f0 = (ushort *)*puVar3;
  uVar4 = puVar3[1];
  fn_82851B40(param_1,puVar3[3],auStack_4ec);
  pbVar24 = (byte *)(puVar3 + 8);
  fn_82857D38(param_1,*(undefined4 *)(param_2 + 0x120));
  dVar27 = (double)lbl_82015BE0;
  dVar26 = (double)lbl_821AAD20;
  puVar8 = puStack_4f0;
code_r0x82856294:
  puStack_4f0 = puVar8;
  puVar7 = puStack_4f0;
  switch(*(undefined1 *)(puStack_4f0 + 1)) {
  case 1:
    uVar14 = *(undefined4 *)(puStack_4f0 + 6);
    goto code_r0x828562ec;
  default:
    fn_82858E98(param_1,puStack_4f0,param_4,uVar4,auStack_4ec[0],&puStack_4f0);
    puVar8 = puStack_4f0;
    goto code_r0x82856294;
  case 10:
    puVar8 = puStack_4f0 + 2;
    lVar19 = 0;
    if (puStack_4f0[6] != 0) {
      do {
        iVar9 = (uint)*(byte *)(*(int *)puVar8 + (int)lVar19) * 0x10;
        fn_82639F78(param_1[1],lVar19,*(undefined4 *)(iVar9 + *(int *)(puVar7 + 4) + 4),0,
                          *(undefined4 *)(iVar9 + *(int *)(puVar7 + 4)),
                          0x8000000000000000 >>
                          ((((0x5f - lVar19) * 0x5556 & 0xffffffffU) >> 0x10) + 0x20 & 0x7f));
        lVar19 = lVar19 + 1;
      } while ((int)lVar19 < (int)(uint)puVar7[6]);
    }
    goto code_r0x828563cc;
  case 0xb:
    puVar8 = puStack_4f0 + 2;
    puVar20 = (undefined4 *)0x0;
    thunk_FUN_82838b18(aiStack_2a0,*(int *)(puStack_4f0 + 10) + param_4,param_1 + 0x29,
                       puStack_4f0[0xd],puStack_4f0[0xe]);
    lVar19 = 0;
    if (puVar7[0xc] != 0) {
      do {
        uVar2 = puVar7[0xd];
        bVar6 = false;
        if (uVar2 < puVar7[0xe]) {
          iVar9 = 0;
          if (uVar2 != 0) {
            piVar21 = aiStack_2a0;
            do {
              if (*(char *)(*(int *)(puVar7 + 8) + iVar9) ==
                  *(char *)(*(int *)(puVar7 + 6) + (int)lVar19)) {
                bVar6 = true;
                puVar20 = (undefined4 *)
                          ((uint)*(byte *)(*piVar21 + *(int *)puVar8) * 0x10 + *(int *)(puVar7 + 4))
                ;
              }
              iVar9 = iVar9 + 1;
              piVar21 = piVar21 + 1;
            } while (iVar9 < (int)(uint)uVar2);
          }
        }
        if (!bVar6) {
          puVar20 = (undefined4 *)
                    ((uint)*(byte *)(*(int *)(puVar7 + 6) + (int)lVar19) * 0x10 +
                    *(int *)(puVar7 + 4));
        }
        fn_82639F78(param_1[1],lVar19,puVar20[1],0,*puVar20,
                          0x8000000000000000 >>
                          ((((0x5f - lVar19) * 0x5556 & 0xffffffffU) >> 0x10) + 0x20 & 0x7f));
        lVar19 = lVar19 + 1;
      } while ((int)lVar19 < (int)(uint)puVar7[0xc]);
    }
    break;
  case 0x12:
    puVar12 = (uint *)(puStack_4f0 + 2);
    fn_82855BE8(param_1,puStack_4f0[4],*(undefined4 *)(puStack_4f0 + 2));
    param_1[0x1d] = *puVar12;
    param_1[0x1e] = (uint)puVar7[4];
    break;
  case 0x13:
    uVar17 = param_1[0x1a4c];
    puVar12 = (uint *)(puStack_4f0 + 2);
    if ((*(char *)(puStack_4f0 + 5) == '\0') || (param_1[0x41] == 0)) {
      iVar9 = 0;
      if (puStack_4f0[4] != 0) {
        lVar19 = 0;
        do {
          uVar13 = lVar19 + (ulonglong)param_1[0x26];
          uVar15 = (uVar13 & 0xffffffff) >> 2;
          fn_826310E0(param_1[1],uVar13,
                       (ulonglong)*(byte *)(iVar9 + *puVar12) * 0x40 +
                       (ulonglong)param_1[uVar17 * 0x34 + 0x7c],3,
                       (ulonglong)
                       (-0x8000000000000000 >> (((uVar13 + 2 & 0xffffffff) >> 2) - uVar15 & 0x7f))
                       >> (uVar15 & 0x7f));
          iVar9 = iVar9 + 1;
          lVar19 = lVar19 + 3;
        } while (iVar9 < (int)(uint)puVar7[4]);
      }
      param_1[0x41] = 1;
      param_1[0x1f] = *puVar12;
      param_1[0x20] = (uint)puVar7[4];
    }
    goto code_r0x828563cc;
  case 0x14:
    bVar1 = *(byte *)(puStack_4f0 + 4);
    if (bVar1 == 0) {
      iVar9 = 0x84;
    }
    else if (bVar1 == 1) {
      iVar9 = 0x88;
    }
    else if (bVar1 < 3) {
      iVar9 = 0x98;
    }
    else if (bVar1 == 3) {
      iVar9 = 0x9c;
    }
    else {
      if (bVar1 < 5) {
        uVar13 = (ulonglong)*(byte *)((int)puStack_4f0 + 9);
        lStack_4b8 = (longlong)(int)*(float *)(puStack_4f0 + 2);
        puVar12 = param_1 + 0x29;
        uVar15 = (ulonglong)(uint)(int)*(float *)(puStack_4f0 + 2);
        uVar18 = (uVar15 + uVar13) - 1;
        goto code_r0x828571c4;
      }
      if (bVar1 != 5) goto code_r0x828563cc;
      iVar9 = 0xa0;
    }
    *(int *)((int)param_1 + iVar9) = (int)*(float *)(puStack_4f0 + 2);
    goto code_r0x828563cc;
  case 0x15:
    if ((*(uint *)(puStack_4f0 + 4) & param_3) != (param_3 & 0xffffffff)) goto code_r0x82856458;
    goto code_r0x828564d8;
  case 0x16:
    uVar17 = param_1[0x3f];
    goto code_r0x828564a4;
  case 0x17:
    uVar17 = param_1[0x43];
    goto code_r0x82856a74;
  case 0x18:
    uVar17 = param_1[0x42];
code_r0x82856a74:
    iVar9 = fn_828116B8(uVar17,*(undefined4 *)(puStack_4f0 + 2));
    if (iVar9 == 0) {
      puVar8 = *(ushort **)(puVar7 + 4);
      goto code_r0x82856294;
    }
    break;
  case 0x19:
code_r0x82856458:
    puVar8 = *(ushort **)(puStack_4f0 + 2);
    goto code_r0x82856294;
  case 0x1a:
    if ((*(uint *)(puStack_4f0 + 2) & param_3) != (param_3 & 0xffffffff)) {
      return;
    }
    goto code_r0x828564d8;
  case 0x1b:
    uVar17 = param_1[0x43];
    goto code_r0x82856a90;
  case 0x1c:
    uVar17 = param_1[0x42];
code_r0x82856a90:
    iVar9 = fn_828116B8(uVar17,*(undefined4 *)(puStack_4f0 + 2));
    if (iVar9 == 0) {
      return;
    }
    break;
  case 0x1d:
    return;
  case 0x20:
    if (*(code **)(puStack_4f0 + 2) != (code *)0x0) {
      (**(code **)(puStack_4f0 + 2))(*param_1,puStack_4f0 + 6,param_4,auStack_4ec[0],pbVar24);
    }
    goto code_r0x828563cc;
  case 0x21:
    uVar17 = *param_1;
    uVar22 = param_1[0x1a4c];
    puVar8 = (ushort *)(param_4 + *(int *)(puStack_4f0 + 2));
    if ((puVar8[0x20] & 0x100) == 0) {
      puVar8 = puStack_4f0 + 8;
    }
    fn_8280AC48(puVar8,auStack_3a0);
    if (*(char *)(puVar7 + 6) == '\0') {
      fn_8280CED8(auStack_3a0,auStack_320);
      fn_8280CB70(param_1 + uVar22 * 0x34 + 0x5c,auStack_320,auStack_2e0);
      fn_8280CB70(param_1 + uVar22 * 0x34 + 0x6c,auStack_2e0);
      fn_8280AC48(auStack_3a0,param_1 + uVar22 * 0x34 + 0x5c);
    }
    else {
      iVar9 = uVar22 * 0x34 + 0x5c;
      if (*(char *)(puVar7 + 6) == '\x02') {
        iVar9 = uVar22 * 0x34 + 0x6c;
      }
      fn_8280CB70(param_1 + iVar9,auStack_3a0);
    }
    puVar12 = param_1 + uVar22 * 0x34 + 0x6c;
    if (*(int *)(puVar7 + 4) == 0) {
      fn_8280CB70(puVar12,param_1 + uVar22 * 0x34 + 0x5c,auStack_3a0);
      fn_8280CB70((ulonglong)uVar17 + 0x40,auStack_3a0,param_1 + uVar22 * 0x34 + 0x4c);
    }
    else {
      fn_8280CB70((ulonglong)uVar17 + 0x40,puVar12,param_1 + uVar22 * 0x34 + 0x4c);
      fn_82855BE8(param_1,param_1[0x1e],param_1[0x1d]);
      iVar9 = 0;
      uVar17 = param_1[0x20];
      uVar5 = param_1[0x1f];
      if (0 < (int)uVar17) {
        lVar19 = 0;
        do {
          uVar13 = lVar19 + (ulonglong)param_1[0x26];
          uVar15 = (uVar13 & 0xffffffff) >> 2;
          fn_826310E0(param_1[1],uVar13,
                       (ulonglong)*(byte *)(iVar9 + uVar5) * 0x40 +
                       (ulonglong)param_1[uVar22 * 0x34 + 0x7c],3,
                       (ulonglong)
                       (-0x8000000000000000 >> (((uVar13 + 2 & 0xffffffff) >> 2) - uVar15 & 0x7f))
                       >> (uVar15 & 0x7f));
          iVar9 = iVar9 + 1;
          lVar19 = lVar19 + 3;
        } while (iVar9 < (int)uVar17);
      }
    }
    uVar17 = param_1[0x1a4c];
    lVar19 = (ulonglong)*param_1 + 0x40;
    lVar25 = (ulonglong)*param_1 + 0x80;
    if (param_1[0x23] != 0xffff) {
      fn_8280CD18(puVar12,auStack_470);
      uVar22 = param_1[0x23];
      fn_826310E0(param_1[1],(ulonglong)uVar22,auStack_470,3,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar22 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar22 >> 2) & 0x7f))
                   >> ((ulonglong)(uVar22 >> 2) & 0x7f));
    }
    if (param_1[0x21] != 0xffff) {
      fn_8280CD18(lVar25,auStack_470);
      uVar22 = param_1[0x21];
      fn_826310E0(param_1[1],(ulonglong)uVar22,auStack_470,4,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar22 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar22 >> 2) & 0x7f))
                   >> ((ulonglong)(uVar22 >> 2) & 0x7f));
    }
    if (param_1[0x22] != 0xffff) {
      fn_8280CC30(lVar19,puVar12,auStack_470);
      uVar22 = param_1[0x22];
      fn_826310E0(param_1[1],(ulonglong)uVar22,auStack_470,3,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar22 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar22 >> 2) & 0x7f))
                   >> ((ulonglong)(uVar22 >> 2) & 0x7f));
    }
    if (param_1[0x48] != 0xffff) {
      fn_8280CC30(lVar25,param_1 + uVar17 * 0x34 + 0x4c,(ulonglong)*param_1 + 0xc0);
      uVar17 = param_1[0x48];
      fn_826310E0(param_1[1],(ulonglong)uVar17,(ulonglong)*param_1 + 0xc0,4,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar17 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar17 >> 2) & 0x7f))
                   >> ((ulonglong)(uVar17 >> 2) & 0x7f));
    }
    if (param_1[0x24] != 0xffff) {
      fn_8280CD18(lVar19,auStack_470);
      puVar11 = auStack_470;
code_r0x82856da8:
      uVar17 = param_1[0x24];
      fn_826310E0(param_1[1],(ulonglong)uVar17,puVar11,3,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar17 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar17 >> 2) & 0x7f))
                   >> ((ulonglong)(uVar17 >> 2) & 0x7f));
    }
    break;
  case 0x23:
    fn_82851EA0(param_1);
    break;
  case 0x24:
    param_1[0x1a4c] = param_1[0x1a4c] - 1;
    goto code_r0x828564d8;
  case 0x25:
    uVar17 = param_1[0x1a4c] - 1;
    param_1[0x1a4c] = uVar17;
    if (*(int *)(puStack_4f0 + 2) != 0) {
      fn_82855BE8(param_1,param_1[0x1e],param_1[0x1d]);
      iVar9 = 0;
      uVar22 = param_1[0x20];
      uVar5 = param_1[0x1f];
      if (0 < (int)uVar22) {
        lVar19 = 0;
        do {
          uVar13 = lVar19 + (ulonglong)param_1[0x26];
          uVar15 = (uVar13 & 0xffffffff) >> 2;
          fn_826310E0(param_1[1],uVar13,
                       (ulonglong)*(byte *)(iVar9 + uVar5) * 0x40 +
                       (ulonglong)param_1[uVar17 * 0x34 + 0x7c],3,
                       (ulonglong)
                       (-0x8000000000000000 >> (((uVar13 + 2 & 0xffffffff) >> 2) - uVar15 & 0x7f))
                       >> (uVar15 & 0x7f));
          iVar9 = iVar9 + 1;
          lVar19 = lVar19 + 3;
        } while (iVar9 < (int)uVar22);
      }
      param_1[0x41] = 1;
    }
    uVar22 = param_1[0x1a4c];
    lVar19 = (ulonglong)*param_1 + 0x40;
    lVar25 = (ulonglong)*param_1 + 0x80;
    if (param_1[0x23] != 0xffff) {
      fn_8280CD18(param_1 + uVar17 * 0x34 + 0x6c,auStack_430);
      uVar5 = param_1[0x23];
      fn_826310E0(param_1[1],(ulonglong)uVar5,auStack_430,3,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar5 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar5 >> 2) & 0x7f)) >>
                   ((ulonglong)(uVar5 >> 2) & 0x7f));
    }
    if (param_1[0x21] != 0xffff) {
      fn_8280CD18(lVar25,auStack_430);
      uVar5 = param_1[0x21];
      fn_826310E0(param_1[1],(ulonglong)uVar5,auStack_430,4,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar5 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar5 >> 2) & 0x7f)) >>
                   ((ulonglong)(uVar5 >> 2) & 0x7f));
    }
    if (param_1[0x22] != 0xffff) {
      fn_8280CC30(lVar19,param_1 + uVar17 * 0x34 + 0x6c,auStack_430);
      uVar17 = param_1[0x22];
      fn_826310E0(param_1[1],(ulonglong)uVar17,auStack_430,3,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar17 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar17 >> 2) & 0x7f))
                   >> ((ulonglong)(uVar17 >> 2) & 0x7f));
    }
    if (param_1[0x48] != 0xffff) {
      fn_8280CC30(lVar25,param_1 + uVar22 * 0x34 + 0x4c,(ulonglong)*param_1 + 0xc0);
      uVar17 = param_1[0x48];
      fn_826310E0(param_1[1],(ulonglong)uVar17,(ulonglong)*param_1 + 0xc0,4,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar17 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar17 >> 2) & 0x7f))
                   >> ((ulonglong)(uVar17 >> 2) & 0x7f));
    }
    if (param_1[0x24] != 0xffff) {
      fn_8280CD18(lVar19,auStack_430);
      puVar12 = auStack_430;
code_r0x828571b8:
      uVar15 = (ulonglong)param_1[0x24];
      uVar13 = 3;
      uVar18 = uVar15 + 2;
code_r0x828571c4:
      fn_826310E0(param_1[1],uVar15,puVar12,uVar13,
                   (ulonglong)
                   (-0x8000000000000000 >> (((uVar18 & 0xffffffff) >> 2) - (uVar15 >> 2) & 0x7f)) >>
                   (uVar15 >> 2 & 0x7f));
    }
    goto code_r0x828563cc;
  case 0x26:
    lVar19 = (ulonglong)*param_1 + 0x40;
    lVar25 = (ulonglong)*param_1 + 0x80;
    uVar17 = param_1[0x1a4c] - 1;
    param_1[0x1a4c] = uVar17;
    if (param_1[0x23] != 0xffff) {
      fn_8280CD18(param_1 + uVar17 * 0x34 + 0x6c,auStack_3f0);
      uVar22 = param_1[0x23];
      fn_826310E0(param_1[1],(ulonglong)uVar22,auStack_3f0,3,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar22 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar22 >> 2) & 0x7f))
                   >> ((ulonglong)(uVar22 >> 2) & 0x7f));
    }
    if (param_1[0x21] != 0xffff) {
      fn_8280CD18(lVar25,auStack_3f0);
      uVar22 = param_1[0x21];
      fn_826310E0(param_1[1],(ulonglong)uVar22,auStack_3f0,4,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar22 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar22 >> 2) & 0x7f))
                   >> ((ulonglong)(uVar22 >> 2) & 0x7f));
    }
    if (param_1[0x22] != 0xffff) {
      fn_8280CC30(lVar19,param_1 + uVar17 * 0x34 + 0x6c,auStack_3f0);
      uVar22 = param_1[0x22];
      fn_826310E0(param_1[1],(ulonglong)uVar22,auStack_3f0,3,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar22 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar22 >> 2) & 0x7f))
                   >> ((ulonglong)(uVar22 >> 2) & 0x7f));
    }
    if (param_1[0x48] != 0xffff) {
      fn_8280CC30(lVar25,param_1 + uVar17 * 0x34 + 0x4c,(ulonglong)*param_1 + 0xc0);
      uVar17 = param_1[0x48];
      fn_826310E0(param_1[1],(ulonglong)uVar17,(ulonglong)*param_1 + 0xc0,4,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar17 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar17 >> 2) & 0x7f))
                   >> ((ulonglong)(uVar17 >> 2) & 0x7f));
    }
    if (param_1[0x24] != 0xffff) {
      fn_8280CD18(lVar19,auStack_3f0);
      puVar12 = auStack_3f0;
      goto code_r0x828571b8;
    }
    goto code_r0x828563cc;
  case 0x27:
    if ((*pbVar24 & 1) == 0) goto code_r0x82856458;
    goto code_r0x828564d8;
  case 0x28:
    if ((*pbVar24 & 2) == 0) {
      return;
    }
code_r0x828564d8:
    uVar2 = *puStack_4f0;
    goto code_r0x828563d0;
  case 0x29:
    uVar17 = (uint)*(byte *)((int)puVar3 + 0x21);
code_r0x828564a4:
    puVar8 = *(ushort **)(puStack_4f0 + (uVar17 + 2) * 2);
    goto code_r0x82856294;
  case 0x2b:
    puVar8 = puStack_4f0 + 2;
    fn_82639030(param_1[1],param_1[0x47] == 0);
    fn_8263A120(param_1[1],*(undefined4 *)(puVar7 + 6));
    if ((1 << (param_1[0x3f] & 0x3f) & *(uint *)(puVar7 + 8)) != 0) {
      iVar9 = *(int *)puVar8;
      uVar17 = *(uint *)(puVar7 + 4);
code_r0x828574fc:
      if (iVar9 == 4) {
code_r0x828573d0:
        iVar9 = 4;
        uVar15 = ((ulonglong)uVar17 / 3) * 3;
      }
      else {
        iVar16 = iVar9 * 8;
        lVar19 = (longlong)*(int *)(&lbl_82195F48 + iVar16) * (longlong)(int)(uVar17 - 2);
code_r0x828573f0:
        uVar15 = lVar19 + (ulonglong)*(uint *)(&lbl_82195F4C + iVar16);
      }
      uVar14 = 0;
code_r0x82857400:
      fn_82640F10(param_1[1],iVar9,0,uVar14,uVar15);
      break;
    }
    goto code_r0x828562f4;
  case 0x2e:
    puVar8 = puStack_4f0 + 2;
    lVar19 = 0;
    if (puStack_4f0[6] != 0) {
      do {
        puVar20 = (undefined4 *)
                  ((uint)*(byte *)((int)lVar19 + *(int *)puVar8) * 0x10 + *(int *)(puVar7 + 4));
        iVar9 = puVar20[1];
        if (iVar9 != 0) {
          fn_82639F78(param_1[1],lVar19,iVar9,0,*puVar20,
                            0x8000000000000000 >>
                            ((((0x5f - lVar19) * 0x5556 & 0xffffffffU) >> 0x10) + 0x20 & 0x7f));
        }
        lVar19 = lVar19 + 1;
      } while ((int)lVar19 < (int)(uint)puVar7[6]);
    }
    uVar14 = *(undefined4 *)(puVar7 + 10);
    goto code_r0x8285644c;
  case 0x2f:
    puVar8 = puStack_4f0 + 2;
    puVar20 = (undefined4 *)0x0;
    thunk_FUN_82838b18(aiStack_2a0,*(int *)(puStack_4f0 + 10) + param_4,param_1 + 0x29,
                       puStack_4f0[0xd],puStack_4f0[0xe]);
    lVar19 = 0;
    if (puVar7[0xc] != 0) {
      do {
        uVar2 = puVar7[0xd];
        bVar6 = false;
        if (uVar2 < puVar7[0xe]) {
          iVar9 = 0;
          if (uVar2 != 0) {
            piVar21 = aiStack_2a0;
            do {
              if (*(char *)(*(int *)(puVar7 + 8) + iVar9) ==
                  *(char *)(*(int *)(puVar7 + 6) + (int)lVar19)) {
                bVar6 = true;
                puVar20 = (undefined4 *)
                          ((uint)*(byte *)(*piVar21 + *(int *)puVar8) * 0x10 + *(int *)(puVar7 + 4))
                ;
              }
              iVar9 = iVar9 + 1;
              piVar21 = piVar21 + 1;
            } while (iVar9 < (int)(uint)uVar2);
          }
        }
        if (!bVar6) {
          puVar20 = (undefined4 *)
                    ((uint)*(byte *)(*(int *)(puVar7 + 6) + (int)lVar19) * 0x10 +
                    *(int *)(puVar7 + 4));
        }
        fn_82639F78(param_1[1],lVar19,puVar20[1],0,*puVar20,
                          0x8000000000000000 >>
                          ((((0x5f - lVar19) * 0x5556 & 0xffffffffU) >> 0x10) + 0x20 & 0x7f));
        lVar19 = lVar19 + 1;
      } while ((int)lVar19 < (int)(uint)puVar7[0xc]);
    }
    uVar14 = *(undefined4 *)(puVar7 + 0x12);
code_r0x8285644c:
    fn_82631920(param_1[1],uVar14);
    break;
  case 0x30:
    uVar17 = param_1[0x43];
    goto code_r0x828562d4;
  case 0x31:
    uVar17 = param_1[0x42];
code_r0x828562d4:
    iVar9 = fn_828116B8(uVar17,*(undefined4 *)(puStack_4f0 + 8));
    if (iVar9 != 0) {
      uVar14 = *(undefined4 *)(puVar7 + 6);
code_r0x828562ec:
      fn_8263A120(param_1[1],uVar14);
code_r0x828562f4:
      uVar14 = *(undefined4 *)(puVar7 + 4);
      uVar10 = *(undefined4 *)(puVar7 + 2);
code_r0x828562fc:
      fn_82640A98(param_1[1],uVar10,0,0,uVar14);
    }
    break;
  case 0x32:
    iVar9 = *(int *)(*(int *)(param_4 + 0x4c) + *(int *)(puStack_4f0 + 2) * 0x10);
    if (iVar9 != 0) {
      uVar17 = *param_1;
      uVar22 = -(uint)(param_1[0x3f] < *(uint *)(iVar9 + 0x20)) & param_1[0x3f];
      iVar16 = uVar22 * 0xc + *(int *)(iVar9 + 0x24);
      fn_828461E8(iVar9,*(undefined4 *)
                               (*(int *)(param_1[0x1a4f] + 0x4c) + *(int *)(puStack_4f0 + 2) * 0x10
                               + 4),param_1[1],uVar17 + 0x40,uVar22,*(undefined4 *)(uVar17 + 0x100),
                        uVar17,0);
      uVar17 = *(uint *)(*(int *)(iVar16 + 4) + 0x10);
      if (-1 < (int)uVar17) {
        puVar23 = (ulonglong *)param_1[1];
        *(uint *)(puVar23 + (uVar17 + 0x78) * 2) = param_1[0x29];
        *(uint *)((int)puVar23 + uVar17 * 0x10 + 0x784) = param_1[0x2a];
        *(uint *)(puVar23 + uVar17 * 2 + 0xf1) = param_1[0x2b];
        *(uint *)((int)puVar23 + uVar17 * 0x10 + 0x78c) = param_1[0x2c];
        *puVar23 = 0x8000000000000000U >> ((ulonglong)(uVar17 >> 2) & 0x7f) | *puVar23;
      }
      uVar17 = *(uint *)(*(int *)(iVar16 + 4) + 0xc);
      if (-1 < (int)uVar17) {
        param_1[0x26] = uVar17;
      }
      uVar17 = *(uint *)(*(int *)(iVar16 + 4) + 0x14);
      if (-1 < (int)uVar17) {
        fn_826310E0(param_1[1],(ulonglong)uVar17,(ulonglong)*param_1 + 0xc0,4,
                     (ulonglong)
                     (-0x8000000000000000 >>
                     ((((ulonglong)uVar17 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar17 >> 2) & 0x7f)
                     ) >> ((ulonglong)(uVar17 >> 2) & 0x7f));
        param_1[0x48] = *(uint *)(*(int *)(iVar16 + 4) + 0x14);
      }
      uVar17 = *(uint *)(*(int *)(iVar16 + 4) + 0x18);
      if (-1 < (int)uVar17) {
        param_1[0x28] = uVar17;
      }
      uVar17 = *(uint *)(*(int *)(iVar16 + 4) + 0x1c);
      if (-1 < (int)uVar17) {
        param_1[0x27] = uVar17;
      }
    }
    goto code_r0x828563cc;
  case 0x34:
    uVar17 = param_1[0x1a4c];
    uVar22 = *param_1;
    fn_827F9658((ulonglong)*(uint *)(puStack_4f0 + 2) * 0x34 + (ulonglong)param_1[0x1b],
                    ((ulonglong)*(uint *)(puStack_4f0 + 2) & 0x3ffffff) * 0x40 +
                    (ulonglong)param_1[0x1a],param_1 + uVar17 * 0x34 + 0x5c);
    fn_8280CB70((ulonglong)uVar22 + 0x40,param_1 + uVar17 * 0x34 + 0x5c,
                 param_1 + uVar17 * 0x34 + 0x4c);
    lVar19 = (ulonglong)*param_1 + 0x40;
    lVar25 = (ulonglong)*param_1 + 0x80;
    uVar22 = param_1[0x1a4c];
    if (param_1[0x23] != 0xffff) {
      fn_8280CD18(param_1 + uVar17 * 0x34 + 0x6c,auStack_360);
      uVar5 = param_1[0x23];
      fn_826310E0(param_1[1],(ulonglong)uVar5,auStack_360,3,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar5 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar5 >> 2) & 0x7f)) >>
                   ((ulonglong)(uVar5 >> 2) & 0x7f));
    }
    if (param_1[0x21] != 0xffff) {
      fn_8280CD18(lVar25,auStack_360);
      uVar5 = param_1[0x21];
      fn_826310E0(param_1[1],(ulonglong)uVar5,auStack_360,4,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar5 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar5 >> 2) & 0x7f)) >>
                   ((ulonglong)(uVar5 >> 2) & 0x7f));
    }
    if (param_1[0x22] != 0xffff) {
      fn_8280CC30(lVar19,param_1 + uVar17 * 0x34 + 0x6c,auStack_360);
      uVar17 = param_1[0x22];
      fn_826310E0(param_1[1],(ulonglong)uVar17,auStack_360,3,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar17 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar17 >> 2) & 0x7f))
                   >> ((ulonglong)(uVar17 >> 2) & 0x7f));
    }
    if (param_1[0x48] != 0xffff) {
      fn_8280CC30(lVar25,param_1 + uVar22 * 0x34 + 0x4c,(ulonglong)*param_1 + 0xc0);
      uVar17 = param_1[0x48];
      fn_826310E0(param_1[1],(ulonglong)uVar17,(ulonglong)*param_1 + 0xc0,4,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar17 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar17 >> 2) & 0x7f))
                   >> ((ulonglong)(uVar17 >> 2) & 0x7f));
    }
    if (param_1[0x24] != 0xffff) {
      fn_8280CD18(lVar19,auStack_360);
      puVar11 = auStack_360;
      goto code_r0x82856da8;
    }
    break;
  case 0x36:
    puVar8 = puStack_4f0 + 2;
    lVar19 = 0;
    if (puStack_4f0[4] != 0) {
      iVar9 = 0;
      do {
        iVar16 = *(int *)(*(int *)(iVar9 + *(int *)puVar8) * 4 + *(int *)(param_4 + 0x34));
        if (iVar16 != 0) {
          fn_82639F78(param_1[1],lVar19,*(undefined4 *)(iVar16 + 0x20),0,
                            *(undefined4 *)(iVar16 + 0x2c),
                            0x8000000000000000 >>
                            ((((0x5f - lVar19) * 0x5556 & 0xffffffffU) >> 0x10) + 0x20 & 0x7f));
        }
        lVar19 = lVar19 + 1;
        iVar9 = iVar9 + 4;
      } while ((int)lVar19 < (int)(uint)puVar7[4]);
    }
    goto code_r0x828563cc;
  case 0x37:
    puVar8 = puStack_4f0 + 2;
    iVar9 = 0;
    thunk_FUN_82838b18(aiStack_2a0,*(int *)(puStack_4f0 + 10) + param_4,param_1 + 0x29,
                       puStack_4f0[0xd],puStack_4f0[0xe]);
    lVar19 = 0;
    if (puVar7[0xc] != 0) {
      do {
        uVar2 = puVar7[0xd];
        bVar6 = false;
        if (uVar2 < puVar7[0xe]) {
          iVar16 = 0;
          if (uVar2 != 0) {
            piVar21 = aiStack_2a0;
            do {
              if (*(char *)(*(int *)(puVar7 + 8) + iVar16) ==
                  *(char *)(*(int *)(puVar7 + 6) + (int)lVar19)) {
                bVar6 = true;
                iVar9 = *(int *)(*(int *)((uint)*(byte *)(*piVar21 + *(int *)puVar8) * 4 +
                                         *(int *)(puVar7 + 4)) * 4 + *(int *)(param_4 + 0x34));
              }
              iVar16 = iVar16 + 1;
              piVar21 = piVar21 + 1;
            } while (iVar16 < (int)(uint)uVar2);
          }
        }
        if (!bVar6) {
          iVar9 = *(int *)(*(int *)((uint)*(byte *)(*(int *)(puVar7 + 6) + (int)lVar19) * 4 +
                                   *(int *)(puVar7 + 4)) * 4 + *(int *)(param_4 + 0x34));
        }
        if (iVar9 != 0) {
          fn_82639F78(param_1[1],lVar19,*(undefined4 *)(iVar9 + 0x20),0,
                            *(undefined4 *)(iVar9 + 0x2c),
                            0x8000000000000000 >>
                            ((((0x5f - lVar19) * 0x5556 & 0xffffffffU) >> 0x10) + 0x20 & 0x7f));
        }
        lVar19 = lVar19 + 1;
      } while ((int)lVar19 < (int)(uint)puVar7[0xc]);
    }
    break;
  case 0x38:
    iVar9 = *(int *)(*(int *)(puStack_4f0 + 6) * 4 + *(int *)(param_4 + 0x38));
    if (iVar9 != 0) {
      fn_8263A120(param_1[1],*(undefined4 *)(iVar9 + 0x20));
      fn_82640A98(param_1[1],*(undefined4 *)(iVar9 + 0x30),0,0,*(undefined4 *)(iVar9 + 0x28));
    }
code_r0x828563cc:
    uVar2 = *puVar7;
code_r0x828563d0:
    puVar8 = (ushort *)((uint)uVar2 + (int)puStack_4f0);
    goto code_r0x82856294;
  case 0x39:
    uVar17 = param_1[0x43];
    goto code_r0x82856338;
  case 0x3a:
    uVar17 = param_1[0x42];
code_r0x82856338:
    iVar9 = fn_828116B8(uVar17,*(undefined4 *)(puStack_4f0 + 8));
    if ((iVar9 == 0) ||
       (iVar9 = *(int *)(*(int *)(puVar7 + 6) * 4 + *(int *)(param_4 + 0x38)), iVar9 == 0)) break;
    fn_8263A120(param_1[1],*(undefined4 *)(iVar9 + 0x20));
    uVar14 = *(undefined4 *)(iVar9 + 0x28);
    uVar10 = *(undefined4 *)(iVar9 + 0x30);
    goto code_r0x828562fc;
  case 0x3b:
    puVar8 = (ushort *)((uint)*puStack_4f0 + (int)puStack_4f0);
    if ((param_3 & 0x8000) != 0) {
      if (*(int *)(param_4 + 0x3c) != 0) {
        iVar9 = *(int *)(puStack_4f0 + 2) * 0x14 + *(int *)(param_4 + 0x3c);
        puStack_4f0 = puVar8;
        fn_82860C68(iVar9);
        fn_82810360(puVar7 + 4,auStack_4a0);
        fStack_494 = (float)dVar26;
        fn_8280AE70((ulonglong)*param_1 + 0x40,auStack_4a0,auStack_3b0);
        *(undefined4 *)(iVar9 + 0x10) = uStack_3a8;
        puVar8 = puStack_4f0;
      }
    }
    goto code_r0x82856294;
  case 0x3c:
    puVar8 = (ushort *)((uint)*puStack_4f0 + (int)puStack_4f0);
    if (((param_3 & 0x8000) != 0) && ((ulonglong)*(uint *)(param_4 + 0x3c) != 0)) {
      puVar12 = (uint *)(puStack_4f0 + 2);
      puStack_4f0 = puVar8;
      fn_82860CB0((ulonglong)*puVar12 * 0x14 + (ulonglong)*(uint *)(param_4 + 0x3c));
      puVar8 = puStack_4f0;
    }
    goto code_r0x82856294;
  case 0x3d:
    iVar9 = fn_828116B8(param_1[0x43],*(undefined4 *)(puStack_4f0 + 10));
    if (iVar9 == 0) break;
    fn_82639030(param_1[1],param_1[0x47] == 0);
    fn_8263A120(param_1[1],*(undefined4 *)(puVar7 + 6));
    if ((1 << (param_1[0x3f] & 0x3f) & *(uint *)(puVar7 + 8)) != 0) {
      iVar9 = *(int *)(puVar7 + 2);
      uVar17 = *(uint *)(puVar7 + 4);
      if (iVar9 == 4) goto code_r0x828573d0;
      iVar16 = iVar9 * 8;
      lVar19 = (longlong)(int)(uVar17 - 2) * (longlong)*(int *)(&lbl_82195F48 + iVar16);
      goto code_r0x828573f0;
    }
code_r0x8285747c:
    uVar14 = *(undefined4 *)(puVar7 + 4);
    uVar10 = *(undefined4 *)(puVar7 + 2);
    goto code_r0x828562fc;
  case 0x3e:
    iVar9 = fn_828116B8(param_1[0x42],*(undefined4 *)(puStack_4f0 + 10));
    if (iVar9 != 0) {
      fn_82639030(param_1[1],param_1[0x47] == 0);
      fn_8263A120(param_1[1],*(undefined4 *)(puVar7 + 6));
      if ((1 << (param_1[0x3f] & 0x3f) & *(uint *)(puVar7 + 8)) == 0) goto code_r0x8285747c;
      iVar9 = *(int *)(puVar7 + 2);
      uVar17 = *(uint *)(puVar7 + 4);
      goto code_r0x828574fc;
    }
    break;
  case 0x3f:
    puVar8 = puStack_4f0 + 2;
    uVar17 = 1 << (param_1[0x3f] & 0x3f);
    if ((*(uint *)(puStack_4f0 + 8) & uVar17) != 0) {
      iVar9 = *(int *)(puStack_4f0 + 0xc) * 0x3c + *(int *)(*(int *)(param_4 + 0x48) + 0x40);
      fn_8263A120(param_1[1],
                        *(undefined4 *)(*(int *)(iVar9 + 0x38) * 8 + *(int *)(iVar9 + 0x30)));
      fn_82639030(param_1[1],2);
      uStack_4d0 = (ulonglong)*(uint *)(puVar7 + 6);
      uVar17 = param_1[0x28];
      puVar23 = (ulonglong *)param_1[1];
      *(undefined4 *)(puVar23 + uVar17 * 2 + 0xf1) = uStack_488;
      *(undefined4 *)((int)puVar23 + uVar17 * 0x10 + 0x78c) = uStack_484;
      *(undefined4 *)((int)puVar23 + uVar17 * 0x10 + 0x784) = uStack_48c;
      *(float *)(puVar23 + (uVar17 + 0x78) * 2) = (float)((double)uStack_4d0 * dVar27);
      *puVar23 = 0x8000000000000000U >> ((ulonglong)(uVar17 >> 2) & 0x7f) | *puVar23;
      if (*(int *)puVar8 != 4) break;
      uVar17 = *(uint *)(puVar7 + 4);
      uVar14 = *(undefined4 *)(puVar7 + 0xe);
code_r0x828577cc:
      iVar9 = 0x11;
      uVar15 = (ulonglong)uVar17 / 3;
      goto code_r0x82857400;
    }
    if ((*(uint *)(puStack_4f0 + 10) & uVar17) == 0) {
      uVar13 = (ulonglong)*(uint *)(puStack_4f0 + 4);
      uVar15 = (ulonglong)*(uint *)(puStack_4f0 + 6);
      uVar14 = *(undefined4 *)puVar8;
    }
    else {
      uVar22 = *(uint *)(puStack_4f0 + 4);
      uVar17 = *(uint *)(puStack_4f0 + 6);
code_r0x828577ec:
      uVar14 = 1;
      uVar13 = (ulonglong)uVar22 / 3;
      uVar15 = (ulonglong)uVar17 / 3;
    }
code_r0x828577f8:
    fn_82640680(param_1[1],uVar14,uVar15,uVar13);
    break;
  case 0x40:
    iVar9 = fn_828116B8(param_1[0x43],*(undefined4 *)(puStack_4f0 + 0x10));
    if (iVar9 != 0) {
      uVar17 = 1 << (param_1[0x3f] & 0x3f);
      if ((*(uint *)(puVar7 + 8) & uVar17) == 0) goto code_r0x828578fc;
      iVar9 = *(int *)(puVar7 + 0xc) * 0x3c + *(int *)(*(int *)(param_4 + 0x48) + 0x40);
      fn_8263A120(param_1[1],
                        *(undefined4 *)(*(int *)(iVar9 + 0x38) * 8 + *(int *)(iVar9 + 0x30)));
      fn_82639030(param_1[1],2);
      uStack_4c0 = (ulonglong)*(uint *)(puVar7 + 6);
      uVar17 = param_1[0x28];
      puVar23 = (ulonglong *)param_1[1];
      *(undefined4 *)(puVar23 + uVar17 * 2 + 0xf1) = uStack_4a8;
      *(undefined4 *)((int)puVar23 + uVar17 * 0x10 + 0x78c) = uStack_4a4;
      *(undefined4 *)((int)puVar23 + uVar17 * 0x10 + 0x784) = uStack_4ac;
      *(float *)(puVar23 + (uVar17 + 0x78) * 2) = (float)((double)uStack_4c0 * dVar27);
      uVar15 = 0x8000000000000000U >> ((ulonglong)(uVar17 >> 2) & 0x7f) | *puVar23;
code_r0x828578e0:
      *puVar23 = uVar15;
      if (*(int *)(puVar7 + 2) == 4) {
        uVar17 = *(uint *)(puVar7 + 4);
        uVar14 = *(undefined4 *)(puVar7 + 0xe);
        goto code_r0x828577cc;
      }
    }
    break;
  case 0x41:
    iVar9 = fn_828116B8(param_1[0x42],*(undefined4 *)(puStack_4f0 + 0x10));
    if (iVar9 != 0) {
      uVar17 = 1 << (param_1[0x3f] & 0x3f);
      if ((*(uint *)(puVar7 + 8) & uVar17) != 0) {
        iVar9 = *(int *)(puVar7 + 0xc) * 0x3c + *(int *)(*(int *)(param_4 + 0x48) + 0x40);
        fn_8263A120(param_1[1],
                          *(undefined4 *)(*(int *)(iVar9 + 0x38) * 8 + *(int *)(iVar9 + 0x30)));
        fn_82639030(param_1[1],2);
        uStack_4c8 = (ulonglong)*(uint *)(puVar7 + 6);
        uVar17 = param_1[0x28];
        puVar23 = (ulonglong *)param_1[1];
        *(undefined4 *)((int)puVar23 + uVar17 * 0x10 + 0x784) = uStack_47c;
        *(undefined4 *)(puVar23 + uVar17 * 2 + 0xf1) = uStack_478;
        *(undefined4 *)((int)puVar23 + uVar17 * 0x10 + 0x78c) = uStack_474;
        *(float *)(puVar23 + (uVar17 + 0x78) * 2) = (float)((double)uStack_4c8 * dVar27);
        uVar15 = 0x8000000000000000U >> ((ulonglong)(uVar17 >> 2) & 0x7f) | *puVar23;
        goto code_r0x828578e0;
      }
code_r0x828578fc:
      if ((*(uint *)(puVar7 + 10) & uVar17) != 0) {
        uVar22 = *(uint *)(puVar7 + 4);
        uVar17 = *(uint *)(puVar7 + 6);
        goto code_r0x828577ec;
      }
      uVar13 = (ulonglong)*(uint *)(puVar7 + 4);
      uVar15 = (ulonglong)*(uint *)(puVar7 + 6);
      uVar14 = *(undefined4 *)(puVar7 + 2);
      goto code_r0x828577f8;
    }
    break;
  case 0x42:
    iVar16 = *(int *)(puStack_4f0 + 4) * 0x3c + *(int *)(*(int *)(param_4 + 0x48) + 0x40);
    iVar9 = *(int *)(iVar16 + 0x34);
    if (param_1[0x1a50] != 0) {
      fn_826308A0(param_1[1],0,param_1[0x1a50],0);
    }
    iVar9 = iVar9 * 8;
    uStack_4dc = 0x4b000000;
    uVar17 = param_1[0x27];
    puVar23 = (ulonglong *)param_1[1];
    uStack_4d8 = (((*(uint *)(puVar7 + 10) & 1) << 3 | 0x4b00 | *(uint *)(puVar7 + 0xc) & 7) << 8 |
                 *(uint *)(puVar7 + 0xe) & 0x3f) << 8 | uStack_4d8 & 0xc0f8 |
                 *(uint *)(puVar7 + 0x10) & 7;
    uStack_4d4 = *(uint *)(puVar7 + 8) & 0x7fffff | 0x4b000000;
    uStack_4e0 = 0x40000000;
    *(undefined4 *)((int)puVar23 + uVar17 * 0x10 + 0x784) = 0x4b000000;
    *(undefined4 *)(puVar23 + (uVar17 + 0x78) * 2) = 0x40000000;
    *(uint *)(puVar23 + uVar17 * 2 + 0xf1) = uStack_4d8;
    *(uint *)((int)puVar23 + uVar17 * 0x10 + 0x78c) = uStack_4d4;
    *puVar23 = 0x8000000000000000U >> ((ulonglong)(uVar17 >> 2) & 0x7f) | *puVar23;
    fn_82630750(param_1[1],0,*(undefined4 *)(iVar9 + *(int *)(iVar16 + 0x30)),0);
    param_1[0x1a50] = *(uint *)(iVar9 + *(int *)(iVar16 + 0x30));
    break;
  case 0x43:
    uVar17 = param_1[0x43];
    goto code_r0x8285748c;
  case 0x44:
    uVar17 = param_1[0x42];
code_r0x8285748c:
    fn_82852D70((double)(float)param_1[0x46],param_1,puStack_4f0,uVar17,param_1[0x45]);
    break;
  case 0x46:
    fn_82853BC0(param_1,puStack_4f0,param_4);
    break;
  case 0x47:
  case 0x49:
    thunk_FUN_82838b18(aiStack_2a0,*(int *)(puStack_4f0 + 10) + param_4,param_1 + 0x29,
                       puStack_4f0[0xd],puStack_4f0[0xe]);
    break;
  case 0x48:
    fn_82853700(param_1,puStack_4f0,param_4);
    break;
  case 0x4a:
    goto code_r0x82857b58;
  }
  puVar8 = (ushort *)((uint)*puVar7 + (int)puStack_4f0);
  goto code_r0x82856294;
code_r0x82857b58:
  fn_82853C40(param_1,&puStack_4f0,pbVar24,uVar4,auStack_4ec[0],param_3,param_4);
  puVar8 = puStack_4f0;
  goto code_r0x82856294;
}

