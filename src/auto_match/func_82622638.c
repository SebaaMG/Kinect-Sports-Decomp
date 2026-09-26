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
#define NAN(x) ((x) != (x))
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


undefined8 fn_82622638(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar5;
  uint uVar6;
  ulonglong uVar4;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar12;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  
  fVar1 = param_2[2];
  uVar13 = (ulonglong)((uint)(int)*param_2 >> 0x1f) - 1 & (ulonglong)(uint)(int)*param_2;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    fVar1 = lbl_821CC160;
  }
  if (0xbf < (int)uVar13) {
    uVar13 = 0xc0;
  }
  uVar14 = (ulonglong)((uint)(int)param_2[1] >> 0x1f) - 1 & (ulonglong)(uint)(int)param_2[1];
  if (0x5f < (int)uVar14) {
    uVar14 = 0x60;
  }
  uVar15 = (ulonglong)((uint)(int)(*param_3 + lbl_8218E8E8) >> 0x1f) - 1 &
           (ulonglong)(uint)(int)(*param_3 + lbl_8218E8E8);
  if (0xbf < (int)uVar15) {
    uVar15 = 0xc0;
  }
  uVar16 = (ulonglong)((uint)(int)(param_3[1] + lbl_8218E8E8) >> 0x1f) - 1 &
           (ulonglong)(uint)(int)(param_3[1] + lbl_8218E8E8);
  if (0x5f < (int)uVar16) {
    uVar16 = 0x60;
  }
  uVar19 = (longlong)((int)uVar13 >> 3) + (ulonglong)((int)uVar13 < 0 && (uVar13 & 7) != 0);
  uVar8 = (longlong)((int)uVar14 >> 3) + (ulonglong)((int)uVar14 < 0 && (uVar14 & 7) != 0);
  uVar17 = ((int)uVar15 >> 3) + (uint)((int)uVar15 < 0 && (uVar15 & 7) != 0);
  uVar17 = -((int)uVar17 >> 0x1f) - 1U & uVar17;
  if (0x16 < (int)uVar17) {
    uVar17 = 0x17;
  }
  uVar5 = ((int)uVar16 >> 3) + (uint)((int)uVar16 < 0 && (uVar16 & 7) != 0);
  uVar5 = -((int)uVar5 >> 0x1f) - 1U & uVar5;
  if (10 < (int)uVar5) {
    uVar5 = 0xb;
  }
  if ((int)uVar8 <= (int)uVar5) {
    lVar21 = uVar16 + (uVar8 & 0x1fffffff) * -8;
    lVar20 = (uVar8 * 0x18 + uVar19) * 0x108;
    do {
      if ((int)uVar19 <= (int)uVar17) {
        lVar22 = (ulonglong)*(uint *)(param_1 + 0xd0) + lVar20;
        lVar2 = uVar15 + (uVar19 & 0x1fffffff) * -8;
        uVar18 = uVar19;
        do {
          if ((uint)fVar1 <= (uint)*(float *)lVar22) {
            return 1;
          }
          if ((uint)fVar1 <= (uint)((float *)lVar22)[1]) {
            uVar9 = (uVar13 - uVar15) + lVar2;
            uVar9 = ((uVar9 & 0xffffffff) >> 0x1f) - 1 & uVar9;
            if (7 < (int)uVar9) {
              uVar9 = 8;
            }
            uVar12 = -((int)(uint)lVar2 >> 0x1f) - 1U & (uint)lVar2;
            if (7 < (int)uVar12) {
              uVar12 = 8;
            }
            uVar10 = (uVar14 - uVar16) + lVar21;
            uVar10 = ((uVar10 & 0xffffffff) >> 0x1f) - 1 & uVar10;
            if (7 < (int)uVar10) {
              uVar10 = 8;
            }
            uVar6 = -((int)(uint)lVar21 >> 0x1f) - 1U & (uint)lVar21;
            if (7 < (int)uVar6) {
              uVar6 = 8;
            }
            if ((int)uVar10 < (int)uVar6) {
              lVar3 = (uVar10 & 0x7ffffff) * 0x20 + lVar22 + 8;
              do {
                iVar7 = (int)uVar9;
                lVar11 = lVar3;
                uVar4 = uVar9;
                while (iVar7 < (int)uVar12) {
                  if ((uint)fVar1 <= (uint)*(float *)lVar11) {
                    return 1;
                  }
                  uVar4 = uVar4 + 1;
                  lVar11 = lVar11 + 4;
                  iVar7 = (int)uVar4;
                }
                uVar10 = uVar10 + 1;
                lVar3 = lVar3 + 0x20;
              } while ((int)uVar10 < (int)uVar6);
            }
          }
          uVar18 = uVar18 + 1;
          lVar22 = lVar22 + 0x108;
          lVar2 = lVar2 + -8;
        } while ((int)uVar18 <= (int)uVar17);
      }
      uVar8 = uVar8 + 1;
      lVar20 = lVar20 + 0x18c0;
      lVar21 = lVar21 + -8;
    } while ((int)uVar8 <= (int)uVar5);
  }
  return 0;
}

