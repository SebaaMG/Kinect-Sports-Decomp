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
extern int fn_82A3BE50();
extern int fn_82A3F208();


bool fn_82A3EB70(int param_1,longlong param_2,int param_3,longlong param_4)

{
  undefined1 uVar1;
  short sVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  longlong lVar9;
  ulonglong uVar10;
  char cVar11;
  char cVar12;
  int iVar14;
  longlong lVar13;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  int iVar22;
  ulonglong uVar23;
  byte abStack_320 [32];
  short asStack_300 [96];
  short asStack_240 [288];
  
  iVar22 = 0;
  do {
    bVar6 = fn_82A3BE50(param_1,4);
    abStack_320[iVar22] = bVar6;
    iVar22 = iVar22 + 1;
  } while (iVar22 < 0x14);
  if (*(char *)(param_1 + 0x2eb7) == '\0') {
    fn_82A3F208(param_1,0x14,abStack_320,8,asStack_240,asStack_300);
    puVar21 = *(undefined1 **)(param_1 + 0x2b04);
    uVar16 = *(uint *)(param_1 + 0x2eb0);
    uVar19 = (ulonglong)uVar16;
    lVar9 = 0;
    bVar6 = *(byte *)(param_1 + 0x2eb4);
    uVar10 = (ulonglong)bVar6;
    iVar22 = (int)param_2;
    cVar7 = *(char *)(param_1 + 0x2eb7);
    puVar3 = *(undefined1 **)(param_1 + 0x2b08);
    if (0 < iVar22) {
      do {
        uVar16 = (uint)uVar19;
        sVar2 = *(short *)((int)asStack_240 + (uVar16 >> 0x17 & 0x1fe));
        iVar14 = (int)sVar2;
        if (sVar2 < 0) {
          uVar19 = 0x800000;
          do {
            uVar4 = (uint)uVar19;
            sVar2 = (short)iVar14;
            uVar19 = uVar19 >> 1;
            iVar14 = (int)asStack_300[((uVar4 & uVar16) == 0 ^ 1) + -sVar2 * 2];
          } while (asStack_300[((uVar4 & uVar16) == 0 ^ 1) + -sVar2 * 2] < 0);
        }
        cVar11 = (char)uVar10 - abStack_320[iVar14];
        uVar16 = uVar16 << (abStack_320[iVar14] & 0x3f);
        uVar19 = (ulonglong)uVar16;
        uVar10 = (ulonglong)cVar11;
        puVar20 = puVar21;
        if ((longlong)uVar10 < 1) {
          if (puVar21 < puVar3) {
            uVar10 = (ulonglong)(char)(cVar11 + '\x10');
            uVar16 = (uint)CONCAT11(puVar21[1],*puVar21) << (-(int)cVar11 & 0x3fU) | uVar16;
            uVar19 = (ulonglong)uVar16;
            puVar20 = puVar21 + 2;
            if ((longlong)uVar10 < 1) {
              if (puVar3 <= puVar20) goto LAB_82a3ecac;
              uVar10 = (ulonglong)(char)(cVar11 + ' ');
              uVar19 = (ulonglong)
                       ((uint)CONCAT11(puVar21[3],*puVar20) <<
                        (-(int)(char)(cVar11 + '\x10') & 0x3fU) | uVar16);
              puVar20 = puVar21 + 4;
            }
          }
          else {
LAB_82a3ecac:
            cVar7 = '\x01';
          }
        }
        puVar21 = puVar20;
        bVar6 = (byte)uVar10;
        uVar16 = (uint)uVar19;
        if (cVar7 != '\0') break;
        iVar17 = (int)lVar9;
        if (iVar14 == 0x11) {
          uVar15 = uVar19 >> 0x1c;
          uVar10 = (ulonglong)(char)(bVar6 - 4);
          uVar19 = (uVar19 & 0xfffffff) << 4;
          puVar20 = puVar21;
          if ((longlong)uVar10 < 1) {
            if (puVar21 < puVar3) {
              uVar10 = (ulonglong)(char)(bVar6 + 0xc);
              uVar19 = (uint)CONCAT11(puVar21[1],*puVar21) << (-(int)(char)(bVar6 - 4) & 0x3fU) |
                       uVar19;
              puVar20 = puVar21 + 2;
              if ((longlong)uVar10 < 1) {
                if (puVar3 <= puVar20) goto LAB_82a3ed44;
                uVar10 = (ulonglong)(char)(bVar6 + 0x1c);
                uVar19 = (uint)CONCAT11(puVar21[3],*puVar20) << (-(int)(char)(bVar6 + 0xc) & 0x3fU)
                         | uVar19;
                puVar20 = puVar21 + 4;
              }
            }
            else {
LAB_82a3ed44:
              cVar7 = '\x01';
            }
          }
          puVar21 = puVar20;
          uVar15 = uVar15 + 4;
          if (iVar22 <= (int)uVar15 + iVar17) {
            uVar15 = param_2 - lVar9;
          }
          if (0 < (int)uVar15) {
            lVar13 = lVar9 + param_4 + -1;
            uVar23 = uVar15;
            uVar5 = uVar15 & 0xffffffff;
            while (uVar5 != 0) {
              lVar13 = lVar13 + 1;
              *(undefined1 *)lVar13 = 0;
              uVar23 = uVar23 - 1;
              uVar5 = uVar23;
            }
LAB_82a3ee80:
            lVar9 = uVar15 + lVar9;
          }
LAB_82a3f050:
          lVar9 = lVar9 + -1;
        }
        else {
          if (iVar14 == 0x12) {
            uVar15 = uVar19 >> 0x1b;
            uVar10 = (ulonglong)(char)(bVar6 - 5);
            uVar19 = (uVar19 & 0x7ffffff) << 5;
            puVar20 = puVar21;
            if ((longlong)uVar10 < 1) {
              if (puVar21 < puVar3) {
                uVar10 = (ulonglong)(char)(bVar6 + 0xb);
                uVar19 = (uint)CONCAT11(puVar21[1],*puVar21) << (-(int)(char)(bVar6 - 5) & 0x3fU) |
                         uVar19;
                puVar20 = puVar21 + 2;
                if ((longlong)uVar10 < 1) {
                  if (puVar3 <= puVar20) goto LAB_82a3ee14;
                  uVar10 = (ulonglong)(char)(bVar6 + 0x1b);
                  uVar19 = (uint)CONCAT11(puVar21[3],*puVar20) <<
                           (-(int)(char)(bVar6 + 0xb) & 0x3fU) | uVar19;
                  puVar20 = puVar21 + 4;
                }
              }
              else {
LAB_82a3ee14:
                cVar7 = '\x01';
              }
            }
            puVar21 = puVar20;
            uVar15 = uVar15 + 0x14;
            if (iVar22 <= (int)uVar15 + iVar17) {
              uVar15 = param_2 - lVar9;
            }
            if (0 < (int)uVar15) {
              lVar13 = lVar9 + param_4 + -1;
              uVar23 = uVar15;
              uVar5 = uVar15 & 0xffffffff;
              while (uVar5 != 0) {
                lVar13 = lVar13 + 1;
                *(undefined1 *)lVar13 = 0;
                uVar23 = uVar23 - 1;
                uVar5 = uVar23;
              }
              goto LAB_82a3ee80;
            }
            goto LAB_82a3f050;
          }
          if (iVar14 == 0x13) {
            cVar12 = bVar6 - 1;
            uVar16 = (uint)((uVar19 & 0x7fffffff) << 1);
            cVar11 = cVar12;
            puVar20 = puVar21;
            if (cVar12 < '\x01') {
              if (puVar21 < puVar3) {
                cVar11 = bVar6 + 0xf;
                uVar16 = (uint)CONCAT11(puVar21[1],*puVar21) << (-(int)cVar12 & 0x3fU) | uVar16;
                puVar20 = puVar21 + 2;
                if (cVar11 < '\x01') {
                  if (puVar3 <= puVar20) goto LAB_82a3eeec;
                  iVar14 = (int)cVar11;
                  uVar1 = *puVar20;
                  cVar11 = bVar6 + 0x1f;
                  puVar20 = puVar21 + 4;
                  uVar16 = (uint)CONCAT11(puVar21[3],uVar1) << (-iVar14 & 0x3fU) | uVar16;
                }
              }
              else {
LAB_82a3eeec:
                cVar7 = '\x01';
              }
            }
            uVar15 = (uVar19 >> 0x1f) + 4;
            if (iVar22 <= (int)uVar15 + iVar17) {
              uVar15 = param_2 - lVar9;
            }
            sVar2 = *(short *)((int)asStack_240 + (uVar16 >> 0x17 & 0x1fe));
            iVar14 = (int)sVar2;
            if (sVar2 < 0) {
              uVar10 = 0x800000;
              do {
                uVar4 = (uint)uVar10;
                sVar2 = (short)iVar14;
                uVar10 = uVar10 >> 1;
                iVar14 = (int)asStack_300[((uVar4 & uVar16) == 0 ^ 1) + -sVar2 * 2];
              } while (asStack_300[((uVar4 & uVar16) == 0 ^ 1) + -sVar2 * 2] < 0);
            }
            cVar11 = cVar11 - abStack_320[iVar14];
            uVar16 = uVar16 << (abStack_320[iVar14] & 0x3f);
            uVar19 = (ulonglong)uVar16;
            uVar10 = (ulonglong)cVar11;
            puVar21 = puVar20;
            if ((longlong)uVar10 < 1) {
              if (puVar20 < puVar3) {
                uVar10 = (ulonglong)(char)(cVar11 + '\x10');
                uVar16 = (uint)CONCAT11(puVar20[1],*puVar20) << (-(int)cVar11 & 0x3fU) | uVar16;
                uVar19 = (ulonglong)uVar16;
                puVar21 = puVar20 + 2;
                if ((longlong)uVar10 < 1) {
                  if (puVar3 <= puVar21) goto LAB_82a3efdc;
                  uVar1 = *puVar21;
                  puVar21 = puVar20 + 4;
                  uVar10 = (ulonglong)(char)(cVar11 + ' ');
                  uVar19 = (ulonglong)
                           ((uint)CONCAT11(puVar20[3],uVar1) <<
                            (-(int)(char)(cVar11 + '\x10') & 0x3fU) | uVar16);
                }
              }
              else {
LAB_82a3efdc:
                cVar7 = '\x01';
              }
            }
            iVar14 = (uint)*(byte *)(iVar17 + param_3) - iVar14;
            iVar17 = iVar14 + 0x11;
            if (0x10 < iVar17) {
              iVar17 = iVar14;
            }
            if (0 < (int)uVar15) {
              lVar13 = lVar9 + param_4 + -1;
              uVar23 = uVar15;
              uVar5 = uVar15 & 0xffffffff;
              while (uVar5 != 0) {
                lVar13 = lVar13 + 1;
                *(undefined1 *)lVar13 = (char)iVar17;
                uVar23 = uVar23 - 1;
                uVar5 = uVar23;
              }
              lVar9 = uVar15 + lVar9;
            }
            goto LAB_82a3f050;
          }
          iVar14 = (uint)*(byte *)(iVar17 + param_3) - iVar14;
          iVar18 = iVar14 + 0x11;
          if (0x10 < iVar18) {
            iVar18 = iVar14;
          }
          *(char *)(iVar17 + (int)param_4) = (char)iVar18;
        }
        bVar6 = (byte)uVar10;
        uVar16 = (uint)uVar19;
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < iVar22);
    }
    *(undefined1 **)(param_1 + 0x2b04) = puVar21;
    *(char *)(param_1 + 0x2eb7) = cVar7;
    *(uint *)(param_1 + 0x2eb0) = uVar16;
    *(byte *)(param_1 + 0x2eb4) = bVar6;
    bVar8 = cVar7 == '\0';
  }
  else {
    bVar8 = false;
  }
  return bVar8;
}

