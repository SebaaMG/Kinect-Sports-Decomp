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
extern unsigned int *auStack_100;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_dc;
extern int fn_82AA6330();
extern int fn_82AA6648();
extern int fn_82AA66A8();
extern int fn_82AA6868();
extern int fn_82ABDA10();
extern int fn_82ABDAA0();
extern int fn_82ABDB58();
extern int fn_82ABDBA0();
extern int fn_82ABDCB0();
extern int fn_82ABDD90();
extern int fn_82ABE250();
extern int fn_82ABE9F0();
extern int fn_82AC6388();
extern int fn_82AC6468();
extern int fn_82AC64B8();
extern int fn_82AC65F0();
extern int fn_82AC6740();
extern int fn_82AC6808();
extern int fn_82AC68F0();
extern int fn_82AC8910();
extern int fn_82AC9EE0();
extern int fn_82AC9FE8();
extern int fn_82ACAFD8();
extern int fn_82ACB098();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82AD1B28();
extern int fn_82AD20C0();
extern int fn_82AD6090();
extern int fn_82ADD090();
extern int fn_82ADD198();
extern int fn_82ADD330();
extern int fn_82ADD498();
extern int fn_82ADD4E0();
extern int fn_82ADD528();
extern int fn_82ADD5B8();
extern int fn_82ADD610();
extern int fn_82ADD880();
extern int fn_82ADD9F8();
extern int fn_82ADDA58();
extern int fn_82ADDC90();
extern int fn_82ADDE40();
extern int fn_82ADDEB8();
extern int fn_82ADE018();
extern int fn_82ADE298();
extern int fn_82ADE7E8();
extern int fn_82ADE8E8();
extern int fn_82ADEE50();
extern int fn_82ADF478();
extern int fn_82ADF598();
extern int fn_82ADF780();
extern int fn_82ADFFA8();
extern int fn_82AE0148();
extern int fn_82AE03A0();
extern int fn_82AE5AC8();
extern int fn_82AF8140();
extern int fn_82B0FD38();
extern int fn_82B102D8();
extern int fn_82B10EA8();
extern int fn_82B41D68();
extern int fn_82B44B88();
extern int fn_82B841E8();
extern int fn_82B84290();
extern int fn_82B894C8();
extern int fn_82B8A4C0();
extern int fn_82B8A718();
extern int fn_82B8F130();
extern int fn_82B8F328();
extern int fn_82F65FE0();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int iStack_104;
extern unsigned int iStack_b0;
extern unsigned int iStack_b4;
extern unsigned int uStack0000002c;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_10f;
extern unsigned int uStack_ac;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;


