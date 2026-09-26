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
extern unsigned int uStack_b4;
extern unsigned int uStack_c4;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


void fn_82F1CFB0(int param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5,
                  uint param_6,uint param_7,uint param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  byte *pbVar7;
  ushort *puVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ushort uVar16;
  int iVar15;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  short *psVar35;
  longlong lVar36;
  undefined2 *puVar37;
  longlong lVar38;
  undefined2 *puVar39;
  ulonglong uVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  longlong lVar45;
  longlong lVar46;
  longlong lVar47;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  uint in_stack_00000064;
  uint in_stack_0000006c;
  uint in_stack_00000074;
  int in_stack_0000007c;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c4;
  uint uStack_b4;
  
  uVar26 = 0;
  uStack_c4 = 0;
  do {
    uVar6 = (uint)uVar26;
    bVar2 = *(byte *)(uVar6 + param_4);
    if (bVar2 != 0) {
      uVar20 = 0;
      uStack_b4 = 0;
      if ((int)uVar6 < 4) {
        lVar21 = (uVar26 & 2) * 8 + (uVar26 & 1);
        uVar40 = lVar21 * 0x10 + (ulonglong)in_stack_00000064;
        uVar19 = lVar21 * 8 + (ulonglong)param_5;
        uStack_d0 = (uint)uVar19;
        if (*(int *)(param_1 + 0x7b38) == 0) {
          uVar17 = (ulonglong)*(uint *)(param_1 + 0x31c);
        }
        else {
          uVar17 = ((ulonglong)*(uint *)(param_1 + 0x31c) & 0x7fffffff) << 1;
        }
        lVar21 = 0x10;
        uVar18 = ((longlong)(int)(uVar6 & 2) * (longlong)(int)uVar17 + (uVar26 & 1) * 2 & 0x3fffffff
                 ) * 4 + (ulonglong)param_8;
        uStack_cc = (uint)uVar18;
        uVar20 = uVar26;
        uStack_b4 = uVar6;
      }
      else {
        if (uVar6 == 4) {
          uVar19 = (ulonglong)param_6;
          uVar18 = (ulonglong)in_stack_00000054;
          uVar40 = (ulonglong)in_stack_0000006c;
          uStack_cc = in_stack_00000054;
          uStack_d0 = param_6;
          if (*(int *)(param_1 + 0x7b38) == 0) {
LAB_82f1d0c0:
            uVar17 = (ulonglong)(*(int *)(param_1 + 0x31c) >> 1);
          }
          else {
            uVar17 = (ulonglong)*(uint *)(param_1 + 0x31c);
          }
        }
        else {
          uVar19 = (ulonglong)param_7;
          uVar18 = (ulonglong)in_stack_0000005c;
          uVar40 = (ulonglong)in_stack_00000074;
          uStack_cc = in_stack_0000005c;
          uStack_d0 = param_7;
          if (*(int *)(param_1 + 0x7b38) == 0) goto LAB_82f1d0c0;
          uVar17 = (ulonglong)*(uint *)(param_1 + 0x31c);
        }
        lVar21 = 8;
      }
      uVar30 = uVar40 + 4;
      lVar28 = lVar21 * 2;
      lVar22 = uVar19 + 2;
      lVar45 = 8;
      uVar14 = uVar30;
      do {
        pbVar7 = (byte *)lVar22;
        puVar8 = (ushort *)uVar14;
        puVar8[-2] = (ushort)pbVar7[-2];
        puVar8[-1] = (ushort)pbVar7[-1];
        *puVar8 = (ushort)*pbVar7;
        puVar8[1] = (ushort)pbVar7[1];
        puVar8[2] = (ushort)pbVar7[2];
        puVar8[3] = (ushort)pbVar7[3];
        puVar8[4] = (ushort)pbVar7[4];
        lVar22 = lVar22 + lVar21;
        puVar8[5] = (ushort)pbVar7[5];
        uVar14 = uVar14 + lVar28;
        lVar45 = lVar45 + -1;
      } while (lVar45 != 0);
      uVar14 = uVar30;
      if (in_stack_0000007c == 0) {
        iVar10 = (int)lVar21;
        uVar6 = (uint)uVar17;
        if ((bVar2 & 2) != 0) {
          lVar22 = -lVar21;
          lVar46 = 2;
          lVar45 = uVar17 + (uVar17 & 0x7fffffff) * 2 + uVar18 + -2;
          lVar31 = lVar21 * 4;
          lVar36 = lVar28 + uVar40;
          lVar25 = uVar18 - 2;
          lVar24 = uVar19 - 1;
          lVar29 = uVar18 + uVar17 + -2;
          lVar27 = (uVar17 & 0x3fffffff) * 4;
          lVar32 = lVar21 * 8;
          lVar33 = lVar21 * 6 + uVar40;
          lVar38 = lVar21 * 3 + uVar19 + -1;
          lVar34 = lVar31 + uVar40;
          lVar23 = lVar21 + uVar19 + -1;
          uVar26 = lVar22 - 1U;
          uVar18 = lVar22 + 1U;
          uVar19 = uVar40;
          uVar14 = 1 - uVar17;
          while( true ) {
            pbVar7 = (byte *)lVar23;
            bVar3 = pbVar7[(int)lVar22 + 2];
            pbVar9 = (byte *)lVar29;
            if ((uVar20 & 1) == 0) {
              bVar4 = *(byte *)lVar25;
              bVar1 = pbVar9[(int)uVar14];
            }
            else {
              bVar1 = *(byte *)lVar24;
              bVar4 = pbVar7[(int)uVar26];
            }
            uVar16 = (ushort)bVar4;
            uVar26 = (longlong)(short)(ushort)bVar3 - (longlong)(short)uVar16;
            *(undefined2 *)uVar19 =
                 (short)(((((int)((uVar26 & 0xffffffff) << 3) - (int)uVar26) +
                          (short)(ushort)pbVar7[(int)uVar18] * 0x25) -
                         ((int)(short)(ushort)bVar1 + (short)(ushort)bVar1 * 4)) + 0x10 >> 5);
            ((undefined2 *)uVar19)[1] =
                 (short)(((short)(ushort)bVar3 * 0x25 -
                         ((int)(short)uVar16 + (int)((longlong)(short)uVar16 << 2))) + 0x10 >> 5);
            bVar3 = pbVar7[2];
            if ((uVar20 & 1) == 0) {
              bVar4 = pbVar9[1];
              bVar1 = *pbVar9;
            }
            else {
              bVar4 = *pbVar7;
              bVar1 = pbVar7[-1];
            }
            uVar16 = (ushort)bVar1;
            uVar26 = (longlong)(short)(ushort)bVar3 - (longlong)(short)uVar16;
            *(undefined2 *)lVar36 =
                 (short)(((((int)((uVar26 & 0xffffffff) << 3) - (int)uVar26) +
                          (short)(ushort)pbVar7[1] * 0x25) -
                         ((int)(short)(ushort)bVar4 + (short)(ushort)bVar4 * 4)) + 0x10 >> 5);
            ((undefined2 *)lVar36)[1] =
                 (short)(((short)(ushort)bVar3 * 0x25 -
                         ((int)(short)uVar16 + (int)((longlong)(short)uVar16 << 2))) + 0x10 >> 5);
            bVar3 = pbVar7[iVar10 + 2];
            if ((uVar20 & 1) == 0) {
              bVar4 = pbVar9[uVar6 + 1];
              bVar1 = pbVar9[uVar6];
            }
            else {
              bVar4 = pbVar7[iVar10];
              bVar1 = pbVar7[iVar10 + -1];
            }
            uVar16 = (ushort)bVar1;
            uVar26 = (longlong)(short)(ushort)bVar3 - (longlong)(short)uVar16;
            *(undefined2 *)lVar34 =
                 (short)(((((int)((uVar26 & 0xffffffff) << 3) - (int)uVar26) +
                          (short)(ushort)pbVar7[iVar10 + 1] * 0x25) -
                         ((int)(short)(ushort)bVar4 + (short)(ushort)bVar4 * 4)) + 0x10 >> 5);
            ((undefined2 *)lVar34)[1] =
                 (short)(((short)(ushort)bVar3 * 0x25 -
                         ((int)(short)uVar16 + (int)((longlong)(short)uVar16 << 2))) + 0x10 >> 5);
            pbVar7 = (byte *)lVar38;
            bVar3 = pbVar7[2];
            if ((uVar20 & 1) == 0) {
              bVar1 = ((byte *)lVar45)[1];
              bVar4 = *(byte *)lVar45;
            }
            else {
              bVar1 = *pbVar7;
              bVar4 = pbVar7[-1];
            }
            uVar16 = (ushort)bVar4;
            uVar26 = (longlong)(short)(ushort)bVar3 - (longlong)(short)uVar16;
            *(undefined2 *)lVar33 =
                 (short)(((((int)((uVar26 & 0xffffffff) << 3) - (int)uVar26) +
                          (short)(ushort)pbVar7[1] * 0x25) -
                         ((int)(short)(ushort)bVar1 + (short)(ushort)bVar1 * 4)) + 0x10 >> 5);
            lVar25 = lVar25 + lVar27;
            ((undefined2 *)lVar33)[1] =
                 (short)(((short)(ushort)bVar3 * 0x25 -
                         ((int)(short)uVar16 + (int)((longlong)(short)uVar16 << 2))) + 0x10 >> 5);
            lVar29 = lVar29 + lVar27;
            lVar45 = lVar45 + lVar27;
            lVar24 = lVar24 + lVar31;
            uVar19 = lVar32 + uVar19;
            lVar36 = lVar32 + lVar36;
            lVar34 = lVar32 + lVar34;
            lVar33 = lVar32 + lVar33;
            lVar23 = lVar23 + lVar31;
            lVar38 = lVar38 + lVar31;
            lVar46 = lVar46 + -1;
            if (lVar46 == 0) break;
            uVar14 = 1 - uVar17 & 0xffffffff;
            uVar18 = lVar22 + 1U & 0xffffffff;
            uVar26 = lVar22 - 1U & 0xffffffff;
          }
          uVar14 = uVar30 & 0xffffffff;
          uVar18 = (ulonglong)uStack_cc;
          uVar19 = (ulonglong)uStack_d0;
          uVar26 = (ulonglong)uStack_c4;
        }
        if ((bVar2 & 0x10) != 0) {
          lVar22 = -lVar21;
          lVar47 = 2;
          lVar23 = uVar17 + 3 + (uVar17 + 3 & 0x7fffffff) * 2 + uVar18;
          lVar24 = uVar18 + 9;
          lVar25 = uVar19 + 7;
          lVar34 = (lVar21 + 3) * 4 + uVar40;
          lVar46 = lVar21 * 3 + uVar19 + 7;
          lVar38 = (lVar21 + 6) * 2 + uVar40;
          lVar29 = lVar21 * 4;
          lVar27 = (uVar17 & 0x3fffffff) * 4;
          lVar32 = lVar21 * 8;
          lVar31 = uVar18 + uVar17 + 9;
          lVar45 = lVar21 + uVar19 + 7;
          lVar36 = uVar40 + 0xc;
          lVar33 = (lVar21 + 2) * 6 + uVar40;
          uVar20 = -uVar17 - 1;
          uVar18 = lVar22 + 2U;
          uVar19 = lVar22 + 1U;
          while( true ) {
            pbVar7 = (byte *)lVar45;
            bVar3 = pbVar7[(int)lVar22 + -1];
            pbVar9 = (byte *)lVar31;
            if ((uVar26 & 5) == 0) {
              bVar4 = pbVar7[(int)uVar19];
              bVar1 = pbVar7[(int)uVar18];
            }
            else {
              bVar1 = *(byte *)lVar24;
              bVar4 = pbVar9[(int)uVar20];
            }
            uVar16 = (ushort)bVar1;
            uVar20 = (longlong)(short)(ushort)bVar3 - (longlong)(short)uVar16;
            ((undefined2 *)lVar36)[1] =
                 (short)((((int)((uVar20 & 0xffffffff) << 3) - (int)uVar20) -
                         ((int)(short)(ushort)bVar4 + (short)(ushort)bVar4 * 4)) +
                         (short)(ushort)*(byte *)lVar25 * 0x25 + 0x10 >> 5);
            *(undefined2 *)lVar36 =
                 (short)(((short)(ushort)bVar3 * 0x25 -
                         ((int)(short)uVar16 + (int)((longlong)(short)uVar16 << 2))) + 0x10 >> 5);
            bVar3 = pbVar7[-1];
            if ((uVar26 & 5) == 0) {
              bVar1 = pbVar7[1];
              bVar4 = pbVar7[2];
            }
            else {
              bVar1 = pbVar9[-1];
              bVar4 = *pbVar9;
            }
            uVar16 = (ushort)bVar4;
            uVar20 = (longlong)(short)(ushort)bVar3 - (longlong)(short)uVar16;
            ((undefined2 *)lVar38)[1] =
                 (short)((((int)((uVar20 & 0xffffffff) << 3) - (int)uVar20) -
                         ((int)(short)(ushort)bVar1 + (short)(ushort)bVar1 * 4)) +
                         (short)(ushort)*pbVar7 * 0x25 + 0x10 >> 5);
            *(undefined2 *)lVar38 =
                 (short)(((short)(ushort)bVar3 * 0x25 -
                         ((int)(short)uVar16 + (int)((longlong)(short)uVar16 << 2))) + 0x10 >> 5);
            bVar3 = pbVar7[iVar10 + -1];
            if ((uVar26 & 5) == 0) {
              bVar1 = pbVar7[(int)(lVar21 + 2)];
              bVar4 = pbVar7[iVar10 + 1];
            }
            else {
              bVar1 = pbVar9[uVar6];
              bVar4 = pbVar9[uVar6 - 1];
            }
            uVar16 = (ushort)bVar1;
            uVar20 = (longlong)(short)(ushort)bVar3 - (longlong)(short)uVar16;
            ((undefined2 *)lVar34)[1] =
                 (short)((((int)((uVar20 & 0xffffffff) << 3) - (int)uVar20) -
                         ((int)(short)(ushort)bVar4 + (short)(ushort)bVar4 * 4)) +
                         (short)(ushort)pbVar7[iVar10] * 0x25 + 0x10 >> 5);
            *(undefined2 *)lVar34 =
                 (short)(((short)(ushort)bVar3 * 0x25 -
                         ((int)(short)uVar16 + (int)((longlong)(short)uVar16 << 2))) + 0x10 >> 5);
            pbVar7 = (byte *)lVar46;
            bVar3 = pbVar7[-1];
            if ((uVar26 & 5) == 0) {
              bVar4 = pbVar7[1];
              bVar1 = pbVar7[2];
            }
            else {
              bVar4 = ((byte *)lVar23)[-1];
              bVar1 = *(byte *)lVar23;
            }
            uVar16 = (ushort)bVar1;
            uVar20 = (longlong)(short)(ushort)bVar3 - (longlong)(short)uVar16;
            ((undefined2 *)lVar33)[1] =
                 (short)((((int)((uVar20 & 0xffffffff) << 3) - (int)uVar20) -
                         ((int)(short)(ushort)bVar4 + (short)(ushort)bVar4 * 4)) +
                         (short)(ushort)*pbVar7 * 0x25 + 0x10 >> 5);
            lVar24 = lVar27 + lVar24;
            *(undefined2 *)lVar33 =
                 (short)(((short)(ushort)bVar3 * 0x25 -
                         ((int)(short)uVar16 + (int)((longlong)(short)uVar16 << 2))) + 0x10 >> 5);
            lVar31 = lVar31 + lVar27;
            lVar23 = lVar23 + lVar27;
            lVar36 = lVar32 + lVar36;
            lVar38 = lVar32 + lVar38;
            lVar34 = lVar32 + lVar34;
            lVar33 = lVar32 + lVar33;
            lVar25 = lVar29 + lVar25;
            lVar45 = lVar45 + lVar29;
            lVar46 = lVar46 + lVar29;
            lVar47 = lVar47 + -1;
            if (lVar47 == 0) break;
            uVar18 = lVar22 + 2U & 0xffffffff;
            uVar19 = lVar22 + 1U & 0xffffffff;
            uVar20 = -uVar17 - 1 & 0xffffffff;
          }
          uVar26 = (ulonglong)uStack_c4;
          uVar19 = (ulonglong)uStack_d0;
          uVar18 = (ulonglong)uStack_cc;
          uVar14 = uVar30 & 0xffffffff;
        }
        iVar11 = (int)uVar19;
        iVar12 = (int)uVar18;
        iVar13 = (int)uVar40;
        if ((bVar2 & 4) != 0) {
          uStack_b4 = uStack_b4 & 2;
          lVar23 = 0;
          lVar27 = 2;
          lVar22 = uVar14 - 6;
          lVar24 = (uVar18 - uVar17) + 2;
          lVar45 = (uVar19 - lVar21) + 2;
          lVar25 = lVar28 + uVar40;
          do {
            psVar35 = (short *)lVar25;
            sVar5 = *psVar35;
            iVar15 = (int)lVar22;
            pbVar7 = (byte *)lVar45;
            iVar43 = (int)lVar23;
            pbVar9 = (byte *)lVar24;
            if (uStack_b4 == 0) {
              bVar3 = pbVar9[-2];
              bVar1 = *(byte *)((iVar43 - (int)((uVar17 & 0xffffffff) << 1)) + iVar12);
            }
            else {
              bVar3 = pbVar7[-2];
              bVar1 = *(byte *)((iVar43 - (int)lVar28) + iVar11);
            }
            uVar16 = (ushort)bVar1;
            uVar20 = (longlong)sVar5 - (longlong)(short)uVar16;
            *(short *)(iVar15 + 2) =
                 (short)(((((int)((uVar20 & 0xffffffff) << 3) - (int)uVar20) +
                          *(short *)(iVar15 + 2) * 0x25) -
                         ((int)(short)(ushort)bVar3 + (short)(ushort)bVar3 * 4)) + 0x10 >> 5);
            *psVar35 = (short)((sVar5 * 0x25 -
                               ((int)(short)uVar16 + (int)((longlong)(short)uVar16 << 2))) + 0x10 >>
                              5);
            sVar5 = psVar35[1];
            if (uStack_b4 == 0) {
              bVar3 = pbVar9[-1];
              iVar41 = iVar43 + (uVar6 & 0x7fffffff) * -2 + iVar12;
            }
            else {
              bVar3 = pbVar7[-1];
              iVar41 = iVar43 + iVar10 * -2 + iVar11;
            }
            uVar16 = (ushort)*(byte *)(iVar41 + 1);
            uVar20 = (longlong)sVar5 - (longlong)(short)uVar16;
            *(short *)(iVar15 + 4) =
                 (short)(((((int)((uVar20 & 0xffffffff) << 3) - (int)uVar20) +
                          *(short *)(iVar15 + 4) * 0x25) -
                         ((int)(short)(ushort)bVar3 + (short)(ushort)bVar3 * 4)) + 0x10 >> 5);
            iVar41 = (int)((lVar21 + 2 + lVar23 & 0xffffffffU) << 1);
            psVar35[1] = (short)((sVar5 * 0x25 -
                                 ((int)(short)uVar16 + (int)((longlong)(short)uVar16 << 2))) + 0x10
                                >> 5);
            sVar5 = *(short *)(iVar41 + iVar13);
            if (uStack_b4 == 0) {
              bVar3 = *pbVar9;
              iVar42 = iVar43 + (uVar6 & 0x7fffffff) * -2 + iVar12;
            }
            else {
              bVar3 = *pbVar7;
              iVar42 = iVar43 + iVar10 * -2 + iVar11;
            }
            uVar16 = (ushort)*(byte *)(iVar42 + 2);
            uVar20 = (longlong)sVar5 - (longlong)(short)uVar16;
            *(short *)(iVar15 + 6) =
                 (short)(((((int)((uVar20 & 0xffffffff) << 3) - (int)uVar20) +
                          *(short *)(iVar15 + 6) * 0x25) -
                         ((int)(short)(ushort)bVar3 + (short)(ushort)bVar3 * 4)) + 0x10 >> 5);
            *(short *)(iVar41 + iVar13) =
                 (short)((sVar5 * 0x25 - ((int)(short)uVar16 + (int)((longlong)(short)uVar16 << 2)))
                         + 0x10 >> 5);
            iVar41 = (int)((lVar21 + 3 + lVar23 & 0xffffffffU) << 1);
            sVar5 = *(short *)(iVar41 + iVar13);
            if (uStack_b4 == 0) {
              bVar3 = pbVar9[1];
              iVar43 = iVar43 + (uVar6 & 0x7fffffff) * -2 + iVar12;
            }
            else {
              bVar3 = pbVar7[1];
              iVar43 = iVar43 + iVar10 * -2 + iVar11;
            }
            uVar16 = (ushort)*(byte *)(iVar43 + 3);
            uVar20 = (longlong)sVar5 - (longlong)(short)uVar16;
            lVar22 = lVar22 + 8;
            *(undefined2 *)lVar22 =
                 (short)(((((int)((uVar20 & 0xffffffff) << 3) - (int)uVar20) +
                          *(short *)(iVar15 + 8) * 0x25) -
                         ((int)(short)(ushort)bVar3 + (short)(ushort)bVar3 * 4)) + 0x10 >> 5);
            lVar23 = lVar23 + 4;
            *(short *)(iVar41 + iVar13) =
                 (short)((sVar5 * 0x25 - ((int)(short)uVar16 + (int)((longlong)(short)uVar16 << 2)))
                         + 0x10 >> 5);
            lVar25 = lVar25 + 8;
            lVar45 = lVar45 + 4;
            lVar24 = lVar24 + 4;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
        }
        if ((bVar2 & 0x20) != 0) {
          lVar45 = lVar21 * 7;
          lVar22 = lVar21 * 6;
          lVar23 = 0;
          lVar24 = 2;
          do {
            iVar41 = (int)lVar23;
            iVar43 = ((int)lVar22 + iVar41) * 2;
            iVar15 = ((int)lVar45 + iVar41) * 2;
            puVar39 = (undefined2 *)(iVar43 + iVar13);
            puVar37 = (undefined2 *)(iVar15 + iVar13);
            sVar5 = *(short *)(iVar43 + iVar13);
            if ((uVar26 & 6) == 0) {
              bVar2 = *(byte *)((int)(lVar21 << 3) + iVar41 + iVar11);
              bVar3 = *(byte *)(iVar10 + (int)(lVar21 << 3) + iVar41 + iVar11);
            }
            else {
              bVar2 = *(byte *)((int)((uVar17 & 0xffffffff) << 3) + iVar41 + iVar12);
              bVar3 = *(byte *)(uVar6 + (int)((uVar17 & 0xffffffff) << 3) + iVar41 + iVar12);
            }
            uVar16 = (ushort)bVar3;
            uVar20 = (longlong)sVar5 - (longlong)(short)uVar16;
            *puVar37 = (short)(((((int)((uVar20 & 0xffffffff) << 3) - (int)uVar20) +
                                *(short *)(iVar15 + iVar13) * 0x25) -
                               ((int)(short)(ushort)bVar2 + (short)(ushort)bVar2 * 4)) + 0x10 >> 5);
            *puVar39 = (short)((sVar5 * 0x25 -
                               ((int)(short)uVar16 + (int)((longlong)(short)uVar16 << 2))) + 0x10 >>
                              5);
            sVar5 = puVar39[1];
            if ((uVar26 & 6) == 0) {
              iVar43 = iVar10 * 8 + iVar41 + iVar11;
              iVar15 = iVar10 * 9 + iVar41 + iVar11;
            }
            else {
              iVar43 = uVar6 * 8 + iVar41 + iVar12;
              iVar15 = uVar6 * 9 + iVar41 + iVar12;
            }
            uVar16 = (ushort)*(byte *)(iVar15 + 1);
            uVar20 = (longlong)sVar5 - (longlong)(short)uVar16;
            iVar15 = (int)((lVar22 + lVar23 + 2U & 0xffffffff) << 1);
            puVar37[1] = (short)(((((int)((uVar20 & 0xffffffff) << 3) - (int)uVar20) +
                                  (short)puVar37[1] * 0x25) -
                                 ((int)(short)(ushort)*(byte *)(iVar43 + 1) +
                                 (short)(ushort)*(byte *)(iVar43 + 1) * 4)) + 0x10 >> 5);
            iVar43 = (int)((lVar45 + lVar23 + 2U & 0xffffffff) << 1);
            puVar39[1] = (short)((sVar5 * 0x25 -
                                 ((int)(short)uVar16 + (int)((longlong)(short)uVar16 << 2))) + 0x10
                                >> 5);
            sVar5 = *(short *)(iVar15 + iVar13);
            if ((uVar26 & 6) == 0) {
              iVar44 = iVar10 * 8 + iVar41 + iVar11;
              iVar42 = iVar10 * 9 + iVar41 + iVar11;
            }
            else {
              iVar44 = uVar6 * 8 + iVar41 + iVar12;
              iVar42 = uVar6 * 9 + iVar41 + iVar12;
            }
            uVar16 = (ushort)*(byte *)(iVar42 + 2);
            uVar20 = (longlong)sVar5 - (longlong)(short)uVar16;
            *(short *)(iVar43 + iVar13) =
                 (short)(((((int)((uVar20 & 0xffffffff) << 3) - (int)uVar20) +
                          *(short *)(iVar43 + iVar13) * 0x25) -
                         ((int)(short)(ushort)*(byte *)(iVar44 + 2) +
                         (short)(ushort)*(byte *)(iVar44 + 2) * 4)) + 0x10 >> 5);
            *(short *)(iVar15 + iVar13) =
                 (short)((sVar5 * 0x25 - ((int)(short)uVar16 + (int)((longlong)(short)uVar16 << 2)))
                         + 0x10 >> 5);
            iVar15 = (int)((lVar22 + 3 + lVar23 & 0xffffffffU) << 1);
            iVar43 = (int)((lVar45 + 3 + lVar23 & 0xffffffffU) << 1);
            sVar5 = *(short *)(iVar15 + iVar13);
            if ((uVar26 & 6) == 0) {
              iVar42 = iVar10 * 8 + iVar41 + iVar11;
              iVar41 = iVar10 * 9 + iVar41 + iVar11;
            }
            else {
              iVar42 = uVar6 * 8 + iVar41 + iVar12;
              iVar41 = uVar6 * 9 + iVar41 + iVar12;
            }
            uVar16 = (ushort)*(byte *)(iVar41 + 3);
            uVar20 = (longlong)sVar5 - (longlong)(short)uVar16;
            *(short *)(iVar43 + iVar13) =
                 (short)(((((int)((uVar20 & 0xffffffff) << 3) - (int)uVar20) +
                          *(short *)(iVar43 + iVar13) * 0x25) -
                         ((int)(short)(ushort)*(byte *)(iVar42 + 3) +
                         (short)(ushort)*(byte *)(iVar42 + 3) * 4)) + 0x10 >> 5);
            lVar23 = lVar23 + 4;
            *(short *)(iVar15 + iVar13) =
                 (short)((sVar5 * 0x25 - ((int)(short)uVar16 + (int)((longlong)(short)uVar16 << 2)))
                         + 0x10 >> 5);
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
      }
      lVar21 = 8;
      do {
        psVar35 = (short *)uVar14;
        psVar35[-2] = psVar35[-2] + -0x80;
        psVar35[-1] = psVar35[-1] + -0x80;
        *psVar35 = *psVar35 + -0x80;
        psVar35[1] = psVar35[1] + -0x80;
        psVar35[2] = psVar35[2] + -0x80;
        psVar35[3] = psVar35[3] + -0x80;
        psVar35[4] = psVar35[4] + -0x80;
        psVar35[5] = psVar35[5] + -0x80;
        uVar14 = lVar28 + uVar14;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
    }
    uVar26 = uVar26 + 1;
    uStack_c4 = (uint)uVar26;
    if (5 < (int)uStack_c4) {
      return;
    }
  } while( true );
}

