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
extern unsigned int *auStack_4d0;
extern unsigned int *auStack_510;
extern unsigned int *auStack_550;
extern unsigned int *auStack_590;
extern unsigned int *auStack_5d0;
extern unsigned int *auStack_5e0;
extern unsigned int *auStack_620;
extern unsigned int *auStack_660;
extern unsigned int *auStack_6a0;
extern int fn_82630750();
extern int fn_826308A0();
extern int fn_826310E0();
extern int fn_82631290();
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
extern int fn_82851EA0();
extern int fn_82852D70();
extern int fn_82853700();
extern int fn_82853BC0();
extern int fn_82855BE8();
extern int fn_82858E98();
extern int fn_82860C68();
extern int fn_82860CB0();
extern unsigned int lbl_82015BE0;
extern unsigned int lbl_82195F48;
extern unsigned int lbl_82195F4C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_284;
extern unsigned int uStack_288;
extern unsigned int uStack_28c;
extern unsigned int uStack_290;
extern unsigned int uStack_5d8;
extern unsigned int uStack_664;
extern unsigned int uStack_668;
extern unsigned int uStack_66c;
extern unsigned int uStack_674;
extern unsigned int uStack_678;
extern unsigned int uStack_67c;
extern unsigned int uStack_684;
extern unsigned int uStack_688;
extern unsigned int uStack_68c;
extern unsigned int uStack_698;
extern unsigned int uStack_6a4;
extern unsigned int uStack_6a8;
extern unsigned int uStack_6ac;
extern unsigned int uStack_6b0;
extern unsigned int uStack_6b4;
extern unsigned int uStack_6c0;