/* WARNING: Removing unreachable block (ram,0x82ae0ed0) */
/* WARNING: Removing unreachable block (ram,0x82ae0edc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 fn_82AE0470(int param_1,uint param_2,int *param_3,uint param_4)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  uint *puVar4;
  ulonglong *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar16;
  uint uVar17;
  char cVar31;
  uint *puVar18;
  int iVar19;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar20;
  byte *pbVar21;
  uint *puVar22;
  undefined8 uVar11;
  undefined8 uVar12;
  int *piVar23;
  int iVar24;
  uint uVar25;
  undefined4 uVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar13;
  ulonglong uVar14;
  int *piVar29;
  undefined2 uVar30;
  ulonglong uVar15;
  longlong lVar32;
  ulonglong uVar33;
  uint uVar34;
  ulonglong *puVar35;
  uint *puVar36;
  uint uVar38;
  ulonglong uVar37;
  uint uVar39;
  uint uVar40;
  int iVar41;
  uint uVar42;
  uint *puVar43;
  ulonglong uVar44;
  int *piVar45;
  int *piVar46;
  ulonglong uVar47;
  byte *pbVar48;
  byte *pbVar49;
  undefined4 *puVar50;
  uint *puVar53;
  ulonglong uVar51;
  ulonglong uVar52;
  longlong lVar54;
  int *piStack00000024;
  uint uStack0000002c;
  undefined1 uStack_10f;
  uint uStack_10c;
  uint uStack_108;
  int iStack_104;
  uint auStack_100 [6];
  uint uStack_e8;
  uint uStack_e0;
  undefined1 auStack_dc [12];
  int aiStack_d0 [4];
  undefined1 auStack_c0 [12];
  int iStack_b4;
  int iStack_b0;
  uint uStack_ac;
  
  uStack_e8 = 1;
  uStack_10f = 0;
  piStack00000024 = param_3;
  uStack0000002c = param_4;
  if (param_4 != 0) {
    auStack_100[5] = param_2 & 0xff;
    do {
      uVar28 = auStack_100[5];
      if (auStack_100[5] == 0) {
        if ((*(uint *)(param_1 + 0x2c) & 4) != 0) {
          for (uVar17 = *(uint *)(param_1 + 4); ((uVar17 & 1) == 0 && (uVar17 != 0));
              uVar17 = *(uint *)((uVar17 & 0xfffffffe) + 4)) {
            for (uVar27 = *(uint *)(uVar17 + 0x1c); ((uVar27 & 1) == 0 && (uVar27 != 0));
                uVar27 = *(uint *)((uVar27 & 0xfffffffe) + 0x28)) {
              uVar40 = *(uint *)(uVar27 + 8);
              if (((uVar40 & 0x3f80) == 0x3400) && (uVar34 = uVar40 >> 1 & 0xf, uVar34 != 0)) {
                if (*(int *)(uVar27 + 4) == 0) {
                  *(uint *)(uVar27 + 8) = uVar40 & 0xfffe3fe1;
                }
                else {
                  puVar22 = *(uint **)(uVar27 + 0x2c);
                  uVar40 = 1;
                  uVar38 = 2;
                  lVar32 = 3;
                  uVar42 = *puVar22 >> 5 & 0xff;
                  uVar25 = uVar42 >> ((uint)((0x1fU - LZCOUNT(uVar34 & ~(uVar34 - 1)) & 0xffffffff)
                                            << 1) & 0x3e) & 3 | 0xe4;
                  do {
                    if ((1 << (uVar40 & 0x3f) & uVar34) == 0) {
                      uVar39 = uVar25 >> (uVar38 - 2 & 0x3f);
                    }
                    else {
                      uVar39 = uVar42 >> (uVar38 & 0x3f);
                    }
                    uVar40 = uVar40 + 1;
                    uVar25 = uVar25 & ~(3 << (uVar38 & 0x3f)) | (uVar39 & 3) << (uVar38 & 0x3f);
                    uVar38 = uVar38 + 2;
                    lVar32 = lVar32 + -1;
                  } while (lVar32 != 0);
                  uVar40 = puVar22[3];
                  if (uVar42 != uVar25) {
                    *puVar22 = (uVar25 & 0xff) << 5 | *puVar22 & 0xffffe01f;
                    uVar34 = *(uint *)(uVar40 + 8) >> 7 & 0x7f;
                    if ((uVar34 == 0) || (bVar6 = true, 0x66 < uVar34)) {
                      bVar6 = false;
                    }
                    if (bVar6) {
                      fn_82AD1B28(uVar40);
                    }
                  }
                  if ((*(uint *)(uVar40 + 8) >> 0x17 & 1) == 0) {
                    fn_82B102D8(param_1,uVar40);
                  }
                  *(uint *)(uVar40 + 0x10) = *(uint *)(uVar40 + 0x10) | 0x100000;
                }
              }
            }
          }
        }
        if (((*(uint *)(param_1 + 0x2c) & 0x10) == 0) ||
           (bVar6 = true, (*(uint *)(param_1 + 0x2c) & 0x20) != 0)) {
          bVar6 = false;
        }
        if (bVar6) {
          fn_82AC9FE8(param_1);
          for (uVar17 = *(uint *)(param_1 + 4); ((uVar17 & 1) == 0 && (uVar17 != 0));
              uVar17 = *(uint *)((uVar17 & 0xfffffffe) + 4)) {
            if ((*(uint *)(uVar17 + 0x14) & 1) == 0) {
              uVar27 = *(uint *)(uVar17 + 0x14);
              iVar20 = uVar17 + 0x10;
            }
            else if ((*(uint *)(uVar17 + 0x1c) & 1) == 0) {
              uVar27 = *(uint *)(uVar17 + 0x1c);
              iVar20 = uVar17 + 0x18;
            }
            else {
              uVar27 = *(uint *)(uVar17 + 0x24);
              iVar20 = uVar17 + 0x20;
            }
            uVar27 = -(uint)((uVar27 & 1) == 0) & uVar27;
            do {
              if (uVar27 == 0) break;
              do {
                uVar40 = *(uint *)(uVar27 + 8);
                if ((uVar40 >> 0x1a & 1) != 0) {
                  cVar31 = fn_82AC6740(uVar27);
                  if (((cVar31 != '\0') && ((uVar40 & 0x1e) != 0)) && ((uVar40 >> 0x17 & 1) == 0)) {
                    for (puVar22 = *(uint **)(uVar27 + 4); puVar22 != (uint *)0x0;
                        puVar22 = (uint *)puVar22[2]) {
                      if ((*puVar22 & 0xe000000) != 0) {
                        bVar6 = true;
                        if ((*puVar22 >> 0x1e & 1) != 0) goto LAB_82ae073c;
                        break;
                      }
                    }
                    bVar6 = false;
LAB_82ae073c:
                    if (!bVar6) {
                      fn_82B102D8(param_1,uVar27);
                    }
                  }
                  *(uint *)(uVar27 + 8) = *(uint *)(uVar27 + 8) & 0xfbffffff;
                }
                uVar27 = *(uint *)((uVar27 & 0xfffffffe) + 0x28);
              } while (((uVar27 & 1) == 0) && (uVar27 != 0));
              iVar24 = uVar17 + 0x20;
              if (iVar20 == iVar24) break;
              if ((iVar20 == uVar17 + 0x18) || ((*(uint *)(uVar17 + 0x1c) & 1) != 0)) {
                uVar27 = *(uint *)(uVar17 + 0x24);
              }
              else {
                uVar27 = *(uint *)(uVar17 + 0x1c);
                iVar24 = uVar17 + 0x18;
              }
              iVar20 = iVar24;
            } while ((uVar27 & 1) == 0);
          }
        }
      }
      iVar20 = *(int *)(param_1 + 0x74) + 1;
      *(int *)(param_1 + 0x29c) = iVar20;
      uVar16 = fn_82ABE9F0(param_1,iVar20 * 4,0);
      uVar17 = *(uint *)(param_1 + 4);
      *(undefined4 *)(param_1 + 0x2c4) = uVar16;
      for (; ((uVar17 & 1) == 0 && (uVar17 != 0)); uVar17 = *(uint *)((uVar17 & 0xfffffffe) + 4)) {
        if ((*(uint *)(uVar17 + 0x14) & 1) == 0) {
          uVar27 = *(uint *)(uVar17 + 0x14);
          iVar20 = uVar17 + 0x10;
        }
        else if ((*(uint *)(uVar17 + 0x1c) & 1) == 0) {
          uVar27 = *(uint *)(uVar17 + 0x1c);
          iVar20 = uVar17 + 0x18;
        }
        else {
          uVar27 = *(uint *)(uVar17 + 0x24);
          iVar20 = uVar17 + 0x20;
        }
        uVar27 = -(uint)((uVar27 & 1) == 0) & uVar27;
        do {
          if (uVar27 == 0) break;
          do {
            uVar40 = *(uint *)(uVar27 + 8);
            if ((uVar40 >> 0x17 & 1) != 0) {
              uVar42 = 1;
              uVar34 = *(uint *)(uVar27 + 0x10) & 0xffff;
              uVar25 = (*(uint *)(uVar27 + 0x10) >> 0x10 & 7) + uVar34;
              if (uVar34 < uVar25) {
                iVar24 = uVar34 << 2;
                do {
                  if ((uVar42 & uVar40 >> 1 & 0xf) != 0) {
                    *(uint *)(*(int *)(param_1 + 0x2c4) + iVar24) = uVar27;
                  }
                  uVar34 = uVar34 + 1;
                  iVar24 = iVar24 + 4;
                  uVar42 = uVar42 << 1;
                } while (uVar34 < uVar25);
              }
            }
            uVar27 = *(uint *)((uVar27 & 0xfffffffe) + 0x28);
          } while (((uVar27 & 1) == 0) && (uVar27 != 0));
          iVar24 = uVar17 + 0x20;
          if (iVar20 == iVar24) break;
          if ((iVar20 == uVar17 + 0x18) || ((*(uint *)(uVar17 + 0x1c) & 1) != 0)) {
            uVar27 = *(uint *)(uVar17 + 0x24);
          }
          else {
            uVar27 = *(uint *)(uVar17 + 0x1c);
            iVar24 = uVar17 + 0x18;
          }
          iVar20 = iVar24;
        } while ((uVar27 & 1) == 0);
      }
      uVar17 = fn_82ABE9F0(param_1,*(int *)(param_1 + 0x29c) << 2,0);
      auStack_100[3] = uVar17;
      fn_82F68CC0(uVar17,*(undefined4 *)(param_1 + 0x2c4),*(int *)(param_1 + 0x29c) << 2);
      piVar29 = (int *)(uVar17 + 4);
      fn_82F65FE0(piVar29,(ulonglong)*(uint *)(param_1 + 0x29c) - 1,4,0xffffffff82add220);
      uVar16 = fn_82ABE9F0(param_1,(ulonglong)*(uint *)(param_1 + 0x29c) * 0x28,0);
      *(undefined4 *)(param_1 + 0x2a4) = uVar16;
      uVar27 = 1;
      if (1 < *(uint *)(param_1 + 0x29c)) {
        iVar20 = 0x28;
        do {
          iVar24 = *(int *)(param_1 + 0x2a4) + iVar20;
          *(int *)(*(int *)(param_1 + 0x2a4) + iVar20) = param_1;
          *(undefined8 *)(iVar24 + 8) = 0;
          *(undefined8 *)(iVar24 + 0x10) = 0;
          *(undefined8 *)(iVar24 + 0x18) = 0;
          *(undefined8 *)(iVar24 + 0x20) = 0;
          uVar37 = (ulonglong)*(uint *)(param_1 + 0x318);
          if (uVar37 == 0) {
            uVar37 = 0x20;
          }
          if (uVar37 < 0x40) {
            fn_82AE5AC8(iVar24,uVar37,0x40 - uVar37);
          }
          uVar27 = uVar27 + 1;
          iVar20 = iVar20 + 0x28;
        } while (uVar27 < *(uint *)(param_1 + 0x29c));
      }
      uVar27 = *(uint *)((-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4)) +
                        0x14);
      bVar6 = (uVar27 & 1) == 0;
      if ((*(uint *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
        lVar32 = 0;
        uVar40 = 0;
        if ((bVar6) && (uVar34 = 0, uVar27 != 0)) {
          do {
            uVar42 = uVar34;
            if ((*(uint *)(uVar27 + 8) & 0x3f80) == 0x3880) {
              uVar25 = 0;
              if (*(uint *)(param_1 + 0x218) != 0) {
                puVar22 = (uint *)(param_1 + 0x160);
                do {
                  if (((puVar22[-1] & 0x2000) != 0) && (uVar27 == *puVar22)) {
                    uVar38 = *(uint *)((uVar25 + 0x1d) * 0xc + param_1) & 0x1f;
                    uVar42 = uVar27;
                    if ((uVar38 != 0x11) && (uVar42 = uVar34, uVar38 == 0x12)) {
                      uVar40 = uVar27;
                    }
                    break;
                  }
                  uVar25 = uVar25 + 1;
                  puVar22 = puVar22 + 3;
                } while (uVar25 < *(uint *)(param_1 + 0x218));
              }
              if (uVar25 == *(uint *)(param_1 + 0x218)) {
                fn_82ADF478(param_1,uVar27,lVar32);
                lVar32 = lVar32 + 1;
              }
            }
            uVar27 = *(uint *)((uVar27 & 0xfffffffe) + 0x28);
          } while (((uVar27 & 1) == 0) && (uVar34 = uVar42, uVar27 != 0));
          if (uVar42 != 0) {
            fn_82ADF478(param_1,uVar42,lVar32);
          }
          if (uVar40 != 0) {
            lVar32 = lVar32 + 1;
            goto code_r0x82ae0c70;
          }
        }
      }
      else {
        uVar34 = 0;
        if ((bVar6) && (uVar42 = 0, uVar25 = 0, uVar27 != 0)) {
          do {
            uVar40 = uVar42;
            uVar38 = uVar25;
            if (((*(uint *)(uVar27 + 8) & 0x3f80) == 0x3880) &&
               (uVar39 = 0, *(int *)(param_1 + 0x218) != 0)) {
              puVar22 = (uint *)(param_1 + 0x160);
              do {
                if (uVar27 == *puVar22) {
                  uVar40 = uVar27;
                  if ((*(uint *)((uVar39 + 0x1d) * 0xc + param_1) & 0x1f) != 0x12) {
                    uVar39 = 0;
                    if (*(int *)(param_1 + 0x220) != 0) {
                      uVar40 = 0;
                      puVar22 = (uint *)(param_1 + 0x15c);
                      do {
                        if (uVar27 == puVar22[1]) {
                          uVar39 = 1 << (*puVar22 & 0x1f) | uVar39;
                        }
                        uVar40 = uVar40 + 1;
                        puVar22 = puVar22 + 3;
                      } while (uVar40 < *(uint *)(param_1 + 0x218));
                    }
                    uVar40 = uVar42;
                    uVar38 = uVar27;
                    if ((uVar25 != 0) && (uVar34 = uVar25, (uVar39 & 0x4000) == 0)) {
                      uVar38 = uVar25;
                      uVar34 = uVar27;
                    }
                  }
                  break;
                }
                uVar39 = uVar39 + 1;
                puVar22 = puVar22 + 3;
              } while (uVar39 < *(uint *)(param_1 + 0x218));
            }
            uVar27 = *(uint *)((uVar27 & 0xfffffffe) + 0x28);
          } while (((uVar27 & 1) == 0) && (uVar42 = uVar40, uVar25 = uVar38, uVar27 != 0));
          if ((uVar38 != 0) && (fn_82ADF478(param_1,uVar38,0), uVar34 != 0)) {
            fn_82ADF478(param_1,uVar34,1);
          }
          if (uVar40 != 0) {
            lVar32 = 2;
code_r0x82ae0c70:
            fn_82ADF478(param_1,uVar40,lVar32);
          }
        }
      }
      uVar27 = 1;
      piVar23 = piVar29;
      if (1 < *(uint *)(param_1 + 0x29c)) {
        do {
          iVar20 = *piVar23;
          if (iVar20 == 0) break;
          uVar40 = *(uint *)(iVar20 + 8) >> 7 & 0x7f;
          if ((uVar40 == 0x13) || (uVar40 == 0x1d)) {
            uVar40 = *(uint *)(iVar20 + 0x10);
            uVar42 = 0;
            uVar34 = uVar40 & 0xffff;
            *(uint *)(iVar20 + 0x10) = uVar40 | 0x100000;
            uVar40 = uVar34 + (uVar40 >> 0x10 & 7);
            if (uVar34 < uVar40) {
              iVar19 = uVar34 * 0x28;
              iVar24 = uVar40 - uVar34;
              do {
                uVar40 = 0;
                uVar37 = 0;
                do {
                  if (uVar40 != uVar42) {
                    puVar35 = (ulonglong *)(*(int *)(param_1 + 0x2a4) + iVar19);
                    lVar32 = 4;
                    do {
                      puVar5 = puVar35 + 1;
                      puVar35 = puVar35 + 1;
                      *puVar35 = *puVar5 | 0x1111111111111111 << (uVar37 & 0x7f);
                      lVar32 = lVar32 + -1;
                    } while (lVar32 != 0);
                  }
                  uVar40 = uVar40 + 1;
                  uVar37 = uVar37 + 1;
                } while (uVar40 < 4);
                iVar24 = iVar24 + -1;
                uVar42 = uVar42 + 1;
                iVar19 = iVar19 + 0x28;
              } while (iVar24 != 0);
            }
          }
          for (puVar22 = *(uint **)(iVar20 + 4); puVar22 != (uint *)0x0;
              puVar22 = (uint *)puVar22[2]) {
            uVar40 = puVar22[4];
            if ((((uVar40 != 0) && ((*puVar22 & 0xe000000) != 0)) &&
                (uVar34 = *(uint *)(uVar40 + 8) >> 7 & 0x7f, 0x49 < uVar34)) &&
               ((uVar34 < 0x50 && (puVar22 == *(uint **)(uVar40 + 0x30))))) {
              uVar40 = **(uint **)(uVar40 + 0x2c);
              lVar32 = 4;
              iVar24 = ((*puVar22 >> 5 & 3) + (uint)*(ushort *)(iVar20 + 0x12)) * 0x28;
              puVar35 = (ulonglong *)(*(int *)(param_1 + 0x2a4) + iVar24);
              do {
                puVar5 = puVar35 + 1;
                puVar35 = puVar35 + 1;
                *puVar35 = *puVar5 | 0x1111111111111111 << ((ulonglong)(uVar40 >> 5) & 3);
                lVar32 = lVar32 + -1;
              } while (lVar32 != 0);
              iVar19 = *(int *)(*(int *)(*(int *)(param_1 + 0x2a4) + iVar24) + 0x318);
              if (iVar19 == 0) {
                iVar19 = 0x20;
              }
              uVar40 = fn_82ADDA58(*(int *)(param_1 + 0x2a4) + iVar24);
              if ((uint)(iVar19 << 2) <= uVar40) {
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(param_1,0x12c0);
              }
              *(uint *)(iVar20 + 0x10) = *(uint *)(iVar20 + 0x10) | 0x100000;
            }
          }
          uVar27 = uVar27 + 1;
          piVar23 = piVar23 + 1;
        } while (uVar27 < *(uint *)(param_1 + 0x29c));
      }
      uVar37 = ((ulonglong)*(uint *)(param_1 + 0x29c) + 0x3f & 0xffffffff) >> 3 & 0x1ffffff8;
      uVar27 = (uint)uVar37;
      *(uint *)(param_1 + 0x2a0) = uVar27 >> 3;
      uStack_e0 = uVar27;
      uVar16 = fn_82ABE9F0(param_1,*(uint *)(param_1 + 0x29c) << 2,0);
      *(undefined4 *)(param_1 + 0x2a8) = uVar16;
      uVar40 = 1;
      piVar23 = piVar29;
      if (1 < *(uint *)(param_1 + 0x29c)) {
        do {
          iVar20 = *piVar23;
          if (iVar20 == 0) break;
          cVar31 = fn_82ABDAA0(iVar20);
          if ((cVar31 != '\0') && ((*(uint *)(iVar20 + 8) & 0x80000000) == 0)) {
            puVar18 = (uint *)fn_82ABE250(param_1,8,0x26);
            puVar22 = puVar18 + 1;
            puVar18[1] = (uint)puVar18 | 1;
            *puVar18 = (uint)puVar22 | 1;
            iVar19 = fn_82AD6090(puVar18,1);
            iVar24 = *(int *)(iVar19 + 8);
            *(int *)(iVar19 + 8) = iVar24 + 1;
            *(int *)((iVar24 + 4) * 4 + iVar19) = iVar20;
code_r0x82ae0f14:
            while (((*puVar22 & 1) == 0 && (*puVar22 != 0))) {
              puVar53 = (uint *)(*puVar18 & 0xfffffffe);
              puVar36 = puVar53 + -1;
              uVar34 = puVar53[1] - 1;
              piVar45 = (int *)puVar36[puVar53[1] + 3];
              puVar53[1] = uVar34;
              if (uVar34 == 0) {
                *(uint *)(*puVar53 & 0xfffffffe) = *puVar36;
                *(uint *)(*puVar36 & 0xfffffffe) = *puVar53;
                fn_82AA6648(puVar18,puVar36,((ulonglong)puVar53[2] + 4 & 0x3fffffff) << 2);
              }
              uVar34 = piVar45[2];
              if ((uVar34 & 0x3f80) != 0x3800) goto code_r0x82ae1140;
              puVar53 = (uint *)*piVar45;
              if (puVar53[1] == 0) goto code_r0x82ae0fa8;
            }
            *puVar18 = *(uint *)(param_1 + 0x3d0);
            *(uint **)(param_1 + 0x3d0) = puVar18;
          }
          uVar40 = uVar40 + 1;
          piVar23 = piVar23 + 1;
        } while (uVar40 < *(uint *)(param_1 + 0x29c));
      }
      uVar40 = 1;
      piVar23 = piVar29;
      if (1 < *(uint *)(param_1 + 0x29c)) {
        do {
          piVar45 = (int *)*piVar23;
          if (piVar45 == (int *)0x0) break;
          if ((piVar45[2] & 0x3f80U) == 0x3800) {
            puVar22 = (uint *)*piVar45;
            if ((puVar22 == (uint *)0x0) || (bVar6 = true, puVar22[1] == 0)) {
              bVar6 = false;
            }
            if (((!bVar6) && ((*(uint *)(piVar45[7] + 0x30) >> 0x15 & 1) == 0)) &&
               ((*(uint *)(piVar45[7] + 0x30) >> 0x14 & 1) == 0)) {
              uVar30 = *(undefined2 *)((int)piVar45 + 0x12);
              uVar34 = puVar22[3];
              uVar9 = fn_82ADD198(param_1,uVar30);
              uVar10 = fn_82ADD198(param_1,(*puVar22 >> 5 & 3) + (uint)*(ushort *)(uVar34 + 0x12))
              ;
              if ((uVar10 & 0xffffffff) != (uVar9 & 0xffffffff)) {
                lVar32 = 0;
                do {
                  if ((*(ulonglong *)
                        ((int)((uVar9 * 5 + lVar32 + 1 & 0xffffffff) << 3) +
                        *(int *)(param_1 + 0x2a4)) |
                      *(ulonglong *)
                       ((int)((uVar10 * 5 + lVar32 + 1 & 0xffffffff) << 3) +
                       *(int *)(param_1 + 0x2a4))) != 0xffffffffffffffff) {
                    bVar6 = true;
                    goto code_r0x82ae12ac;
                  }
                  lVar32 = lVar32 + 1;
                } while ((int)lVar32 < 4);
                bVar6 = false;
code_r0x82ae12ac:
                if (bVar6) {
                  fn_82ADE298(param_1,uVar30,uVar10);
                  fn_82ADE298(param_1,uVar9,uVar10);
                }
              }
            }
          }
          uVar40 = uVar40 + 1;
          piVar23 = piVar23 + 1;
        } while (uVar40 < *(uint *)(param_1 + 0x29c));
      }
      uVar40 = 1;
      if (1 < *(uint *)(param_1 + 0x29c)) {
        do {
          piVar23 = (int *)*piVar29;
          if (piVar23 == (int *)0x0) break;
          if ((piVar23[2] & 0x3f80U) == 0x3800) {
            if ((*piVar23 == 0) || (bVar6 = true, *(int *)(*piVar23 + 4) == 0)) {
              bVar6 = false;
            }
            if (bVar6) {
              pbVar21 = (byte *)0x0;
              uVar34 = 0;
              piVar45 = *(int **)(piVar23[7] + 0x14);
              if ((((uint)piVar45 & 1) == 0) && (piVar45 != (int *)0x0)) {
                do {
                  if ((piVar23 != piVar45) && ((piVar45[2] & 0x3f80U) == 0x3800)) {
                    if ((*piVar45 == 0) || (bVar6 = true, *(int *)(*piVar45 + 4) == 0)) {
                      bVar6 = false;
                    }
                    if (bVar6) {
                      uVar30 = *(undefined2 *)((int)piVar23 + 0x12);
                      uVar9 = fn_82ADD198(param_1,uVar30);
                      uVar10 = fn_82ADD198(param_1,*(undefined2 *)((int)piVar45 + 0x12));
                      if ((uVar9 & 0xffffffff) != (uVar10 & 0xffffffff)) {
                        lVar32 = 0;
                        do {
                          if ((*(ulonglong *)
                                ((int)((uVar9 * 5 + lVar32 + 1 & 0xffffffff) << 3) +
                                *(int *)(param_1 + 0x2a4)) |
                              *(ulonglong *)
                               ((int)((uVar10 * 5 + lVar32 + 1 & 0xffffffff) << 3) +
                               *(int *)(param_1 + 0x2a4))) != 0xffffffffffffffff) {
                            bVar6 = true;
                            goto code_r0x82ae1418;
                          }
                          lVar32 = lVar32 + 1;
                        } while ((int)lVar32 < 4);
                        bVar6 = false;
code_r0x82ae1418:
                        if (bVar6) {
                          if (uVar34 == 0) {
                            uVar34 = 0;
                            for (iVar20 = *piVar23; iVar20 != 0; iVar20 = *(int *)(iVar20 + 4)) {
                              uVar34 = uVar34 + 1;
                            }
                          }
                          uVar42 = 0;
                          for (iVar20 = *piVar45; iVar20 != 0; iVar20 = *(int *)(iVar20 + 4)) {
                            uVar42 = uVar42 + 1;
                          }
                          if (uVar42 == uVar34) {
                            if (pbVar21 == (byte *)0x0) {
                              pbVar21 = (byte *)fn_82ABE9F0(param_1,uVar34 & 0x1fffffff,0);
                              pbVar48 = pbVar21 + -4;
                              for (puVar22 = (uint *)*piVar23; puVar22 != (uint *)0x0;
                                  puVar22 = (uint *)puVar22[1]) {
                                uVar16 = fn_82ADD198(param_1,(*puVar22 >> 5 & 3) +
                                                               (uint)*(ushort *)(puVar22[3] + 0x12))
                                ;
                                pbVar48 = pbVar48 + 4;
                                *(undefined4 *)pbVar48 = uVar16;
                              }
                              fn_82F65FE0(pbVar21,uVar34,4,0xffffffff82add210);
                            }
                            pbVar49 = pbVar21 + uVar34 * 4;
                            pbVar48 = pbVar49 + -4;
                            for (puVar22 = (uint *)*piVar45; puVar22 != (uint *)0x0;
                                puVar22 = (uint *)puVar22[1]) {
                              uVar16 = fn_82ADD198(param_1,(*puVar22 >> 5 & 3) +
                                                             (uint)*(ushort *)(puVar22[3] + 0x12));
                              pbVar48 = pbVar48 + 4;
                              *(undefined4 *)pbVar48 = uVar16;
                            }
                            fn_82F65FE0(pbVar49,uVar34,4,0xffffffff82add210);
                            lVar32 = 0;
                            if ((uVar34 & 0x3fffffff) != 0) {
                              pbVar48 = pbVar21;
                              do {
                                lVar32 = (ulonglong)*pbVar48 - (ulonglong)*pbVar49;
                                if (lVar32 != 0) break;
                                pbVar48 = pbVar48 + 1;
                                pbVar49 = pbVar49 + 1;
                              } while (pbVar48 != pbVar21 + uVar34 * 4);
                            }
                            if ((int)lVar32 == 0) {
                              fn_82ADE298(param_1,uVar30,uVar10);
                              fn_82ADE298(param_1,uVar9,uVar10);
                            }
                          }
                        }
                      }
                    }
                  }
                  piVar45 = *(int **)(((uint)piVar45 & 0xfffffffe) + 0x28);
                } while ((((uint)piVar45 & 1) == 0) && (piVar45 != (int *)0x0));
                if (pbVar21 != (byte *)0x0) {
                  fn_82AC6808(param_1,pbVar21,uVar34 & 0x1fffffff,0);
                }
              }
            }
          }
          uVar40 = uVar40 + 1;
          piVar29 = piVar29 + 1;
        } while (uVar40 < *(uint *)(param_1 + 0x29c));
      }
      uVar34 = 0;
      for (uVar40 = *(uint *)(param_1 + 4); ((uVar40 & 1) == 0 && (uVar40 != 0));
          uVar40 = *(uint *)((uVar40 & 0xfffffffe) + 4)) {
        iVar20 = fn_82ABE9F0(param_1,*(int *)(param_1 + 0x2a0) << 3,0);
        uVar16 = fn_82ABE9F0(param_1,*(int *)(param_1 + 0x2a0) << 3,0);
        *(undefined4 *)(uVar40 + 0x58) = uVar16;
        for (uVar42 = *(uint *)(uVar40 + 0x14); ((uVar42 & 1) == 0 && (uVar42 != 0));
            uVar42 = *(uint *)((uVar42 & 0xfffffffe) + 0x28)) {
          if ((*(uint *)(uVar42 + 8) >> 0x17 & 1) != 0) {
            uVar9 = (ulonglong)*(uint *)(uVar42 + 0x10) & 0xffff;
            uVar10 = ((ulonglong)(*(uint *)(uVar42 + 0x10) >> 0x10) & 7) + uVar9;
            for (; (uVar9 & 0xffffffff) < uVar10; uVar9 = uVar9 + 1) {
              uVar47 = fn_82ADD198(param_1,uVar9);
              uVar25 = (uint)((uVar47 & 0xffffffff) >> 3) & 0x1ffffff8;
              *(ulonglong *)(uVar25 + iVar20) =
                   1L << (uVar47 & 0x3f) | *(ulonglong *)(uVar25 + iVar20);
            }
          }
        }
        if ((*(uint *)(uVar40 + 0x1c) & 1) == 0) {
          uVar42 = *(uint *)(uVar40 + 0x1c);
          iVar24 = uVar40 + 0x18;
        }
        else {
          uVar42 = *(uint *)(uVar40 + 0x24);
          iVar24 = uVar40 + 0x20;
        }
        uVar42 = -(uint)((uVar42 & 1) == 0) & uVar42;
        while (uVar42 != 0) {
          do {
            uVar25 = *(uint *)(uVar42 + 8);
            if ((uVar25 >> 0x17 & 1) != 0) {
              uVar38 = 1;
              uVar10 = (ulonglong)*(uint *)(uVar42 + 0x10) & 0xffff;
              uVar47 = ((ulonglong)(*(uint *)(uVar42 + 0x10) >> 0x10) & 7) + uVar10;
              uVar9 = uVar10;
              while (uVar9 < uVar47) {
                if ((uVar38 & uVar25 >> 1 & 0xf) != 0) {
                  uVar9 = fn_82ADD198(param_1,uVar10);
                  uVar39 = (uint)((uVar9 & 0xffffffff) >> 3) & 0x1ffffff8;
                  *(ulonglong *)(uVar39 + iVar20) =
                       1L << (uVar9 & 0x3f) | *(ulonglong *)(uVar39 + iVar20);
                }
                uVar10 = uVar10 + 1;
                uVar38 = uVar38 << 1;
                uVar9 = uVar10 & 0xffffffff;
              }
            }
            uVar42 = *(uint *)((uVar42 & 0xfffffffe) + 0x28);
          } while (((uVar42 & 1) == 0) && (uVar42 != 0));
          if ((iVar24 == uVar40 + 0x20) ||
             (uVar42 = *(uint *)(uVar40 + 0x24), iVar24 = uVar40 + 0x20, (uVar42 & 1) != 0)) break;
        }
        *(int *)(uVar40 + 0x54) = iVar20;
        uVar16 = fn_82ABE9F0(param_1,*(int *)(param_1 + 0x2a0) << 3,0);
        *(undefined4 *)(uVar40 + 0x50) = uVar16;
        uVar34 = *(uint *)(uVar40 + 0x30) >> 0x13 & 1 | uVar34;
      }
      iVar20 = fn_82ABE9F0(param_1,*(int *)(param_1 + 0x2a0) << 3,0);
      if (((*(uint *)(param_1 + 4) & 1) == 0) && (*(uint *)(param_1 + 4) != 0)) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(iVar20,0,uVar37);
      }
      if ((*(uint *)(param_1 + 0x28) & 0x100) != 0) {
        for (uVar40 = *(uint *)(param_1 + 4); ((uVar40 & 1) == 0 && (uVar40 != 0));
            uVar40 = *(uint *)((uVar40 & 0xfffffffe) + 4)) {
          if ((**(uint **)(uVar40 + 0x28) >> 0x13 & 1) != 0) {
            for (uVar42 = *(uint *)(uVar40 + 0x1c); ((uVar42 & 1) == 0 && (uVar42 != 0));
                uVar42 = *(uint *)((uVar42 & 0xfffffffe) + 0x28)) {
              if (((*(uint *)(uVar42 + 8) >> 0x17 & 1) != 0) &&
                 (cVar31 = fn_82ABDAA0(uVar42), cVar31 != '\0')) {
                uVar25 = *(uint *)((uVar40 & 0xfffffffe) + 4);
                if (((uVar25 & 1) == 0) && (uVar25 != 0)) {
                  iVar24 = *(int *)(uVar42 + 4);
                  uVar38 = 0;
                  do {
                    while ((uVar39 = uVar38, iVar24 != 0 &&
                           ((*(int *)(iVar24 + 0x10) == 0 ||
                            (uVar39 = uVar25, *(uint *)(*(int *)(iVar24 + 0x10) + 0x1c) != uVar25)))
                           )) {
                      iVar24 = *(int *)(iVar24 + 8);
                    }
                    uVar25 = *(uint *)((uVar25 & 0xfffffffe) + 4);
                  } while (((uVar25 & 1) == 0) &&
                          (iVar24 = *(int *)(uVar42 + 4), uVar38 = uVar39, uVar25 != 0));
                  if (uVar39 != 0) {
                    uVar9 = fn_82ADD198(param_1,*(undefined2 *)(uVar42 + 0x12));
                    for (uVar25 = *(uint *)((uVar40 & 0xfffffffe) + 4);
                        (((uVar25 & 1) == 0 && (uVar25 != 0)) && (uVar25 != uVar39));
                        uVar25 = *(uint *)((uVar25 & 0xfffffffe) + 4)) {
                      uVar38 = (uint)((uVar9 & 0xffffffff) >> 3) & 0x1ffffff8;
                      uVar10 = 1L << (uVar9 & 0x3f);
                      *(ulonglong *)(uVar38 + *(int *)(uVar25 + 0x58)) =
                           uVar10 | *(ulonglong *)(uVar38 + *(int *)(uVar25 + 0x58));
                      *(ulonglong *)(uVar38 + *(int *)(uVar25 + 0x50)) =
                           uVar10 | *(ulonglong *)(uVar38 + *(int *)(uVar25 + 0x50));
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (uVar34 != 0) {
        for (uVar40 = *(uint *)(param_1 + 4); ((uVar40 & 1) == 0 && (uVar40 != 0));
            uVar40 = *(uint *)((uVar40 & 0xfffffffe) + 4)) {
          fn_82F68CC0(*(undefined4 *)(uVar40 + 0x54),*(undefined4 *)(uVar40 + 0x58),uVar37);
        }
        uVar40 = *(uint *)(param_1 + 4);
        if (((uVar40 & 1) == 0) && (uVar40 != 0)) {
LAB_82ae1c88:
          piVar23 = *(int **)(uVar40 + 0xc);
          for (piVar29 = piVar23; piVar29 != (int *)0x0; piVar29 = (int *)piVar29[2]) {
            iVar24 = *piVar29;
            if ((*(uint *)(iVar24 + 0x30) >> 0x13 & 1) != 0) goto LAB_82ae1cb4;
          }
          goto LAB_82ae1e2c;
        }
      }
LAB_82ae1e48:
      uVar16 = fn_82ABE9F0(param_1,(longlong)*(int *)(param_1 + 0x29c) * (longlong)(int)uVar27
                                 ,0);
      *(undefined4 *)(param_1 + 0x2ac) = uVar16;
      if (uVar28 == 0) {
        fn_82ADE8E8(param_1,iVar20,uVar37,uVar34);
      }
      else {
        fn_82AF8140(param_1,uVar34);
      }
      fn_82AC6808(param_1,iVar20,*(int *)(param_1 + 0x2a0) << 3,0);
      for (uVar28 = *(uint *)((-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4))
                             + 0x14); ((uVar28 & 1) == 0 && (uVar28 != 0));
          uVar28 = *(uint *)((uVar28 & 0xfffffffe) + 0x28)) {
        if ((*(uint *)(uVar28 + 8) & 0x3f80) == 0x3880) {
          uVar9 = (ulonglong)*(uint *)(uVar28 + 0x10) & 0xffff;
          uVar47 = uVar9 + ((ulonglong)(*(uint *)(uVar28 + 0x10) >> 0x10) & 7);
          uVar10 = uVar9;
          uVar37 = uVar9;
          while (uVar37 < uVar47) {
            uVar11 = fn_82ADD198(param_1,uVar10);
            uVar10 = uVar10 + 1;
            for (uVar37 = uVar10; (uVar37 & 0xffffffff) < uVar47; uVar37 = uVar37 + 1) {
              uVar12 = fn_82ADD198(param_1,uVar37);
              fn_82ADD9F8(param_1,uVar11,uVar12);
            }
            uVar37 = uVar10 & 0xffffffff;
          }
          for (uVar27 = *(uint *)((-(uint)((*(uint *)(param_1 + 4) & 1) == 0) &
                                  *(uint *)(param_1 + 4)) + 0x14);
              ((uVar27 & 1) == 0 && (uVar27 != 0)); uVar27 = *(uint *)((uVar27 & 0xfffffffe) + 0x28)
              ) {
            if ((uVar27 != uVar28) && ((*(uint *)(uVar27 + 8) & 0x3f80) == 0x3880)) {
              uVar40 = *(uint *)(uVar27 + 0x10);
              uVar37 = (ulonglong)uVar40 & 0xffff;
              if (uVar9 < uVar47) {
                uVar10 = uVar9;
                do {
                  uVar11 = fn_82ADD198(param_1,uVar10);
                  uVar51 = uVar37;
                  uVar15 = uVar37;
                  while (uVar15 < uVar37 + ((ulonglong)(uVar40 >> 0x10) & 7)) {
                    uVar12 = fn_82ADD198(param_1,uVar51);
                    fn_82ADD9F8(param_1,uVar11,uVar12);
                    uVar51 = uVar51 + 1;
                    uVar15 = uVar51 & 0xffffffff;
                  }
                  uVar10 = uVar10 + 1;
                } while ((uVar10 & 0xffffffff) < uVar47);
              }
            }
          }
        }
      }
      uStack_10c = 0;
      bVar6 = false;
      iStack_104 = 0;
      uStack_108 = 1;
      if (1 < *(uint *)(param_1 + 0x29c)) {
        do {
          piVar29 = *(int **)(uStack_108 * 4 + uVar17);
          if (piVar29 == (int *)0x0) break;
          if ((piVar29[2] & 0x3f80U) == 0x3800) {
            uVar2 = *(ushort *)((int)piVar29 + 0x12);
            uVar37 = fn_82ADD198(param_1,uVar2);
            uVar28 = 0;
            for (iVar20 = *piVar29; iVar20 != 0; iVar20 = *(int *)(iVar20 + 4)) {
              uVar28 = uVar28 + 1;
            }
            auStack_100[4] = uVar28 * 8 + 8;
            piVar23 = (int *)fn_82ABE9F0(param_1,auStack_100[4],0);
            puVar22 = (uint *)(piVar23 + uVar28 * 2);
            uVar17 = 0xfffffff;
LAB_82ae20d8:
            *puVar22 = uVar28;
            iVar20 = 0;
            piVar45 = piVar23;
            for (puVar18 = (uint *)*piVar29; puVar18 != (uint *)0x0; puVar18 = (uint *)puVar18[1]) {
              uVar27 = puVar18[3];
              *piVar45 = iVar20;
              if ((*(uint *)(uVar27 + 8) >> 0x17 & 1) != 0) {
                uVar9 = fn_82ADD198(param_1,(uint)*(ushort *)(uVar27 + 0x12) + (*puVar18 >> 5 & 3)
                                     );
                for (piVar46 = *(int **)(piVar29[7] + 0x14);
                    (((uint)piVar46 & 1) == 0 && (piVar46 != (int *)0x0));
                    piVar46 = *(int **)(((uint)piVar46 & 0xfffffffe) + 0x28)) {
                  if ((((uint)piVar46[2] >> 0x17 & 1) != 0) &&
                     ((piVar46 != piVar29 &&
                      (uVar10 = fn_82ADD198(param_1,*(undefined2 *)((int)piVar46 + 0x12)),
                      (uVar9 & 0xffffffff) == (uVar10 & 0xffffffff))))) {
                    if (uVar28 != 0) {
                      piVar45 = piVar23 + -1;
                      uVar27 = uVar28;
                      do {
                        piVar45 = piVar45 + 2;
                        *piVar45 = 0xfffffff;
                        uVar27 = uVar27 - 1;
                      } while (uVar27 != 0);
                    }
                    goto LAB_82ae2430;
                  }
                }
                cVar31 = fn_82ADDC90(param_1,uVar9,uVar37);
                if (cVar31 != '\0') {
                  iVar24 = *(int *)((int)((uVar9 & 0xffffffff) << 2) + *(int *)(param_1 + 0x2a8));
                  if (iVar24 == 0) {
                    bVar1 = (1L << (uVar9 & 0x3f) &
                            *(ulonglong *)
                             (((uint)uVar9 >> 3 & 0x1ffffff8) + *(int *)(piVar29[7] + 0x50))) == 0;
                  }
                  else {
                    cVar31 = fn_82ADD498(iVar24,*(int *)(piVar29[7] + 0x50),
                                           *(undefined4 *)(param_1 + 0x2a0));
                    bVar1 = cVar31 == '\0';
                  }
                  if (!bVar1) {
                    if (uVar28 != 0) {
                      piVar45 = piVar23 + -1;
                      uVar27 = uVar28;
                      do {
                        piVar45 = piVar45 + 2;
                        *piVar45 = 0xfffffff;
                        uVar27 = uVar27 - 1;
                      } while (uVar27 != 0);
                    }
                    break;
                  }
                  fn_82ADD330(param_1,piVar29,puVar18,puVar18,puVar22 + 1,auStack_dc);
                  uVar40 = (*(uint *)(piVar29[7] + 0x44) & 0xfffffff) + piVar45[1];
                  if (0xfffffff < uVar40) {
                    uVar40 = 0xfffffff;
                  }
                  piVar45[1] = uVar40;
                }
                piVar46 = piVar23 + 1;
                for (puVar53 = (uint *)*piVar29; (puVar53 != (uint *)0x0 && (puVar53 != puVar18));
                    puVar53 = (uint *)puVar53[1]) {
                  uVar40 = puVar53[3];
                  if ((*(uint *)(uVar40 + 8) >> 0x17 & 1) != 0) {
                    uVar10 = fn_82ADD198(param_1,(uint)*(ushort *)(uVar40 + 0x12) +
                                                   (*puVar53 >> 5 & 3));
                    cVar31 = fn_82ADDC90(param_1,uVar9);
                    if (cVar31 != '\0') {
                      uVar34 = *(uint *)(uVar27 + 8) >> 7 & 0x7f;
                      if (((uVar34 == 0x74) || ((*(uint *)(uVar40 + 8) & 0x3f80) == 0x3a00)) &&
                         ((((*(uint *)(uVar40 + 8) & 0x3f80) == 0x3a00 &&
                           (uVar47 = (ulonglong)*(uint *)(*(int *)(uVar27 + 0x1c) + 0x30) & 0x7ffff,
                           (*(uint *)(((int)(uVar47 >> 5) + 1) * 4 +
                                     *(int *)(*(int *)(uVar40 + 0x1c) + 0x28)) &
                           1 << ((uint)uVar47 & 0x1f)) != 0)) ||
                          ((uVar34 == 0x74 &&
                           (uVar47 = (ulonglong)*(uint *)(*(int *)(uVar40 + 0x1c) + 0x30) & 0x7ffff,
                           (*(uint *)(((int)(uVar47 >> 5) + 1) * 4 +
                                     *(int *)(*(int *)(uVar27 + 0x1c) + 0x28)) &
                           1 << ((uint)uVar47 & 0x1f)) != 0)))))) {
                        if (uVar34 != 0x74) {
                          puVar18 = puVar53;
                        }
                        fn_82AD20C0(piVar29,puVar18,param_1);
                        uVar28 = uVar28 - 1;
                        puVar22 = puVar22 + -2;
                        goto LAB_82ae20d8;
                      }
                      if ((*(ulonglong *)
                            (((uint)uVar10 >> 3 & 0x1ffffff8) +
                            *(int *)(*(int *)(uVar27 + 0x1c) + 0x58)) & 1L << (uVar10 & 0x3f)) == 0)
                      {
                        if ((*(ulonglong *)
                              (((uint)((uVar9 & 0xffffffff) >> 3) & 0x1ffffff8) +
                              *(int *)(*(int *)(uVar40 + 0x1c) + 0x58)) & 1L << (uVar9 & 0x3f)) == 0
                           ) {
                          fn_82ADD330(param_1,piVar29,puVar18,puVar53,piVar45 + 1,piVar46);
                        }
                        else {
                          piVar45[1] = 0xffffffe;
                        }
                      }
                      else {
                        *piVar46 = 0xffffffe;
                      }
                    }
                  }
                  piVar46 = piVar46 + 2;
                }
              }
              iVar20 = iVar20 + 1;
              piVar45 = piVar45 + 2;
            }
LAB_82ae2430:
            uVar27 = 0xffffffff;
            uVar40 = 0;
            if (uVar28 != 0xffffffff) {
              puVar22 = (uint *)(piVar23 + 1);
              do {
                if (*puVar22 < uVar17) {
                  uVar27 = puVar22[-1];
                  uVar17 = *puVar22;
                }
                uVar40 = uVar40 + 1;
                puVar22 = puVar22 + 2;
              } while (uVar40 < uVar28 + 1);
              if (uVar17 != 0xfffffff) {
                if (uVar27 != uVar28) {
                  puVar22 = (uint *)*piVar29;
                  for (uVar28 = 0; (puVar22 != (uint *)0x0 && (uVar28 != uVar27));
                      uVar28 = uVar28 + 1) {
                    puVar22 = (uint *)puVar22[1];
                  }
                  uVar37 = fn_82ADD198(param_1,(*puVar22 >> 5 & 3) +
                                                 (uint)*(ushort *)(puVar22[3] + 0x12));
                }
                bVar1 = false;
LAB_82ae24c8:
                puVar22 = (uint *)*piVar29;
                do {
                  if (puVar22 == (uint *)0x0) {
                    uVar9 = fn_82ADD198(param_1,uVar2);
                    if ((bVar1) || ((uVar9 & 0xffffffff) != (uVar37 & 0xffffffff))) {
                      if ((bVar1) || (cVar31 = fn_82ADDC90(param_1,uVar9,uVar37), cVar31 != '\0'))
                      {
                        iVar20 = piVar29[7];
                        uVar28 = fn_82B8A4C0(param_1,iVar20,iVar20 + 0x18U & 0xfffffffe | 2,
                                                   piVar29);
                        *(uint *)(uVar28 + 0x10) = *(uint *)(uVar28 + 0x10) & 0xfff8ffff | 0x10000;
                        *(uint *)(uVar28 + 8) = *(uint *)(uVar28 + 8) | 0x800000;
                        *(ushort *)(uVar28 + 0x12) = uVar2;
                        *(uint *)((uint)uVar2 * 4 + *(int *)(param_1 + 0x2c4)) = uVar28;
                        *(uint *)(uStack_108 * 4 + auStack_100[3]) = uVar28;
                        iVar24 = (int)uVar9 * *(int *)(param_1 + 0x2a0) * 8 +
                                 *(int *)(param_1 + 0x2ac);
                        for (piVar29 = *(int **)(iVar20 + 0x14);
                            (((uint)piVar29 & 1) == 0 && (piVar29 != (int *)0x0));
                            piVar29 = *(int **)(((uint)piVar29 & 0xfffffffe) + 0x28)) {
                          if ((piVar29[2] & 0x3f80U) == 0x3800) {
                            for (puVar22 = (uint *)*piVar29; puVar22 != (uint *)0x0;
                                puVar22 = (uint *)puVar22[1]) {
                              if ((*(uint *)(puVar22[3] + 8) >> 0x17 & 1) != 0) {
                                uVar37 = ((ulonglong)(*puVar22 >> 5) & 3) +
                                         (ulonglong)*(ushort *)(puVar22[3] + 0x12);
                                uVar17 = (uint)(uVar37 >> 3) & 0x1ffffff8;
                                *(ulonglong *)(uVar17 + iVar24) =
                                     1L << (uVar37 & 0x3f) | *(ulonglong *)(uVar17 + iVar24);
                              }
                            }
                          }
                        }
                        *(uint *)(uVar28 + 0x20) = uStack_10c;
                        uStack_10c = uVar28;
                      }
                      else {
                        fn_82ADE298(param_1,uVar2);
                        fn_82ADE298(param_1,uVar9,uVar37);
                      }
                    }
                    fn_82AC6808(param_1,piVar23,auStack_100[4],0);
                    uVar17 = auStack_100[3];
                    goto LAB_82ae2fac;
                  }
                  uVar28 = puVar22[3];
                  if ((*(uint *)(uVar28 + 8) >> 0x17 & 1) == 0) goto LAB_82ae2550;
                  iVar20 = (uint)*(ushort *)(uVar28 + 0x12) + (*puVar22 >> 5 & 3);
                  uVar9 = fn_82ADD198(param_1,iVar20);
                  if ((bVar1) || ((uVar9 & 0xffffffff) != (uVar37 & 0xffffffff))) {
                    if ((bVar1) || (cVar31 = fn_82ADDC90(param_1,uVar9,uVar37), cVar31 != '\0'))
                    goto LAB_82ae2558;
                    fn_82ADE298(param_1,iVar20);
                    fn_82ADE298(param_1,uVar9,uVar37);
                  }
LAB_82ae2550:
                  puVar22 = (uint *)puVar22[1];
                } while( true );
              }
            }
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
LAB_82ae2fac:
          uStack_108 = uStack_108 + 1;
        } while (uStack_108 < *(uint *)(param_1 + 0x29c));
      }
      uVar16 = fn_82ABE9F0(param_1,(((ulonglong)*(uint *)(param_1 + 0x29c) & 0x7fffffff) * 2 +
                                          0x3f & 0xffffffff) >> 3 & 0x1ffffff8,0);
      *(undefined4 *)(param_1 + 0x2b4) = uVar16;
      uVar16 = fn_82ABE9F0(param_1,*(int *)(param_1 + 0x29c) << 2,0);
      *(undefined4 *)(param_1 + 0x2b0) = uVar16;
      auStack_100[4] = 0;
      uStack_108 = 1;
      if (1 < *(uint *)(param_1 + 0x29c)) {
LAB_82ae300c:
        puVar22 = (uint *)(uStack_108 * 4 + auStack_100[3]);
        uVar28 = *puVar22;
        if (uVar28 != 0) {
          if ((*(uint *)(uVar28 + 8) & 0x3f80) == 0x3800) {
            uVar30 = *(undefined2 *)(uVar28 + 0x12);
            iVar20 = fn_82ADD198(param_1,uVar30);
            if (*(int *)(iVar20 * 4 + *(int *)(param_1 + 0x2b0)) == 0) {
              uVar11 = fn_82ADE7E8(param_1);
              fn_82ADE018(param_1,uVar11,uVar30,iVar20,0,0);
            }
          }
          else {
            uVar9 = (ulonglong)(*(uint *)(uVar28 + 8) >> 1) & 0xf;
            uVar27 = 0;
            uVar17 = *(uint *)(uVar28 + 0x10) >> 0x10;
            uVar47 = (ulonglong)uVar17 & 7;
            uVar37 = (ulonglong)*(uint *)(uVar28 + 0x10) & 0xffff;
            uVar10 = uVar37 + uVar47;
            do {
              uVar15 = 1;
              if (uVar37 < uVar10) {
                uVar40 = 0;
                uVar34 = 0;
                uVar51 = uVar37;
                do {
                  if ((uVar15 & uVar9) != 0) {
                    uVar13 = fn_82ADD198(param_1,uVar51);
                    uVar44 = 1;
                    uVar42 = 0;
                    iVar20 = *(int *)((int)((uVar13 & 0xffffffff) << 2) + *(int *)(param_1 + 0x2b0))
                    ;
                    uVar25 = 0;
                    uVar52 = uVar37;
                    do {
                      if (((uVar44 & uVar9) != 0) &&
                         ((uVar51 & 0xffffffff) != (uVar52 & 0xffffffff))) {
                        uVar14 = fn_82ADD198(param_1,uVar52);
                        bVar1 = false;
                        iVar24 = *(int *)((int)((uVar14 & 0xffffffff) << 2) +
                                         *(int *)(param_1 + 0x2b0));
                        if (iVar20 == 0) {
                          uVar33 = uVar51;
                          uVar14 = uVar13;
                          iVar19 = iVar24;
                          if (iVar24 != 0) goto LAB_82ae3170;
                          bVar1 = false;
                        }
                        else {
                          uVar33 = uVar52;
                          iVar19 = iVar20;
                          if (iVar24 == 0) {
LAB_82ae3170:
                            cVar31 = fn_82ADF780(param_1,iVar19,uVar33,uVar14);
                          }
                          else {
                            if (iVar20 == iVar24) goto LAB_82ae318c;
                            cVar31 = fn_82AE03A0(param_1,iVar20,iVar24);
                          }
                          bVar1 = cVar31 == '\0';
                        }
LAB_82ae318c:
                        if (bVar1) {
                          uVar38 = uVar34 >> 3 & 0x1ffffffc;
                          uVar39 = uVar25 >> 3 & 0x1ffffffc;
                          *(uint *)((int)auStack_100 + uVar38 + 4) =
                               (1 << (uVar42 & 0x3f)) << (uVar34 & 0x1f) |
                               *(uint *)((int)auStack_100 + uVar38 + 4);
                          *(uint *)((int)auStack_100 + uVar39 + 4) =
                               (1 << (uVar40 & 0x3f)) << (uVar25 & 0x1f) |
                               *(uint *)((int)auStack_100 + uVar39 + 4);
                        }
                      }
                      uVar52 = uVar52 + 1;
                      uVar25 = uVar25 + 4;
                      uVar42 = uVar42 + 1;
                      uVar44 = (uVar44 & 0x7fffffff) << 1;
                    } while ((uVar52 & 0xffffffff) < uVar10);
                  }
                  uVar51 = uVar51 + 1;
                  uVar40 = uVar40 + 1;
                  uVar34 = uVar34 + 4;
                  uVar15 = (uVar15 & 0x7fffffff) << 1;
                } while ((uVar51 & 0xffffffff) < uVar10);
              }
              uVar52 = 1;
              uVar15 = 0xffffffffffffffff;
              uVar51 = 0xffffffffffffffff;
              uVar13 = 0;
              if ((uVar17 & 7) != 0) {
                uVar40 = 0;
                uVar44 = uVar47;
                do {
                  if ((uVar52 & uVar9) != 0) {
                    uVar14 = (ulonglong)
                             (((2 << (uVar40 + 3 & 0x1f)) - 1U &
                               *(uint *)((int)auStack_100 + (uVar40 >> 3 & 0x1ffffffc) + 4) &
                              -1 << (uVar40 & 0x1f)) >> (uVar40 & 0x1f));
                    uVar14 = ((0x8da691691448U >> (uVar14 & 0x7f)) >> (uVar14 & 0x7f)) >>
                             (uVar14 & 0x7f) & 7;
                    if (uVar14 < (uVar15 & 0xffffffff)) {
                      uVar15 = uVar14;
                      uVar51 = uVar13;
                    }
                  }
                  uVar13 = uVar13 + 1;
                  uVar40 = uVar40 + 4;
                  uVar52 = (uVar52 & 0x7fffffff) << 1;
                  uVar44 = uVar44 - 1;
                } while (uVar44 != 0);
              }
              lVar32 = uVar51 + uVar37;
              iVar20 = fn_82ADD198(param_1,lVar32);
              uVar15 = (ulonglong)*(uint *)(iVar20 * 4 + *(int *)(param_1 + 0x2b0));
              if (uVar15 == 0) {
                uVar15 = fn_82ADE7E8(param_1);
                uVar11 = fn_82ADD198(param_1,lVar32);
                fn_82ADE018(param_1,uVar15,lVar32,uVar11,0,0);
              }
              uVar40 = (uint)((uVar51 & 0xffffffff) << 2) & 0x1c;
              uVar52 = uVar9 & ~(ulonglong)
                                (((2 << ((int)((uVar51 & 0xffffffff) << 2) + 3U & 0x1f)) - 1U &
                                  *(uint *)((int)auStack_100 + ((uint)uVar51 >> 1 & 0x1ffffffc) + 4)
                                 & -1 << uVar40) >> uVar40);
              uVar51 = uVar52;
              while (uVar51 != 0) {
                uVar13 = uVar52 & ~(uVar52 - 1);
                uVar52 = uVar52 - uVar13;
                lVar32 = (uVar37 - LZCOUNT((int)uVar13)) + 0x1f;
                iVar20 = fn_82ADD198(param_1,lVar32);
                uVar51 = (ulonglong)*(uint *)(iVar20 * 4 + *(int *)(param_1 + 0x2b0));
                if (uVar51 == (uVar15 & 0xffffffff)) {
LAB_82ae3408:
                  uVar9 = uVar9 - uVar13;
                }
                else if (uVar51 == 0) {
                  cVar31 = fn_82ADF780(param_1,uVar15,lVar32,iVar20);
                  if (cVar31 != '\0') {
                    fn_82ADEE50(param_1,uVar15,lVar32,iVar20,0);
                    goto LAB_82ae3408;
                  }
                }
                else {
                  cVar31 = fn_82AE03A0(param_1,uVar15,uVar51);
                  if (cVar31 != '\0') {
                    uVar15 = fn_82AE0148(param_1,uVar15,uVar51,0,0,0,0,0);
                    goto LAB_82ae3408;
                  }
                }
                uVar51 = uVar52 & 0xffffffff;
              }
              uVar27 = uVar27 + 1;
            } while ((uVar9 & 0xffffffff) != 0);
            uVar17 = *(uint *)(uVar28 + 8);
            if (uVar27 < 2) {
              if ((uVar17 & 0x3f80) == 0x3700) {
                uVar9 = (ulonglong)(uVar17 >> 1) & 0xf;
                iVar20 = fn_82ADD198(param_1,uVar37);
                iVar20 = *(int *)(iVar20 * 4 + *(int *)(param_1 + 0x2b0));
                piVar29 = (int *)(uVar28 + 0x2c);
                for (uVar10 = 0; uVar17 = uStack_10c,
                    (uVar10 & 0xffffffff) < ((ulonglong)(*(uint *)(uVar28 + 8) >> 0x13) & 7);
                    uVar10 = uVar10 + 1) {
                  uVar17 = ((uint *)*piVar29)[3];
                  if ((*(uint *)(uVar17 + 8) >> 0x17 & 1) != 0) {
                    iVar19 = (uint)*(ushort *)(uVar17 + 0x12) + (*(uint *)*piVar29 >> 5 & 3);
                    uVar47 = fn_82ADD198(param_1,iVar19);
                    iVar24 = *(int *)((int)((uVar47 & 0xffffffff) << 2) + *(int *)(param_1 + 0x2b0))
                    ;
                    uVar17 = uVar28;
                    if (iVar24 != iVar20) {
LAB_82ae382c:
                      while( true ) {
                        uVar17 = *(uint *)((uVar17 & 0xfffffffe) + 0x28);
                        if (((uVar17 & 1) != 0) || (uVar17 == 0)) break;
                        if ((*(uint *)(uVar17 + 8) >> 0x17 & 1) != 0) {
                          bVar1 = false;
                          uVar27 = *(uint *)(uVar17 + 8) >> 1 & 0xf;
                          do {
                            if (uVar27 == 0) {
                              uVar15 = 0;
                            }
                            else {
                              uVar15 = ((ulonglong)*(ushort *)(uVar17 + 0x12) -
                                       LZCOUNT(uVar27 & ~(uVar27 - 1))) + 0x1f;
                            }
                            if ((uVar15 & 0xffffffff) == 0) goto LAB_82ae3820;
                            uVar15 = fn_82ADD198(param_1,uVar15);
                            if (iVar24 == 0) {
                              if ((uVar15 & 0xffffffff) == (uVar47 & 0xffffffff)) goto LAB_82ae381c;
                            }
                            else if ((*(ulonglong *)
                                       (*(int *)((int)((*(ulonglong *)
                                                         (((uint)uVar47 >> 2 & 0x1ffffff8) +
                                                         *(int *)(param_1 + 0x2b4)) >>
                                                        ((uVar47 & 0x7fffffff) * 2 +
                                                         (uVar47 & 0x7fffffe0) * -2 & 0x7f) & 3) <<
                                                      2) + iVar24) +
                                       ((uint)uVar15 >> 3 & 0x1ffffff8)) & 1L << (uVar15 & 0x3f)) !=
                                     0) goto LAB_82ae381c;
                            uVar27 = uVar27 - (uVar27 & ~(uVar27 - 1));
                          } while( true );
                        }
                      }
                      uVar15 = fn_82ADD198(param_1,uVar10 + uVar37);
                      iVar3 = *(int *)(param_1 + 0x2a0) * (uint)uVar47 * 8 +
                              *(int *)(param_1 + 0x2ac);
                      uVar17 = (uint)((uVar15 & 0xffffffff) >> 3) & 0x1ffffff8;
                      uVar51 = *(ulonglong *)
                                (((uint)((uVar15 & 0xffffffff) >> 2) & 0x1ffffff8) +
                                *(int *)(param_1 + 0x2b4));
                      uVar52 = ~(1L << (uVar15 & 0x3f));
                      *(ulonglong *)(uVar17 + iVar3) = uVar52 & *(ulonglong *)(uVar17 + iVar3);
                      if (iVar24 == 0) {
                        iVar24 = fn_82ADE7E8(param_1);
                        fn_82ADE018(param_1,iVar24,iVar19,uVar47,0,0);
                      }
                      uVar47 = *(ulonglong *)
                                (((uint)((uVar47 & 0xffffffff) >> 2) & 0x1ffffff8) +
                                *(int *)(param_1 + 0x2b4)) >>
                               ((uVar47 & 0x7fffffff) * 2 + (uVar47 & 0x7fffffe0) * -2 & 0x7f);
                      iVar19 = (int)((uVar47 & 3) << 2);
                      fn_82ADD528(((longlong)*(int *)(param_1 + 0x2a0) * (longlong)(int)uVar15 &
                                    0x1fffffffU) * 8 + (ulonglong)*(uint *)(param_1 + 0x2ac),
                                    *(undefined4 *)(iVar19 + iVar24));
                      fn_82ADD528(*(undefined4 *)
                                     ((((uint)(uVar51 >>
                                              ((uVar15 & 0x7fffffff) * 2 +
                                               (uVar15 & 0x7fffffe0) * -2 & 0x7f)) & 3) + 4) * 4 +
                                     iVar20),*(undefined4 *)(iVar19 + iVar24),
                                    *(undefined4 *)(param_1 + 0x2a0));
                      iVar24 = *(int *)((((uint)uVar47 & 3) + 4) * 4 + iVar24);
                      *(ulonglong *)(uVar17 + iVar24) = *(ulonglong *)(uVar17 + iVar24) & uVar52;
                      goto LAB_82ae397c;
                    }
                  }
                  uVar9 = uVar9 - (uint)(1 << ((uint)uVar10 & 0x3f));
LAB_82ae397c:
                  piVar29 = piVar29 + 1;
                }
                do {
                  while( true ) {
                    piVar29 = (int *)fn_82ADE7E8(param_1);
                    fn_82AE0148(param_1,piVar29,iVar20,0x33221100,
                                  *(uint *)(uVar28 + 8) >> 0x13 & 7,0,0,1);
                    uVar10 = uVar9;
                    if ((uVar9 & 0xffffffff) != 0) break;
LAB_82ae3c64:
                    aiStack_d0[0] = 0;
                    aiStack_d0[2] = 0;
                    aiStack_d0[3] = 0;
                    while( true ) {
                      do {
                        if ((uVar9 & 0xffffffff) == 0) goto LAB_82ae3f4c;
                        uVar47 = 0;
                        iVar24 = 0;
                        uVar10 = uVar9;
                        do {
                          uVar15 = uVar10 & ~(uVar10 - 1);
                          uVar10 = uVar10 - uVar15;
                          puVar22 = *(uint **)((int)((-LZCOUNT((int)uVar15) + 0x2aU & 0xffffffff) <<
                                                    2) + uVar28);
                          iVar19 = fn_82ADD198(param_1,(uint)*(ushort *)(puVar22[3] + 0x12) +
                                                         (*puVar22 >> 5 & 3));
                          iVar19 = *(int *)(iVar19 * 4 + *(int *)(param_1 + 0x2b0));
                          *(int *)((int)aiStack_d0 +
                                  (int)((-LZCOUNT((int)uVar15) + 0x1fU & 0xffffffff) << 2)) = iVar19
                          ;
                          if ((iVar24 == 0) || (iVar24 == iVar19)) {
                            uVar47 = uVar15 | uVar47;
                            iVar24 = iVar19;
                          }
                        } while ((uVar10 & 0xffffffff) != 0);
                        uVar9 = uVar9 - uVar47;
                        uVar15 = 0;
                        uVar27 = 0;
                        uVar10 = uVar47;
                        do {
                          uVar51 = uVar10 & ~(uVar10 - 1);
                          uVar10 = uVar10 - uVar51;
                          puVar22 = *(uint **)((int)((0x2aU - LZCOUNT((int)uVar51) & 0xffffffff) <<
                                                    2) + uVar28);
                          uVar51 = fn_82ADD198(param_1,(*puVar22 >> 5 & 3) +
                                                         (uint)*(ushort *)(puVar22[3] + 0x12));
                          uVar15 = uVar15 + 1;
                          uVar27 = 1 << ((uint)(*(ulonglong *)
                                                 (((uint)uVar51 >> 2 & 0x1ffffff8) +
                                                 *(int *)(param_1 + 0x2b4)) >>
                                               ((uVar51 & 0x7fffffff) * 2 +
                                                (uVar51 & 0x7fffffe0) * -2 & 0x7f)) & 3) | uVar27;
                        } while ((uVar10 & 0xffffffff) != 0);
                      } while (((ulonglong)*(uint *)(iVar24 + 0xc0) & 7) <= (uVar15 & 0xffffffff));
                      cVar31 = fn_82ADFFA8(param_1,piVar29,iVar24,0,0,uVar27,uVar15);
                      if (cVar31 == '\0') break;
                      fn_82AE0148(param_1,piVar29,iVar24,0,0,uVar27,uVar15,1);
                    }
                    if ((uVar47 & 0xffffffff) != 0) {
                      uVar27 = uVar17;
                      do {
                        uVar10 = uVar47 & ~(uVar47 - 1);
                        lVar32 = -LZCOUNT((int)uVar10);
                        iVar24 = *(int *)((int)((lVar32 + 0x2aU & 0xffffffff) << 2) + uVar28);
                        fn_82B894C8(param_1,*(undefined4 *)(uVar28 + 0x1c),uVar28 & 0xfffffffc
                                          ,iVar24);
                        uVar17 = *(uint *)(iVar24 + 0xc);
                        *(uint *)(uVar17 + 0x10) = *(uint *)(uVar17 + 0x10) & 0xfff8ffff | 0x10000;
                        uVar30 = fn_82ADD198(param_1,lVar32 + 0x1f + uVar37);
                        *(uint *)(uVar17 + 0x20) = uVar27;
                        uVar47 = uVar47 - uVar10;
                        *(undefined2 *)(uVar17 + 0x12) = uVar30;
                        uVar27 = uVar17;
                        uStack_10c = uVar17;
                      } while (uVar47 != 0);
                    }
                    fn_82ADDE40(param_1,piVar29);
                  }
                  while( true ) {
                    uVar47 = uVar10 & ~(uVar10 - 1);
                    uVar10 = uVar10 - uVar47;
                    lVar32 = -LZCOUNT((int)uVar47);
                    uVar15 = lVar32 + 0x1f;
                    puVar22 = *(uint **)((int)((lVar32 + 0x2aU & 0xffffffff) << 2) + uVar28);
                    uVar27 = puVar22[3];
                    iVar19 = (uint)*(ushort *)(uVar27 + 0x12) + (*puVar22 >> 5 & 3);
                    uVar47 = fn_82ADD198(param_1,iVar19);
                    iVar24 = *(int *)((int)((uVar47 & 0xffffffff) << 2) + *(int *)(param_1 + 0x2b0))
                    ;
                    if (iVar24 == 0) {
                      iVar24 = fn_82ADE7E8(param_1);
                      fn_82ADE018(param_1,iVar24,iVar19,uVar47,0,0);
                    }
                    iVar19 = (int)((*(ulonglong *)
                                     (((uint)((uVar47 & 0xffffffff) >> 2) & 0x1ffffff8) +
                                     *(int *)(param_1 + 0x2b4)) >>
                                    ((uVar47 & 0x7fffffff) * 2 + (uVar47 & 0x7fffffe0) * -2 & 0x7f)
                                   & 3) << 2);
                    uVar47 = fn_82AC8910(*(undefined4 *)(iVar19 + iVar24),0,
                                          *(undefined4 *)(param_1 + 0x2a0));
                    if ((uVar47 & 0xffffffff) <= (ulonglong)(*(int *)(param_1 + 0x29c) - 1)) break;
LAB_82ae3c5c:
                    if ((uVar10 & 0xffffffff) == 0) goto LAB_82ae3c64;
                  }
LAB_82ae3b04:
                  uVar51 = fn_82ADD198(param_1,uVar47);
                  iVar3 = *(int *)((int)((uVar15 & 0xffffffff) << 2) + (int)piVar29);
                  uVar40 = (uint)((uVar51 & 0xffffffff) >> 3) & 0x1ffffff8;
                  uVar52 = 1L << (uVar51 & 0x3f);
                  if ((*(ulonglong *)(iVar3 + uVar40) & uVar52) != 0) {
                    uVar40 = (uint)((uVar47 & 0xffffffff) >> 3) & 0x1ffffff8;
                    uVar51 = 1L << (uVar47 & 0x3f);
                    if ((*(ulonglong *)(uVar40 + iVar3) & uVar51) == 0) {
                      *(ulonglong *)(uVar40 + iVar3) = uVar51 | *(ulonglong *)(uVar40 + iVar3);
                    }
LAB_82ae3c1c:
                    if ((uVar47 & 0xffffffff) == (ulonglong)(*(int *)(param_1 + 0x29c) - 1)) {
                      uVar47 = 0xffffffffffffffff;
                    }
                    else {
                      uVar47 = fn_82AC8910(*(undefined4 *)(iVar19 + iVar24),uVar47 + 1,
                                            *(undefined4 *)(param_1 + 0x2a0));
                    }
                    if ((ulonglong)(*(int *)(param_1 + 0x29c) - 1) < (uVar47 & 0xffffffff))
                    goto LAB_82ae3c5c;
                    goto LAB_82ae3b04;
                  }
                  uVar13 = 0;
                  uVar34 = *(uint *)(uVar28 + 8) >> 0x13;
                  piVar23 = piVar29;
                  if ((uVar34 & 7) != 0) {
                    do {
                      if (((uVar13 & 0xffffffff) != (uVar15 & 0xffffffff)) &&
                         ((*(ulonglong *)(uVar40 + *piVar23) & uVar52) != 0)) break;
                      uVar13 = uVar13 + 1;
                      piVar23 = piVar23 + 1;
                    } while ((uVar13 & 0xffffffff) <
                             ((ulonglong)(*(uint *)(uVar28 + 8) >> 0x13) & 7));
                  }
                  if (((uVar13 & 0xffffffff) == ((ulonglong)uVar34 & 7)) &&
                     (cVar31 = fn_82ADF598(param_1,piVar29,uVar47,uVar51,uVar15), cVar31 != '\0'))
                  {
                    fn_82ADE018(param_1,piVar29,uVar47,uVar51,uVar15,1);
                    goto LAB_82ae3c1c;
                  }
                  uStack_10c = uVar17;
                  piVar23 = (int *)(uVar28 + 0x2c);
                  for (uVar10 = 0;
                      (uVar10 & 0xffffffff) < ((ulonglong)(*(uint *)(uVar28 + 8) >> 0x13) & 7);
                      uVar10 = uVar10 + 1) {
                    iVar24 = *piVar23;
                    uVar17 = uStack_10c;
                    if (uVar27 == *(uint *)(iVar24 + 0xc)) {
                      fn_82B894C8(param_1,*(undefined4 *)(uVar28 + 0x1c),uVar28 & 0xfffffffc,
                                        iVar24);
                      uVar17 = *(uint *)(iVar24 + 0xc);
                      *(uint *)(uVar17 + 0x10) = *(uint *)(uVar17 + 0x10) & 0xfff8ffff | 0x10000;
                      uVar30 = fn_82ADD198(param_1,uVar10 + uVar37);
                      *(uint *)(uVar17 + 0x20) = uStack_10c;
                      *(undefined2 *)(uVar17 + 0x12) = uVar30;
                      uVar9 = uVar9 - (uint)(1 << ((uint)uVar10 & 0x3f));
                    }
                    piVar23 = piVar23 + 1;
                    uStack_10c = uVar17;
                  }
                  fn_82ADDE40(param_1,piVar29);
                  uVar17 = uStack_10c;
                } while( true );
              }
            }
            else {
              uVar9 = (ulonglong)(uVar17 >> 1) & 0xf;
              do {
                uVar15 = 0;
                iVar20 = 0;
                uVar51 = 1;
                uVar52 = uVar37;
                uVar47 = uVar37;
                while (uVar47 < uVar10) {
                  if ((uVar51 & uVar9) != 0) {
                    iVar24 = fn_82ADD198(param_1,uVar52);
                    iVar24 = *(int *)(iVar24 * 4 + *(int *)(param_1 + 0x2b0));
                    if ((iVar20 == 0) || (iVar24 == iVar20)) {
                      uVar15 = uVar51 | uVar15;
                      iVar20 = iVar24;
                    }
                  }
                  uVar52 = uVar52 + 1;
                  uVar51 = (uVar51 & 0x7fffffff) << 1;
                  uVar47 = uVar52 & 0xffffffff;
                }
                uVar9 = uVar9 - uVar15;
                if (uVar15 != 0) {
                  puVar18 = (uint *)(uVar28 + 4);
LAB_82ae34a8:
                  uVar47 = uVar15 & ~(uVar15 - 1);
                  lVar32 = 0x1f - LZCOUNT((int)uVar47);
                  for (puVar53 = (uint *)*puVar18; puVar53 != (uint *)0x0;
                      puVar53 = (uint *)puVar53[2]) {
                    if ((((puVar53[4] != 0) && ((*puVar53 & 0xe000000) != 0)) &&
                        ((*(uint *)(puVar53[4] + 0x10) & 0x80000) == 0)) &&
                       (uVar51 = fn_82ABDBA0(puVar53),
                       (uVar51 & 0xffffffff) == (uVar47 & 0xffffffff))) {
                      cVar31 = fn_82ACB098(uVar28);
                      if (cVar31 == '\0') {
                        uVar17 = *(int *)(uVar28 + 0x1c) + 0x18U & 0xfffffffe | 2;
                      }
                      else {
                        uVar17 = uVar28 & 0xfffffffc | 1;
                      }
                      uVar40 = fn_82B8A718(param_1,*(undefined4 *)(uVar28 + 0x1c),uVar17,
                                                 uVar28,lVar32);
                      uVar17 = auStack_100[4];
                      uVar27 = uVar40;
                      if ((*(uint *)(uVar28 + 0x10) & 0x100000) != 0) {
                        uVar17 = uStack_10c;
                        uStack_10c = uVar40;
                        uVar27 = auStack_100[4];
                      }
                      auStack_100[4] = uVar27;
                      *(uint *)(uVar40 + 0x20) = uVar17;
                      uVar51 = lVar32 + uVar37;
                      *(uint *)(uVar40 + 0x10) = *(uint *)(uVar40 + 0x10) & 0xfff8ffff | 0x10000;
                      *(short *)(uVar40 + 0x12) = (short)uVar51;
                      *(uint *)(uVar40 + 8) = *(uint *)(uVar40 + 8) | 0x800000;
                      *(uint *)(uVar40 + 0x10) = *(uint *)(uVar40 + 0x10) | 0x80000;
                      *(uint *)((int)((uVar51 & 0xffffffff) << 2) + *(int *)(param_1 + 0x2c4)) =
                           uVar40;
                      puVar53 = puVar18;
                      if (*(uint *)(param_1 + 0x29c) <= uStack_108) goto LAB_82ae35d8;
                      puVar36 = puVar22 + -1;
                      uVar17 = uStack_108;
                      goto LAB_82ae35b4;
                    }
                  }
                  goto LAB_82ae3674;
                }
LAB_82ae367c:;} while ((uVar9 & 0xffffffff) != 0);
              if ((*(uint *)(uVar28 + 0x10) & 0x100000) == 0) {
                *(undefined2 *)(uVar28 + 0x12) = 0;
                *(uint *)(uVar28 + 8) = *(uint *)(uVar28 + 8) & 0xff7fffff;
              }
            }
          }
          goto LAB_82ae4180;
        }
      }
LAB_82ae4198:
      if ((auStack_100[5] == 0) && ((*(uint *)(param_1 + 0x2c) & 4) != 0)) {
        for (uVar28 = *(uint *)(param_1 + 4); ((uVar28 & 1) == 0 && (uVar28 != 0));
            uVar28 = *(uint *)((uVar28 & 0xfffffffe) + 4)) {
          for (uVar17 = *(uint *)(uVar28 + 0x1c); ((uVar17 & 1) == 0 && (uVar17 != 0));
              uVar17 = *(uint *)((uVar17 & 0xfffffffe) + 0x28)) {
            uVar27 = uStack_10c;
            if (((*(uint *)(uVar17 + 8) & 0x3f80) == 0x3400) &&
               ((*(uint *)(uVar17 + 8) & 0x1e) != 0)) {
              puVar22 = *(uint **)(uVar17 + 0x2c);
              uVar40 = puVar22[3];
              uVar37 = fn_82ADD610(param_1,uVar40);
              uVar9 = fn_82ADD610(param_1,uVar17);
              uVar10 = 0;
              uVar34 = *(uint *)(uVar17 + 8) >> 1 & 0xf;
              uVar42 = 0;
              while( true ) {
                if (uVar34 == 0) {
                  uVar47 = 0;
                }
                else {
                  uVar47 = ((ulonglong)*(ushort *)(uVar17 + 0x12) - LZCOUNT(uVar34 & ~(uVar34 - 1)))
                           + 0x1f;
                }
                if ((uVar47 & 0xffffffff) == 0) break;
                uVar15 = fn_82ADD198(param_1,uVar47);
                uVar47 = fn_82ADD198(param_1,((*puVar22 >> 5 & 0xff) >>
                                                ((uint)((uVar47 - *(ushort *)(uVar17 + 0x12) &
                                                        0xffffffff) << 1) & 0x3e) & 3) +
                                               (uint)*(ushort *)(uVar40 + 0x12));
                iVar20 = *(int *)(param_1 + 0x2b4);
                uVar25 = uVar42 >> 3 & 0x1ffffffc;
                uVar10 = uVar10 + 1;
                *(uint *)((int)auStack_100 + uVar25) =
                     ((uint)(*(ulonglong *)(((uint)uVar15 >> 2 & 0x1ffffff8) + iVar20) >>
                            ((uVar15 & 0x7fffffff) * 2 + (uVar15 & 0x7fffffe0) * -2 & 0x7f)) & 3) <<
                     (uVar42 & 0x1f) | *(uint *)((int)auStack_100 + uVar25);
                uVar38 = uVar42 + 4;
                uVar25 = uVar38 >> 3 & 0x1ffffffc;
                uVar42 = uVar42 + 8;
                *(uint *)((int)auStack_100 + uVar25) =
                     ((uint)(*(ulonglong *)(((uint)uVar47 >> 2 & 0x1ffffff8) + iVar20) >>
                            ((uVar47 & 0x7fffffff) * 2 + (uVar47 & 0x7fffffe0) * -2 & 0x7f)) & 3) <<
                     (uVar38 & 0x1f) | *(uint *)((int)auStack_100 + uVar25);
                uVar34 = uVar34 - (uVar34 & ~(uVar34 - 1));
              }
              bVar1 = false;
              if ((uVar37 & 0xffffffff) == (uVar9 & 0xffffffff)) {
                uVar37 = 0;
                if ((uVar10 & 0xffffffff) != 0) {
                  uVar40 = 4;
                  do {
                    uVar34 = uVar40 - 4 & 0x1f;
                    if (((2 << (uVar40 - 1 & 0x1f)) - 1U &
                         *(uint *)((int)auStack_100 + (uVar40 - 4 >> 3 & 0x1ffffffc)) & -1 << uVar34
                        ) >> uVar34 !=
                        ((2 << (uVar40 + 3 & 0x1f)) - 1U &
                         *(uint *)((int)auStack_100 + (uVar40 >> 3 & 0x1ffffffc)) &
                        -1 << (uVar40 & 0x1f)) >> (uVar40 & 0x1f)) goto LAB_82ae4470;
                    uVar37 = uVar37 + 1;
                    uVar40 = uVar40 + 8;
                  } while ((uVar37 & 0xffffffff) < (uVar10 & 0xffffffff));
                }
              }
              else {
                cVar31 = fn_82ADFFA8(param_1,uVar9,uVar37,0,uVar10,0,0);
                if (cVar31 == '\0') {
LAB_82ae4470:
                  bVar1 = true;
                }
                else {
                  fn_82AE0148(param_1,uVar9,uVar37,0,uVar10,0,0,0);
                }
              }
              if (bVar1) {
                uVar27 = fn_82ADD880(param_1,uVar17);
                *(uint *)(uVar27 + 0x20) = uStack_10c;
              }
            }
            uStack_10c = uVar27;
          }
        }
      }
      if ((((uStack_10c == 0) && (auStack_100[4] == 0)) && (iStack_104 == 0)) && (!bVar6)) {
        fn_82AC6808(param_1,*(undefined4 *)(param_1 + 0x2a4),
                     (ulonglong)*(uint *)(param_1 + 0x29c) * 0x28,0);
        *(undefined4 *)(param_1 + 0x2a4) = 0;
        fn_82AC6808(param_1,*(undefined4 *)(param_1 + 0x2ac),
                     (longlong)*(int *)(param_1 + 0x29c) * (longlong)(int)uStack_e0,0);
        *(undefined4 *)(param_1 + 0x2ac) = 0;
        *piStack00000024 = auStack_100[3];
        return uStack_10f;
      }
      *(undefined4 *)(param_1 + 0x2a8) = 0;
      *(undefined4 *)(param_1 + 0x2ac) = 0;
      *(undefined4 *)(param_1 + 0x2b8) = 0;
      *(undefined4 *)(param_1 + 700) = 0;
      uStack_10f = 1;
      *(undefined4 *)(param_1 + 0x2c0) = 0;
      *(undefined4 *)(param_1 + 0x2c4) = 0;
      for (; uStack_10c != 0; uStack_10c = *(uint *)(uStack_10c + 0x20)) {
        *(uint *)(uStack_10c + 0x10) = *(uint *)(uStack_10c + 0x10) | 0x80000;
        fn_82B0FD38(param_1,uStack_10c);
      }
      for (; iStack_104 != 0; iStack_104 = *(int *)(iStack_104 + 0x20)) {
        iVar20 = *(int *)(param_1 + 0x74) + 1;
        *(int *)(param_1 + 0x74) = iVar20;
        *(short *)(iStack_104 + 0x12) = (short)iVar20;
      }
      fn_82AA6868(param_1 + 0x3cc);
      uStack_e8 = uStack_e8 + 1;
    } while (uStack_e8 <= uStack0000002c);
  }
  if (((*(uint *)(param_1 + 0x28) & 0x400) != 0) && ((*(uint *)(param_1 + 0x34) & 0x100) == 0)) {
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x100;
    fn_82AA6330(param_1);
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x12c0);
code_r0x82ae1140:
  cVar31 = fn_82ABDAA0(piVar45);
  if ((cVar31 == '\0') || ((uVar34 & 0x80000000) != 0)) goto code_r0x82ae0f14;
  if ((uVar34 & 0x380000) == 0) {
    puVar53 = (uint *)*piVar45;
    while( true ) {
      if (puVar53 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      if ((*puVar53 & 0xe000000) != 0) break;
      puVar53 = (uint *)puVar53[1];
    }
  }
  else {
    puVar53 = (uint *)piVar45[0xb];
  }
code_r0x82ae0fa8:
  if ((uVar34 & 0x1e) == 0) goto code_r0x82ae0f14;
  uVar34 = puVar53[3];
  if ((*(uint *)(uVar34 + 8) >> 0x17 & 1) == 0) goto code_r0x82ae10c0;
  uVar30 = *(undefined2 *)((int)piVar45 + 0x12);
  uVar9 = fn_82ADD198(param_1,uVar30);
  uVar10 = fn_82ADD198(param_1,(*puVar53 >> 5 & 3) + (uint)*(ushort *)(uVar34 + 0x12));
  if ((uVar10 & 0xffffffff) == (uVar9 & 0xffffffff)) goto code_r0x82ae10c0;
  lVar32 = 0;
  do {
    if ((*(ulonglong *)
          ((int)((uVar9 * 5 + lVar32 + 1 & 0xffffffff) << 3) + *(int *)(param_1 + 0x2a4)) |
        *(ulonglong *)
         ((int)((uVar10 * 5 + lVar32 + 1 & 0xffffffff) << 3) + *(int *)(param_1 + 0x2a4))) !=
        0xffffffffffffffff) {
      bVar6 = true;
      goto code_r0x82ae1044;
    }
    lVar32 = lVar32 + 1;
  } while ((int)lVar32 < 4);
  bVar6 = false;
code_r0x82ae1044:
  if (!bVar6) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c0);
  }
  fn_82ADE298(param_1,uVar30,uVar10);
  fn_82ADE298(param_1,uVar9,uVar10);
  if ((*puVar22 & 1) == 0) {
    uVar42 = *puVar18 & 0xfffffffe;
    iVar20 = uVar42 - 4;
    if ((iVar20 == 0) || (*(uint *)(uVar42 + 8) < *(int *)(uVar42 + 4) + 1U)) goto code_r0x82ae109c;
  }
  else {
code_r0x82ae109c:
    iVar20 = fn_82AD6090(puVar18,1);
  }
  iVar24 = *(int *)(iVar20 + 8);
  *(int *)(iVar20 + 8) = iVar24 + 1;
  *(uint *)((iVar24 + 4) * 4 + iVar20) = uVar34;
code_r0x82ae10c0:
  for (puVar53 = (uint *)piVar45[1]; puVar53 != (uint *)0x0; puVar53 = (uint *)puVar53[2]) {
    uVar34 = puVar53[4];
    if ((uVar34 != 0) && ((*puVar53 & 0xe000000) != 0)) {
      if ((*puVar22 & 1) == 0) {
        uVar42 = *puVar18 & 0xfffffffe;
        iVar20 = uVar42 - 4;
        if ((iVar20 == 0) || (*(uint *)(uVar42 + 8) < *(int *)(uVar42 + 4) + 1U))
        goto code_r0x82ae1114;
      }
      else {
code_r0x82ae1114:
        iVar20 = fn_82AD6090(puVar18,1);
      }
      iVar24 = *(int *)(iVar20 + 8);
      *(int *)(iVar20 + 8) = iVar24 + 1;
      *(uint *)((iVar24 + 4) * 4 + iVar20) = uVar34;
    }
  }
  goto code_r0x82ae0f14;
LAB_82ae1cb4:
  if (piVar23 == (int *)0x0) goto LAB_82ae1cd4;
  iVar19 = *piVar23;
  if ((*(uint *)(iVar19 + 0x30) >> 0x15 & 1) != 0) goto LAB_82ae1cd8;
  piVar23 = (int *)piVar23[2];
  goto LAB_82ae1cb4;
LAB_82ae1cd4:
  iVar19 = 0;
LAB_82ae1cd8:
  fn_82F68CC0(iVar20,*(undefined4 *)(iVar19 + 0x50),uVar37);
  for (uVar42 = *(uint *)(iVar19 + 0x14); ((uVar42 & 1) == 0 && (uVar42 != 0));
      uVar42 = *(uint *)((uVar42 & 0xfffffffe) + 0x28)) {
    if (((*(uint *)(uVar42 + 8) & 0x3f80) == 0x3800) &&
       (puVar22 = (uint *)fn_82B41D68(param_1,uVar42,uVar40,0,1), puVar22 != (uint *)0x0)) {
      uVar9 = fn_82ADD198(param_1,(uint)*(ushort *)(puVar22[3] + 0x12) + (*puVar22 >> 5 & 3));
      uVar25 = (uint)((uVar9 & 0xffffffff) >> 3) & 0x1ffffff8;
      *(ulonglong *)(uVar25 + iVar20) = 1L << (uVar9 & 0x3f) | *(ulonglong *)(uVar25 + iVar20);
    }
  }
  piVar29 = (int *)(*(int *)(iVar24 + 0x74) + 0x10);
  iVar19 = iVar24;
  if (*(int *)(*(int *)(iVar24 + 0x74) + 0x10) != 0) {
    for (; piVar29 != (int *)0x0; piVar29 = (int *)piVar29[1]) {
      uVar42 = *(uint *)(*piVar29 + 0x30);
      if (((uVar42 >> 0x16 & 1) == 0) && ((uVar42 >> 0x14 & 1) != 0)) {
        fn_82ADD528(iVar20,*(undefined4 *)(*piVar29 + 0x58),*(undefined4 *)(param_1 + 0x2a0));
      }
    }
  }
  do {
    fn_82ADD4E0(*(undefined4 *)(iVar19 + 0x50),iVar20,*(undefined4 *)(param_1 + 0x2a0));
    fn_82ADD4E0(*(undefined4 *)(iVar19 + 0x58),iVar20,*(undefined4 *)(param_1 + 0x2a0));
    iVar3 = *(int *)(iVar19 + 0x38);
    if (*(int *)(iVar19 + 0x38) == 0) {
      if (iVar19 == iVar24) break;
      do {
        iVar3 = *(int *)(iVar19 + 0x3c);
        if (*(int *)(iVar19 + 0x3c) != 0) break;
        iVar19 = *(int *)(iVar19 + 0x34);
        iVar3 = iVar19;
      } while (iVar19 != iVar24);
    }
    iVar19 = iVar3;
  } while (iVar3 != iVar24);
LAB_82ae1e2c:
  uVar40 = *(uint *)((uVar40 & 0xfffffffe) + 4);
  if (((uVar40 & 1) != 0) || (uVar40 == 0)) goto LAB_82ae1e48;
  goto LAB_82ae1c88;
LAB_82ae2558:
  uVar17 = piVar29[7];
  bVar8 = false;
  fn_82AC6468(auStack_c0,uVar17,0);
LAB_82ae2de8:
  uVar27 = fn_82AC64B8(auStack_c0);
  if (uVar27 != 0) {
    puVar18 = (uint *)fn_82B41D68(param_1,piVar29,uVar27,puVar22,1);
    if (puVar22 == puVar18) {
      if (iStack_b0 == 0) {
        if (((*(uint *)(uVar17 + 0x30) >> 0x13 & 1) == 0) &&
           ((*(uint *)(uVar17 + 0x30) >> 0x15 & 1) == 0)) {
          if ((*(int *)(uVar27 + 0xc) == 0) ||
             (bVar7 = true, *(int *)(*(int *)(uVar27 + 0xc) + 8) == 0)) {
            bVar7 = false;
          }
          if (bVar7) {
            if (((((*(uint *)(uVar27 + 0x1c) & 1) != 0) ||
                 (iVar20 = (*(uint *)(uVar27 + 0x18) & 0xfffffffe) - 0x28, iVar20 == 0)) ||
                (cVar31 = fn_82ABDB58(iVar20), cVar31 == '\0')) &&
               ((((*(uint *)(uVar27 + 0x24) & 1) != 0 ||
                 (iVar20 = (*(uint *)(uVar27 + 0x20) & 0xfffffffe) - 0x28, iVar20 == 0)) ||
                (cVar31 = fn_82ABDB58(iVar20), cVar31 == '\0')))) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c0);
            }
            uVar40 = *(uint *)(iVar20 + 8) >> 7 & 0x7f;
            if ((uVar40 == 0x55) || (uVar40 == 0x54)) {
              if (!bVar1) {
                bVar1 = true;
                goto LAB_82ae24c8;
              }
            }
            else {
              uVar40 = fn_82AC68F0(param_1);
              *(uint *)(uVar40 + 0x44) =
                   *(uint *)(uVar40 + 0x44) & 0xf0000000 | *(uint *)(iStack_b4 + 0x10) & 0xfffffff;
              if ((*(uint *)(uVar27 + 0x30) >> 0x1a & 1) == 0) {
                if ((*(uint *)(uVar27 + 0x30) >> 0x17 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
                  fn_82AA66A8(param_1,0x12c0);
                }
                if ((*(uint *)(uVar17 & 0xfffffffe) & 1) == 0) {
                  uVar34 = (*(uint *)(uVar17 & 0xfffffffe) & 0xfffffffe) - 4;
                }
                else {
                  uVar34 = 0;
                }
                piVar45 = (int *)(uVar40 & 0xfffffffe);
                piVar45[1] = *(int *)(uVar34 + 4);
                *(int **)(*(uint *)(uVar34 + 4) & 0xfffffffe) = piVar45 + 1;
                *piVar45 = uVar34 + 4;
                *(int **)(uVar34 + 4) = piVar45;
              }
              else {
                uVar42 = *(uint *)(iVar20 + 8);
                iVar24 = fn_82ABDD90(param_1,uVar42 >> 7 & 0x7f,uVar42 >> 0x13 & 7,
                                      uVar42 >> 0xe & 7);
                uVar9 = (ulonglong)(uVar42 >> 0x12) & 1;
                uVar25 = *(uint *)(iVar24 + iVar20 + -0x10);
                if (uVar25 != uVar17) {
                  uVar9 = (ulonglong)((uVar42 >> 0x12 & 1) == 0);
                }
                uVar34 = uVar27;
                if ((uVar42 >> 0x11 & 1) == 0) {
                  uVar16 = *(undefined4 *)(iVar20 + 0x2c);
                  uVar25 = fn_82B841E8(param_1,uVar40,0,0x75,0,0);
                  uVar42 = uVar25 & 0xfffffffe;
                  *(undefined4 *)(uVar42 + 0x28) = *(undefined4 *)(uVar40 + 0x1c);
                  *(uint *)((*(uint *)(uVar40 + 0x1c) & 0xfffffffe) + 0x24) = uVar42 + 0x28;
                  *(uint *)(uVar42 + 0x24) = uVar40 + 0x1c | 1;
                  *(uint *)(uVar40 + 0x1c) = uVar42;
                  *(uint *)(uVar25 + 8) = *(uint *)(uVar25 + 8) | 0x3000000;
                  uVar16 = fn_82AD1978(uVar25,uVar16);
                  *(uint *)(uVar40 + 0x6c) = uVar27;
                  *(undefined4 *)(uVar40 + 0x48) = uVar16;
                  *(uint *)(uVar40 + 0x30) = *(uint *)(uVar40 + 0x30) | 0x1800000;
                  *(uint *)(uVar40 + 0x4c) =
                       (uint)(uVar9 << 0x19) | *(uint *)(uVar40 + 0x4c) & 0xfdffffff | 0x1000000;
                  uVar42 = *(uint *)(uVar27 + 0x4c);
                  if ((uVar42 >> 0x16 & 1) != 0) {
                    uVar16 = fn_82ABDCB0(uVar27);
                    *(undefined4 *)(uVar40 + 0x70) = uVar16;
                    uVar25 = *(uint *)(uVar40 + 0x30) | 0x800000;
                    uVar42 = (uVar42 >> 0x17 & 1) << 0x17 | *(uint *)(uVar40 + 0x4c) & 0xff7fffff |
                             0x400000;
                    goto LAB_82ae2a20;
                  }
                }
                else {
                  iVar24 = fn_82AC65F0(iVar20);
                  uVar42 = *(uint *)(*(int *)(iVar24 + 0xc) + 8) >> 7 & 0x7f;
                  if ((uVar42 < 0x15) || (bVar7 = true, 0x18 < uVar42)) {
                    bVar7 = false;
                  }
                  if ((bVar7) && (uVar17 == uVar25)) {
                    uVar9 = 1;
                    iVar19 = 0;
                    uVar34 = 0;
                    for (iVar24 = *(int *)(*(int *)(iVar24 + 0xc) + 4); iVar24 != 0;
                        iVar24 = *(int *)(iVar24 + 8)) {
                      iVar3 = *(int *)(iVar24 + 0x10);
                      if ((iVar3 != 0) && ((*(uint *)(iVar3 + 8) & 0x3f80) == 0x3800)) {
                        iVar41 = iVar19;
                        for (iVar3 = *(int *)(iVar3 + 4); iVar19 = iVar41, iVar3 != 0;
                            iVar3 = *(int *)(iVar3 + 8)) {
                          iVar19 = *(int *)(iVar3 + 0x10);
                          if ((iVar19 != 0) &&
                             (iVar41 = iVar19, (*(uint *)(iVar19 + 8) & 0x3f80) == 0x2000)) {
                            uVar34 = *(uint *)(iVar19 + 0x1c);
                            break;
                          }
                        }
                        if (uVar34 != 0) goto LAB_82ae27b4;
                      }
                    }
                    if (uVar34 == 0) {
                    /* WARNING: Subroutine does not return */
                      fn_82AA66A8(param_1,0x12c0);
                    }
