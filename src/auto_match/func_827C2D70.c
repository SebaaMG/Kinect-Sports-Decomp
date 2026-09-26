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
extern unsigned int *auStack_120;
extern int fn_827C1B50();
extern unsigned int iStack_140;
extern unsigned int iStack_150;
extern unsigned int iStack_164;
extern unsigned int iStack_168;
extern unsigned int uStack_170;


longlong fn_827C2D70(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  short *psVar15;
  ulonglong uVar16;
  int iVar20;
  undefined4 *puVar21;
  short *psVar22;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar23;
  longlong lVar24;
  short *psVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  bool bVar36;
  int iVar35;
  uint uVar37;
  uint uVar38;
  uint uStack_170;
  undefined4 *puStack_16c;
  int iStack_168;
  int iStack_164;
  uint *puStack_160;
  int iStack_150;
  int iStack_140;
  undefined1 auStack_120 [2];
  short sStack_11e;
  short sStack_11c;
  short sStack_110;
  short sStack_10e;
  short sStack_100;
  
  iVar1 = *(int *)(param_1 + 0x188);
  iVar2 = *(int *)(param_1 + 0x11c);
  if (*(int *)(param_1 + 0x7c) <= *(int *)(param_1 + 0x84)) {
    do {
      if ((*(char *)((int)*(undefined4 **)(param_1 + 400) + 0x11) != '\0') ||
         ((*(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0x84) &&
          ((uint)(*(int *)(param_1 + 0x16c) == 0) + *(int *)(param_1 + 0x88) <
           *(uint *)(param_1 + 0x80))))) break;
      iVar8 = (*(code *)**(undefined4 **)(param_1 + 400))(param_1);
      if (iVar8 == 0) {
        return 0;
      }
    } while (*(int *)(param_1 + 0x7c) <= *(int *)(param_1 + 0x84));
  }
  iVar8 = *(int *)(param_1 + 0xc4);
  iStack_140 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    iStack_164 = 0;
    puStack_16c = (undefined4 *)(iVar1 + 0x48);
    puStack_160 = param_2;
    do {
      if (*(char *)(iVar8 + 0x30) != '\0') {
        uVar3 = *(uint *)(param_1 + 0x88);
        uVar9 = *(uint *)(iVar8 + 0xc);
        uVar16 = (ulonglong)uVar9;
        if (uVar3 < iVar2 - 1U) {
          bVar36 = false;
          uVar12 = ((ulonglong)uVar9 & 0x7fffffff) << 1;
          uVar19 = uVar16;
          uStack_170 = uVar9;
        }
        else {
          trapWord(6,uVar16,0);
          uVar12 = (ulonglong)*(uint *)(iVar8 + 0x20) -
                   (longlong)(int)(*(uint *)(iVar8 + 0x20) / uVar9) * (longlong)(int)uVar9;
          uStack_170 = (uint)uVar12;
          if (uVar12 == 0) {
            uVar12 = uVar16;
            uStack_170 = uVar9;
          }
          bVar36 = true;
          uVar19 = uVar12;
        }
        if (uVar3 == 0) {
          iStack_150 = (**(code **)(*(int *)(param_1 + 4) + 0x20))(param_1,*puStack_16c,0,uVar12,0);
        }
        else {
          iStack_150 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                                 (param_1,*puStack_16c,
                                  (longlong)(int)(uVar3 - 1) * (longlong)(int)uVar9,uVar16 + uVar12)
          ;
          iStack_150 = *(int *)(iVar8 + 0xc) * 4 + iStack_150;
        }
        puVar4 = *(ushort **)(iVar8 + 0x4c);
        iStack_168 = 0;
        iVar20 = *(int *)(iVar1 + 0x70) + iStack_164;
        pcVar5 = *(code **)((int)puStack_16c + (*(int *)(param_1 + 0x19c) - iVar1) + -0x44);
        uVar16 = (ulonglong)*puStack_160;
        uVar14 = (uint)*puVar4;
        uVar10 = (uint)puVar4[1];
        uVar9 = (uint)puVar4[8];
        uVar11 = (uint)puVar4[0x10];
        uVar37 = (uint)puVar4[9];
        uVar13 = (uint)puVar4[2];
        if (0 < (int)uVar19) {
          do {
            puVar21 = (undefined4 *)(iStack_168 * 4 + iStack_150);
            psVar25 = (short *)*puVar21;
            if ((uVar3 != 0) || (psVar15 = psVar25, iStack_168 != 0)) {
              psVar15 = (short *)puVar21[-1];
            }
            if ((!bVar36) || (psVar22 = psVar25, iStack_168 != uStack_170 - 1)) {
              psVar22 = (short *)puVar21[1];
            }
            lVar24 = 0;
            uVar27 = 0;
            uVar38 = *(int *)(iVar8 + 0x1c) - 1;
            iVar35 = (int)*psVar15;
            iVar30 = (int)*psVar15;
            iVar34 = (int)*psVar22;
            iVar28 = (int)*psVar22;
            iVar26 = (int)*psVar25;
            iVar32 = (int)*psVar25;
            do {
              psVar15 = psVar15 + 0x40;
              psVar22 = psVar22 + 0x40;
              fn_827C1B50(psVar25,auStack_120,1);
              iVar31 = iVar30;
              iVar29 = iVar28;
              iVar33 = iVar32;
              if (uVar27 < uVar38) {
                iVar31 = (int)*psVar15;
                iVar33 = (int)psVar25[0x40];
                iVar29 = (int)*psVar22;
              }
              uVar6 = *(uint *)(iVar20 + 4);
              if ((uVar6 != 0) && (sStack_11e == 0)) {
                lVar17 = (longlong)(iVar26 - iVar33) * (longlong)(int)uVar14;
                lVar18 = lVar17 * 0x24;
                if ((int)lVar18 < 0) {
                  uVar12 = (ulonglong)uVar10 << 8;
                  uVar19 = (ulonglong)uVar10 * 0x80 + lVar17 * -0x24;
                  trapWord(6,uVar12,0);
                  iVar23 = (int)uVar19 / (int)uVar12;
                  trapWord(5,uVar12 & ~(((uVar19 & 0x7fffffff) << 1 | (uVar19 & 0xffffffff) >> 0x1f)
                                       - 1),0xffff);
                  if ((0 < (int)uVar6) && (iVar7 = 1 << (uVar6 & 0x3f), iVar7 <= iVar23)) {
                    iVar23 = iVar7 + -1;
                  }
                  iVar23 = -iVar23;
                }
                else {
                  uVar12 = (ulonglong)uVar10 << 8;
                  uVar19 = (ulonglong)uVar10 * 0x80 + lVar18;
                  trapWord(6,uVar12,0);
                  iVar23 = (int)uVar19 / (int)uVar12;
                  trapWord(5,uVar12 & ~(((uVar19 & 0x7fffffff) << 1 | (uVar19 & 0xffffffff) >> 0x1f)
                                       - 1),0xffff);
                  if ((0 < (int)uVar6) && (iVar7 = 1 << (uVar6 & 0x3f), iVar7 <= iVar23)) {
                    iVar23 = iVar7 + -1;
                  }
                }
                sStack_11e = (short)iVar23;
              }
              uVar6 = *(uint *)(iVar20 + 8);
              if ((uVar6 != 0) && (sStack_110 == 0)) {
                lVar17 = (longlong)(iVar30 - iVar28) * (longlong)(int)uVar14;
                lVar18 = lVar17 * 0x24;
                if ((int)lVar18 < 0) {
                  uVar12 = (ulonglong)uVar9 << 8;
                  uVar19 = (ulonglong)uVar9 * 0x80 + lVar17 * -0x24;
                  trapWord(6,uVar12,0);
                  iVar23 = (int)uVar19 / (int)uVar12;
                  trapWord(5,uVar12 & ~(((uVar19 & 0x7fffffff) << 1 | (uVar19 & 0xffffffff) >> 0x1f)
                                       - 1),0xffff);
                  if ((0 < (int)uVar6) && (iVar7 = 1 << (uVar6 & 0x3f), iVar7 <= iVar23)) {
                    iVar23 = iVar7 + -1;
                  }
                  iVar23 = -iVar23;
                }
                else {
                  uVar12 = (ulonglong)uVar9 << 8;
                  uVar19 = (ulonglong)uVar9 * 0x80 + lVar18;
                  trapWord(6,uVar12,0);
                  iVar23 = (int)uVar19 / (int)uVar12;
                  trapWord(5,uVar12 & ~(((uVar19 & 0x7fffffff) << 1 | (uVar19 & 0xffffffff) >> 0x1f)
                                       - 1),0xffff);
                  if ((0 < (int)uVar6) && (iVar7 = 1 << (uVar6 & 0x3f), iVar7 <= iVar23)) {
                    iVar23 = iVar7 + -1;
                  }
                }
                sStack_110 = (short)iVar23;
              }
              uVar6 = *(uint *)(iVar20 + 0xc);
              if ((uVar6 != 0) && (sStack_100 == 0)) {
                lVar17 = (longlong)(iVar28 + iVar32 * -2 + iVar30) * (longlong)(int)uVar14;
                lVar18 = lVar17 * 9;
                if ((int)lVar18 < 0) {
                  uVar12 = (ulonglong)uVar11 << 8;
                  uVar19 = (ulonglong)uVar11 * 0x80 + lVar17 * -9;
                  trapWord(6,uVar12,0);
                  iVar23 = (int)uVar19 / (int)uVar12;
                  trapWord(5,uVar12 & ~(((uVar19 & 0x7fffffff) << 1 | (uVar19 & 0xffffffff) >> 0x1f)
                                       - 1),0xffff);
                  if ((0 < (int)uVar6) && (iVar7 = 1 << (uVar6 & 0x3f), iVar7 <= iVar23)) {
                    iVar23 = iVar7 + -1;
                  }
                  iVar23 = -iVar23;
                }
                else {
                  uVar12 = (ulonglong)uVar11 << 8;
                  uVar19 = (ulonglong)uVar11 * 0x80 + lVar18;
                  trapWord(6,uVar12,0);
                  iVar23 = (int)uVar19 / (int)uVar12;
                  trapWord(5,uVar12 & ~(((uVar19 & 0x7fffffff) << 1 | (uVar19 & 0xffffffff) >> 0x1f)
                                       - 1),0xffff);
                  if ((0 < (int)uVar6) && (iVar7 = 1 << (uVar6 & 0x3f), iVar7 <= iVar23)) {
                    iVar23 = iVar7 + -1;
                  }
                }
                sStack_100 = (short)iVar23;
              }
              uVar6 = *(uint *)(iVar20 + 0x10);
              if ((uVar6 != 0) && (sStack_10e == 0)) {
                lVar17 = (longlong)(((iVar29 - iVar34) - iVar31) + iVar35) * (longlong)(int)uVar14;
                lVar18 = lVar17 * 5;
                if ((int)lVar18 < 0) {
                  uVar12 = (ulonglong)uVar37 << 8;
                  uVar19 = (ulonglong)uVar37 * 0x80 + lVar17 * -5;
                  trapWord(6,uVar12,0);
                  iVar35 = (int)uVar19 / (int)uVar12;
                  trapWord(5,uVar12 & ~(((uVar19 & 0x7fffffff) << 1 | (uVar19 & 0xffffffff) >> 0x1f)
                                       - 1),0xffff);
                  if ((0 < (int)uVar6) && (iVar34 = 1 << (uVar6 & 0x3f), iVar34 <= iVar35)) {
                    iVar35 = iVar34 + -1;
                  }
                  iVar35 = -iVar35;
                }
                else {
                  uVar12 = (ulonglong)uVar37 << 8;
                  uVar19 = (ulonglong)uVar37 * 0x80 + lVar18;
                  trapWord(6,uVar12,0);
                  iVar35 = (int)uVar19 / (int)uVar12;
                  trapWord(5,uVar12 & ~(((uVar19 & 0x7fffffff) << 1 | (uVar19 & 0xffffffff) >> 0x1f)
                                       - 1),0xffff);
                  if ((0 < (int)uVar6) && (iVar34 = 1 << (uVar6 & 0x3f), iVar34 <= iVar35)) {
                    iVar35 = iVar34 + -1;
                  }
                }
                sStack_10e = (short)iVar35;
              }
              uVar6 = *(uint *)(iVar20 + 0x14);
              if ((uVar6 != 0) && (sStack_11c == 0)) {
                lVar17 = (longlong)(iVar33 + iVar32 * -2 + iVar26) * (longlong)(int)uVar14;
                lVar18 = lVar17 * 9;
                if ((int)lVar18 < 0) {
                  uVar12 = (ulonglong)uVar13 << 8;
                  uVar19 = (ulonglong)uVar13 * 0x80 + lVar17 * -9;
                  trapWord(6,uVar12,0);
                  iVar35 = (int)uVar19 / (int)uVar12;
                  trapWord(5,uVar12 & ~(((uVar19 & 0x7fffffff) << 1 | (uVar19 & 0xffffffff) >> 0x1f)
                                       - 1),0xffff);
                  if ((0 < (int)uVar6) && (iVar34 = 1 << (uVar6 & 0x3f), iVar34 <= iVar35)) {
                    iVar35 = iVar34 + -1;
                  }
                  iVar35 = -iVar35;
                }
                else {
                  uVar12 = (ulonglong)uVar13 << 8;
                  uVar19 = (ulonglong)uVar13 * 0x80 + lVar18;
                  trapWord(6,uVar12,0);
                  iVar35 = (int)uVar19 / (int)uVar12;
                  trapWord(5,uVar12 & ~(((uVar19 & 0x7fffffff) << 1 | (uVar19 & 0xffffffff) >> 0x1f)
                                       - 1),0xffff);
                  if ((0 < (int)uVar6) && (iVar34 = 1 << (uVar6 & 0x3f), iVar34 <= iVar35)) {
                    iVar35 = iVar34 + -1;
                  }
                }
                sStack_11c = (short)iVar35;
              }
              (*pcVar5)(param_1,iVar8,auStack_120,uVar16,lVar24);
              uVar27 = uVar27 + 1;
              psVar25 = psVar25 + 0x40;
              lVar24 = (ulonglong)*(uint *)(iVar8 + 0x24) + lVar24;
              iVar35 = iVar30;
              iVar30 = iVar31;
              iVar34 = iVar28;
              iVar28 = iVar29;
              iVar26 = iVar32;
              iVar32 = iVar33;
            } while (uVar27 <= uVar38);
            iStack_168 = iStack_168 + 1;
            uVar16 = ((ulonglong)*(uint *)(iVar8 + 0x24) & 0x3fffffff) * 4 + uVar16;
          } while (iStack_168 < (int)uStack_170);
        }
      }
      iVar8 = iVar8 + 0x54;
      iStack_140 = iStack_140 + 1;
      iStack_164 = iStack_164 + 0x18;
      puStack_16c = puStack_16c + 1;
      puStack_160 = puStack_160 + 1;
    } while (iStack_140 < *(int *)(param_1 + 0x24));
  }
  uVar16 = (ulonglong)*(uint *)(param_1 + 0x88) + 1;
  *(int *)(param_1 + 0x88) = (int)uVar16;
  return 4 - (ulonglong)(uVar16 < *(uint *)(param_1 + 0x11c));
}