void fn_82853C40(uint *param_1,int *param_2,byte *param_3,undefined8 param_4,undefined8 param_5,
                  ulonglong param_6,int param_7)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  bool bVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  ulonglong *puVar15;
  undefined4 *puVar17;
  int *piVar18;
  ulonglong uVar16;
  uint uVar19;
  ulonglong *puVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  ushort *apuStack_6d0 [4];
  ulonglong uStack_6c0;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  uint uStack_6a8;
  uint uStack_6a4;
  uint auStack_6a0 [2];
  undefined4 uStack_698;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined1 auStack_660 [64];
  uint auStack_620 [16];
  undefined1 auStack_5e0 [8];
  undefined4 uStack_5d8;
  uint auStack_5d0 [16];
  undefined1 auStack_590 [64];
  undefined1 auStack_550 [64];
  undefined1 auStack_510 [64];
  undefined1 auStack_4d0 [64];
  int aiStack_490 [128];
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  
  puVar3 = (ushort *)*param_2;
  auStack_6a0[0] = 0;
  uStack_698 = 0;
  if ((*(uint *)(*(int *)(puVar3 + 4) + 8) & 1) != 0) {
    auStack_6a0[0] = (uint)((*(uint *)(*(int *)(puVar3 + 4) + 8) & 2) == 0);
    uVar19 = param_1[0x1a4c];
    iVar8 = 0;
    uVar7 = param_1[0x20];
    uVar13 = param_1[0x1f];
    if (0 < (int)uVar7) {
      uVar23 = 0xc;
      do {
        uVar11 = (uVar23 & 0xffffffff) >> 2;
        fn_826310E0(param_1[1],uVar23,
                     (ulonglong)*(byte *)(iVar8 + uVar13) * 0x40 +
                     (ulonglong)param_1[uVar19 * 0x34 + 0x7c],3,
                     (ulonglong)
                     (-0x8000000000000000 >> (((uVar23 + 2 & 0xffffffff) >> 2) - uVar11 & 0x7f)) >>
                     (uVar11 & 0x7f));
        iVar8 = iVar8 + 1;
        uVar23 = uVar23 + 3;
      } while (iVar8 < (int)uVar7);
    }
  }
  if ((*(uint *)(*(int *)(puVar3 + 4) + 8) & 4) != 0) {
    iVar8 = *(int *)(*(int *)(puVar3 + 4) + 0xc);
    thunk_FUN_82838b18(aiStack_490,*(int *)(iVar8 + 0x10) + param_7,&uStack_290,
                       *(undefined2 *)(iVar8 + 0x16),*(undefined2 *)(iVar8 + 0x18));
    puVar20 = (ulonglong *)param_1[1];
    *(undefined4 *)(puVar20 + 0x150) = uStack_290;
    *(undefined4 *)((int)puVar20 + 0xa84) = uStack_28c;
    *(undefined4 *)(puVar20 + 0x151) = uStack_288;
    *(undefined4 *)((int)puVar20 + 0xa8c) = uStack_284;
    *puVar20 = *puVar20 | 0x8000000000000;
    uStack_698 = 1;
  }
  fn_82631290(param_1[1],0x7d,auStack_6a0,3);
  fn_828461E8(**(undefined4 **)(puVar3 + 4),0,param_1[1],(ulonglong)*param_1 + 0x40,0,0,
                    (ulonglong)*param_1,(*(undefined4 **)(puVar3 + 4))[1]);
  puVar4 = *(ushort **)(puVar3 + 2);
  apuStack_6d0[0] = puVar4;
  switch(*(undefined1 *)(puVar4 + 1)) {
  case 1:
    uVar12 = *(undefined4 *)(puVar4 + 6);
    goto code_r0x82853e30;
  default:
    fn_82858E98(param_1,puVar4,param_7,param_4,param_5,apuStack_6d0);
    break;
  case 10:
    lVar21 = 0;
    if (puVar4[6] != 0) {
      do {
        iVar8 = (uint)*(byte *)((int)lVar21 + *(int *)(puVar4 + 2)) * 0x10;
        fn_82639F78(param_1[1],lVar21,*(undefined4 *)(iVar8 + *(int *)(puVar4 + 4) + 4),0,
                          *(undefined4 *)(iVar8 + *(int *)(puVar4 + 4)),
                          0x8000000000000000 >>
                          ((((0x5f - lVar21) * 0x5556 & 0xffffffffU) >> 0x10) + 0x20 & 0x7f));
        lVar21 = lVar21 + 1;
      } while ((int)lVar21 < (int)(uint)puVar4[6]);
    }
    break;
  case 0xb:
    puVar17 = (undefined4 *)0x0;
    thunk_FUN_82838b18(aiStack_490,*(int *)(puVar4 + 10) + param_7,param_1 + 0x29,puVar4[0xd],
                       puVar4[0xe]);
    lVar21 = 0;
    if (puVar4[0xc] != 0) {
      do {
        uVar2 = puVar4[0xd];
        bVar5 = false;
        if (uVar2 < puVar4[0xe]) {
          iVar8 = 0;
          if (uVar2 != 0) {
            piVar18 = aiStack_490;
            do {
              if (*(char *)(iVar8 + *(int *)(puVar4 + 8)) ==
                  *(char *)(*(int *)(puVar4 + 6) + (int)lVar21)) {
                bVar5 = true;
                puVar17 = (undefined4 *)
                          ((uint)*(byte *)(*(int *)(puVar4 + 2) + *piVar18) * 0x10 +
                          *(int *)(puVar4 + 4));
              }
              iVar8 = iVar8 + 1;
              piVar18 = piVar18 + 1;
            } while (iVar8 < (int)(uint)uVar2);
          }
        }
        if (!bVar5) {
          puVar17 = (undefined4 *)
                    ((uint)*(byte *)(*(int *)(puVar4 + 6) + (int)lVar21) * 0x10 +
                    *(int *)(puVar4 + 4));
        }
        fn_82639F78(param_1[1],lVar21,puVar17[1],0,*puVar17,
                          0x8000000000000000 >>
                          ((((0x5f - lVar21) * 0x5556 & 0xffffffffU) >> 0x10) + 0x20 & 0x7f));
        lVar21 = lVar21 + 1;
      } while ((int)lVar21 < (int)(uint)puVar4[0xc]);
    }
    break;
  case 0x12:
    fn_82855BE8(param_1,puVar4[4],*(undefined4 *)(puVar4 + 2));
    param_1[0x1d] = *(uint *)(puVar4 + 2);
    param_1[0x1e] = (uint)puVar4[4];
    break;
  case 0x13:
    uVar19 = param_1[0x1a4c];
    if ((*(char *)(puVar4 + 5) == '\0') || (param_1[0x41] == 0)) {
      iVar8 = 0;
      if (puVar4[4] != 0) {
        lVar21 = 0;
        do {
          uVar11 = (ulonglong)param_1[0x26] + lVar21;
          uVar23 = (uVar11 & 0xffffffff) >> 2;
          fn_826310E0(param_1[1],uVar11,
                       (ulonglong)*(byte *)(*(uint *)(puVar4 + 2) + iVar8) * 0x40 +
                       (ulonglong)param_1[uVar19 * 0x34 + 0x7c],3,
                       (ulonglong)
                       (-0x8000000000000000 >> (((uVar11 + 2 & 0xffffffff) >> 2) - uVar23 & 0x7f))
                       >> (uVar23 & 0x7f));
          iVar8 = iVar8 + 1;
          lVar21 = lVar21 + 3;
        } while (iVar8 < (int)(uint)puVar4[4]);
      }
      param_1[0x41] = 1;
      param_1[0x1f] = *(uint *)(puVar4 + 2);
      param_1[0x20] = (uint)puVar4[4];
    }
    break;
  case 0x14:
    bVar1 = *(byte *)(puVar4 + 4);
    if (bVar1 == 0) {
      iVar8 = 0x84;
code_r0x828545a4:
      *(int *)((int)param_1 + iVar8) = (int)*(float *)(puVar4 + 2);
      break;
    }
    if (bVar1 == 1) {
      iVar8 = 0x88;
      goto code_r0x828545a4;
    }
    if (bVar1 < 3) {
      iVar8 = 0x98;
      goto code_r0x828545a4;
    }
    if (bVar1 == 3) {
      iVar8 = 0x9c;
      goto code_r0x828545a4;
    }
    if (4 < bVar1) {
      if (bVar1 != 5) break;
      iVar8 = 0xa0;
      goto code_r0x828545a4;
    }
    uVar11 = (ulonglong)*(byte *)((int)puVar4 + 9);
    uStack_6c0 = (ulonglong)(int)*(float *)(puVar4 + 2);
    puVar10 = param_1 + 0x29;
    uVar23 = (ulonglong)(uint)(int)*(float *)(puVar4 + 2);
    uVar16 = (uVar23 + uVar11) - 1;
    goto code_r0x82854cfc;
  case 0x15:
    if ((*(uint *)(puVar4 + 4) & param_6) == (param_6 & 0xffffffff)) break;
  case 0x19:
code_r0x82853f9c:
    break;
  case 0x16:
    break;
  case 0x17:
    uVar19 = param_1[0x43];
    goto code_r0x828545b8;
  case 0x18:
    uVar19 = param_1[0x42];
code_r0x828545b8:
    fn_828116B8(uVar19,*(undefined4 *)(puVar4 + 2));
    break;
  case 0x1a:
    break;
  case 0x1b:
    uVar19 = param_1[0x43];
    goto code_r0x828545d4;
  case 0x1c:
    uVar19 = param_1[0x42];
code_r0x828545d4:
    fn_828116B8(uVar19,*(undefined4 *)(puVar4 + 2));
    break;
  case 0x1d:
    break;
  case 0x20:
    if (*(code **)(puVar4 + 2) != (code *)0x0) {
      (**(code **)(puVar4 + 2))(*param_1,puVar4 + 6,param_7,param_5,param_3);
    }
    break;
  case 0x21:
    uVar19 = *param_1;
    uVar7 = param_1[0x1a4c];
    puVar6 = (ushort *)(*(int *)(puVar4 + 2) + param_7);
    if ((puVar6[0x20] & 0x100) == 0) {
      puVar6 = puVar4 + 8;
    }
    fn_8280AC48(puVar6,auStack_660);
    if (*(char *)(puVar4 + 6) == '\0') {
      fn_8280CED8(auStack_660,auStack_510);
      fn_8280CB70(param_1 + uVar7 * 0x34 + 0x5c,auStack_510,auStack_4d0);
      fn_8280CB70(param_1 + uVar7 * 0x34 + 0x6c,auStack_4d0);
      fn_8280AC48(auStack_660,param_1 + uVar7 * 0x34 + 0x5c);
    }
    else {
      iVar8 = uVar7 * 0x34 + 0x5c;
      if (*(char *)(puVar4 + 6) == '\x02') {
        iVar8 = uVar7 * 0x34 + 0x6c;
      }
      fn_8280CB70(param_1 + iVar8,auStack_660);
    }
    puVar10 = param_1 + uVar7 * 0x34 + 0x6c;
    if (*(int *)(puVar4 + 4) == 0) {
      fn_8280CB70(puVar10,param_1 + uVar7 * 0x34 + 0x5c,auStack_660);
      fn_8280CB70((ulonglong)uVar19 + 0x40,auStack_660,param_1 + uVar7 * 0x34 + 0x4c);
    }
    else {
      fn_8280CB70((ulonglong)uVar19 + 0x40,puVar10,param_1 + uVar7 * 0x34 + 0x4c);
      fn_82855BE8(param_1,param_1[0x1e],param_1[0x1d]);
      iVar8 = 0;
      uVar19 = param_1[0x20];
      uVar13 = param_1[0x1f];
      if (0 < (int)uVar19) {
        lVar21 = 0;
        do {
          uVar11 = (ulonglong)param_1[0x26] + lVar21;
          uVar23 = (uVar11 & 0xffffffff) >> 2;
          fn_826310E0(param_1[1],uVar11,
                       (ulonglong)*(byte *)(iVar8 + uVar13) * 0x40 +
                       (ulonglong)param_1[uVar7 * 0x34 + 0x7c],3,
                       (ulonglong)
                       (-0x8000000000000000 >> (((uVar11 + 2 & 0xffffffff) >> 2) - uVar23 & 0x7f))
                       >> (uVar23 & 0x7f));
          iVar8 = iVar8 + 1;
          lVar21 = lVar21 + 3;
        } while (iVar8 < (int)uVar19);
      }
    }
    uVar19 = param_1[0x1a4c];
    lVar21 = (ulonglong)*param_1 + 0x40;
    lVar22 = (ulonglong)*param_1 + 0x80;
    if (param_1[0x23] != 0xffff) {
      fn_8280CD18(puVar10,auStack_550);
      uVar7 = param_1[0x23];
      fn_826310E0(param_1[1],(ulonglong)uVar7,auStack_550,3,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar7 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar7 >> 2) & 0x7f)) >>
                   ((ulonglong)(uVar7 >> 2) & 0x7f));
    }
    if (param_1[0x21] != 0xffff) {
      fn_8280CD18(lVar22,auStack_550);
      uVar7 = param_1[0x21];
      fn_826310E0(param_1[1],(ulonglong)uVar7,auStack_550,4,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar7 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar7 >> 2) & 0x7f)) >>
                   ((ulonglong)(uVar7 >> 2) & 0x7f));
    }
    if (param_1[0x22] != 0xffff) {
      fn_8280CC30(lVar21,puVar10,auStack_550);
      uVar7 = param_1[0x22];
      fn_826310E0(param_1[1],(ulonglong)uVar7,auStack_550,3,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar7 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar7 >> 2) & 0x7f)) >>
                   ((ulonglong)(uVar7 >> 2) & 0x7f));
    }
    if (param_1[0x48] != 0xffff) {
      fn_8280CC30(lVar22,param_1 + uVar19 * 0x34 + 0x4c,(ulonglong)*param_1 + 0xc0);
      uVar19 = param_1[0x48];
      fn_826310E0(param_1[1],(ulonglong)uVar19,(ulonglong)*param_1 + 0xc0,4,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar19 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar19 >> 2) & 0x7f))
                   >> ((ulonglong)(uVar19 >> 2) & 0x7f));
    }
    if (param_1[0x24] == 0xffff) break;
    fn_8280CD18(lVar21,auStack_550);
    puVar9 = auStack_550;
    goto code_r0x828548e0;
  case 0x23:
    fn_82851EA0(param_1);
    break;
  case 0x24:
    param_1[0x1a4c] = param_1[0x1a4c] - 1;
    break;
  case 0x25:
    uVar19 = param_1[0x1a4c] - 1;
    param_1[0x1a4c] = uVar19;
    if (*(int *)(puVar4 + 2) != 0) {
      fn_82855BE8(param_1,param_1[0x1e],param_1[0x1d]);
      iVar8 = 0;
      uVar7 = param_1[0x20];
      uVar13 = param_1[0x1f];
      if (0 < (int)uVar7) {
        lVar21 = 0;
        do {
          uVar11 = lVar21 + (ulonglong)param_1[0x26];
          uVar23 = (uVar11 & 0xffffffff) >> 2;
          fn_826310E0(param_1[1],uVar11,
                       (ulonglong)*(byte *)(iVar8 + uVar13) * 0x40 +
                       (ulonglong)param_1[uVar19 * 0x34 + 0x7c],3,
                       (ulonglong)
                       (-0x8000000000000000 >> (((uVar11 + 2 & 0xffffffff) >> 2) - uVar23 & 0x7f))
                       >> (uVar23 & 0x7f));
          iVar8 = iVar8 + 1;
          lVar21 = lVar21 + 3;
        } while (iVar8 < (int)uVar7);
      }
      param_1[0x41] = 1;
    }
    uVar7 = param_1[0x1a4c];
    lVar21 = (ulonglong)*param_1 + 0x40;
    lVar22 = (ulonglong)*param_1 + 0x80;
    if (param_1[0x23] != 0xffff) {
      fn_8280CD18(param_1 + uVar19 * 0x34 + 0x6c,auStack_5d0);
      uVar13 = param_1[0x23];
      fn_826310E0(param_1[1],(ulonglong)uVar13,auStack_5d0,3,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar13 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar13 >> 2) & 0x7f))
                   >> ((ulonglong)(uVar13 >> 2) & 0x7f));
    }
    if (param_1[0x21] != 0xffff) {
      fn_8280CD18(lVar22,auStack_5d0);
      uVar13 = param_1[0x21];
      fn_826310E0(param_1[1],(ulonglong)uVar13,auStack_5d0,4,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar13 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar13 >> 2) & 0x7f))
                   >> ((ulonglong)(uVar13 >> 2) & 0x7f));
    }
    if (param_1[0x22] != 0xffff) {
      fn_8280CC30(lVar21,param_1 + uVar19 * 0x34 + 0x6c,auStack_5d0);
      uVar19 = param_1[0x22];
      fn_826310E0(param_1[1],(ulonglong)uVar19,auStack_5d0,3,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar19 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar19 >> 2) & 0x7f))
                   >> ((ulonglong)(uVar19 >> 2) & 0x7f));
    }
    if (param_1[0x48] != 0xffff) {
      fn_8280CC30(lVar22,param_1 + uVar7 * 0x34 + 0x4c,(ulonglong)*param_1 + 0xc0);
      uVar19 = param_1[0x48];
      fn_826310E0(param_1[1],(ulonglong)uVar19,(ulonglong)*param_1 + 0xc0,4,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar19 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar19 >> 2) & 0x7f))
                   >> ((ulonglong)(uVar19 >> 2) & 0x7f));
    }
    if (param_1[0x24] == 0xffff) break;
    fn_8280CD18(lVar21,auStack_5d0);
    puVar10 = auStack_5d0;
    goto code_r0x82854cf0;
  case 0x26:
    lVar21 = (ulonglong)*param_1 + 0x40;
    lVar22 = (ulonglong)*param_1 + 0x80;
    uVar19 = param_1[0x1a4c] - 1;
    param_1[0x1a4c] = uVar19;
    if (param_1[0x23] != 0xffff) {
      fn_8280CD18(param_1 + uVar19 * 0x34 + 0x6c,auStack_620);
      uVar7 = param_1[0x23];
      fn_826310E0(param_1[1],(ulonglong)uVar7,auStack_620,3,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar7 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar7 >> 2) & 0x7f)) >>
                   ((ulonglong)(uVar7 >> 2) & 0x7f));
    }
    if (param_1[0x21] != 0xffff) {
      fn_8280CD18(lVar22,auStack_620);
      uVar7 = param_1[0x21];
      fn_826310E0(param_1[1],(ulonglong)uVar7,auStack_620,4,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar7 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar7 >> 2) & 0x7f)) >>
                   ((ulonglong)(uVar7 >> 2) & 0x7f));
    }
    if (param_1[0x22] != 0xffff) {
      fn_8280CC30(lVar21,param_1 + uVar19 * 0x34 + 0x6c,auStack_620);
      uVar7 = param_1[0x22];
      fn_826310E0(param_1[1],(ulonglong)uVar7,auStack_620,3,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar7 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar7 >> 2) & 0x7f)) >>
                   ((ulonglong)(uVar7 >> 2) & 0x7f));
    }
    if (param_1[0x48] != 0xffff) {
      fn_8280CC30(lVar22,param_1 + uVar19 * 0x34 + 0x4c,(ulonglong)*param_1 + 0xc0);
      uVar19 = param_1[0x48];
      fn_826310E0(param_1[1],(ulonglong)uVar19,(ulonglong)*param_1 + 0xc0,4,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar19 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar19 >> 2) & 0x7f))
                   >> ((ulonglong)(uVar19 >> 2) & 0x7f));
    }
    if (param_1[0x24] == 0xffff) break;
    fn_8280CD18(lVar21,auStack_620);
    puVar10 = auStack_620;