LAB_82ae27b4:
                    *(uint *)(iVar19 + 8) = *(uint *)(iVar19 + 8) & 0xffffc07f | 0x1f80;
                    puVar50 = *(undefined4 **)(*(int *)(iVar19 + 0x2c) + 0xc);
                    iVar24 = fn_82B84290(param_1,uVar40);
                    fn_82AD1978(iVar24,*puVar50);
                    *(uint *)(iVar24 + 0x10) = *(uint *)(iVar24 + 0x10) & 0xfff8ffff | 0x10000;
                    uVar30 = *(undefined2 *)((int)puVar50 + 0x12);
                    *(int *)(iVar24 + 0x20) = iStack_104;
                    *(undefined2 *)(iVar24 + 0x12) = uVar30;
                    uVar25 = fn_82B841E8(param_1,uVar40,0,0x40,1,1);
                    uVar11 = fn_82AD17B0(param_1,iVar24);
                    fn_82AC9EE0(uVar25,0,uVar11);
                    *(uint *)(uVar25 + 8) = *(uint *)(uVar25 + 8) | 0x40;
                    uVar42 = uVar25 & 0xfffffffe;
                    if ((*(uint *)(param_1 + 0x28) & 0x80000) == 0) {
                      *(undefined4 *)(uVar42 + 0x24) = *(undefined4 *)(uVar40 + 0x20);
                      *(uint *)(*(uint *)(uVar40 + 0x20) & 0xfffffffe) = uVar42;
                      *(uint *)(uVar42 + 0x28) = uVar40 - 4 | 1;
                      *(uint *)(uVar40 + 0x20) = uVar42 + 0x28;
                    }
                    else {
                      *(undefined4 *)(uVar42 + 0x24) = *(undefined4 *)(uVar40 + 0x18);
                      *(uint *)(*(uint *)(uVar40 + 0x18) & 0xfffffffe) = uVar42;
                      *(uint *)(uVar42 + 0x28) = uVar40 - 0xc | 1;
                      *(uint *)(uVar40 + 0x18) = uVar42 + 0x28;
                    }
                    fn_82AC6388(uVar40,1,uVar25,param_1);
                    fn_82AD1B28(iVar24);
                    *(uint *)(iVar24 + 8) = *(uint *)(iVar24 + 8) | 0x1000000;
                    *(uint *)(uVar25 + 8) = *(uint *)(uVar25 + 8) | 0x1000000;
                    iStack_104 = iVar24;
                  }
                  *(uint *)(uVar40 + 0x70) = uVar27;
                  *(uint *)(uVar40 + 0x30) = *(uint *)(uVar40 + 0x30) | 0x800000;
                  *(uint *)(uVar40 + 0x4c) =
                       (uint)(uVar9 << 0x17) | *(uint *)(uVar40 + 0x4c) & 0xff7fffff | 0x400000;
                  uVar42 = *(uint *)(uVar27 + 0x4c);
                  if ((uVar42 >> 0x18 & 1) != 0) {
                    uVar16 = *(undefined4 *)(uVar27 + 0x48);
                    uVar26 = fn_82ADD090(uVar27);
                    *(undefined4 *)(uVar40 + 0x48) = uVar16;
                    uVar25 = *(uint *)(uVar40 + 0x30) | 0x1800000;
                    *(undefined4 *)(uVar40 + 0x6c) = uVar26;
                    uVar42 = (uVar42 >> 0x19 & 1) << 0x19 | *(uint *)(uVar40 + 0x4c) & 0xfdffffff |
                             0x1000000;
LAB_82ae2a20:
                    *(uint *)(uVar40 + 0x4c) = uVar42;
                    *(uint *)(uVar40 + 0x30) = uVar25;
                  }
                }
                uVar42 = uVar34 & 0xfffffffe;
                piVar45 = (int *)(uVar40 & 0xfffffffe);
                piVar45[1] = *(int *)(uVar42 + 4);
                *(int **)(*(uint *)(uVar42 + 4) & 0xfffffffe) = piVar45 + 1;
                *piVar45 = uVar42 + 4;
                *(int **)(uVar42 + 4) = piVar45;
                if ((*(uint *)(uVar34 + 0x30) >> 0x1b & 1) != 0) {
                  *(uint *)(uVar40 + 0x30) = *(uint *)(uVar40 + 0x30) | 0x8000000;
                }
                uVar42 = *(uint *)(uVar34 + 0x30);
                *(uint *)(uVar34 + 0x30) = uVar42 | 0x8000000;
                *(uint *)(uVar40 + 0x30) =
                     uVar42 & 0x2000000 | *(uint *)(uVar40 + 0x30) & 0xfdffffff;
              }
              iVar24 = fn_82B8F328(uVar27,uVar40,param_1);
              *(undefined4 *)(iVar24 + 0x10) = *(undefined4 *)(iStack_b4 + 0x10);
              fn_82B8F130(uVar17,iStack_b4,uVar40);
              uVar42 = *(uint *)(iVar20 + 8);
              iVar24 = fn_82ABDD90(param_1,uVar42 >> 7 & 0x7f,uVar42 >> 0x13 & 7,uVar42 >> 0xe & 7)
              ;
              puVar18 = (uint *)(iVar24 + iVar20 + -0x10);
              if ((((*puVar18 == uVar17) && (*puVar18 = uVar40, uVar34 == uVar27)) &&
                  (uVar34 = *(uint *)(iVar20 + 8), (uVar34 & 0x3f80) == 0x2d00)) &&
                 (((puVar18[2] & 3) != 0 ||
                  ((uVar42 = puVar18[2] >> 2 & 0xf, uVar42 != 9 && (uVar42 != 8)))))) {
                for (puVar53 = *(uint **)(uVar27 + 0xc); puVar53 != (uint *)0x0;
                    puVar53 = (uint *)puVar53[2]) {
                  uVar42 = *puVar53;
                  if (uVar42 != uVar40) goto LAB_82ae2b98;
                }
                uVar42 = 0;
LAB_82ae2b98:
                *(uint *)(iVar20 + 8) = uVar34 & 0xfffbffff | ~uVar34 & 0x40000;
                *puVar18 = uVar42;
                puVar18[3] = puVar18[3] & 0xfffffffd | ~puVar18[3] & 2;
              }
              *(undefined4 *)(uVar40 + 0x58) = *(undefined4 *)(uVar27 + 0x58);
              *(undefined4 *)(uVar40 + 0x54) = *(undefined4 *)(uVar27 + 0x54);
              fn_82B44B88(param_1);
              uVar27 = uVar40;
            }
          }
        }
      }
      else {
        uVar9 = (ulonglong)*(uint *)(iStack_b0 + 0x30) & 0x7ffff;
        if ((*(uint *)(((int)(uVar9 >> 5) + 1) * 4 + *(int *)(*(int *)(uVar28 + 0x1c) + 0x28)) &
            1 << ((uint)uVar9 & 0x1f)) == 0) {
          uVar27 = uStack_ac;
        }
      }
      if (bVar8) {
        for (iVar20 = *piVar29; iVar20 != 0; iVar20 = *(int *)(iVar20 + 4)) {
          if (((*(uint *)(*(int *)(iVar20 + 0xc) + 8) >> 0x17 & 1) == 0) &&
             (*(uint *)(*(int *)(iVar20 + 0xc) + 0x1c) == uVar27)) goto LAB_82ae2de8;
        }
      }
      puVar18 = (uint *)fn_82AD1978(piVar29,puVar22);
      if (*(uint *)(uVar28 + 0x1c) == uVar27) {
        uVar40 = *(uint *)(uVar28 + 8) >> 7 & 0x7f;
        if ((uVar40 < 0x20) || (bVar8 = true, 0x52 < uVar40)) {
          bVar8 = false;
        }
        if ((!bVar8) || (cVar31 = fn_82ADDEB8(param_1,uVar28,uVar37), cVar31 == '\0'))
        goto LAB_82ae2cf8;
        bVar6 = true;
        uVar27 = ~(*(uint *)(uVar28 + 8) >> 1 & 0xf);
        uVar27 = uVar27 & ~(uVar27 - 1);
        uVar9 = 0x1f - LZCOUNT(uVar27 & ~(uVar27 - 1));
        *(uint *)((int)((((ulonglong)*(uint *)(uVar28 + 0x10) & 0xffff) + uVar9 & 0xffffffff) << 2)
                 + *(int *)(param_1 + 0x2c4)) = uVar28;
        *(uint *)(uVar28 + 8) =
             (uVar27 & 0xf) << 1 | *(uint *)(uVar28 + 8) & 0xfffe3fff |
             (*(uint *)(uVar28 + 8) & 0xffffc000) + 0x4000 & 0x1c000;
        *puVar18 = (uint)((uVar9 & 0xffffffff) << 5) & 0x360 | 0x1c80 | *puVar18 & 0xfffffc9f;
      }
      else {
LAB_82ae2cf8:
        if ((*(uint *)(uVar27 + 0x1c) & 1) == 0) {
          uVar40 = *(uint *)(uVar27 + 0x18);
          do {
            uVar34 = (uVar40 & 0xfffffffe) - 0x28;
            if (uVar34 == 0) break;
            cVar31 = fn_82ACAFD8(uVar34);
            if ((cVar31 != '\0') &&
               (((*(uint *)(uVar27 + 0x30) >> 0x17 & 1) == 0 ||
                (cVar31 = fn_82ABDA10(uVar34), cVar31 == '\0')))) {
              uVar40 = uVar34 & 0xfffffffc | 1;
              goto LAB_82ae2d60;
            }
            uVar40 = *(uint *)((uVar40 & 0xfffffffe) - 4);
          } while ((uVar40 & 1) == 0);
        }
        uVar40 = uVar27 + 0x18 & 0xfffffffe | 2;
LAB_82ae2d60:
        fn_82B894C8(param_1,uVar27,uVar40,puVar18);
        uVar40 = puVar18[3];
        if (*(uint *)(uVar28 + 0x1c) != uVar27) {
          iVar20 = fn_82B10EA8(param_1,*(undefined4 *)(uVar40 + 0x2c),1);
          fn_82B10EA8(param_1,*(undefined4 *)(uVar40 + 0x30),1);
          if ((*(uint *)(iVar20 + 0x10) & 0xffff) == 0) {
            *(uint *)(iVar20 + 0x10) = *(uint *)(iVar20 + 0x10) & 0xfff8ffff | 0x10000;
            *(short *)(iVar20 + 0x12) = (short)uVar37;
            *(int *)(iVar20 + 0x20) = iStack_104;
            iStack_104 = iVar20;
          }
        }
        *(uint *)(uVar40 + 0x10) = *(uint *)(uVar40 + 0x10) & 0xfff8ffff | 0x10000;
        *(short *)(uVar40 + 0x12) = (short)uVar37;
        *(uint *)(uVar40 + 0x20) = uStack_10c;
        uStack_10c = uVar40;
      }
      bVar8 = true;
    }
    goto LAB_82ae2de8;
  }
  fn_82AD20C0(piVar29,puVar22,param_1);
  goto LAB_82ae24c8;
