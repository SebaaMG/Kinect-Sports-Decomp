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
extern int fn_82EC49C8();
extern int fn_82EC5360();
extern int fn_82F26110();
extern int fn_82F26F98();
extern unsigned int lbl_8215F864;
extern unsigned int lbl_831898B8;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;
extern unsigned int uStack_100;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_82EC5C60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  ulonglong param_5,undefined4 param_6,undefined4 param_7,ulonglong param_8)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  short *psVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong lVar26;
  ulonglong uVar27;
  int iVar28;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined4 uStack0000002c;
  uint uStack00000034;
  undefined4 uStack0000003c;
  undefined4 uStack00000044;
  uint uStack0000004c;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  uint in_stack_00000064;
  undefined4 in_stack_00000074;
  undefined4 in_stack_0000007c;
  int in_stack_00000084;
  int in_stack_0000008c;
  int in_stack_00000094;
  int in_stack_0000009c;
  uint in_stack_000000ac;
  uint in_stack_000000b4;
  short *in_stack_000000bc;
  short *in_stack_000000c4;
  uint *in_stack_000000cc;
  int in_stack_000000d4;
  undefined4 *in_stack_000000dc;
  uint *in_stack_000000e4;
  uint *in_stack_000000ec;
  uint *in_stack_000000f4;
  uint *in_stack_000000fc;
  int *in_stack_00000104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  short *psStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  undefined *puStack_dc;
  uint uStack_d8;
  code *pcStack_d4;
  code *pcStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  
  uStack00000034 = (uint)param_5;
  iVar28 = 0xfffffff;
  pcVar1 = (code *)*in_stack_000000dc;
  pcStack_d4 = (code *)in_stack_000000dc[3];
  uStack0000004c = (uint)param_8;
  uVar14 = (ulonglong)in_stack_00000064;
  uVar25 = *(uint *)(in_stack_00000094 + 8);
  lVar18 = uVar14 + 0x180;
  uVar20 = *(uint *)(in_stack_00000094 + 0xc);
  uVar22 = *(uint *)(in_stack_0000009c + 8);
  uVar17 = *(uint *)(in_stack_0000009c + 0xc);
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  psStack_f0 = (short *)0xfffffff;
  puStack_dc = &lbl_8215F864;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack0000003c = param_6;
  uStack00000044 = param_7;
  pcStack_d0 = pcVar1;
  if (0 < (int)in_stack_000000ac) {
    uStack_d8 = in_stack_000000ac;
    psStack_f0 = in_stack_000000bc;
    while( true ) {
      puVar6 = puStack_dc;
      uStack_fc = (int)*psStack_f0 << 2;
      uStack_f8 = (int)psStack_f0[1] << 2;
      fn_82F26110(param_1,&uStack_fc,&uStack_f8,in_stack_00000074,in_stack_0000007c);
      iVar10 = *(int *)(param_1 + 0x564);
      if (in_stack_0000008c == 1) {
        (**(code **)(param_1 + 0x9b8))
                  ((longlong)((int)uStack_f8 >> 2) * (longlong)iVar10 +
                   (longlong)((int)uStack_fc >> 2) + param_5);
      }
      else {
        (**(code **)(param_1 + 0x9c0))
                  ((longlong)((int)uStack_f8 >> 2) * (longlong)iVar10 +
                   (longlong)((int)uStack_fc >> 2) + param_5,iVar10,uVar14,0x10,uStack_fc,uStack_f8,
                   0,*(undefined4 *)(param_1 + 0x618));
      }
      if (uStack_fc == 0x4000) {
        lVar26 = 0x4000;
        lVar23 = 0x4000;
      }
      else {
        uVar2 = (int)(*(int *)(puVar6 + (uStack_fc & 3) * 4) + uStack_fc) >> 1;
        lVar23 = (longlong)(int)uVar2;
        uVar3 = (int)(*(int *)(puVar6 + (uStack_f8 & 3) * 4) + uStack_f8) >> 1;
        lVar26 = (longlong)(int)uVar3;
        if (*(int *)(param_1 + 0x314) != 0) {
          if ((uVar2 & 1) != 0) {
            if ((int)uVar2 < 1) {
              lVar23 = lVar23 + 1;
            }
            else {
              lVar23 = lVar23 + -1;
            }
          }
          if ((uVar3 & 1) != 0) {
            if ((int)uVar3 < 1) {
              lVar26 = lVar26 + 1;
            }
            else {
              lVar26 = lVar26 + -1;
            }
          }
        }
      }
      if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
        fn_82F26F98(param_1,uStack0000003c,*(undefined4 *)(param_1 + 0x568),uVar14 + 0x100,8,
                          lVar23,lVar26,0);
      }
      if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
        fn_82F26F98(param_1,uStack00000044,*(undefined4 *)(param_1 + 0x568),uVar14 + 0x140,8,
                          lVar23,lVar26,0);
      }
      if (0 < (int)in_stack_000000b4) {
        uVar15 = (ulonglong)in_stack_000000b4;
        psVar16 = in_stack_000000c4;
        do {
          uStack_100 = (int)*psVar16 << 2;
          uStack_f4 = (int)psVar16[1] << 2;
          fn_82F26110(param_1,&uStack_100,&uStack_f4,in_stack_00000074,in_stack_0000007c);
          iVar10 = *(int *)(param_1 + 0x564);
          if (in_stack_0000008c == 1) {
            (**(code **)(param_1 + 0x9b8))
                      ((longlong)((int)uStack_f4 >> 2) * (longlong)iVar10 +
                       (longlong)((int)uStack_100 >> 2) + param_8);
          }
          else {
            (**(code **)(param_1 + 0x9c0))
                      ((longlong)((int)uStack_f4 >> 2) * (longlong)iVar10 +
                       (longlong)((int)uStack_100 >> 2) + param_8,iVar10,lVar18,0x10,uStack_100,
                       uStack_f4,0,*(undefined4 *)(param_1 + 0x618));
          }
          (**(code **)(param_1 + 0xb1c))(uVar14,0x10,lVar18,0x10,lVar18,0x10,0x10,0x10);
          uVar12 = (ulonglong)*(uint *)(param_1 + 0xa2c);
          uVar11 = (ulonglong)*(uint *)(param_1 + 0xa30);
          uVar27 = ((uVar12 - uVar25) + (ulonglong)uStack_fc & (ulonglong)*(uint *)(param_1 + 0xa34)
                   ) - uVar12;
          uVar24 = (ulonglong)((int)uVar27 >> 0x1f);
          uVar7 = ((uVar11 - uVar20) + (ulonglong)uStack_f8 & (ulonglong)*(uint *)(param_1 + 0xa38))
                  - uVar11;
          uVar21 = (ulonglong)((int)uVar7 >> 0x1f);
          uVar24 = (uVar27 ^ uVar24) - uVar24;
          uVar12 = ((uVar12 - uVar22) + (ulonglong)uStack_100 &
                   (ulonglong)*(uint *)(param_1 + 0xa34)) - uVar12;
          uVar11 = ((uVar11 - uVar17) + (ulonglong)uStack_f4 & (ulonglong)*(uint *)(param_1 + 0xa38)
                   ) - uVar11;
          uVar21 = (uVar7 ^ uVar21) - uVar21;
          if (((int)uVar24 < 0x9f) && ((int)uVar21 < 0x9f)) {
            iVar10 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar21 & 0xffffffff) << 2)) * 4 +
                             in_stack_000000d4) +
                     *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar24 & 0xffffffff) << 2)) * 4 +
                             in_stack_000000d4);
          }
          else {
            iVar10 = *(int *)(in_stack_000000d4 + 0x14) << 1;
          }
          uVar21 = (ulonglong)((int)uVar12 >> 0x1f);
          uVar7 = (ulonglong)((int)uVar11 >> 0x1f);
          uVar21 = (uVar12 ^ uVar21) - uVar21;
          uVar7 = (uVar11 ^ uVar7) - uVar7;
          if (((int)uVar21 < 0x9f) && ((int)uVar7 < 0x9f)) {
            iVar9 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar7 & 0xffffffff) << 2)) * 4 +
                            in_stack_000000d4) +
                    *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar21 & 0xffffffff) << 2)) * 4 +
                            in_stack_000000d4);
          }
          else {
            iVar9 = *(int *)(in_stack_000000d4 + 0x14) << 1;
          }
          iVar8 = (*pcStack_d4)(uStack0000001c,0x10,lVar18,0x10,0x10);
          iVar10 = iVar8 + iVar9 + iVar10;
          if (uStack_100 == 0x4000) {
            lVar26 = 0x4000;
            lVar23 = 0x4000;
          }
          else {
            uVar2 = (int)(*(int *)(puStack_dc + (uStack_100 & 3) * 4) + uStack_100) >> 1;
            lVar23 = (longlong)(int)uVar2;
            uVar3 = (int)(*(int *)(puStack_dc + (uStack_f4 & 3) * 4) + uStack_f4) >> 1;
            lVar26 = (longlong)(int)uVar3;
            if (*(int *)(param_1 + 0x314) != 0) {
              if ((uVar2 & 1) != 0) {
                if ((int)uVar2 < 1) {
                  lVar23 = lVar23 + 1;
                }
                else {
                  lVar23 = lVar23 + -1;
                }
              }
              if ((uVar3 & 1) != 0) {
                if ((int)uVar3 < 1) {
                  lVar26 = lVar26 + 1;
                }
                else {
                  lVar26 = lVar26 + -1;
                }
              }
            }
          }
          if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
            lVar13 = uVar14 + 0x280;
            fn_82F26F98(param_1,in_stack_00000054,*(undefined4 *)(param_1 + 0x568),lVar13,8,
                              lVar23,lVar26,0);
            (**(code **)(param_1 + 0xb1c))(uVar14 + 0x100,8,lVar13,8,lVar13,8,8,8);
            iVar9 = (*pcVar1)(uStack00000024,8,lVar13,8);
            param_8 = (ulonglong)uStack0000004c;
            iVar10 = iVar9 + iVar10;
          }
          if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
            lVar13 = uVar14 + 0x2c0;
            fn_82F26F98(param_1,in_stack_0000005c,*(undefined4 *)(param_1 + 0x568),lVar13,8,
                              lVar23,lVar26,0);
            (**(code **)(param_1 + 0xb1c))(uVar14 + 0x140,8,lVar13,8,lVar13,8,8,8);
            iVar9 = (*pcVar1)(uStack0000002c,8,lVar13,8);
            iVar10 = iVar9 + iVar10;
          }
          if (iVar10 < iVar28) {
            uStack_ec = uStack_fc;
            uStack_e8 = uStack_f8;
            uStack_e0 = uStack_f4;
            uStack_e4 = uStack_100;
            iVar28 = iVar10;
          }
          uVar15 = uVar15 - 1;
          psVar16 = psVar16 + 2;
        } while (uVar15 != 0);
      }
      uVar15 = (ulonglong)uStack_d8;
      psVar16 = psStack_f0 + 2;
      uStack_d8 = (uint)(uVar15 - 1);
      psStack_f0 = (short *)iVar28;
      if (uVar15 - 1 == 0) break;
      param_5 = (ulonglong)uStack00000034;
      psStack_f0 = psVar16;
    }
  }
  uVar5 = uStack0000002c;
  uVar4 = uStack00000024;
  uStack_d8 = uStack_e0;
  uStack_cc = uStack_e4;
  uStack_c8 = uStack_e8;
  uStack_c0 = in_stack_0000005c;
  uStack_bc = in_stack_00000054;
  uStack_c4 = uStack_ec;
  uVar15 = (ulonglong)uStack00000034;
  fn_82EC49C8(param_1,uStack0000001c,uStack00000024,uStack0000002c,uVar15,uStack0000003c,
                uStack00000044,uStack0000004c);
  if (in_stack_00000084 == 0) {
    uStack_bc = in_stack_0000005c;
    uStack_c0 = in_stack_00000054;
    fn_82EC49C8(param_1,uStack0000001c,uVar4,uVar5,uVar15,uStack0000003c,uStack00000044,
                  uStack0000004c);
    uVar15 = (ulonglong)uStack00000034;
  }
  puVar6 = puStack_dc;
  uStack_fc = *in_stack_000000cc;
  uStack_f8 = in_stack_000000cc[1];
  fn_82F26110(param_1,&uStack_fc,&uStack_f8,in_stack_00000074,in_stack_0000007c);
  lVar23 = (longlong)((int)uStack_f8 >> 2) * (longlong)*(int *)(param_1 + 0x564) +
           (longlong)((int)uStack_fc >> 2);
  if (in_stack_0000008c == 1) {
    (**(code **)(param_1 + 0x9b8))(lVar23 + uVar15);
  }
  else {
    (**(code **)(param_1 + 0x9c0))
              (lVar23 + uVar15,*(int *)(param_1 + 0x564),uVar14,0x10,uStack_fc,uStack_f8,0,
               *(undefined4 *)(param_1 + 0x618));
  }
  uStack_100 = in_stack_000000cc[2];
  uStack_f4 = in_stack_000000cc[3];
  fn_82F26110(param_1,&uStack_100,&uStack_f4,in_stack_00000074,in_stack_0000007c);
  lVar23 = (longlong)((int)uStack_f4 >> 2) * (longlong)*(int *)(param_1 + 0x564) +
           (longlong)((int)uStack_100 >> 2);
  if (in_stack_0000008c == 1) {
    (**(code **)(param_1 + 0x9b8))(lVar23 + (ulonglong)uStack0000004c);
  }
  else {
    (**(code **)(param_1 + 0x9c0))
              (lVar23 + (ulonglong)uStack0000004c,*(int *)(param_1 + 0x564),lVar18,0x10,uStack_100,
               uStack_f4,0,*(undefined4 *)(param_1 + 0x618));
  }
  (**(code **)(param_1 + 0xb1c))(uVar14,0x10,lVar18,0x10,lVar18,0x10,0x10,0x10);
  uVar11 = (ulonglong)*(uint *)(param_1 + 0xa2c);
  uVar7 = (ulonglong)*(uint *)(param_1 + 0xa30);
  uVar24 = ((uVar11 - uVar25) + (ulonglong)uStack_fc & (ulonglong)*(uint *)(param_1 + 0xa34)) -
           uVar11;
  uVar21 = (ulonglong)((int)uVar24 >> 0x1f);
  uVar15 = ((uVar7 - uVar20) + (ulonglong)uStack_f8 & (ulonglong)*(uint *)(param_1 + 0xa38)) - uVar7
  ;
  uVar12 = (ulonglong)((int)uVar15 >> 0x1f);
  uVar21 = (uVar24 ^ uVar21) - uVar21;
  uVar11 = ((uVar11 - uVar22) + (ulonglong)uStack_100 & (ulonglong)*(uint *)(param_1 + 0xa34)) -
           uVar11;
  uVar7 = ((uVar7 - uVar17) + (ulonglong)uStack_f4 & (ulonglong)*(uint *)(param_1 + 0xa38)) - uVar7;
  uVar12 = (uVar15 ^ uVar12) - uVar12;
  if (((int)uVar21 < 0x9f) && ((int)uVar12 < 0x9f)) {
    iVar28 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar12 & 0xffffffff) << 2)) * 4 +
                     in_stack_000000d4) +
             *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar21 & 0xffffffff) << 2)) * 4 +
                     in_stack_000000d4);
  }
  else {
    iVar28 = *(int *)(in_stack_000000d4 + 0x14) << 1;
  }
  uVar12 = (ulonglong)((int)uVar11 >> 0x1f);
  uVar15 = (ulonglong)((int)uVar7 >> 0x1f);
  uVar12 = (uVar11 ^ uVar12) - uVar12;
  uVar15 = (uVar7 ^ uVar15) - uVar15;
  if (((int)uVar12 < 0x9f) && ((int)uVar15 < 0x9f)) {
    iVar10 = *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar15 & 0xffffffff) << 2)) * 4 +
                     in_stack_000000d4) +
             *(int *)(*(int *)(&lbl_831898B8 + (int)((uVar12 & 0xffffffff) << 2)) * 4 +
                     in_stack_000000d4);
  }
  else {
    iVar10 = *(int *)(in_stack_000000d4 + 0x14) << 1;
  }
  iVar9 = (*pcStack_d4)(uStack0000001c,0x10,lVar18,0x10,0x10);
  iVar28 = iVar9 + iVar10 + iVar28;
  if (uStack_fc == 0x4000) {
    lVar23 = 0x4000;
    lVar18 = 0x4000;
  }
  else {
    uVar25 = (int)(*(int *)(puVar6 + (uStack_fc & 3) * 4) + uStack_fc) >> 1;
    lVar18 = (longlong)(int)uVar25;
    uVar20 = (int)(*(int *)(puVar6 + (uStack_f8 & 3) * 4) + uStack_f8) >> 1;
    lVar23 = (longlong)(int)uVar20;
    if (*(int *)(param_1 + 0x314) != 0) {
      if ((uVar25 & 1) != 0) {
        if ((int)uVar25 < 1) {
          lVar18 = lVar18 + 1;
        }
        else {
          lVar18 = lVar18 + -1;
        }
      }
      if ((uVar20 & 1) != 0) {
        if ((int)uVar20 < 1) {
          lVar23 = lVar23 + 1;
        }
        else {
          lVar23 = lVar23 + -1;
        }
      }
    }
  }
  if (uStack_100 == 0x4000) {
    lVar13 = 0x4000;
    lVar26 = 0x4000;
  }
  else {
    uVar25 = (int)(*(int *)(puStack_dc + (uStack_100 & 3) * 4) + uStack_100) >> 1;
    lVar26 = (longlong)(int)uVar25;
    uVar20 = (int)(*(int *)(puStack_dc + (uStack_f4 & 3) * 4) + uStack_f4) >> 1;
    lVar13 = (longlong)(int)uVar20;
    if (*(int *)(param_1 + 0x314) != 0) {
      if ((uVar25 & 1) != 0) {
        if ((int)uVar25 < 1) {
          lVar26 = lVar26 + 1;
        }
        else {
          lVar26 = lVar26 + -1;
        }
      }
      if ((uVar20 & 1) != 0) {
        if ((int)uVar20 < 1) {
          lVar13 = lVar13 + 1;
        }
        else {
          lVar13 = lVar13 + -1;
        }
      }
    }
  }
  if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
    fn_82F26F98(param_1,uStack0000003c,*(undefined4 *)(param_1 + 0x568),uVar14 + 0x100,8,
                      lVar18,lVar23,0);
    lVar19 = uVar14 + 0x280;
    fn_82F26F98(param_1,in_stack_00000054,*(undefined4 *)(param_1 + 0x568),lVar19,8,lVar26,
                      lVar13,0);
    (**(code **)(param_1 + 0xb1c))(uVar14 + 0x100,8,lVar19,8,lVar19,8,8,8);
    iVar10 = (*pcStack_d0)(uStack00000024,8,lVar19,8);
    iVar28 = iVar10 + iVar28;
  }
  if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
    fn_82F26F98(param_1,uStack00000044,*(undefined4 *)(param_1 + 0x568),uVar14 + 0x140,8,
                      lVar18,lVar23,0);
    lVar18 = uVar14 + 0x2c0;
    fn_82F26F98(param_1,in_stack_0000005c,*(undefined4 *)(param_1 + 0x568),lVar18,8,lVar26,
                      lVar13,0);
    (**(code **)(param_1 + 0xb1c))(uVar14 + 0x140,8,lVar18,8,lVar18,8,8,8);
    iVar10 = (*pcStack_d0)(uStack0000002c,8,lVar18,8);
    iVar28 = iVar10 + iVar28;
  }
  uVar25 = uStack_ec;
  uVar20 = uStack_e4;
  uVar22 = uStack_e8;
  uVar17 = uStack_e0;
  if (iVar28 < (int)psStack_f0) {
    uVar25 = uStack_fc;
    uVar20 = uStack_100;
    uVar22 = uStack_f8;
    uVar17 = uStack_f4;
    psStack_f0 = (short *)iVar28;
  }
  if (*(int *)(param_1 + 0x6d74) != 0) {
    uStack_b0 = uVar25;
    uStack_ac = uVar22;
    uStack_a8 = uVar20;
    uStack_a4 = uVar17;
    fn_82EC5360(param_1,uStack0000001c,uStack00000024,uStack0000002c,uStack00000034,uStack0000003c
                  ,uStack00000044,uStack0000004c);
  }
  *in_stack_00000104 = (int)psStack_f0;
  *in_stack_000000e4 = uVar25;
  *in_stack_000000ec = uVar22;
  *in_stack_000000f4 = uVar20;
  *in_stack_000000fc = uVar17;
  return;
}