code_r0x82854cf0:
    uVar23 = (ulonglong)param_1[0x24];
    uVar11 = 3;
    uVar16 = uVar23 + 2;
code_r0x82854cfc:
    fn_826310E0(param_1[1],uVar23,puVar10,uVar11,
                 (ulonglong)
                 (-0x8000000000000000 >> (((uVar16 & 0xffffffff) >> 2) - (uVar23 >> 2) & 0x7f)) >>
                 (uVar23 >> 2 & 0x7f));
    break;
  case 0x27:
    if ((*param_3 & 1) != 0) break;
    goto code_r0x82853f9c;
  case 0x28:
    break;
  case 0x29:
    break;
  case 0x2b:
    fn_82639030(param_1[1],param_1[0x47] == 0);
    fn_8263A120(param_1[1],*(undefined4 *)(puVar4 + 6));
    iVar8 = *(int *)(puVar4 + 2);
    if ((1 << (param_1[0x3f] & 0x3f) & *(uint *)(puVar4 + 8)) != 0) {
      uVar7 = param_1[1];
      if (iVar8 != 4) {
        iVar14 = *(int *)(puVar4 + 4);
        goto code_r0x82854f30;
      }
      uVar19 = *(uint *)(puVar4 + 4);
      goto code_r0x82854f18;
    }
    uVar12 = *(undefined4 *)(puVar4 + 4);
    goto code_r0x82853e44;
  case 0x2e:
    lVar21 = 0;
    if (puVar4[6] != 0) {
      do {
        puVar17 = (undefined4 *)
                  ((uint)*(byte *)(*(int *)(puVar4 + 2) + (int)lVar21) * 0x10 + *(int *)(puVar4 + 4)
                  );
        iVar8 = puVar17[1];
        if (iVar8 != 0) {
          fn_82639F78(param_1[1],lVar21,iVar8,0,*puVar17,
                            0x8000000000000000 >>
                            ((((0x5f - lVar21) * 0x5556 & 0xffffffffU) >> 0x10) + 0x20 & 0x7f));
        }
        lVar21 = lVar21 + 1;
      } while ((int)lVar21 < (int)(uint)puVar4[6]);
    }
    uVar12 = *(undefined4 *)(puVar4 + 10);
    goto code_r0x82853f90;
  case 0x2f:
    puVar17 = (undefined4 *)0x0;
    thunk_FUN_82838b18(aiStack_490,*(int *)(puVar4 + 10) + param_7,param_1 + 0x29,puVar4[0xd],
                       puVar4[0xe]);
    lVar21 = 0;
    if (puVar4[0xc] != 0) {
      do {
        uVar2 = puVar4[0xd];
        bVar5 = false;
        if (uVar2 < puVar4[0xe]) {
          iVar8 = 0;
          if (uVar2 != 0) {
            piVar18 = aiStack_490;
            do {
              if (*(char *)(iVar8 + *(int *)(puVar4 + 8)) ==
                  *(char *)(*(int *)(puVar4 + 6) + (int)lVar21)) {
                bVar5 = true;
                puVar17 = (undefined4 *)
                          ((uint)*(byte *)(*(int *)(puVar4 + 2) + *piVar18) * 0x10 +
                          *(int *)(puVar4 + 4));
              }
              iVar8 = iVar8 + 1;
              piVar18 = piVar18 + 1;
            } while (iVar8 < (int)(uint)uVar2);
          }
        }
        if (!bVar5) {
          puVar17 = (undefined4 *)
                    ((uint)*(byte *)(*(int *)(puVar4 + 6) + (int)lVar21) * 0x10 +
                    *(int *)(puVar4 + 4));
        }
        fn_82639F78(param_1[1],lVar21,puVar17[1],0,*puVar17,
                          0x8000000000000000 >>
                          ((((0x5f - lVar21) * 0x5556 & 0xffffffffU) >> 0x10) + 0x20 & 0x7f));
        lVar21 = lVar21 + 1;
      } while ((int)lVar21 < (int)(uint)puVar4[0xc]);
    }
    uVar12 = *(undefined4 *)(puVar4 + 0x12);