LAB_82ae381c:
  bVar1 = true;
LAB_82ae3820:
  if (bVar1) goto LAB_82ae397c;
  goto LAB_82ae382c;
LAB_82ae3f4c:
  while ((*(uint *)(iVar20 + 0xc0) & 7) < (piVar29[0x30] & 7U)) {
    uVar16 = fn_82ABE9F0(param_1,*(int *)(param_1 + 0x2a0) << 3,0);
    *(undefined4 *)((*(uint *)(iVar20 + 0xc0) & 7) * 4 + iVar20) = uVar16;
    *(uint *)(iVar20 + 0xc0) =
         *(uint *)(iVar20 + 0xc0) & 0xfffffff8 | *(uint *)(iVar20 + 0xc0) + 1 & 7;
  }
  uVar37 = 0;
  if ((piVar29[0x30] & 7U) != 0) {
    puVar50 = (undefined4 *)(iVar20 + 0x10);
    iVar24 = iVar20;
    piVar23 = piVar29;
LAB_82ae3f7c:
    lVar32 = 0;
LAB_82ae4100:
    uVar9 = fn_82AC8910(*piVar23,lVar32,*(undefined4 *)(param_1 + 0x2a0));
    do {
      if ((ulonglong)(*(int *)(param_1 + 0x29c) - 1) < (uVar9 & 0xffffffff)) {
        uVar37 = uVar37 + 1;
        piVar23 = piVar23 + 1;
        puVar50 = puVar50 + 1;
        iVar24 = iVar24 + 0x28;
        if (((ulonglong)(uint)piVar29[0x30] & 7) <= (uVar37 & 0xffffffff)) break;
        goto LAB_82ae3f7c;
      }
      uVar10 = fn_82ADD198(param_1,uVar9);
      iVar19 = puVar50[-4];
      uVar28 = (uint)((uVar10 & 0xffffffff) >> 3) & 0x1ffffff8;
      uVar47 = 1L << (uVar10 & 0x3f);
      if ((*(ulonglong *)(uVar28 + iVar19) & uVar47) == 0) {
        uVar17 = (uint)((uVar9 & 0xffffffff) >> 3) & 0x1ffffff8;
        *(ulonglong *)(uVar17 + puVar50[-4]) =
             1L << (uVar9 & 0x3f) | *(ulonglong *)(uVar17 + puVar50[-4]);
        *(ulonglong *)(uVar28 + puVar50[-4]) = uVar47 | *(ulonglong *)(uVar28 + puVar50[-4]);
        fn_82ADD4E0(*puVar50,((longlong)(int)uVar10 * (longlong)*(int *)(param_1 + 0x2a0) &
                               0x1fffffffU) * 8 + (ulonglong)*(uint *)(param_1 + 0x2ac));
        fn_82ADD528(*puVar50,puVar50[-4],*(undefined4 *)(param_1 + 0x2a0));
        uVar47 = 0;
        do {
          if (*(longlong *)
               ((int)((uVar10 * 5 + uVar47 + 1 & 0xffffffff) << 3) + *(uint *)(param_1 + 0x2a4)) !=
              0) {
            bVar1 = true;
            goto LAB_82ae4050;
          }
          uVar47 = uVar47 + 1;
        } while ((uVar47 & 0xffffffff) < 4);
        bVar1 = false;
LAB_82ae4050:
        if (bVar1) {
          lVar54 = 4;
          lVar32 = uVar10 * 0x28 + (ulonglong)*(uint *)(param_1 + 0x2a4);
          puVar35 = (ulonglong *)(iVar24 + 0x20);
          do {
            lVar32 = lVar32 + 8;
            puVar5 = puVar35 + 1;
            puVar35 = puVar35 + 1;
            *puVar35 = *(ulonglong *)lVar32 | *puVar5;
            lVar54 = lVar54 + -1;
          } while (lVar54 != 0);
          *(uint *)(iVar20 + 0xc0) = *(uint *)(iVar20 + 0xc0) | 0x40000000;
        }
        fn_82ADD5B8(param_1,uVar10,iVar20,uVar37);
      }
      else {
        uVar28 = (uint)((uVar9 & 0xffffffff) >> 3) & 0x1ffffff8;
        uVar10 = 1L << (uVar9 & 0x3f);
        if ((*(ulonglong *)(uVar28 + iVar19) & uVar10) == 0) {
          *(ulonglong *)(uVar28 + iVar19) = uVar10 | *(ulonglong *)(uVar28 + iVar19);
        }
      }
      if ((uVar9 & 0xffffffff) != (ulonglong)(*(int *)(param_1 + 0x29c) - 1)) goto LAB_82ae40fc;
      uVar9 = 0xffffffffffffffff;
    } while( true );
  }
  fn_82ADDE40(param_1,piVar29);
  piVar29 = aiStack_d0;
  lVar32 = 4;
  do {
    if ((*piVar29 != 0) && ((*(uint *)(*piVar29 + 0xc0) & 7) != 0)) {
      fn_82ADDE40(param_1);
    }
    lVar32 = lVar32 + -1;
    piVar29 = piVar29 + 1;
  } while (lVar32 != 0);
