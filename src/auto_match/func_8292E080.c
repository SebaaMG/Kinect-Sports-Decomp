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
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_8202EE68;
extern unsigned int lbl_8202EE6C;
extern unsigned int lbl_8202EE70;
extern unsigned int lbl_8202EE74;
extern unsigned int lbl_8202EE78;
extern unsigned int lbl_8202EE7C;
extern unsigned int lbl_8202EE80;
extern unsigned int lbl_8202EE84;


/* WARNING: Removing unreachable block (ram,0x8292e224) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8292E080(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  uint uVar16;
  ushort *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float *pfVar22;
  
  iVar15 = fn_82F6A548();
  fVar14 = lbl_8202EE84;
  fVar13 = lbl_8202EE80;
  fVar12 = lbl_8202EE7C;
  fVar11 = lbl_8202EE78;
  fVar10 = lbl_8202EE74;
  fVar9 = lbl_8202EE70;
  fVar8 = lbl_8202EE6C;
  fVar7 = lbl_8202EE68;
  fVar1 = lbl_82005CCC;
  fVar6 = lbl_82002C5C;
  if ((*(int *)(iVar15 + 0xa0) != 0) && (*(int *)(iVar15 + 0xa4) != 0)) {
    uVar16 = *(uint *)(iVar15 + 0x84);
    pfVar22 = *(float **)(iVar15 + 0x80);
    uVar5 = *(uint *)(iVar15 + 4) & 0xfffffeff;
    iVar18 = *(int *)(iVar15 + 0x94) * *(int *)(iVar15 + 100) +
             *(int *)(iVar15 + 0x88) * *(int *)(iVar15 + 0x60) + uVar16 * 2 +
             *(int *)(iVar15 + 0x20);
    if (0x1828004a < (int)uVar5) {
      if ((int)uVar5 < 0x1828004d) {
        if (uVar16 < *(uint *)(iVar15 + 0x8c)) {
          puVar17 = (ushort *)(iVar18 + -2);
          pfVar22 = pfVar22 + -3;
          do {
            uVar16 = uVar16 + 2;
            puVar17[1] = (ushort)((int)(pfVar22[3] * fVar1 + fVar6) <<
                                 (*(uint *)(iVar15 + 0xac) & 0x3f)) |
                         (ushort)((int)(pfVar22[4] * fVar1 + fVar6) <<
                                 (*(uint *)(iVar15 + 0xa8) & 0x3f));
            pfVar4 = pfVar22 + 5;
            pfVar22 = pfVar22 + 8;
            puVar17 = puVar17 + 2;
            *puVar17 = (ushort)((int)(*pfVar4 * fVar1 + fVar6) << (*(uint *)(iVar15 + 0xac) & 0x3f))
                       | (ushort)((int)(*pfVar22 * fVar1 + fVar6) <<
                                 (*(uint *)(iVar15 + 0xa8) & 0x3f));
          } while (uVar16 < *(uint *)(iVar15 + 0x8c));
        }
      }
      else if (((0x1a20004a < (int)uVar5) && ((int)uVar5 < 0x1a20004d)) &&
              (uVar16 < *(uint *)(iVar15 + 0x8c))) {
        puVar17 = (ushort *)(iVar18 + -2);
        do {
          fVar1 = pfVar22[1];
          fVar2 = pfVar22[2];
          fVar3 = *pfVar22;
          iVar18 = (int)(pfVar22[4] * fVar7 + pfVar22[6] * fVar8 + pfVar22[5] * fVar9 + fVar6) +
                   0x10;
          iVar19 = (int)(fVar1 * fVar9 + fVar3 * fVar7 + fVar2 * fVar8 + fVar6) + 0x10;
          iVar21 = (int)((fVar3 * fVar10 - (fVar2 * fVar13 + fVar1 * fVar14)) + fVar6) + 0x80;
          iVar20 = (int)(-(fVar3 * fVar12 - (fVar2 * fVar10 - fVar1 * fVar11)) + fVar6) + 0x80;
          if (0xff < iVar19) {
            iVar19 = 0xff;
          }
          if (iVar18 < 0) {
            iVar18 = 0;
          }
          else if (0xff < iVar18) {
            iVar18 = 0xff;
          }
          if (iVar20 < 0) {
            iVar20 = 0;
          }
          else if (0xff < iVar20) {
            iVar20 = 0xff;
          }
          if (iVar21 < 0) {
            iVar21 = 0;
          }
          else if (0xff < iVar21) {
            iVar21 = 0xff;
          }
          uVar16 = uVar16 + 2;
          pfVar22 = pfVar22 + 8;
          puVar17[1] = (ushort)(iVar19 << (*(uint *)(iVar15 + 0xa8) & 0x3f)) |
                       (ushort)(iVar20 << (*(uint *)(iVar15 + 0xac) & 0x3f));
          puVar17 = puVar17 + 2;
          *puVar17 = (ushort)(iVar18 << (*(uint *)(iVar15 + 0xa8) & 0x3f)) |
                     (ushort)(iVar21 << (*(uint *)(iVar15 + 0xac) & 0x3f));
        } while (uVar16 < *(uint *)(iVar15 + 0x8c));
      }
    }
    *(undefined4 *)(iVar15 + 0xa0) = 0;
  }
  fn_82F6A594(0);
  return;
}