code_r0x82853f90:
    fn_82631920(param_1[1],uVar12);
    break;
  case 0x30:
    uVar19 = param_1[0x43];
    goto code_r0x82853e18;
  case 0x31:
    uVar19 = param_1[0x42];
code_r0x82853e18:
    iVar8 = fn_828116B8(uVar19,*(undefined4 *)(puVar4 + 8));
    if (iVar8 != 0) {
      uVar12 = *(undefined4 *)(puVar4 + 6);
code_r0x82853e30:
      fn_8263A120(param_1[1],uVar12);
      uVar12 = *(undefined4 *)(puVar4 + 4);
      iVar8 = *(int *)(puVar4 + 2);
code_r0x82853e44:
      fn_82640A98(param_1[1],iVar8,0,0,uVar12);
    }
    break;
  case 0x32:
    iVar8 = *(int *)(*(int *)(param_7 + 0x4c) + *(int *)(puVar4 + 2) * 0x10);
    if (iVar8 != 0) {
      uVar19 = *param_1;
      uVar7 = -(uint)(param_1[0x3f] < *(uint *)(iVar8 + 0x20)) & param_1[0x3f];
      iVar14 = uVar7 * 0xc + *(int *)(iVar8 + 0x24);
      fn_828461E8(iVar8,*(undefined4 *)
                               (*(int *)(param_1[0x1a4f] + 0x4c) + *(int *)(puVar4 + 2) * 0x10 + 4),
                        param_1[1],uVar19 + 0x40,uVar7,*(undefined4 *)(uVar19 + 0x100),uVar19,0);
      uVar19 = *(uint *)(*(int *)(iVar14 + 4) + 0x10);
      if (-1 < (int)uVar19) {
        puVar20 = (ulonglong *)param_1[1];
        *(uint *)(puVar20 + (uVar19 + 0x78) * 2) = param_1[0x29];
        *(uint *)((int)puVar20 + uVar19 * 0x10 + 0x784) = param_1[0x2a];
        *(uint *)(puVar20 + uVar19 * 2 + 0xf1) = param_1[0x2b];
        *(uint *)((int)puVar20 + uVar19 * 0x10 + 0x78c) = param_1[0x2c];
        *puVar20 = 0x8000000000000000U >> ((ulonglong)(uVar19 >> 2) & 0x7f) | *puVar20;
      }
      uVar19 = *(uint *)(*(int *)(iVar14 + 4) + 0xc);
      if (-1 < (int)uVar19) {
        param_1[0x26] = uVar19;
      }
      uVar19 = *(uint *)(*(int *)(iVar14 + 4) + 0x14);
      if (-1 < (int)uVar19) {
        fn_826310E0(param_1[1],(ulonglong)uVar19,(ulonglong)*param_1 + 0xc0,4,
                     (ulonglong)
                     (-0x8000000000000000 >>
                     ((((ulonglong)uVar19 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar19 >> 2) & 0x7f)
                     ) >> ((ulonglong)(uVar19 >> 2) & 0x7f));
        param_1[0x48] = *(uint *)(*(int *)(iVar14 + 4) + 0x14);
      }
      uVar19 = *(uint *)(*(int *)(iVar14 + 4) + 0x18);
      if (-1 < (int)uVar19) {
        param_1[0x28] = uVar19;
      }
      uVar19 = *(uint *)(*(int *)(iVar14 + 4) + 0x1c);
      if (-1 < (int)uVar19) {
        param_1[0x27] = uVar19;
      }
    }
    break;
  case 0x34:
    uVar19 = param_1[0x1a4c];
    uVar7 = *param_1;
    fn_827F9658((ulonglong)*(uint *)(puVar4 + 2) * 0x34 + (ulonglong)param_1[0x1b],
                    ((ulonglong)*(uint *)(puVar4 + 2) & 0x3ffffff) * 0x40 + (ulonglong)param_1[0x1a]
                    ,param_1 + uVar19 * 0x34 + 0x5c);
    fn_8280CB70((ulonglong)uVar7 + 0x40,param_1 + uVar19 * 0x34 + 0x5c,
                 param_1 + uVar19 * 0x34 + 0x4c);
    lVar21 = (ulonglong)*param_1 + 0x40;
    lVar22 = (ulonglong)*param_1 + 0x80;
    uVar7 = param_1[0x1a4c];
    if (param_1[0x23] != 0xffff) {
      fn_8280CD18(param_1 + uVar19 * 0x34 + 0x6c,auStack_590);
      uVar13 = param_1[0x23];
      fn_826310E0(param_1[1],(ulonglong)uVar13,auStack_590,3,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar13 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar13 >> 2) & 0x7f))
                   >> ((ulonglong)(uVar13 >> 2) & 0x7f));
    }
    if (param_1[0x21] != 0xffff) {
      fn_8280CD18(lVar22,auStack_590);
      uVar13 = param_1[0x21];
      fn_826310E0(param_1[1],(ulonglong)uVar13,auStack_590,4,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar13 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar13 >> 2) & 0x7f))
                   >> ((ulonglong)(uVar13 >> 2) & 0x7f));
    }
    if (param_1[0x22] != 0xffff) {
      fn_8280CC30(lVar21,param_1 + uVar19 * 0x34 + 0x6c,auStack_590);
      uVar19 = param_1[0x22];
      fn_826310E0(param_1[1],(ulonglong)uVar19,auStack_590,3,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar19 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar19 >> 2) & 0x7f))
                   >> ((ulonglong)(uVar19 >> 2) & 0x7f));
    }
    if (param_1[0x48] != 0xffff) {
      fn_8280CC30(lVar22,param_1 + uVar7 * 0x34 + 0x4c,(ulonglong)*param_1 + 0xc0);
      uVar19 = param_1[0x48];
      fn_826310E0(param_1[1],(ulonglong)uVar19,(ulonglong)*param_1 + 0xc0,4,
                   (ulonglong)
                   (-0x8000000000000000 >>
                   ((((ulonglong)uVar19 + 3 & 0xffffffff) >> 2) - (ulonglong)(uVar19 >> 2) & 0x7f))
                   >> ((ulonglong)(uVar19 >> 2) & 0x7f));
    }
    if (param_1[0x24] == 0xffff) break;
    fn_8280CD18(lVar21,auStack_590);
    puVar9 = auStack_590;
