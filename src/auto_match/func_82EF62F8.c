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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_c0;
extern unsigned int iStack_104;
extern unsigned int iStack_108;
extern unsigned int iStack_10c;
extern unsigned int iStack_110;
extern unsigned int iStack_9c;
extern unsigned int iStack_b0;
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int iStack_d4;
extern unsigned int iStack_d8;
extern unsigned int iStack_dc;
extern unsigned int iStack_e0;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack_100;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


ulonglong fn_82EF62F8(int param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       ulonglong param_5,ulonglong param_6,longlong param_7,longlong param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar10;
  longlong lVar9;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  int *piVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  uint uStack0000001c;
  undefined4 uStack00000024;
  undefined4 uStack0000002c;
  uint uStack00000034;
  uint uStack0000003c;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  uint in_stack_00000064;
  uint in_stack_00000084;
  int in_stack_0000008c;
  int in_stack_00000094;
  int in_stack_0000009c;
  undefined4 *in_stack_000000a4;
  int *in_stack_000000ac;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined1 auStack_c0 [16];
  int iStack_b0;
  int aiStack_ac [4];
  int iStack_9c;
  
  uVar1 = *(uint *)(param_1 + 0x6dd0);
  iStack_110 = 0;
  iStack_10c = 0;
  iStack_108 = 0;
  iStack_104 = 0;
  uStack0000001c = (uint)param_2;
  uStack00000024 = (undefined4)param_3;
  uStack0000002c = (undefined4)param_4;
  uStack00000034 = (uint)param_5;
  uStack0000003c = (uint)param_6;
  uStack_f8 = uVar1;
  (**(code **)(param_1 + 0x6f3c))(param_2,param_5,param_7,in_stack_0000005c,&uStack_f0);
  if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
    (**(code **)(param_1 + 0x6f38))
              (param_3,param_6,param_8,in_stack_00000064,&iStack_110,&iStack_108);
  }
  if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
    (**(code **)(param_1 + 0x6f38))
              (param_4,param_6,(ulonglong)in_stack_00000054,in_stack_00000064,&iStack_10c,
               &iStack_104);
  }
  uVar19 = ZEXT48(in_stack_000000a4);
  uVar18 = ZEXT48(in_stack_000000ac);
  *in_stack_000000a4 = uStack_f0;
  iStack_e0 = (iStack_10c + iStack_110 >> 2) + iStack_e0;
  iStack_cc = (iStack_104 + iStack_108 >> 2) + iStack_cc;
  *in_stack_000000ac = iStack_dc;
  in_stack_000000a4[0x40] = 0;
  in_stack_000000a4[0x20] = 0;
  in_stack_000000ac[0x40] = 0;
  in_stack_000000ac[0x20] = 0;
  if (*(int *)(param_1 + 0x6da4) != 0) {
    in_stack_000000a4[*(int *)(param_1 + 0x6dd0) + 0x40] = 0;
    in_stack_000000a4[*(int *)(param_1 + 0x6dd0) + 0x20] = 0;
    in_stack_000000ac[*(int *)(param_1 + 0x6dd0) + 0x40] = 0;
    in_stack_000000ac[*(int *)(param_1 + 0x6dd0) + 0x20] = 0;
  }
  in_stack_000000a4[0x60] = uStack_ec;
  in_stack_000000ac[0x60] = iStack_d8;
  in_stack_000000a4[0xa0] = 0;
  in_stack_000000a4[0x80] = 0;
  in_stack_000000ac[0x80] = 0;
  in_stack_000000ac[0xa0] = 0;
  if (*(int *)(param_1 + 0x6da4) != 0) {
    in_stack_000000a4[*(int *)(param_1 + 0x6dd0) + 0xa0] = 0;
    in_stack_000000a4[*(int *)(param_1 + 0x6dd0) + 0x80] = 0;
    in_stack_000000ac[*(int *)(param_1 + 0x6dd0) + 0xa0] = 0;
    in_stack_000000ac[*(int *)(param_1 + 0x6dd0) + 0x80] = 0;
  }
  in_stack_000000a4[0xc0] = uStack_e8;
  in_stack_000000ac[0xc0] = iStack_d4;
  in_stack_000000a4[0x100] = 0;
  in_stack_000000a4[0xe0] = 0;
  in_stack_000000ac[0x100] = 0;
  in_stack_000000ac[0xe0] = 0;
  if (*(int *)(param_1 + 0x6da4) != 0) {
    in_stack_000000a4[*(int *)(param_1 + 0x6dd0) + 0x100] = 0;
    in_stack_000000a4[*(int *)(param_1 + 0x6dd0) + 0xe0] = 0;
    in_stack_000000ac[*(int *)(param_1 + 0x6dd0) + 0x100] = 0;
    in_stack_000000ac[*(int *)(param_1 + 0x6dd0) + 0xe0] = 0;
  }
  in_stack_000000a4[0x120] = uStack_e4;
  in_stack_000000ac[0x120] = iStack_d0;
  in_stack_000000a4[0x160] = 0;
  in_stack_000000a4[0x140] = 0;
  in_stack_000000ac[0x160] = 0;
  in_stack_000000ac[0x140] = 0;
  if (*(int *)(param_1 + 0x6da4) != 0) {
    in_stack_000000a4[*(int *)(param_1 + 0x6dd0) + 0x160] = 0;
    in_stack_000000a4[*(int *)(param_1 + 0x6dd0) + 0x140] = 0;
    in_stack_000000ac[*(int *)(param_1 + 0x6dd0) + 0x160] = 0;
    in_stack_000000ac[*(int *)(param_1 + 0x6dd0) + 0x140] = 0;
  }
  in_stack_000000a4[0x180] = iStack_e0;
  in_stack_000000ac[0x180] = iStack_cc;
  in_stack_000000a4[0x1c0] = 0;
  in_stack_000000a4[0x1a0] = 0;
  in_stack_000000ac[0x1c0] = 0;
  in_stack_000000ac[0x1a0] = 0;
  if (*(int *)(param_1 + 0x6da4) != 0) {
    in_stack_000000a4[*(int *)(param_1 + 0x6dd0) + 0x1c0] = 0;
    in_stack_000000a4[*(int *)(param_1 + 0x6dd0) + 0x1a0] = 0;
    in_stack_000000ac[*(int *)(param_1 + 0x6dd0) + 0x1c0] = 0;
    in_stack_000000ac[*(int *)(param_1 + 0x6dd0) + 0x1a0] = 0;
  }
  iVar14 = *(int *)(param_1 + 0x6dd0);
  iVar10 = 1;
  if (1 < iVar14) {
    lVar12 = uVar19 + 0x600;
    lVar15 = uVar18 + 0x184;
    do {
      iVar14 = (int)lVar12;
      *(undefined4 *)(iVar14 + -0x5fc) = 0xfffffff;
      iVar10 = iVar10 + 1;
      puVar4 = (undefined4 *)lVar15;
      puVar4[-0x60] = 0xfffffff;
      *(undefined4 *)(((int)in_stack_000000a4 - (int)in_stack_000000ac) + (int)puVar4) = 0xfffffff;
      *puVar4 = 0xfffffff;
      *(undefined4 *)(iVar14 + -0x2fc) = 0xfffffff;
      puVar4[0x60] = 0xfffffff;
      *(undefined4 *)(iVar14 + -0x17c) = 0xfffffff;
      puVar4[0xc0] = 0xfffffff;
      lVar12 = lVar12 + 4;
      *(undefined4 *)lVar12 = 0xfffffff;
      puVar4[0x120] = 0xfffffff;
      lVar15 = lVar15 + 4;
      iVar14 = *(int *)(param_1 + 0x6dd0);
    } while (iVar10 < iVar14);
  }
  uVar22 = 1;
  uVar23 = 1;
  if ((*(int *)(param_1 + 0x6dd8) < iStack_e0) || (*(int *)(param_1 + 0x6dd8) < iStack_cc)) {
    uVar13 = (longlong)(int)in_stack_0000005c * (longlong)in_stack_00000094 + param_7;
    lVar12 = (longlong)(int)in_stack_00000064 * (longlong)in_stack_00000094 + param_8;
    uStack_100 = (uint)uVar13;
    if (in_stack_00000094 <= in_stack_0000009c) {
      uVar26 = (lVar12 - param_8) + (ulonglong)in_stack_00000054;
      uStack_fc = (uint)uVar26;
      do {
        uVar20 = (ulonglong)in_stack_00000084;
        uVar1 = uStack_f8;
        uVar21 = in_stack_00000084;
        while (uStack_f8 = uVar1, (int)uVar21 <= in_stack_0000008c) {
          iVar10 = (int)uVar20;
          if ((in_stack_00000094 != 0) || (iVar10 != 0)) {
            lVar15 = uVar20 + lVar12;
            (**(code **)(param_1 + 0x6f3c))
                      (param_2,param_5,lVar15 + (uVar13 - lVar12),in_stack_0000005c,auStack_c0);
            if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
              (**(code **)(param_1 + 0x6f38))
                        (uStack00000024,param_6,lVar15,in_stack_00000064,&iStack_110,&iStack_108);
            }
            if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
              (**(code **)(param_1 + 0x6f38))
                        (uStack0000002c,param_6,lVar15 + (uVar26 - lVar12),in_stack_00000064,
                         &iStack_10c,&iStack_104);
            }
            lVar24 = (uVar23 & 0x3fffffff) << 2;
            lVar25 = (uVar22 & 0x3fffffff) << 2;
            piVar17 = aiStack_ac;
            iStack_b0 = (iStack_10c + iStack_110 >> 2) + iStack_b0;
            iStack_9c = (iStack_104 + iStack_108 >> 2) + iStack_9c;
            lVar15 = 5;
            uVar13 = uVar19;
            do {
              iVar2 = piVar17[-5];
              lVar27 = uVar13 + (uVar18 - uVar19);
              piVar5 = (int *)uVar13;
              if (iVar2 < *(int *)((int)piVar5 + (int)lVar25)) {
                uVar11 = 0;
                iVar3 = *piVar5;
                uVar26 = uVar13;
                while (iVar3 < iVar2) {
                  uVar26 = uVar26 + 4;
                  uVar11 = uVar11 + 1;
                  iVar3 = *(int *)uVar26;
                }
                iVar6 = (int)(uVar13 + 0x100);
                iVar3 = (int)(uVar13 + 0x80);
                if ((int)uVar11 < (int)uVar22) {
                  lVar8 = uVar22 - uVar11;
                  lVar16 = lVar25 + uVar13 + 0x100;
                  lVar9 = lVar25 + uVar13 + 0x80;
                  do {
                    puVar4 = (undefined4 *)(lVar9 + -4);
                    *(undefined4 *)((int)(undefined4 *)lVar16 + ((int)piVar5 - iVar6)) =
                         *(undefined4 *)((int)puVar4 + ((int)piVar5 - iVar3));
                    *(undefined4 *)lVar9 = *puVar4;
                    *(undefined4 *)lVar16 = *(undefined4 *)((iVar6 - iVar3) + (int)puVar4);
                    lVar16 = lVar16 + -4;
                    lVar8 = lVar8 + -1;
                    lVar9 = lVar9 + -4;
                  } while (lVar8 != 0);
                }
                iVar7 = (int)((uVar11 & 0x3fffffff) << 2);
                *(int *)((int)piVar5 + iVar7) = iVar2;
                *(int *)(iVar7 + iVar3) = iVar10;
                *(int *)(iVar7 + iVar6) = in_stack_00000094;
                if ((int)uVar22 < iVar14 + -1) {
                  uVar22 = uVar22 + 1;
                  lVar25 = lVar25 + 4;
                }
              }
              iVar2 = *piVar17;
              piVar5 = (int *)lVar27;
              if (iVar2 < *(int *)((int)lVar24 + (int)piVar5)) {
                uVar26 = 0;
                lVar8 = lVar27 + 0x80;
                lVar9 = uVar13 + (uVar18 - uVar19) + 0x100;
                iVar3 = *piVar5;
                while (iVar3 < iVar2) {
                  lVar27 = lVar27 + 4;
                  uVar26 = uVar26 + 1;
                  iVar3 = *(int *)lVar27;
                }
                iVar6 = (int)lVar9;
                iVar3 = (int)lVar8;
                if ((int)uVar26 < (int)uVar23) {
                  lVar16 = uVar23 - uVar26;
                  lVar9 = lVar24 + lVar9;
                  lVar27 = lVar24 + lVar8;
                  do {
                    puVar4 = (undefined4 *)(lVar27 + -4);
                    *(undefined4 *)(((int)piVar5 - iVar6) + (int)(undefined4 *)lVar9) =
                         *(undefined4 *)(((int)piVar5 - iVar3) + (int)puVar4);
                    *(undefined4 *)lVar27 = *puVar4;
                    *(undefined4 *)lVar9 = *(undefined4 *)((iVar6 - iVar3) + (int)puVar4);
                    lVar9 = lVar9 + -4;
                    lVar16 = lVar16 + -1;
                    lVar27 = lVar27 + -4;
                  } while (lVar16 != 0);
                }
                iVar7 = (int)((uVar26 & 0x3fffffff) << 2);
                *(int *)(iVar7 + (int)piVar5) = iVar2;
                *(int *)(iVar7 + iVar3) = iVar10;
                *(int *)(iVar7 + iVar6) = in_stack_00000094;
                if ((int)uVar23 < iVar14 + -1) {
                  uVar23 = uVar23 + 1;
                  lVar24 = lVar24 + 4;
                }
              }
              lVar15 = lVar15 + -1;
              uVar13 = uVar13 + 0x180;
              piVar17 = piVar17 + 1;
            } while (lVar15 != 0);
            uVar13 = (ulonglong)uStack_100;
            uVar26 = (ulonglong)uStack_fc;
            param_2 = (ulonglong)uStack0000001c;
            param_5 = (ulonglong)uStack00000034;
            param_6 = (ulonglong)uStack0000003c;
          }
          uVar20 = uVar20 + 1;
          uVar1 = uStack_f8;
          uVar21 = (uint)uVar20;
        }
        in_stack_00000094 = in_stack_00000094 + 1;
        uVar13 = uVar13 + in_stack_0000005c;
        uVar26 = uVar26 + in_stack_00000064;
        uStack_100 = (uint)uVar13;
        lVar12 = lVar12 + (ulonglong)in_stack_00000064;
        uStack_fc = (uint)uVar26;
      } while (in_stack_00000094 <= in_stack_0000009c);
    }
    uVar19 = (ulonglong)uVar1;
    if (*(int *)(param_1 + 0x6da4) != 0) {
      iVar14 = 0;
      piVar17 = &iStack_dc;
      lVar12 = ((ulonglong)uVar1 & 0x3fffffff) * 4 + uVar18 + -4;
      do {
        if ((*(int *)(((int)in_stack_000000a4 - (int)in_stack_000000ac) + (int)(int *)lVar12) <
             piVar17[-5]) || (*(int *)lVar12 < *piVar17)) {
          return uVar19 + 1;
        }
        iVar14 = iVar14 + 1;
        lVar12 = lVar12 + 0x180;
        piVar17 = piVar17 + 1;
      } while (iVar14 < 5);
    }
  }
  else {
    uVar19 = 1;
  }
  return uVar19;
}

