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
extern unsigned int *auStack_c8;
extern int fn_82C75948();
extern int fn_830DBB28();
extern unsigned int lbl_83232474;
extern unsigned int uStack0000003c;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_d4;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;
extern V16 vectorSplatHalfWord();
extern void *memcpy(void *, const void *, unsigned int);


undefined8 fn_830DAA20(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  ushort uVar11;
  ushort uVar12;
  ulonglong in_r0;
  uint uVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar22;
  int iVar23;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar24;
  ushort *puVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  int iVar31;
  longlong lVar32;
  undefined1 in_vs32 [16];
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  uint uStack0000003c;
  uint *puStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_d4;
  uint auStack_c8 [2];
  uint auStack_c0 [4];
  int aiStack_b0 [4];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  iVar31 = *(int *)(param_1 + 0xec0);
  iVar3 = *(int *)(param_1 + 0xdc);
  iVar18 = *(int *)(param_1 + 0xe0);
  iVar4 = *(int *)(param_1 + 0xec8);
  iVar5 = *(int *)(param_1 + 0xec4);
  iVar6 = *(int *)(param_1 + 0x110);
  iVar7 = *(int *)(param_2 + 0x520);
  if (param_4 == 0) {
    *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_1 + 0x56f8);
    *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_1 + 0x5704);
    *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x56fc);
    *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_1 + 0x5708);
  }
  else {
    iVar22 = (param_4 + 0x5c) * 0x10;
    iVar23 = iVar22 + param_2;
    *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(iVar22 + param_2);
    *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(iVar23 + 4);
    *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(iVar23 + 8);
    *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(iVar23 + 0xc);
  }
  *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_2 + 0x268);
  *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_2 + 0x48c);
  uVar11 = *(ushort *)(param_2 + 0x32) >> 1;
  iVar23 = (uint)*(ushort *)(param_2 + 0x4c) * 8 * param_5;
  uStack_fc = iVar23 + iVar5 + iVar18;
  puStack_100 = (uint *)(uVar11 * param_5 * 0x18 + iVar6);
  uStack_f8 = (uint)*(ushort *)(param_2 + 0x4a) * 0x10 * param_5 + iVar31 + iVar3;
  uStack_f4 = iVar23 + iVar4 + iVar18;
  puVar14 = (ulonglong *)(uVar11 * param_5 * 8 + iVar7);
  uStack0000003c = param_6;
  uStack_d4 = param_5;
  if (param_5 < param_6) {
    do {
      uVar26 = 0;
      uVar30 = (ulonglong)uStack_f8;
      uVar29 = (ulonglong)uStack_fc;
      uVar28 = (ulonglong)uStack_f4;
      puVar15 = puVar14;
      if (uVar11 != 0) {
        do {
          puVar14 = puVar15 + 1;
          uVar19 = *puVar15;
          if ((*puStack_100 & 0x700) == 0x400) goto LAB_830dafa0;
          aiStack_b0[0] = (int)uVar30;
          uStack_a0 = (undefined4)uVar29;
          uVar20 = (ulonglong)*(ushort *)(param_2 + 0x4c);
          uStack_9c = (undefined4)uVar28;
          aiStack_b0[1] = aiStack_b0[0] + 8;
          auStack_c8[1] = (uint)*(ushort *)(param_2 + 0x4c);
          uVar27 = uVar19 >> 0x30 & 0x3f;
          lVar32 = ((uVar19 >> 0x38 & 0x3f) + (uVar19 >> 0x38 & 0x3f) * 4) * 4 +
                   (ulonglong)*(uint *)(param_2 + 0x184);
          uVar16 = (ulonglong)*(ushort *)(param_2 + 0x4a);
          if ((*puStack_100 & 0x10000) == 0) {
            uVar9 = uVar16 << 3;
            uVar17 = uVar16;
          }
          else {
            uVar17 = uVar16 << 1;
            uVar9 = uVar16;
          }
          aiStack_b0[2] = (int)(uVar9 + uVar30);
          aiStack_b0[3] = aiStack_b0[2] + 8;
          auStack_c8[0] = (uint)uVar17;
          if (9 < lbl_83232474) goto switchD_830dac70_caseD_4;
          in_r0 = (ulonglong)*(uint *)(lbl_83232474 * 4 + -0x7cf2538c);
          switch(lbl_83232474) {
          case 0:
          case 8:
            lVar21 = uVar30 + 0x80;
            dataCacheBlockTouch(lVar21);
            dataCacheBlockTouch(uVar17 + lVar21);
            dataCacheBlockTouch(uVar17 * 2 + lVar21);
            dataCacheBlockTouch(uVar17 * 3 + lVar21);
            dataCacheBlockTouch(uVar17 * 4 + lVar21);
            dataCacheBlockTouch(uVar17 * 5 + lVar21);
            dataCacheBlockTouch(uVar17 * 6 + lVar21);
            dataCacheBlockTouch(uVar17 * 7 + lVar21);
            break;
          case 1:
          case 9:
            lVar21 = uVar9 + uVar30 + 0x80;
            dataCacheBlockTouch(lVar21);
            dataCacheBlockTouch(uVar17 + lVar21);
            dataCacheBlockTouch(uVar17 * 2 + lVar21);
            dataCacheBlockTouch(uVar17 * 3 + lVar21);
            dataCacheBlockTouch(uVar17 * 4 + lVar21);
            dataCacheBlockTouch(uVar17 * 5 + lVar21);
            dataCacheBlockTouch(uVar17 * 6 + lVar21);
            dataCacheBlockTouch(uVar17 * 7 + lVar21);
            break;
          case 2:
            uVar16 = uVar29;
            goto LAB_830dad50;
          case 3:
            uVar16 = uVar28;
LAB_830dad50:
            lVar21 = uVar16 + 0x80;
            dataCacheBlockTouch(lVar21);
            dataCacheBlockTouch(uVar20 + lVar21);
            dataCacheBlockTouch(uVar20 * 2 + lVar21);
            dataCacheBlockTouch(uVar20 * 3 + lVar21);
            dataCacheBlockTouch(uVar20 * 4 + lVar21);
            dataCacheBlockTouch(uVar20 * 5 + lVar21);
            dataCacheBlockTouch(uVar20 * 6 + lVar21);
            dataCacheBlockTouch(uVar20 * 7 + lVar21);
          }
switchD_830dac70_caseD_4:
          uVar24 = lbl_83232474 + 1;
          iVar31 = 0;
          lbl_83232474 = uVar24 + (((int)uVar24 >> 4) +
                                  (uint)((int)uVar24 < 0 && (uVar24 & 0xf) != 0)) * -0x10;
          do {
            if ((uVar27 & 1) != 0) {
              if ((uVar19 >> 0x2c & 7) == 0) {
                iVar3 = *(int *)(param_2 + 0x1bc);
                iVar18 = 0;
                uVar33 = *(undefined4 *)lVar32;
                uVar34 = ((undefined4 *)lVar32)[1];
                uVar24 = 0;
                uVar13 = 0;
                psVar8 = *(short **)(param_3 + 0x28);
                uVar20 = ZEXT48(psVar8);
                bVar1 = **(byte **)(param_3 + 0x18);
                uVar16 = (ulonglong)bVar1;
                puVar25 = *(ushort **)(param_3 + 0x14);
                *(byte **)(param_3 + 0x18) = *(byte **)(param_3 + 0x18) + 1;
                dataCacheBlockClearToZero(uVar20);
                if (uVar16 < 0x80) {
                  if (bVar1 != 0) {
                    do {
                      uVar2 = *puVar25;
                      puVar25 = puVar25 + 1;
                      uVar13 = (uVar2 & 0x3f) + iVar18 & 0x3f;
                      uVar12 = uVar2 >> 7 & 1;
                      bVar1 = *(byte *)(uVar13 + iVar3);
                      iVar18 = uVar13 + 1;
                      uVar13 = *(byte *)((uint)bVar1 + param_2 + 0xa8) | uVar24;
                      psVar8[bVar1] =
                           ((uVar2 >> 8) * (short)uVar33 + (short)uVar34 ^ -uVar12) + uVar12;
                      uVar16 = uVar16 - 1;
                      uVar24 = uVar13;
                    } while (uVar16 != 0);
                  }
                  *(ushort **)(param_3 + 0x14) = puVar25;
                }
                else {
                  uVar13 = fn_82C75948(param_2,iVar3,param_2 + 0xa8,lVar32,param_3);
                }
                if (uVar13 == 0) {
                  auStack_c0[0] = ((*psVar8 + 1 >> 1) + (int)*psVar8) * 3 + 0x10 >> 5 & 0xffff;
                  iVar3 = (int)in_r0;
                  puVar10 = (undefined4 *)((int)auStack_c0 + iVar3 & 0xfffffff0);
                  uVar33 = *puVar10;
                  uVar34 = puVar10[1];
                  uVar35 = puVar10[2];
                  uVar36 = puVar10[3];{ V16 _vt0 = vectorSplatHalfWord(in_vs32,1); memcpy(in_vs32, &_vt0, 16); }
                  puVar10 = (undefined4 *)((int)auStack_c0 + iVar3 & 0xfffffff0);
                  *puVar10 = uVar33;
                  puVar10[1] = uVar34;
                  puVar10[2] = uVar35;
                  puVar10[3] = uVar36;
                  puVar10 = (undefined4 *)(iVar3 + (int)psVar8 & 0xfffffff0);
                  *puVar10 = uVar33;
                  puVar10[1] = uVar34;
                  puVar10[2] = uVar35;
                  puVar10[3] = uVar36;
                  puVar10 = (undefined4 *)((uint)(psVar8 + 8) & 0xfffffff0);
                  *puVar10 = uVar33;
                  puVar10[1] = uVar34;
                  puVar10[2] = uVar35;
                  puVar10[3] = uVar36;
                  puVar10 = (undefined4 *)((uint)(psVar8 + 0x10) & 0xfffffff0);
                  *puVar10 = uVar33;
                  puVar10[1] = uVar34;
                  puVar10[2] = uVar35;
                  puVar10[3] = uVar36;
                  puVar10 = (undefined4 *)((uint)(psVar8 + 0x18) & 0xfffffff0);
                  *puVar10 = uVar33;
                  puVar10[1] = uVar34;
                  puVar10[2] = uVar35;
                  puVar10[3] = uVar36;
                  puVar10 = (undefined4 *)((uint)(psVar8 + 0x20) & 0xfffffff0);
                  *puVar10 = uVar33;
                  puVar10[1] = uVar34;
                  puVar10[2] = uVar35;
                  puVar10[3] = uVar36;
                  puVar10 = (undefined4 *)((uint)(psVar8 + 0x28) & 0xfffffff0);
                  *puVar10 = uVar33;
                  puVar10[1] = uVar34;
                  puVar10[2] = uVar35;
                  puVar10[3] = uVar36;
                  puVar10 = (undefined4 *)((uint)(psVar8 + 0x30) & 0xfffffff0);
                  *puVar10 = uVar33;
                  puVar10[1] = uVar34;
                  puVar10[2] = uVar35;
                  puVar10[3] = uVar36;
                  puVar10 = (undefined4 *)((uint)(psVar8 + 0x38) & 0xfffffff0);
                  *puVar10 = uVar33;
                  puVar10[1] = uVar34;
                  puVar10[2] = uVar35;
                  puVar10[3] = uVar36;
                }
                else {
                  fn_830DBB28(uVar20,uVar20);
                }
              }
              else {
                uVar20 = (ulonglong)*(uint *)(param_3 + 0x24);
                uVar16 = uVar19 >> 0x28 & 0xf;
                (**(code **)((((uint)(uVar19 >> 0x2c) & 6) +
                              (uint)*(byte *)((int)uVar16 + param_2 + 0x140) + 0x9e) * 4 + param_2))
                          (param_2,lVar32,uVar16,param_3);
              }
              (**(code **)(param_2 + 0x3c0))(uVar20,aiStack_b0[iVar31],auStack_c8[iVar31 >> 2]);
            }
            iVar31 = iVar31 + 1;
            uVar27 = uVar27 >> 1;
            uVar19 = uVar19 << 8;
          } while (iVar31 < 6);
LAB_830dafa0:
          puStack_100 = puStack_100 + 6;
          uVar26 = uVar26 + 1;
          uVar30 = uVar30 + 0x10;
          uVar29 = uVar29 + 8;
          uVar28 = uVar28 + 8;
          puVar15 = puVar14;
        } while (uVar26 < uVar11);
      }
      uStack_fc = uStack_fc + *(int *)(param_1 + 0xe8);
      uStack_f8 = uStack_f8 + *(int *)(param_1 + 0xe4);
      uStack_f4 = uStack_f4 + *(int *)(param_1 + 0xe8);
      uStack_d4 = uStack_d4 + 1;
    } while (uStack_d4 < uStack0000003c);
  }
  return 0;
}