code_r0x828548e0:
    uVar19 = param_1[0x24];
    fn_826310E0(param_1[1],(ulonglong)uVar19,puVar9,3,
                 (ulonglong)
                 (-0x8000000000000000 >>
                 ((((ulonglong)uVar19 + 2 & 0xffffffff) >> 2) - (ulonglong)(uVar19 >> 2) & 0x7f)) >>
                 ((ulonglong)(uVar19 >> 2) & 0x7f));
    break;
  case 0x36:
    lVar21 = 0;
    if (puVar4[4] != 0) {
      iVar8 = 0;
      do {
        iVar14 = *(int *)(*(int *)(*(int *)(puVar4 + 2) + iVar8) * 4 + *(int *)(param_7 + 0x34));
        if (iVar14 != 0) {
          fn_82639F78(param_1[1],lVar21,*(undefined4 *)(iVar14 + 0x20),0,
                            *(undefined4 *)(iVar14 + 0x2c),
                            0x8000000000000000 >>
                            ((((0x5f - lVar21) * 0x5556 & 0xffffffffU) >> 0x10) + 0x20 & 0x7f));
        }
        lVar21 = lVar21 + 1;
        iVar8 = iVar8 + 4;
      } while ((int)lVar21 < (int)(uint)puVar4[4]);
    }
    break;
  case 0x37:
    iVar8 = 0;
    thunk_FUN_82838b18(aiStack_490,*(int *)(puVar4 + 10) + param_7,param_1 + 0x29,puVar4[0xd],
                       puVar4[0xe]);
    lVar21 = 0;
    if (puVar4[0xc] != 0) {
      do {
        uVar2 = puVar4[0xd];
        bVar5 = false;
        if (uVar2 < puVar4[0xe]) {
          iVar14 = 0;
          if (uVar2 != 0) {
            piVar18 = aiStack_490;
            do {
              if (*(char *)(iVar14 + *(int *)(puVar4 + 8)) ==
                  *(char *)(*(int *)(puVar4 + 6) + (int)lVar21)) {
                bVar5 = true;
                iVar8 = *(int *)(*(int *)((uint)*(byte *)(*(int *)(puVar4 + 2) + *piVar18) * 4 +
                                         *(int *)(puVar4 + 4)) * 4 + *(int *)(param_7 + 0x34));
              }
              iVar14 = iVar14 + 1;
              piVar18 = piVar18 + 1;
            } while (iVar14 < (int)(uint)uVar2);
          }
        }
        if (!bVar5) {
          iVar8 = *(int *)(*(int *)((uint)*(byte *)(*(int *)(puVar4 + 6) + (int)lVar21) * 4 +
                                   *(int *)(puVar4 + 4)) * 4 + *(int *)(param_7 + 0x34));
        }
        if (iVar8 != 0) {
          fn_82639F78(param_1[1],lVar21,*(undefined4 *)(iVar8 + 0x20),0,
                            *(undefined4 *)(iVar8 + 0x2c),
                            0x8000000000000000 >>
                            ((((0x5f - lVar21) * 0x5556 & 0xffffffffU) >> 0x10) + 0x20 & 0x7f));
        }
        lVar21 = lVar21 + 1;
      } while ((int)lVar21 < (int)(uint)puVar4[0xc]);
    }
    break;
  case 0x38:
    iVar8 = *(int *)(*(int *)(puVar4 + 6) * 4 + *(int *)(param_7 + 0x38));
    if (iVar8 != 0) {
      fn_8263A120(param_1[1],*(undefined4 *)(iVar8 + 0x20));
      fn_82640A98(param_1[1],*(undefined4 *)(iVar8 + 0x30),0,0,*(undefined4 *)(iVar8 + 0x28));
    }
    break;
  case 0x39:
    uVar19 = param_1[0x43];
    goto code_r0x82853e7c;
  case 0x3a:
    uVar19 = param_1[0x42];