LAB_82ae4180:
  uStack_108 = uStack_108 + 1;
  if (*(uint *)(param_1 + 0x29c) <= uStack_108) goto LAB_82ae4198;
  goto LAB_82ae300c;
LAB_82ae40fc:
  lVar32 = uVar9 + 1;
  goto LAB_82ae4100;
  while( true ) {
    puVar36 = puVar36 + 1;
    *puVar36 = uVar40;
    uVar17 = uVar17 + 1;
    if (*(uint *)(param_1 + 0x29c) <= uVar17) break;
LAB_82ae35b4:
    if (puVar36[1] != uVar28) break;
  }
LAB_82ae35d8:
  while (puVar36 = (uint *)*puVar53, puVar36 != (uint *)0x0) {
    if (((puVar36[4] != 0) && ((*puVar36 & 0xe000000) != 0)) &&
       (((*(uint *)(puVar36[4] + 0x10) & 0x80000) == 0 &&
        (uVar51 = fn_82ABDBA0(puVar36), (uVar51 & 0xffffffff) == (uVar47 & 0xffffffff))))) {
      puVar43 = (uint *)(puVar36[3] + 4);
      for (puVar4 = (uint *)*puVar43; puVar4 != puVar36; puVar4 = (uint *)puVar4[2]) {
        puVar43 = puVar4 + 2;
      }
      *puVar43 = puVar36[2];
      puVar36[2] = *(uint *)(uVar40 + 4);
      *(uint **)(uVar40 + 4) = puVar36;
      puVar36[3] = uVar40;
      *puVar36 = *puVar36 & 0xffffe01e;
    }
    if ((uint *)*puVar53 == puVar36) {
      puVar53 = puVar36 + 2;
    }
  }
LAB_82ae3674:
  uVar15 = uVar15 - uVar47;
  if (uVar15 == 0) goto LAB_82ae367c;
  goto LAB_82ae34a8;
}

