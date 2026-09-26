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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_120;
extern unsigned int *auStack_170;
extern unsigned int uStack_18c;
extern unsigned int uStack_18e;


undefined8
fn_829C4980(int param_1,ulonglong param_2,uint param_3,int param_4,int param_5,int *param_6,
             uint *param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint *puVar7;
  ulonglong uVar8;
  uint uVar10;
  byte bVar12;
  uint uVar11;
  ulonglong uVar9;
  longlong lVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int *piVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint *in_stack_00000054;
  uint *in_stack_0000005c;
  undefined2 uStack_18e;
  uint uStack_18c;
  uint auStack_170 [20];
  uint auStack_120 [15];
  int aiStack_e4 [57];
  
  piVar24 = (int *)(param_1 + -4);
  auStack_170[1] = 0;
  auStack_170[2] = 0;
  auStack_170[3] = 0;
  auStack_170[4] = 0;
  auStack_170[5] = 0;
  auStack_170[6] = 0;
  auStack_170[7] = 0;
  auStack_170[8] = 0;
  auStack_170[9] = 0;
  auStack_170[10] = 0;
  auStack_170[0xb] = 0;
  auStack_170[0xc] = 0;
  auStack_170[0xd] = 0;
  auStack_170[0xe] = 0;
  auStack_170[0xf] = 0;
  uVar8 = param_2;
  do {
    piVar24 = piVar24 + 1;
    uVar8 = uVar8 - 1;
    auStack_170[*piVar24] = auStack_170[*piVar24] + 1;
  } while (uVar8 != 0);
  if ((param_2 & 0xffffffff) == 0) {
    *param_6 = 0;
    uVar3 = 0;
    *param_7 = 0;
  }
  else {
    puVar18 = auStack_170;
    uVar14 = 1;
    do {
      puVar18 = puVar18 + 1;
      if (*puVar18 != 0) break;
      uVar14 = uVar14 + 1;
    } while (uVar14 < 0x10);
    uVar19 = *param_7;
    if (*param_7 < uVar14) {
      uVar19 = uVar14;
    }
    uVar26 = 0xf;
    puVar18 = auStack_170 + 0xf;
    do {
      if (*puVar18 != 0) break;
      uVar26 = uVar26 - 1;
      puVar18 = puVar18 + -1;
    } while (uVar26 != 0);
    if (uVar26 < uVar19) {
      uVar19 = uVar26;
    }
    *param_7 = uVar19;
    uVar8 = (ulonglong)(uint)(1 << (uVar14 & 0x3f));
    if (uVar14 < uVar26) {
      puVar18 = auStack_170 + uVar14;
      uVar28 = uVar14;
      do {
        uVar20 = *puVar18;
        if ((longlong)(uVar8 - uVar20) < 0) goto LAB_829c4ba4;
        uVar28 = uVar28 + 1;
        puVar18 = puVar18 + 1;
        uVar8 = (uVar8 - uVar20 & 0x7fffffff) << 1;
      } while (uVar28 < uVar26);
    }
    lVar13 = uVar8 - auStack_170[uVar26];
    if (lVar13 < 0) {
LAB_829c4ba4:
      uVar3 = 0xfffffffffffffffd;
    }
    else {
      iVar2 = (int)lVar13;
      auStack_120[1] = 0;
      iVar22 = uVar26 - 1;
      auStack_170[uVar26] = auStack_170[uVar26] + iVar2;
      iVar27 = 0;
      if (iVar22 != 0) {
        iVar21 = 0;
        do {
          iVar27 = *(int *)((int)auStack_170 + iVar21 + 4) + iVar27;
          *(int *)((int)auStack_120 + iVar21 + 8) = iVar27;
          iVar21 = iVar21 + 4;
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
      }
      piVar24 = (int *)(param_1 + -4);
      uVar28 = 0;
      do {
        piVar24 = piVar24 + 1;
        iVar22 = *piVar24;
        if (iVar22 != 0) {
          uVar20 = auStack_120[iVar22];
          auStack_120[iVar22] = uVar20 + 1;
          in_stack_0000005c[uVar20] = uVar28;
        }
        uVar28 = uVar28 + 1;
      } while ((ulonglong)uVar28 < (param_2 & 0xffffffff));
      aiStack_e4[1] = 0;
      uVar8 = 0;
      iVar22 = -1;
      uVar25 = -uVar19;
      uVar28 = auStack_120[uVar26];
      iVar27 = 0;
      uVar20 = 0;
      if ((int)uVar14 <= (int)uVar26) {
        puVar15 = auStack_170 + uVar14;
        puVar18 = in_stack_0000005c;
        do {
          uVar17 = *puVar15;
          while (uVar17 != 0) {
            uVar16 = uVar17 - 1;
            uVar11 = (uint)uVar8;
            if ((int)(uVar25 + uVar19) < (int)uVar14) {
              uVar23 = uVar25 - uVar19;
              iVar21 = iVar22;
              uVar1 = uVar25 + uVar19;
              do {
                uVar25 = uVar1;
                iVar22 = iVar21 + 1;
                uVar23 = uVar23 + uVar19;
                uVar20 = uVar26 - uVar25;
                if (uVar19 < uVar26 - uVar25) {
                  uVar20 = uVar19;
                }
                uVar10 = uVar14 - uVar25;
                uVar1 = 1 << (uVar10 & 0x3f);
                if ((uVar17 < uVar1) &&
                   (iVar27 = (uVar1 - uVar16) + -1, puVar7 = puVar15, uVar10 < uVar20)) {
                  while (uVar10 = uVar10 + 1, uVar10 < uVar20) {
                    uVar1 = puVar7[1];
                    if ((uint)(iVar27 * 2) <= uVar1) break;
                    iVar27 = iVar27 * 2 - uVar1;
                    puVar7 = puVar7 + 1;
                  }
                }
                uVar1 = *in_stack_00000054;
                uVar20 = 1 << (uVar10 & 0x3f);
                uVar4 = uVar1 + uVar20;
                if (0x5a0 < uVar4) goto LAB_829c4ba4;
                *in_stack_00000054 = uVar4;
                iVar27 = uVar1 * 8 + param_8;
                aiStack_e4[iVar21 + 2] = iVar27;
                if (iVar22 == 0) {
                  *param_6 = iVar27;
                }
                else {
                  uVar1 = uVar11 >> (uVar23 & 0x3f);
                  uStack_18c = (iVar27 - aiStack_e4[iVar22] >> 3) - uVar1;
                  auStack_120[iVar22] = uVar11;
                  *(ulonglong *)(uVar1 * 8 + aiStack_e4[iVar22]) =
                       CONCAT44(CONCAT22(CONCAT11((char)uVar10,(char)uVar19),uStack_18e),uStack_18c)
                  ;
                }
                iVar21 = iVar22;
                uVar1 = uVar25 + uVar19;
              } while ((int)(uVar25 + uVar19) < (int)uVar14);
            }
            if (puVar18 < in_stack_0000005c + uVar28) {
              uStack_18c = *puVar18;
              puVar18 = puVar18 + 1;
              if (uStack_18c < param_3) {
                bVar12 = -(0xff < uStack_18c) & 0x60;
              }
              else {
                iVar21 = (uStack_18c - param_3) * 4;
                uStack_18c = *(uint *)(iVar21 + param_4);
                bVar12 = (char)*(undefined4 *)(iVar21 + param_5) + 0x50;
              }
            }
            else {
              bVar12 = 0xc0;
            }
            uVar11 = uVar11 >> (uVar25 & 0x3f);
            iVar21 = 1 << (uVar14 - uVar25 & 0x3f);
            if (uVar11 < uVar20) {
              puVar5 = (undefined8 *)(uVar11 * 8 + iVar21 * -8 + iVar27);
              do {
                uVar11 = iVar21 + uVar11;
                puVar5 = puVar5 + iVar21;
                *puVar5 = CONCAT44(CONCAT22(CONCAT11(bVar12,(char)uVar14 - (char)uVar25),uStack_18e)
                                   ,uStack_18c);
              } while (uVar11 < uVar20);
            }
            for (uVar9 = (ulonglong)(uint)(1 << (uVar14 - 1 & 0x3f)); uVar6 = uVar9 & uVar8,
                uVar8 = uVar9 ^ uVar8, uVar6 != 0; uVar9 = uVar9 >> 1) {
            }
            puVar7 = auStack_120 + iVar22;
            uVar17 = uVar16;
            if (((ulonglong)(uint)(1 << (uVar25 & 0x3f)) - 1 & uVar8) != (ulonglong)*puVar7) {
              do {
                uVar25 = uVar25 - uVar19;
                puVar7 = puVar7 + -1;
                iVar22 = iVar22 + -1;
              } while (((ulonglong)(uint)(1 << (uVar25 & 0x3f)) - 1 & uVar8) != (ulonglong)*puVar7);
            }
          }
          uVar14 = uVar14 + 1;
          puVar15 = puVar15 + 1;
        } while ((int)uVar14 <= (int)uVar26);
      }
      if ((iVar2 == 0) || (uVar3 = 0xfffffffffffffffb, uVar26 == 1)) {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