code_r0x82853e7c:
    iVar8 = fn_828116B8(uVar19,*(undefined4 *)(puVar4 + 8));
    if ((iVar8 == 0) ||
       (iVar8 = *(int *)(*(int *)(puVar4 + 6) * 4 + *(int *)(param_7 + 0x38)), iVar8 == 0)) break;
    fn_8263A120(param_1[1],*(undefined4 *)(iVar8 + 0x20));
    uVar12 = *(undefined4 *)(iVar8 + 0x28);
    iVar8 = *(int *)(iVar8 + 0x30);
    goto code_r0x82853e44;
  case 0x3b:
    apuStack_6d0[0] = (ushort *)((uint)*puVar4 + (int)puVar4);
    if ((param_6 & 0x8000) != 0) {
      if (*(int *)(param_7 + 0x3c) != 0) {
        iVar8 = *(int *)(puVar4 + 2) * 0x14 + *(int *)(param_7 + 0x3c);
        fn_82860C68(iVar8);
        fn_82810360(puVar4 + 4,&uStack_6c0);
        uStack_6b4 = lbl_821AAD20;
        fn_8280AE70((ulonglong)*param_1 + 0x40,&uStack_6c0,auStack_5e0);
        *(undefined4 *)(iVar8 + 0x10) = uStack_5d8;
      }
    }
    break;
  case 0x3c:
    apuStack_6d0[0] = (ushort *)((uint)*puVar4 + (int)puVar4);
    if (((param_6 & 0x8000) != 0) && ((ulonglong)*(uint *)(param_7 + 0x3c) != 0)) {
      fn_82860CB0((ulonglong)*(uint *)(puVar4 + 2) * 0x14 +
                        (ulonglong)*(uint *)(param_7 + 0x3c));
    }
    break;
  case 0x3d:
    uVar19 = param_1[0x43];
    goto code_r0x82854f68;
  case 0x3e:
    uVar19 = param_1[0x42];
code_r0x82854f68:
    iVar8 = fn_828116B8(uVar19,*(undefined4 *)(puVar4 + 10));
    if (iVar8 == 0) break;
    fn_82639030(param_1[1],param_1[0x47] == 0);
    fn_8263A120(param_1[1],*(undefined4 *)(puVar4 + 6));
    iVar8 = *(int *)(puVar4 + 2);
    if ((1 << (param_1[0x3f] & 0x3f) & *(uint *)(puVar4 + 8)) != 0) {
      uVar7 = param_1[1];
      if (iVar8 == 4) {
        uVar19 = *(uint *)(puVar4 + 4);
code_r0x82854f18:
        uVar12 = 0;
        iVar8 = 4;
        uVar23 = ((ulonglong)uVar19 / 3) * 3;
      }
      else {
        iVar14 = *(int *)(puVar4 + 4);
code_r0x82854f30:
        uVar12 = 0;
        uVar23 = (longlong)*(int *)(&lbl_82195F48 + iVar8 * 8) * (longlong)(iVar14 + -2) +
                 (ulonglong)*(uint *)(&lbl_82195F4C + iVar8 * 8);
      }
code_r0x82854f54:
      fn_82640F10(uVar7,iVar8,0,uVar12,uVar23);
      break;
    }
    uVar12 = *(undefined4 *)(puVar4 + 4);
    goto code_r0x82853e44;
  case 0x3f:
    uVar19 = param_1[1];
    uVar7 = 1 << (param_1[0x3f] & 0x3f);
    if ((*(uint *)(puVar4 + 8) & uVar7) == 0) {
      if ((*(uint *)(puVar4 + 10) & uVar7) != 0) {
        uVar7 = *(uint *)(puVar4 + 4);
        uVar13 = *(uint *)(puVar4 + 6);
        goto code_r0x8285530c;
      }
      uVar11 = (ulonglong)*(uint *)(puVar4 + 4);
      uVar23 = (ulonglong)*(uint *)(puVar4 + 6);
      uVar12 = *(undefined4 *)(puVar4 + 2);
      goto code_r0x8285532c;
    }
    iVar8 = *(int *)(puVar4 + 0xc) * 0x3c + *(int *)(*(int *)(param_7 + 0x48) + 0x40);
    fn_8263A120(uVar19,*(undefined4 *)(*(int *)(iVar8 + 0x38) * 8 + *(int *)(iVar8 + 0x30)));
    fn_82639030(param_1[1],2);
    uStack_6c0 = (ulonglong)*(uint *)(puVar4 + 6);
    uVar19 = param_1[0x28];
    puVar20 = (ulonglong *)param_1[1];
    *(undefined4 *)((int)puVar20 + uVar19 * 0x10 + 0x78c) = uStack_684;
    *(undefined4 *)(puVar20 + uVar19 * 2 + 0xf1) = uStack_688;
    *(undefined4 *)((int)puVar20 + uVar19 * 0x10 + 0x784) = uStack_68c;
    *(float *)(puVar20 + (uVar19 + 0x78) * 2) = (float)uStack_6c0 * lbl_82015BE0;
    *puVar20 = 0x8000000000000000U >> ((ulonglong)(uVar19 >> 2) & 0x7f) | *puVar20;
    if (*(int *)(puVar4 + 2) != 4) break;
    uVar19 = *(uint *)(puVar4 + 4);
    uVar12 = *(undefined4 *)(puVar4 + 0xe);
code_r0x828552e0:
    uVar7 = param_1[1];
    uVar23 = (ulonglong)uVar19 / 3;
    iVar8 = 0x11;
    goto code_r0x82854f54;
  case 0x40:
    iVar8 = fn_828116B8(param_1[0x43],*(undefined4 *)(puVar4 + 0x10));
    if (iVar8 == 0) break;
    uVar7 = 1 << (param_1[0x3f] & 0x3f);
    uVar19 = param_1[1];
    if ((*(uint *)(puVar4 + 8) & uVar7) != 0) {
      iVar8 = *(int *)(*(int *)(param_7 + 0x48) + 0x40) + *(int *)(puVar4 + 0xc) * 0x3c;
      fn_8263A120(uVar19,*(undefined4 *)(*(int *)(iVar8 + 0x38) * 8 + *(int *)(iVar8 + 0x30)))
      ;
      fn_82639030(param_1[1],2);
      uVar7 = *(uint *)(puVar4 + 6);
      uVar19 = param_1[0x28];
      puVar20 = (ulonglong *)param_1[1];
      puVar15 = puVar20 + uVar19 * 2;
      *(undefined4 *)(puVar15 + 0xf1) = uStack_678;
      uStack_66c = uStack_67c;
      uStack_664 = uStack_674;
code_r0x828553d8:
      uStack_6c0 = (ulonglong)uVar7;
      *(undefined4 *)((int)puVar15 + 0x784) = uStack_66c;
      *(undefined4 *)((int)puVar15 + 0x78c) = uStack_664;
      *(float *)(puVar20 + (uVar19 + 0x78) * 2) = (float)uStack_6c0 * lbl_82015BE0;
      *puVar20 = 0x8000000000000000U >> ((ulonglong)(uVar19 >> 2) & 0x7f) | *puVar20;
      if (*(int *)(puVar4 + 2) != 4) break;
      uVar19 = *(uint *)(puVar4 + 4);
      uVar12 = *(undefined4 *)(puVar4 + 0xe);
      goto code_r0x828552e0;
    }
    goto code_r0x82855424;
  case 0x41:
    iVar8 = fn_828116B8(param_1[0x42],*(undefined4 *)(puVar4 + 0x10));
    if (iVar8 == 0) break;
    uVar7 = 1 << (param_1[0x3f] & 0x3f);
    uVar19 = param_1[1];
    if ((*(uint *)(puVar4 + 8) & uVar7) != 0) {
      iVar8 = *(int *)(puVar4 + 0xc) * 0x3c + *(int *)(*(int *)(param_7 + 0x48) + 0x40);
      fn_8263A120(uVar19,*(undefined4 *)(*(int *)(iVar8 + 0x38) * 8 + *(int *)(iVar8 + 0x30)))
      ;
      fn_82639030(param_1[1],2);
      uVar7 = *(uint *)(puVar4 + 6);
      uVar19 = param_1[0x28];
      puVar20 = (ulonglong *)param_1[1];
      puVar15 = puVar20 + uVar19 * 2;
      *(undefined4 *)(puVar15 + 0xf1) = uStack_668;
      goto code_r0x828553d8;
    }
code_r0x82855424:
    if ((*(uint *)(puVar4 + 10) & uVar7) == 0) {
      uVar11 = (ulonglong)*(uint *)(puVar4 + 4);
      uVar23 = (ulonglong)*(uint *)(puVar4 + 6);
      uVar12 = *(undefined4 *)(puVar4 + 2);
    }
    else {
      uVar7 = *(uint *)(puVar4 + 4);
      uVar13 = *(uint *)(puVar4 + 6);
code_r0x8285530c:
      uVar12 = 1;
      uVar11 = (ulonglong)uVar7 / 3;
      uVar23 = (ulonglong)uVar13 / 3;
    }
code_r0x8285532c:
    fn_82640680(uVar19,uVar12,uVar23,uVar11);
    break;
  case 0x42:
    iVar14 = *(int *)(puVar4 + 4) * 0x3c + *(int *)(*(int *)(param_7 + 0x48) + 0x40);
    iVar8 = *(int *)(iVar14 + 0x34);
    if (param_1[0x1a50] != 0) {
      fn_826308A0(param_1[1],0,param_1[0x1a50],0);
    }
    iVar8 = iVar8 * 8;
    uStack_6ac = 0x4b000000;
    uVar19 = param_1[0x27];
    puVar20 = (ulonglong *)param_1[1];
    uStack_6a8 = (((*(uint *)(puVar4 + 10) & 1) << 3 | 0x4b00 | *(uint *)(puVar4 + 0xc) & 7) << 8 |
                 *(uint *)(puVar4 + 0xe) & 0x3f) << 8 | *(uint *)(puVar4 + 0x10) & 7 |
                 uStack_6a8 & 0xc0f8;
    uStack_6a4 = *(uint *)(puVar4 + 8) & 0x7fffff | 0x4b000000;
    uStack_6b0 = 0x40000000;
    *(undefined4 *)((int)puVar20 + uVar19 * 0x10 + 0x784) = 0x4b000000;
    *(undefined4 *)(puVar20 + (uVar19 + 0x78) * 2) = 0x40000000;
    *(uint *)(puVar20 + uVar19 * 2 + 0xf1) = uStack_6a8;
    *(uint *)((int)puVar20 + uVar19 * 0x10 + 0x78c) = uStack_6a4;
    *puVar20 = 0x8000000000000000U >> ((ulonglong)(uVar19 >> 2) & 0x7f) | *puVar20;
    fn_82630750(param_1[1],0,*(undefined4 *)(iVar8 + *(int *)(iVar14 + 0x30)),0);
    param_1[0x1a50] = *(uint *)(iVar8 + *(int *)(iVar14 + 0x30));
    break;
  case 0x43:
    uVar19 = param_1[0x43];
    goto code_r0x82854fe0;
  case 0x44:
    uVar19 = param_1[0x42];
code_r0x82854fe0:
    fn_82852D70((double)(float)param_1[0x46],param_1,puVar4,uVar19,param_1[0x45]);
    break;
  case 0x46:
    fn_82853BC0(param_1,puVar4,param_7);
    break;
  case 0x47:
  case 0x49:
    thunk_FUN_82838b18(aiStack_490,*(int *)(puVar4 + 10) + param_7,param_1 + 0x29,puVar4[0xd],
                       puVar4[0xe]);
    break;
  case 0x48:
    fn_82853700(param_1,puVar4,param_7);
    break;
  case 0x4a:
    fn_82853C40(param_1,apuStack_6d0,param_3,param_4,param_5,param_6,param_7);
  }
  *param_2 = (uint)*puVar3 + *param_2;
  return;
}

